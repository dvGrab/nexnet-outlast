#include "Misc.h"
#include "Menu.h"
#include "Engine.h"

CMisc::CMisc() {
	this->Feature["misc_wrestling"] = true;
	this->Feature["misc_nofog"] = true;
	this->Feature["misc_nightvision"] = false;
	this->Feature["misc_speedhack"] = false;
}

void CMisc::initialize()
{
	if (this->ArmwrestlingTable == nullptr)
		this->ArmwrestlingTable = CG::UObject::FindClass("Class OPP.RBArmWreslingTable");

	if (this->Fogbase == nullptr)
		this->Fogbase = CG::UObject::FindClass("Class Engine.RBVolumetricFogBase");

	if (this->NightvisionComponent == nullptr)
		this->NightvisionComponent = CG::UObject::FindClass("Class OPP.RBNVComponent");
} 

void CMisc::render(CG::AActor* actor) {

	this->initialize();

	if (actor->IsA(this->ArmwrestlingTable)){
		this->armwrestling(reinterpret_cast<CG::ARBArmWreslingTable*>(actor));
	}

	if (actor->IsA(this->Fogbase))
	{
		auto fog = (CG::ARBVolumetricFogBase*)actor;

		if (actor != nullptr)
			fog->SetActorHiddenInGame(this->Feature["misc_nofog"]);
	}
}

void CMisc::armwrestling(CG::ARBArmWreslingTable* actor)
{
	if (!this->Feature["misc_wrestling"])
		return;

	this->release_left();

	if (this->canReleaseLeft)
		return;

	auto localplayer = Engine->get_localplayer();

	if (actor->Player2 == localplayer || actor->Player1 == localplayer)
	{
		CG::URBArmWreslingPanelComponent* panel = nullptr;
		float cursor = 0.0f;

		printf_s("Wrestling\n");

		if (actor->Player1 == localplayer)
		{
			panel = actor->Player1Panel;
			cursor = actor->Player1Panel->GetCursorPosition();
		}
		else
		{
			panel = actor->Player2Panel;
			cursor = actor->Player2Panel->GetCursorPosition();
		}

		if (panel)
		{
			auto zoneoffset = panel->SuccessZoneOffset;
			auto size = panel->SuccessZoneSize;
			auto max = panel->SuccessZoneSizeMax;
			auto calulcation = 1.0f - zoneoffset;

			if (cursor < calulcation && cursor >(calulcation - 0.030)) {
				auto hwnd = FindWindowA(NULL, "The Outlast Trials  ");
				PostMessage(hwnd, WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(0, 0));
				this->canReleaseLeft = true;
			}
		}
	}
}

void CMisc::release_left()
{
	if (this->canReleaseLeft)
		this->releaseLeftCounter++;

	if (this->releaseLeftCounter > 100 && this->canReleaseLeft == true) {
		auto hwnd = FindWindowA(NULL, "The Outlast Trials  ");
		PostMessage(hwnd, WM_LBUTTONUP, MK_LBUTTON, MAKELPARAM(0, 0));
		this->canReleaseLeft = false;
		this->releaseLeftCounter = 0;
	}
}


void CMisc::nightvision()
{
	auto localplayer = (CG::ARBPlayer*)Engine->get_localplayer();

	if (localplayer == nullptr)
		return;

	if (localplayer->NVComponent == nullptr)
		return;

	if (localplayer->NVComponent->IsA(this->NightvisionComponent))
	{
		if (this->Oldstates[0] == 0.0f)
		{
			this->Oldstates[0] = localplayer->NVComponent->Radius;
			this->Oldstates[1] = localplayer->NVComponent->PoweredOnIntensity;
			this->Oldstates[2] = localplayer->NVComponent->NoBatteryIntensity;
			this->Oldstates[3] = localplayer->NVComponent->PoweredOnAttenuationRadius;
			this->Oldstates[4] = localplayer->NVComponent->NoBatteryAttenuationRadius;
			this->Oldstates[5] = localplayer->NVComponent->PoweredOnInnerConeAngle;
			this->Oldstates[6] = localplayer->NVComponent->NoBatteryInnerConeAngle;
			this->Oldstates[7] = localplayer->NVComponent->PoweredOnOuterConeAngle;
			this->Oldstates[8] = localplayer->NVComponent->NoBatteryOuterConeAngle;
		}
		 
		if (this->Feature["misc_nightvision"])
		{
			localplayer->NVComponent->Radius = 5000.0f;
			localplayer->NVComponent->PoweredOnIntensity = 1.0f;
			localplayer->NVComponent->NoBatteryIntensity = 3.0f;
			localplayer->NVComponent->PoweredOnAttenuationRadius = 5000.0f; 
			localplayer->NVComponent->NoBatteryAttenuationRadius = 5000.0f;
			localplayer->NVComponent->PoweredOnInnerConeAngle = 1000.0f;
			localplayer->NVComponent->NoBatteryInnerConeAngle = 1000.0f;
			localplayer->NVComponent->PoweredOnOuterConeAngle = 1000.0f;
			localplayer->NVComponent->NoBatteryOuterConeAngle = 1000.0f;
		}
		else
		{
			localplayer->NVComponent->Radius = this->Oldstates[0];
			localplayer->NVComponent->PoweredOnIntensity = this->Oldstates[1];
			localplayer->NVComponent->NoBatteryIntensity = this->Oldstates[2];
			localplayer->NVComponent->PoweredOnAttenuationRadius = this->Oldstates[3];
			localplayer->NVComponent->NoBatteryAttenuationRadius = this->Oldstates[4];
			localplayer->NVComponent->PoweredOnInnerConeAngle = this->Oldstates[5];
			localplayer->NVComponent->NoBatteryInnerConeAngle = this->Oldstates[6];
			localplayer->NVComponent->PoweredOnOuterConeAngle = this->Oldstates[7];
			localplayer->NVComponent->NoBatteryOuterConeAngle = this->Oldstates[8];
		}
	}

}

void CMisc::speedhack()
{
	auto localplayer = Engine->get_localplayer();

	if (localplayer != nullptr) {
		if (Misc->Feature["misc_speedhack"])
		{
			Engine->get_localplayer()->SetReplicateMovement(true);

			if (GetAsyncKeyState(VK_LSHIFT))
				Engine->get_controller()->Character->CustomTimeDilation = 3.0f;
			else
				Engine->get_controller()->Character->CustomTimeDilation = 1.0f;
		}
	}
}

