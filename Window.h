#pragma once

#include "Main.h"
#include "Element.h"
#include "Group.h"

class CWindow : public CElement{
private:
	std::vector<CGroup*> Groups;

public:

	void paint();

	CGroup* group_add(std::string title, Vector2 position, Vector2 size);


};