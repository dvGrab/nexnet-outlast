#include "NPC.h"

CNPCS::CNPCS() {

	visible = { 246, 255, 0, 255 };
	hidden = { 255, 128, 0, 255 };
	chasing = { 255, 0, 47 , 255 };

	this->BotTypes[0] = "Grunt";
	this->BotTypes[1] = "Ambient";
	this->BotTypes[2] = "Big Grunt";
	this->BotTypes[3] = "Pitcher Sniper";
	this->BotTypes[4] = "Screamer";
	this->BotTypes[5] = "Pouncer";
	this->BotTypes[6] = "Pusher";
	this->BotTypes[7] = "Ground Pitcher";
	this->BotTypes[8] = "Berserker";
	this->BotTypes[9] = "Imposter";
	this->BotTypes[10] = "Nighthunter";
	this->BotTypes[11] = "Spectre";
	this->BotTypes[12] = "Throwable Target";
	this->BotTypes[13] = "Stalker";
	this->BotTypes[14] = "Gooseberry";
	this->BotTypes[15] = "Coyle";
	this->BotTypes[16] = "Scientist";
	this->BotTypes[17] = "Guard";

	this->Feature["npc_box"] = true;
	this->Feature["npc_name"] = true;
	this->Feature["npc_distance"] = true;
	this->Feature["npc_status"] = true;
	this->Feature["npc_difficulty"] = true;
}

void CNPCS::initialize()
{
	if (this->UNPC == nullptr)
		this->UNPC = CG::UObject::FindClass("Class OPP.RBNPC");
}

void CNPCS::render(CG::AActor* character)
{
	this->initialize();

	if (character->IsA(this->UNPC))
		this->esp(reinterpret_cast<CG::ARBNPC*>(character));
}

void CNPCS::esp(CG::ARBNPC* npc) {

	auto activity = (int)(npc->BotActivity);

	if (npc->NPCType == CG::ENPCType::Scientist)
		return;

	if (npc->NPCType == CG::ENPCType::Ambient)
		return;

	if (npc->NPCType == CG::ENPCType::Guard)
		return;

	CG::FVector Origin, Bounds;
	npc->GetActorBounds(true, &Origin, &Bounds, false);
	
	auto origin = Engine->get_position(Engine->get_localplayer());
	auto head = Engine->get_position(npc) + CG::FVector(0, 0, Bounds.Z);
	auto foot = Engine->get_position(npc) - CG::FVector(0, 0, Bounds.Z);

	auto distance = Utilities->Distance(origin, head);

	CG::FVector2D ScreenHead, ScreenFoot;

	if (!Engine->world_to_screen(head, &ScreenHead))
		return;

	if (!Engine->world_to_screen(foot, &ScreenFoot))
		return;

	auto height = ScreenFoot.Y - ScreenHead.Y;
	auto width = height / 2.5f;

	CG::FLinearColor color;

	if (Engine->traceray(Engine->eye_position(), head, nullptr))
		color = hidden;
	else
		color = visible;

	std::string name;

	switch (npc->NPCFlavor)
	{
		case CG::ENPCFlavor::Heavy:
			name = "Heavy";
			break;
		case CG::ENPCFlavor::Light:
			name = "Light";
			break;
		case CG::ENPCFlavor::Normal:
			name = "Normal";
			break;
	}

	auto alpha = 255 / drawDistance * (drawDistance - distance);

	if (distance < 30)
		alpha = 255;

	color.A = alpha;

	if (this->Feature["npc_box"]) {
		DirectX->rect({ ScreenHead.X - (width / 2), ScreenHead.Y }, CG::FVector2D(width, height), color);
	}
	
	int count = 0;

	if (this->Feature["npc_name"])
	{
		DirectX->text({ ScreenHead.X + (width / 2) + 3, ScreenHead.Y - 1 + (count * 15)}, {255, 255, 255, alpha}, false, DirectX->ESP, "%s", this->BotTypes[(int)npc->NPCType].c_str());
		count++;
	}

	if (this->Feature["npc_difficulty"])
	{
		DirectX->text({ ScreenHead.X + (width / 2) + 3, ScreenHead.Y - 1 + (count * 15) }, { 255, 255, 255, alpha }, false, DirectX->ESP, "%s", name.c_str());
		count++;
	}

	if (this->Feature["npc_distance"])
	{
		DirectX->text({ ScreenHead.X + (width / 2) + 3, ScreenHead.Y - 1 + (count * 15) }, { 255, 255, 255, alpha }, false, DirectX->ESP, "%.0fm", distance);
		count++;
	}
	
	if (this->Feature["npc_status"]) {
		if (npc->BotAwarenessState == CG::EAIAwarenessStateType::Chase)
			DirectX->text({ ScreenHead.X, ScreenHead.Y + height + 3 }, { chasing.R, chasing.G, chasing.B, alpha }, true, DirectX->ESP, "CHASING", name.c_str());

		if (npc->BotAwarenessState == CG::EAIAwarenessStateType::Alerted)
			DirectX->text({ ScreenHead.X, ScreenHead.Y + height + 3 }, { chasing.R, chasing.G, chasing.B, alpha }, true, DirectX->ESP, "ALERTED", name.c_str());
	}
}