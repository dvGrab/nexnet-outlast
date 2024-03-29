#include "Main.h"
#include "Utilities.h"
#include "Engine.h"
#include "SDK.h"
#include "Menu.h"

#include "Players.h"
#include "World.h"
#include "NPC.h"
#include "Misc.h"

CUtilities* Utilities = new CUtilities();
CEngine* Engine = new CEngine();
CDirectX* DirectX = new CDirectX();
CGUI* Menu = new CGUI();

bool penis3 = true;
bool penis2 = false;
bool penis1 = true;


BOOL Initialize()
{ 
	Engine->initialize();
	Engine->hook();
	DirectX->hook();
	Menu->hook(); 

	auto menu = Menu->add("nnR", "bbrs.", Vector2(50, 50), Vector2(447, 408));

	auto player_group = menu->group_add("Players", Vector2(20, 20), Vector2(200, 100));
	player_group->checkbox_add("Boxes", "Shows boxes around enemy or friendly players.", { 20, 15 }, &Players->Feature["player_box"]);
	player_group->checkbox_add("Healthbars", "Shows the current health of a player as a bar.", { 20, 35 }, &Players->Feature["player_healthbar"]);
	player_group->checkbox_add("Distance", "Shows the distance from the local player to the target player.", { 20, 55 }, &Players->Feature["player_distance"]);
	player_group->checkbox_add("Names", "Shows the username of the player.", { 20, 75 }, &Players->Feature["player_name"]);
	
	auto world_group = menu->group_add("World", Vector2(20, 130), Vector2(200, 250));
	world_group->checkbox_add("Items", "Shows all items around you as label with its specific item name.", { 20, 15 }, &World->Feature["world"]);
	world_group->checkbox_add("Utility", "Will show all utility items when 'Items' has been enabled.", { 20, 35 }, &World->Feature["world_utility"]);
	world_group->checkbox_add("Throwable", "Will show all trowable items when 'Items' has been enabled.", { 20, 55 }, &World->Feature["world_throwable"]);
	world_group->checkbox_add("Health", "Will show all health items when 'Items' has been enabled.", { 20, 75 }, &World->Feature["world_health"]);
	world_group->checkbox_add("Collectibles", "Will show all collectible items when 'Items' has been enabled.", { 20, 95 }, &World->Feature["world_collectible"]);
	world_group->checkbox_add("Currency", "Will show all currency items when 'Items' has been enabled.", { 20, 115 }, &World->Feature["world_currency"]);
	world_group->checkbox_add("Quest", "Will show all quest items when 'Items' has been enabled.", { 20, 135 }, &World->Feature["world_quest"]);
	world_group->checkbox_add("Poster", "Will show all posters collectible on the world.", { 20, 155 }, &World->Feature["world_poster"]);
	world_group->checkbox_add("Distance", "Shows the distance between the local player and the item.", { 20, 175 }, &World->Feature["world_distance"]);
	world_group->checkbox_add("Generators", "Shows the active generators to solve.", { 20, 195 }, &World->Feature["world_generators"]);
	world_group->checkbox_add("Trial Items", "Displays all items need to solve the trial.", { 20, 215 }, &World->Feature["world_trial"]);


	auto misc_group = menu->group_add("Misc", Vector2(230, 20), Vector2(200, 120));
	misc_group->checkbox_add("Speedhack (patched)", "While sprinting with SHIFT you can run much faster.", { 20, 15 }, &Misc->Feature["misc_speedhack"]);
	misc_group->checkbox_add("Crosshair", "Displays a crosshair at the center of the screen.", { 20, 35 }, &Players->Feature["player_crosshair"]);
	misc_group->checkbox_add("Wrestlingbot", "Wins for you in arm wrestling. Make sure to stay ingame since this emulates ENTER pressed.", { 20, 55 }, &Misc->Feature["misc_wrestling"]);
	misc_group->checkbox_add("No Fog", "Removes fog on the world map.", { 20, 75 }, &Misc->Feature["misc_nofog"]);
	misc_group->checkbox_add("Nightvision", "Do you care about batteries? Fine, i'm not.", { 20, 95 }, &Misc->Feature["misc_nightvision"]);


	auto npc_group = menu->group_add("NPC", Vector2(230, 150), Vector2(200, 180));
	npc_group->checkbox_add("Box", "Shows a box around the NPC.", { 20, 15 }, &NPC->Feature["npc_box"]);
	npc_group->checkbox_add("Name", "Displays the name of the NPC.", { 20, 35 }, &NPC->Feature["npc_name"]);
	npc_group->checkbox_add("Difficulty", "Shows the difficulty level of the NPC.", { 20, 55 }, &NPC->Feature["npc_difficulty"]);
	npc_group->checkbox_add("Distance", "Shows the distance between the local player and the NPC.", { 20, 75 }, &NPC->Feature["npc_distance"]);
	npc_group->checkbox_add("Status", "Displays the terror status of a NPC.", { 20, 95 }, &NPC->Feature["npc_status"]);

	return true;
}


BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		 
		AllocConsole();
		freopen("CONIN$", "r", stdin);
		freopen("CONOUT$", "w", stdout);
		freopen("CONOUT$", "w", stderr);

		std::thread thread(Initialize);
		thread.detach();

		break;
	}  
	 
	return true; 
}