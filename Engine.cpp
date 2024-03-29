#include "Engine.h"
#include "Menu.h"

#pragma warning( disable : 6066 )

#define GOBJECT_PATTERN "\x48\x8D\x05\x00\x00\x00\x00\xC7\x05\x00\x00\x00\x00\x00\x00\x00\x00\x48\x89\x05\x00\x00\x00\x00\x48\x8D\x05\x00\x00\x00\x00\x48\x83\xC4"
#define GOBJECT_MASKING "xxx????xx????????xxx????xxx????xxx"

#define GNAMES_PATTERN "\x48\x8D\x05\x00\x00\x00\x00\x48\x83\xC4\x28\xC3\xCC"
#define GNAMES_MASKING "xxx????xxxxxx" //dx

#define GWORLD_PATTERN "\x48\x8B\x05\x00\x00\x00\x00\x48\x8D\x95\x00\x00\x00\x00\x48\x8B\x48"
#define GWORLD_MASKING "xxx????xxx????xxx" //fx

#define MOVE_PATTERN "\x48\x8B\xC4\x48\x89\x58\x08\x48\x89\x68\x10\x48\x89\x70\x18\x48\x89\x78\x20\x41\x56\x48\x83\xEC\x40\x49\x8B\xD9\x49\x8B\xE8"
#define MOVE_MASKING "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"

void InputKey(CG::APlayerController* player, FKey* Key, CG::EInputEvent EventType, float AmountDepressed, bool bGamepad) {

	Engine->InputKeyPtr(player, Key, EventType, AmountDepressed, bGamepad);
}

void ProcessEvent(CG::UObject* pObject, CG::UFunction* Function, void* pParams)
{
	if (Function->GetFullName().find("CellCustomizationCameraActor") != std::string::npos)
		return Engine->ProcessEventPtr(pObject, Function, pParams);

	if (Function->GetFullName().find("Custom") != std::string::npos)
		printf_s("%s\n", Function->GetFullName().c_str());

	return Engine->ProcessEventPtr(pObject, Function, pParams);
}

void PostRender(CG::AHUD* object)
{
	if (GetAsyncKeyState(VK_F5))
	{
		DirectX->unhook();
		Engine->unhook();
		Menu->restore();
	}


	return Engine->PostRenderPtr(object);
} 

void CEngine::initialize()
{
	auto handle = (DWORD64)GetModuleHandle(NULL);

	auto objects = handle + 0x5A6D730;
	auto gnames = handle + 0x5BE49C0;
	auto gworld = handle + 0x5ABD7C0;

	if (objects)
		CG::UObject::GObjects = (CG::TUObjectArray*)(objects);
	else
		printf_s("Failed to find GObjects.\n");

	if (gnames)
		CG::FName::GNames = (CG::FNamePool*)(gnames);
	else
		printf_s("Failed to find GNames.\n");

	
	if (gworld)
		CG::UWorld::GWorld = (CG::UWorld**)(gworld); 
	else
		printf_s("Failed to find GWorld.\n");


	CG::URBGameUserSettings* Settings = CG::UObject::FindObject<CG::URBGameUserSettings>("RBGameUserSettings Transient.RBGameUserSettings_2147482554");

	if (Settings->GetCurrentDirect3DVersion() == CG::EGraphicsRHI::DefaultGraphicsRHI_DX11)
	{
		DWORD64** ProcessEventAddress = *(DWORD64***)(this->get_viewport()) + 69;
		this->ProcessEventPtr = (CEngine::ProcessEventType)(*ProcessEventAddress);

		CG::AHUD* HudObject = this->get_viewport()->GameInstance->LocalPlayers[0]->PlayerController->GetHUD();
		DWORD64** PostRenderAddress = *(DWORD64***)(HudObject)+221; 
		
		this->PostRenderPtr = (CEngine::PostRenderType)(*PostRenderAddress);

		this->ARBPlayer = CG::UObject::FindClass("Class OPP.RBPlayer");

		if (this->ARBPlayer != nullptr)
			printf_s("CEngine::ARBPlayer class has been found.\n");
	}
	else {
		auto game = FindWindowA(NULL, "The Outlast Trials  ");

		if (game)
			ShowWindow(game, SW_HIDE);

		MessageBoxA(NULL, "Please make sure to run the game in DirectX11 (DX11) mode at the video settings before loading the cheat.", "Error", MB_ICONERROR | MB_OK);
		exit(0);
	}
	
}

void CEngine::hook()
{
	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(PVOID&)this->PostRenderPtr, PostRender);
	DetourAttach(&(PVOID&)this->ProcessEventPtr, ProcessEvent);
	DetourTransactionCommit();
}

void CEngine::unhook()
{
	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourDetach(&(PVOID&)this->PostRenderPtr, PostRender);
	DetourDetach(&(PVOID&)this->ProcessEventPtr, ProcessEvent);
	DetourTransactionCommit();
}

DWORD64 CEngine::instruction_fix(const char* pattern, const char* mask, int one, int two)
{
	CUtilities* Utilities = new CUtilities();

	auto returnValue = Utilities->FindPattern((PBYTE)pattern, mask);

	if (returnValue)
	{
		printf_s("Pattern has been found at 0x%p.\n", returnValue);
		auto offset = *(DWORD*)(returnValue + one);
		returnValue = (returnValue + offset) + two;
	}
	else
		printf_s("Failed to find pattern.\n");

	return returnValue;
}

CG::UGameViewportClient* CEngine::get_viewport() //does change on update
{
	if(this->Viewport == nullptr)
		this->Viewport = CG::UObject::FindObject<CG::UGameViewportClient>("GameViewportClient Transient.OPPEngine_2147482561.GameViewportClient_2147482514");

	return this->Viewport;
}

CG::UWorld * CEngine::get_world() {
	return this->get_viewport()->World;
}

CG::TArray<CG::ULevel*> CEngine::get_level(){
	return this->get_world()->Levels;
}

CG::ARBPlayer* CEngine::get_localplayer() {
	auto viewport = this->get_viewport();
		//GameInstance->LocalPlayers[0]->PlayerController->Pawn;
	if (viewport == nullptr)
		return nullptr;

	if (viewport->GameInstance == nullptr)
		return nullptr;

	if (viewport->GameInstance->LocalPlayers[0] == nullptr)
		return nullptr;

	if (viewport->GameInstance->LocalPlayers[0]->PlayerController == nullptr)
		return nullptr;

	if (viewport->GameInstance->LocalPlayers[0]->PlayerController->Pawn == nullptr)
		return nullptr;

	auto pawn = viewport->GameInstance->LocalPlayers[0]->PlayerController->Pawn;

	if (pawn->IsA(this->ARBPlayer))
		return reinterpret_cast<CG::ARBPlayer*>(pawn);
	else
		return nullptr;
}

bool CEngine::is_spectator()
{
	auto localplayer = this->get_localplayer();

	if (localplayer == nullptr)
		return false;

	if (localplayer->RBController == nullptr)
		return false;

	if (localplayer->RBController->bSpectator)
		return true;
	else
		return false;
}

CG::ARBController* CEngine::get_controller()
{
	auto localplayer = this->get_localplayer();

	if (localplayer == nullptr)
		return nullptr;

	if (localplayer->RBController == nullptr)
		return nullptr;

	return localplayer->RBController;
}

bool CEngine::world_to_screen(CG::FVector origin, CG::FVector2D* Output)
{
	return Engine->get_controller()->ProjectWorldLocationToScreen(origin, Output, false);
}

CG::FVector CEngine::get_position(CG::AActor * actor)
{
	return actor->K2_GetActorLocation();
}

bool CEngine::traceray(CG::FVector start, CG::FVector end, CG::FHitResult * hitresult)
{
	return CG::UKismetSystemLibrary::LineTraceSingle(Engine->get_world(), start, end, CG::ETraceTypeQuery::TraceTypeQuery1, false, CG::TArray<CG::AActor*>(), CG::EDrawDebugTrace::None, hitresult, true, { 0, 0, 0 ,0 }, { 0, 0, 0, 0 }, 0);
}

CG::FVector CEngine::eye_position() {
	return reinterpret_cast<CG::ARBPlayer*>(this->get_localplayer())->EyeLocation;
}