#include "Cursor.h"

Vector2 CCursor::get_mousepos()
{
	POINT position;
	GetCursorPos(&position);
	return Vector2((float)position.x, (float)position.y);
}

bool CCursor::is_inside(Vector2 position, Vector2 size)
{
	auto cursor = this->get_mousepos();

	if ((cursor.x > position.x) && (cursor.x < position.x + size.x))
		if ((cursor.y > position.y) && (cursor.y < position.y + size.y))
			return true;

	return false;
}

bool CCursor::is_left_clicked(Vector2 position, Vector2 size)
{
	bool returnValue = false;


	if (GetAsyncKeyState(0x01)) {
		if (this->is_inside(position, size))
			this->leftDown = true;
	}
	else {
		if (this->leftDownOld != this->leftDown)
			returnValue = true;
	}

	this->leftDownOld = this->leftDown;
	this->leftDown = false;

	return returnValue;
}

void CCursor::paint()
{
	auto x = this->get_mousepos().x;
	auto y = this->get_mousepos().y;
	DirectX->image({ x, y }, { 11, 19 }, ImageIds::CURSOR, { 255, 255, 255, 255 });
}