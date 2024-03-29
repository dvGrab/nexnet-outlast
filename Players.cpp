#include "Players.h"

CPlayers::CPlayers() {

	visible = { 0, 255, 0, 255 };
	hidden = { 255, 0, 0, 255 };

	this->Feature["player_box"] = true;
	this->Feature["player_distance"] = false;
	this->Feature["player_healthbar"] = false;
	this->Feature["player_name"] = true;
	this->Feature["player_speedhack"] = false;
	this->Feature["player_crosshair"] = false;
}

void CPlayers::initialize()
{
	if (this->UPlayer == nullptr)
		this->UPlayer = CG::UObject::FindClass("Class OPP.RBPlayer");
}

void CPlayers::render(CG::AActor* character)
{
	this->initialize();

	if(this->UPlayer != nullptr)
		if (character->IsA(this->UPlayer))
			this->esp(reinterpret_cast<CG::ARBPlayer*>(character));
}

void CPlayers::esp(CG::ARBPlayer* player) {

	auto controller = Engine->get_controller();

	if (controller == nullptr)
		return;

	if (controller->bSpectator)
		return;

	if (Engine->get_localplayer() == player) 
		return;


	if (player->PlayerState == nullptr)
		return;

	if (player->bDead)
		return;


	auto origin = Engine->get_position(Engine->get_localplayer());
	auto head = Engine->get_position(player) + CG::FVector(0, 0, 85);
	auto foot = Engine->get_position(player) - CG::FVector(0, 0, 100);
	
	auto distance = Utilities->Distance(origin, head);

	if (player->bIsCrouched) {
		head = head - CG::FVector(0, 0, 30);
		foot = foot + CG::FVector(0, 0, 30);
	}

	CG::FVector2D ScreenHead, ScreenFoot;

	if (!Engine->world_to_screen(head, &ScreenHead))
		return;

	if (!Engine->world_to_screen(foot, &ScreenFoot))
		return;

	auto height = ScreenFoot.Y - ScreenHead.Y;
	auto width = height / 2.0f;

	if(player->bIsCrouched)
		width = height / 1.5f;

	CG::FLinearColor color;

	if (Engine->traceray(Engine->eye_position(), head, nullptr))
		color = hidden;
	else
		color = visible;

	if(this->Feature["player_box"])
		DirectX->rect({ScreenHead.X - (width / 2), ScreenHead.Y}, CG::FVector2D(width, height), color);

	int count = 0;

	if (this->Feature["player_name"]) {
		DirectX->text({ ScreenHead.X + (width / 2) + 3, ScreenHead.Y - 2 + (count * 15)}, {255, 255, 255, 255}, false, DirectX->Standart, u8"%ls", player->PlayerState->GetPlayerName().c_str(), distance);
		count++;
	}
		
	if (this->Feature["player_distance"]) {
		DirectX->text({ ScreenHead.X + (width / 2) + 3, ScreenHead.Y - 2 + (count * 15) }, { 255, 255, 255, 255 }, false, DirectX->Standart, u8"%.0fm", distance);
		count++;
	}

	auto health = player->Health;

	if (health > 100)
		health = 100;

	auto healthStep = height / 100;
	auto healthSize = healthStep * player->Health;

	float g = (float)player->Health * 2.55f;
	float r = 255 - g;
	float b = 0;

	if (this->Feature["player_healthbar"])
	{
		DirectX->filled({ ScreenHead.X - (width / 2) - 6 - 1, ScreenHead.Y - 1 }, { 5, height + 2 }, { 0, 0, 0, 255 }, 0.0f);
		DirectX->filled({ ScreenHead.X - (width / 2) - 6, ScreenHead.Y + (height - healthSize) }, { 3, healthSize }, { r, g, b, 255 }, 0.0f);
	}
}