#pragma once

#include "Main.h"

struct FKey
{
public:
	class CG::FName KeyName;
	char ScoobyDooMystery[0x10]; //mutable class TSharedPtr<struct FKeyDetails> KeyDetails;
};

void InputKey(CG::APlayerController* player, FKey* Key, CG::EInputEvent EventType, float AmountDepressed, bool bGamepad);

class CEngine {
private:
	CG::UGameViewportClient* Viewport = nullptr;
	CG::FVector EyePosition;
	CG::UClass* ARBPlayer = nullptr;

public:
	CG::APlayerController* InputPlayerController = nullptr;
	FKey* leftDown = nullptr;
	FKey* leftUp = nullptr;

	typedef void(__thiscall* PostRenderType)(CG::AHUD* pHud);
	PostRenderType PostRenderPtr = nullptr;

	typedef void(__fastcall* ProcessEventType)(CG::UObject* pObject, CG::UFunction* pFunction, void* pParams);
	ProcessEventType ProcessEventPtr = nullptr;

	typedef char(__fastcall *InputKeyType)(CG::APlayerController* player, FKey* Key, CG::EInputEvent EventType, float AmountDepressed, bool bGamepad);
	InputKeyType InputKeyPtr = nullptr;

	std::unordered_map<std::string, DWORD64> Pointers;

	void initialize();
	DWORD64 instruction_fix(const char* pattern, const char* mask, int one, int two);
	CG::UGameViewportClient* get_viewport();

	void hook();
	void unhook();

	CG::UWorld * get_world();
	CG::ARBPlayer* get_localplayer();
	bool is_spectator();
	CG::TArray<CG::ULevel*> get_level();
	CG::ARBController* get_controller();
	bool world_to_screen(CG::FVector origin, CG::FVector2D* Output);
	CG::FVector get_position(CG::AActor* actor);
	bool traceray(CG::FVector start, CG::FVector end, CG::FHitResult* hitresult);

	CG::FVector eye_position();
};

extern CEngine* Engine;