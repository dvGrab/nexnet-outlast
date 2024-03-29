#pragma once

#include "Main.h"

class CPlayers {
private:
	bool initialized = false;
	CG::UClass* UPlayer = nullptr;

public:
	CPlayers();

	std::unordered_map<std::string, bool> Feature;
	CG::FLinearColor visible, hidden;

	void initialize();
	void render(CG::AActor* character);

	void esp(CG::ARBPlayer* player);
};
extern CPlayers* Players;