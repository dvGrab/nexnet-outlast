#include "Checkbox.h"

void CCheckbox::paint()
{
	auto position = vec2(this->get_position());
	
	DirectX->filled(position, {12, 12}, {0, 0, 0, 255}, false);

	CG::FLinearColor hover[4];
	hover[0] = { 255, 106, 0, 255 };
	hover[1] = { 255, 106, 0, 255 };
	hover[3] = { 255, 106, 0, 255 };

	this->set_size({ 12, 12 });

	if (this->get_value())
	{
		if (this->Cursor->is_inside(this->get_position(), { 12, 12 })) {
			hover[0] = { 29, 179, 33, 255 };
			hover[1] = { 29, 179, 33, 255 };
			hover[2] = { 153, 247, 156, 255 };
			hover[3] = { 29, 179, 33, 255 };
		}
		else {
			hover[0] = { 46, 125, 49, 255 };
			hover[1] = { 46, 125, 49, 255 };
			hover[2] = { 5, 252, 13, 255 };
			hover[3] = { 46, 125, 49, 255 };
		}
	}
	else
	{
		if (this->Cursor->is_inside(this->get_position(), { 12, 12 }))
			hover[2] = { 255, 190, 0, 255 };
		else
			hover[2] = { 255, 149, 0, 255 };
	}

	if (this->Cursor->is_left_clicked(this->get_position(), { 12, 12 })) {
		this->change_value(this->get_value() ? false : true);
	}
		
	DirectX->filled_multicolor(position + CG::FVector2D(1, 1), {10, 10}, hover, 0.0f);
	DirectX->text(position + CG::FVector2D(20, 1), {255, 255, 255, 255}, false, DirectX->ESP, this->get_title().c_str());

	this->paint_description();
}

void CCheckbox::set_value(bool* value)
{
	this->value = value;
}

void CCheckbox::change_value(bool value)
{
	*this->value = value;
}

bool CCheckbox::get_value()
{
	return *this->value;
}