#pragma once

#include "Main.h"

class CWorld {
private:
	std::unordered_map<int, std::string> PickupTypes;
	std::unordered_map<int, CG::FLinearColor> PickupCategory;

	std::unordered_map<int, std::string> LargePickupTypes;
	std::unordered_map<int, CG::FLinearColor> LargePickupCategory;

	float drawDistance = 30;

	bool initialized = false;
	CG::UClass* UPickup = nullptr;
	CG::UClass* ULargePickup = nullptr;

	CG::UClass* Generator = nullptr;

public:
	long long last_updated = 0;

	bool resetNextFrame = false;

	bool reset_stage = false;

	CG::UClass* Propaganda = nullptr;
	CG::UClass* Gascan = nullptr;

	std::unordered_map<std::string, bool> Feature;

	CWorld();

	void get_blueprints();

	void initialize();
	void render(CG::AActor* actor);

	void poster(CG::ABase_PropagandaPoster_BP_C* poster);

	void pickups(CG::ARBPickup* pickup);
	void large_pickups(CG::ARBLargePickup* pickup);
	void generator(CG::ARBGeneratorMultiObjectiveActor* genrator);
	void gasline(CG::AActor* can);
};
extern CWorld* World;