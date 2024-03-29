#include "Group.h"

void CGroup::paint()
{
	auto position = vec2(this->get_position());
	auto size = vec2(this->get_size());

	DirectX->filled(position, size, { 20, 20, 20, 255 }, 0.0f);
	DirectX->filled(position + CG::FVector2D(1, 1), size - CG::FVector2D(2, 2), { 100, 100, 100, 255 }, 0.0f);
	DirectX->filled(position + CG::FVector2D(2, 2), size - CG::FVector2D(4, 4), { 50, 50, 50, 255 }, 0.0f);

	auto text_size = DirectX->get_text_size(this->get_title().c_str(), DirectX->ESP);

	DirectX->filled({ position.X + (size.X / 2) - (text_size.x / 2) - 3 , position.Y - (text_size.y / 3) }, { text_size.x + 6, text_size.y }, { 50, 50, 50, 255 }, 0.0f);
	DirectX->text({ position.X + (size.X / 2), position.Y - (text_size.y / 3) }, { 255, 255, 255, 255 }, true, DirectX->ESP, this->get_title().c_str());

	for (int i = 0; i < this->checkboxes.size(); i++) { 
		auto checkbox = this->checkboxes[i]; 
		auto old_position = checkbox->get_position();
		   
		checkbox->set_position(this->get_position() + old_position); 
		this->checkboxes[i]->paint();
		checkbox->set_position(old_position);    
	} 
}  
 
void CGroup::checkbox_add(std::string title, std::string description, Vector2 position, bool* value)
{
	CCheckbox* checkbox = new CCheckbox(); 

	checkbox->set_title(title);
	checkbox->set_description(description);
	checkbox->set_position(position);
	checkbox->set_value(value); 

	this->checkboxes.push_back(checkbox);
} 