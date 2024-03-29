#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass ORS_LD_AI.ORS_LD_AI_C
	 * Size -> 0x16E8 (FullSize[0x1940] - InheritedSize[0x0258])
	 */
	class AORS_LD_AI_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              MC_LaundryNH[0x10];                                      // 0x0260(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              MC_Cafeteria[0x28];                                      // 0x0270(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MC_PoolHallsBG[0x10];                                    // 0x0298(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              RG_Services[0x28];                                       // 0x02A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBBot*                                              NPC_Laundry_NH;                                          // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_PoolHalls_BG;                                        // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Investigation_Group_BG_PoolHalls[0x10];                  // 0x02E0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              RG_Church[0x28];                                         // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MC_ChurchBasementHG[0x10];                               // 0x0318(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBBot*                                              NPC_ChurchBasement_Heavy_Grunt;                          // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MC_BasementHG[0x10];                                     // 0x0330(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBBot*                                              NPC_Basement_Heavy_Grunt;                                // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_Church_Sleeper;                                      // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_Gooseberry;                                          // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Investigation_Group_Gooseberry_Cafeteria_Back_Alley[0x10]; // 0x0358(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Investigation_Group_NH_Laundry[0x10];                    // 0x0368(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class ARBAmbientActivityMarker*>                    AmbientMarkers_NH_Laundry;                               // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ARBBot*                                              NPC_PlaygroundHalls_Heavy_Grunt;                         // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_Church_BE;                                           // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MC_ServicesHG[0x10];                                     // 0x0398(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBBot*                                              NPC_Basement_Sleeper;                                    // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MC_ChurchExterior[0x28];                                 // 0x03B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MC_ChurchHG[0x10];                                       // 0x03D8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBBot*                                              NPC_Church_Heavy_Grunt;                                  // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MC_PoolBG[0x10];                                         // 0x03F0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBBot*                                              NPC_Pool_Heavy_Big_Grunt;                                // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Investigation_Group_HBG_Pool[0x10];                      // 0x0408(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBBot*                                              NPC_Laundry_Sleeper;                                     // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RG_Maze[0x28];                                           // 0x0420(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBBot*                                              NPC_CourtyardCafeteriaPresbyterPlayground_BG;            // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MC_CourtyardCafeteriaPresbyterPlaygroundBG[0x10];        // 0x0450(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Investigation_Group_BG_CourtyardCafeteriaPresbyterPlayground[0x10]; // 0x0460(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              MC_PoolHalls_LG[0x10];                                   // 0x0470(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBBot*                                              NPC_PoolHallsGrunt;                                      // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MC_Lobby[0x28];                                          // 0x0488(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Investigation_Group_Gooseberry_LobbyExterior[0x10];      // 0x04B0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBBot*                                              NPC_Entrance_BG;                                         // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Investigation_Group_BG_Entrance[0x10];                   // 0x04C8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class ARBWaypoint*>                                 Waypoints_MT02_Goose_Filtered;                           // 0x04D8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ARBWaypoint*>                                 Waypoints_MT02_Goose;                                    // 0x04E8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		unsigned char                                              MC_GooseberryMaze[0x10];                                 // 0x04F8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Investigation_Group_Gooseberry_LobbyInterior[0x10];      // 0x0508(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FAIConfigData                                       GooseberryMT01ChaseConfig;                               // 0x0518(0x1230) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              LeashBasement[0x10];                                     // 0x1748(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              LeashChurch[0x10];                                       // 0x1758(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              LeashChurchBasement[0x10];                               // 0x1768(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              LeashPlaygroundHalls[0x10];                              // 0x1778(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              LeashPoolHalls[0x10];                                    // 0x1788(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              LeashLaundry[0x10];                                      // 0x1798(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              LeashCourtyardCafeteriaPresbyterPlayground[0x10];        // 0x17A8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBBot*                                              NPC_Pool_Halls_Heavy_Grunt;                              // 0x17B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MC_PoolHalls_HG[0x10];                                   // 0x17C0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBBot*                                              NPC_CafeteriaPresbyter_HBG;                              // 0x17D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MC_CafeteriaPresbyterHBG[0x10];                          // 0x17D8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBBot*                                              NPC_Presbyter_Sleeper;                                   // 0x17E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              LeashChurchExterior[0x10];                               // 0x17F0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              MC_BackAlleyHG[0x28];                                    // 0x1800(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBBot*                                              NPC_Back_Alley_Heavy_Grunt;                              // 0x1828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              LeashBackAlley[0x10];                                    // 0x1830(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class URBPartialAIConfig*                                  Goose_MT01_FinalChase_Config;                            // 0x1840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypoint*                                         WP_GooseSpawner;                                         // 0x1848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_Backalley_Grunt;                                     // 0x1850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Investigation_Group_HBG_CafeteriaPresbyter[0x10];        // 0x1858(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              LeashCafeteriaPresbyter[0x10];                           // 0x1868(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ANPC_Spawn_Blind_C*                                  MT02BerzerkerSpawn;                                      // 0x1878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              LeashPlaygroundCourtyard[0x10];                          // 0x1880(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBWaypointGroup*                                    RBWaypointGroup_Basement_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x1890(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypointGroup*                                    RBWaypointGroup_ChurchBasement_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x1898(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_SleeperScreamer_Stand_C*                  NPC_Spawn_SleeperScreamer_Stand_Church_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x18A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_SleeperScreamer_Stand_C*                  NPC_Spawn_SleeperScreamer_Stand_Basement_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x18A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypointGroup*                                    RBWaypointGroup_Church_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x18B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypointGroup*                                    RBWaypointGroup_PlaygroundHalls_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x18B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_SleeperScreamer_Stand_C*                  NPC_Spawn_SleeperScreamer_Stand_Laundry_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x18C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_Blind_C*                                  NPC_Spawn_Blind_ChurchExterior_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x18C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypointGroup*                                    RBWaypointGroup_PoolHalls_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x18D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBInvestigationPoint*                               RBInvestigationPoint_Lobby_2_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x18D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_Blind_C*                                  NPC_Spawn_BigGrunt_Entrance_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x18E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBInvestigationPoint*                               RBInvestigationPoint_Exterior_0_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x18E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBInvestigationPoint*                               RBInvestigationPoint_Exterior_7_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x18F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_SleeperScreamer_Stand_C*                  NPC_Spawn_SleeperScreamer_Stand_Presbyter_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x18F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypointGroup*                                    RBWaypointGroup_Passage_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x1900(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypoint*                                         RBWaypoint_Goose_1_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x1908(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBInvestigationPoint*                               RBInvestigationPoint_Entrance11_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x1910(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypoint*                                         RBWaypoint_GooseFinalSpawn_2_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x1918(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypoint*                                         RBWaypoint_GooseFinalSpawn_3_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x1920(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypoint*                                         RBWaypoint_Passage_1_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x1928(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_Blind_C*                                  NPC_Spawn_Blind_Courtyard_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x1930(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_Blind_C*                                  NPC_Spawn_Blind_Playground_ExecuteUbergraph_ORS_LD_AI_RefProperty; // 0x1938(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void MT01_AI_Setup();
		void AI_SpawnLaundry_NH();
		void AI_SpawnPoolHalls_BG();
		void AI_SpawnChurchBasement_HeavyGrunt();
		void AI_SpawnBasement_HeavyGrunt();
		void AI_SpawnChurch_Sleeper();
		void AI_SpawnCafeteria_Gooseberry();
		void AI_SpawnServices_PouncersNormal();
		void AI_SpawnChurch_PouncersNormal();
		void AI_SpawnPlaygroundHalls_HeavyGrunt();
		void AI_SpawnChurchExterior_Berzerker();
		void StartDirectorNormal();
		void StopDirector();
		void AI_SpawnChurch_PouncersHigh();
		void AI_SpawnBasement_Sleeper();
		void AI_SpawnChurch_HeavyGrunt();
		void AI_SpawnServices_PouncersHigh();
		void AI_SpawnPool_HeavyBigGrunt();
		void AI_SpawnLaundry_Sleeper();
		void MT02_AI_Setup();
		void AI_SpawnPoolHalls_Grunt();
		void AI_SpawnMaze_PouncersNormal();
		void AI_SpawnCourtyardCafeteriaPresbyter_BigGrunt();
		void AI_GooseberryExteriorPatrol();
		void AI_SpawnEntrance_BigGrunt();
		void AI_SetupGooseberryWaypoints();
		void AI_SpawnMaze_Gooseberry();
		void AI_GooseberryLobbyPatrol();
		void AI_SpawnMaze_PouncersHigh();
		void AI_SpawnPoolHalls_HeavyGrunt();
		void AI_SpawnCafeteriaPresbyter_HeavyBigGrunt();
		void AI_SpawnPresbyter_Sleeper();
		void StartDirectorHigh();
		void AI_SpawnBackAlley_HeavyGrunt();
		void AI_MT01_SpawnFinalChaseNPC();
		void AI_MT01_SetGooseSpawner();
		void AI_SpawnBackAlley_Grunt();
		void AI_SpawnPlaygroundCourtyard_Berzerker();
		void AI_SetupMT02BerzerkerSpawn();
		void ExecuteUbergraph_ORS_LD_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
