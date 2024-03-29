#pragma once

#include "Main.h"

class CNPCS {
private:
	bool initialized = false;
	CG::UClass* UNPC = nullptr;

	float drawDistance = 100.0f;

	std::unordered_map<int, std::string> BotTypes;

public:
	std::unordered_map<std::string, bool> Feature;

	CG::FLinearColor visible, hidden, chasing;

	CNPCS();

	void initialize();
	void render(CG::AActor* character);

	void esp(CG::ARBNPC* npc);
};
extern CNPCS* NPC;