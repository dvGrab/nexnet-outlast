#include "Element.h"

Vector2 CElement::get_position()
{
	return this->position;
}

Vector2 CElement::get_size(){
	return this->size;
}

bool CElement::get_visibility(){
	return this->visible;
}

std::string CElement::get_title(){
	return this->title;
}

std::string CElement::get_description() {
	return this->description;
}
 
void CElement::set_description(std::string description) {
	this->description = description; 
}

void CElement::set_title(std::string title) {
	this->title = title;
}

void CElement::set_position(Vector2 position) {
	this->position = position;
}

void CElement::set_size(Vector2 size) {
	this->size = size;
}

void CElement::set_visibility(bool visible) {
	this->visible = visible;
}

CG::FVector2D CElement::vec2(Vector2 vec) {
	return CG::FVector2D(vec.x, vec.y);
}

void CElement::paint_description() { 
	if (this->Cursor->is_inside(this->get_position(), this->get_size()))
	{ 
		auto height = DirectX->get_height();
		auto width = DirectX->get_width();

		auto size = DirectX->get_text_size(this->get_description().c_str(), DirectX->ESP);

		DirectX->filled({ width - size.x - 20, height - size.y - 16 }, { size.x + 12, size.y + 8 }, { 100, 100, 100, 255 }, 0.0f);
		DirectX->filled({ width - size.x - 19, height - size.y - 15 }, { size.x + 10, size.y + 6 }, { 50, 50, 50, 255 }, 0.0f);
		DirectX->text({ width - size.x - 13, height - size.y - 15 + 4 }, { 255, 255, 255, 255 }, false, DirectX->ESP, this->description.c_str());
	}
}