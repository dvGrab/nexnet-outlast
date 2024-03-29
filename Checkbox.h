#pragma once

#include "Main.h"

#include "Element.h"

class CCheckbox : public CElement{
private:	
	bool* value;

public:
	void paint();

	void set_value(bool *value);

	void change_value(bool value);

	bool get_value();
};