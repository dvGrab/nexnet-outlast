#include "Window.h"

void CWindow::paint()
{
	auto position = vec2(this->get_position());
	auto size = vec2(this->get_size());

	size += CG::FVector2D(4, 4);
	position -= CG::FVector2D(1, 1);
	DirectX->filled(position, size, { 0, 0, 0, 150 }, 2.0f);

	size -= CG::FVector2D(4,4);
	position += CG::FVector2D(2, 2);
	DirectX->filled(position, size, {100, 100, 100, 255}, 0.0f);

	size -= CG::FVector2D(2, 2);
	position += CG::FVector2D(1, 1);
	DirectX->filled(position, size, { 50, 50, 50, 255 }, 0.0f);

	size -= CG::FVector2D(6, 6);
	position += CG::FVector2D(3, 3);
	DirectX->filled(position, size, { 100, 100, 100, 255 }, 0.0f);

	size -= CG::FVector2D(2, 2);
	position += CG::FVector2D(1, 1); 

	CG::FLinearColor fade[4];
	fade[0] = { 50, 50, 50, 255 }; 
	fade[1] = { 50, 50, 50, 255 };
	fade[2] = { 30, 30, 30, 255 };
	fade[3] = { 30, 30, 30, 255 };

	DirectX->filled_multicolor(position, size, fade, 0.0f);
	 
	DirectX->text({ position.X + (size.X / 2), position.Y - 35 }, { 255, 255, 255, 255 }, true, DirectX->Big, "ASTERIA.CODES - Outlast");

	for (int i = 0; i < this->Groups.size(); i++) {
		auto group = this->Groups[i];
		auto old_position = group->get_position();

		group->set_position(this->get_position() + old_position);
		group->paint();
		group->set_position(old_position);
	}

	DirectX->text({this->get_position().x + (size.X / 2), this->get_position().y + (size.Y + 15)}, {255 ,255, 255, 255}, true, DirectX->ESP, "This cheat is under development. Report issues.");
//	DirectX->text({ position.X + size.X / 2, position.Y - 15 }, { 255, 255, 255, 255 }, true, DirectX->Standart, this->get_title().c_str());
}

CGroup* CWindow::group_add(std::string title, Vector2 position, Vector2 size)
{
	CGroup* group = new CGroup();

	group->set_title(title);
	group->set_position(position);
	group->set_size(size);

	this->Groups.push_back(group);

	return group;
}