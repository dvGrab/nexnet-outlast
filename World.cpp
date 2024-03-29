#include "World.h"
#include <vector>
#include <string>
#include <chrono>

using namespace CG;

CWorld::CWorld()
{
	this->PickupTypes[0] = "Nothing";
	this->PickupTypes[1] = "Fists";
	this->PickupTypes[2] = "Health Gain";
	this->PickupTypes[3] = "Health Boost";
	this->PickupTypes[4] = "Health Gain";
	this->PickupTypes[5] = "Revive Syringe";
	this->PickupTypes[6] = "Revive Tablets";
	this->PickupTypes[7] = "Stamina";
	this->PickupTypes[8] = "Stamina Boost";
	this->PickupTypes[9] = "Small Battery";
	this->PickupTypes[10] = "Battery";
	this->PickupTypes[11] = "Super Battery";
	this->PickupTypes[12] = "Lockpick";
	this->PickupTypes[13] = "Masterkey";
	this->PickupTypes[14] = "Skillcharge";
	this->PickupTypes[15] = "Bottle";
	this->PickupTypes[16] = "Antidote";
	this->PickupTypes[17] = "Murkoff Point";
	this->PickupTypes[18] = "Murkoff Dollar";
	this->PickupTypes[19] = "Brick";
	this->PickupTypes[20] = "Proximity Detector";
	this->PickupTypes[21] = "Document";
	this->PickupTypes[22] = "Quest";
	this->PickupTypes[23] = "Skill Controller";
	this->PickupTypes[24] = "Skill Throwable";
	this->PickupTypes[25] = "Skill Deployable";
	this->PickupTypes[26] = "Objective Throwable";
	this->PickupTypes[27] = "Gore Throwable";
	this->PickupTypes[28] = "Axe";
	this->PickupTypes[29] = "Baseballbat";
	this->PickupTypes[30] = "Knife";
	this->PickupTypes[31] = "Machete";
	this->PickupTypes[32] = "Pipe";
	this->PickupTypes[33] = "Cattle";
	this->PickupTypes[34] = "Double Claw";
	this->PickupTypes[35] = "Sledgehammer";
	this->PickupTypes[36] = "Spiked Mace";
	this->PickupTypes[37] = "Woodplank";
	this->PickupTypes[38] = "Shotgun";
	this->PickupTypes[39] = "Molotov"; 

	this->PickupCategory[0] = { 255, 255, 255, 255 }; //Fist
	this->PickupCategory[1] = { 250, 50, 57, 255 }; //Throwable
	this->PickupCategory[2] = { 80, 250, 50, 255 }; //Health
	this->PickupCategory[3] = { 203, 56, 252, 255 }; //Utility
	this->PickupCategory[4] = { 203, 56, 252, 255 }; //Skill
	this->PickupCategory[5] = { 252, 216, 56, 255 }; //Currency
	this->PickupCategory[6] = { 252, 164, 56, 255 }; //Collecible
	this->PickupCategory[7] = { 252, 56, 220, 255 }; //QuestItem
	this->PickupCategory[8] = { 255, 255, 255, 255 }; //None

	this->LargePickupTypes[0] = "Nothing";
	this->LargePickupTypes[1] = "Default";
	this->LargePickupTypes[2] = "Large Box";
	this->LargePickupTypes[3] = "Large Box";
	this->LargePickupTypes[4] = "Diaporama";
	this->LargePickupTypes[5] = "Bucket";
	this->LargePickupTypes[6] = "Teddybear";
	this->LargePickupTypes[7] = "Child Mannequin";
	this->LargePickupTypes[8] = "Hot Potato";
	this->LargePickupTypes[9] = "Cocaine";
	this->LargePickupTypes[10] = "Acid Bottle";
	this->LargePickupTypes[11] = "Bomb";
	this->LargePickupTypes[12] = "Gas Canister";
	this->LargePickupTypes[13] = "Filebox";

	this->Feature["world"] = true;
	this->Feature["world_throwable"] = true;
	this->Feature["world_quest"] = true;
	this->Feature["world_health"] = true;
	this->Feature["world_currency"] = true;
	this->Feature["world_collectible"] = true;
	this->Feature["world_utility"] = true;
	this->Feature["world_distance"] = true;
	this->Feature["world_poster"] = false;
	this->Feature["world_trial"] = true;
	this->Feature["world_generators"] = false;
}

void CWorld::initialize()
{
	this->initialized = true;

	if (this->UPickup == nullptr)
		this->UPickup = UObject::FindClass("Class OPP.RBPickup");

	if (this->ULargePickup == nullptr)
		this->ULargePickup = UObject::FindClass("Class OPP.RBLargePickup");

	if (this->Generator == nullptr)
		this->Generator = UObject::FindClass("Class OPP.RBGeneratorMultiObjectiveActor"); 
}

void CWorld::render(CG::AActor* actor)
{
	if (!this->Feature["world"])
		return;

	this->initialize();

	auto player = Engine->get_localplayer();

	if (player) {
		if (CG::URBBlueprintLibrary::IsStageStarted())
		{
			if(this->reset_stage == false)
			{
				this->reset_stage = true;
				this->Propaganda = UObject::FindObject<CG::UClass>("BlueprintGeneratedClass Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C");
				this->Gascan = UObject::FindObject<CG::UClass>("BlueprintGeneratedClass GasCanister_BP.GasCanister_BP_C");
			}
		}
		else
			this->reset_stage = false;
	} 

	if (actor->IsA(this->UPickup))
		this->pickups(reinterpret_cast<CG::ARBPickup*>(actor));

	if (actor->IsA(this->ULargePickup))
		this->large_pickups(reinterpret_cast<CG::ARBLargePickup*>(actor));

	if (this->Propaganda != nullptr)
		if (actor->IsA(this->Propaganda))
			this->poster(reinterpret_cast<CG::ABase_PropagandaPoster_BP_C*>(actor));

	if (this->Generator != nullptr)
		if (actor->IsA(this->Generator))
			this->generator(reinterpret_cast<CG::ARBGeneratorMultiObjectiveActor*>(actor));

}

void CWorld::poster(CG::ABase_PropagandaPoster_BP_C* poster)
{
	if (!this->Feature["world_poster"])
		return;

	if (poster->HasInteracted)
		return;

	if (!poster->PosterMesh->IsVisible())
		return;

	CG::FVector2D Output;

	auto origin = poster->K2_GetActorLocation() + CG::FVector(0, 0, 100);

	if (Engine->world_to_screen(origin, &Output))
		DirectX->text(Output, { 255, 255, 0, 255 }, true, DirectX->Standart, "Poster");
}

void CWorld::pickups(CG::ARBPickup* pickup) {

	if (pickup->PawnOwner.CurrentValue)
		return;

	auto origin = Engine->get_position(Engine->get_localplayer());
	auto position = Engine->get_position(pickup);
	auto distance = Utilities->Distance(position, origin);

	if (distance > drawDistance)
		return;

	FVector2D Output;

	auto category = pickup->ItemDefinition.ItemCategory;

	if (category == CG::EItemCategory::Health && !this->Feature["world_health"])
		return;

	if (category == CG::EItemCategory::Throwable && !this->Feature["world_throwable"])
		return;

	if (category == CG::EItemCategory::Utility && !this->Feature["world_utility"])
		return;

	if (category == CG::EItemCategory::Collectible && !this->Feature["world_collectible"])
		return;

	if (category == CG::EItemCategory::Currency && !this->Feature["world_currency"])
		return;

	if (category == CG::EItemCategory::QuestItem && !this->Feature["world_quest"])
		return;

	if (Engine->world_to_screen(pickup->K2_GetActorLocation(), &Output))
	{
		auto alpha = 255 / drawDistance * (drawDistance - distance);
		auto index = (int)pickup->ItemDefinition.ItemType;

		auto color = this->PickupCategory[(int)category];
		color.A = alpha;

		if (this->Feature["world_distance"])
			DirectX->text(Output, color, true, DirectX->Standart, "%s [%.0fm]", this->PickupTypes[index], distance);
		else
			DirectX->text(Output, color, true, DirectX->Standart, "%s", this->PickupTypes[index]);
	}
}

void CWorld::large_pickups(CG::ARBLargePickup* pickup) {

	if (!this->Feature["world_trial"])
		return;

	if (pickup->Owner == Engine->get_localplayer())
		return;

	if (pickup->IsUsedOnObject())
		return;
	
	if (!pickup->InteractionMesh->IsVisible())
		return;

	auto origin = Engine->get_position(Engine->get_localplayer());
	auto position = Engine->get_position(pickup);
	auto distance = Utilities->Distance(position, origin);

	if (distance > 50)
		return; 
	 
	FVector2D Output;

	if (Engine->world_to_screen(pickup->K2_GetActorLocation(), &Output))
	{
		auto alpha = 255 / 50 * (50 - distance);
		auto index = (int)pickup->LargeObjectType;

		CG::FLinearColor color = { 255, 255, 255, 255 };
		color.A = alpha;

		if (this->Feature["world_distance"])
			DirectX->text(Output, color, true, DirectX->Standart, "%s [%.0fm]", this->LargePickupTypes[index], distance);
		else
			DirectX->text(Output, color, true, DirectX->Standart, "%s", this->LargePickupTypes[index]);
	}
}


void CWorld::generator(CG::ARBGeneratorMultiObjectiveActor* genrator)
{
	if (!this->Feature["world_generators"])
		return;

	if (!genrator->bIsInteractible)
		return;

	auto origin = Engine->get_position(Engine->get_localplayer());
	auto position = Engine->get_position(genrator);
	auto distance = Utilities->Distance(position, origin);

	CG::FVector2D Screen;

	if (Engine->world_to_screen(position, &Screen))
	{
		if (this->Feature["world_distance"])
			DirectX->text(Screen, { 255, 0, 0, 255 }, true, DirectX->Standart, "Generator [%.0fm]", distance);
		else
			DirectX->text(Screen, { 255, 0, 0, 255 }, true, DirectX->Standart, "Generator");
	}
}

void CWorld::gasline(CG::AActor* can)
{
	if (!this->Feature["world_gasoline"])
		return;

	auto origin = Engine->get_position(Engine->get_localplayer());
	auto position = Engine->get_position(can);
	auto distance = Utilities->Distance(position, origin);

	CG::FVector2D Screen;

	if (Engine->world_to_screen(position, &Screen))
	{
		if (this->Feature["world_distance"])
			DirectX->text(Screen, { 252, 56, 220, 255 }, true, DirectX->Standart, "Gasoline [%.0fm]", distance);
		else
			DirectX->text(Screen, { 252, 56, 220, 255 }, true, DirectX->Standart, "Gasoline");
	}
}