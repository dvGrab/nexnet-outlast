#pragma once

#include "Main.h"



class CMisc {
private:
	CG::UClass* ArmwrestlingTable = nullptr;
	CG::UClass* Fogbase = nullptr;
	CG::UClass* Skylight = nullptr;
	CG::UClass* NightvisionComponent = nullptr;
	CG::UClass* MenuCustomization = nullptr;
	
	bool initialized = false; 
public:
	float Oldstates[10];



	int releaseLeftCounter = 0;
	bool canReleaseLeft = false;

	std::unordered_map<std::string, bool> Feature;

	CMisc();

	void initialize();

	void render(CG::AActor* actor);
	void armwrestling(CG::ARBArmWreslingTable* actor);
	void release_left();
	void nightvision();
	void speedhack();
};
extern CMisc* Misc;