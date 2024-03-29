#pragma once

#include "Main.h"

#include "Element.h"
#include "Checkbox.h"

class CGroup : public CElement {
private:
	std::vector<CCheckbox*> checkboxes;

public:

	void paint();

	void checkbox_add(std::string title, std::string description, Vector2 position, bool* value);

};