#pragma once

#include "Math.h"
#include "Cursor.h"

class CElement {
private:
	std::string title, description;

	Vector2 position;
	Vector2 size;

	bool visible;

public:
	CCursor* Cursor = new CCursor();

	Vector2 get_position();

	Vector2 get_size();

	bool get_visibility();

	std::string get_title();

	std::string get_description();

	void set_description(std::string description);

	void set_title(std::string title);

	void set_position(Vector2 position);

	void set_size(Vector2 size);

	void set_visibility(bool visibility);

	CG::FVector2D vec2(Vector2 vec);

	void paint_description();
};