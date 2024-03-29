#pragma once

#include "Main.h"

class CCursor {
	bool leftDown, leftDownOld;

public:
	Vector2 get_mousepos();
	bool is_inside(Vector2 position, Vector2 size);
	bool is_left_clicked(Vector2 position, Vector2 size);
	void paint();
};