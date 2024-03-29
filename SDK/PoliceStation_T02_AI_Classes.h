#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * BlueprintGeneratedClass PoliceStation_T02_AI.PoliceStation_T02_AI_C
	 * Size -> 0x2940 (FullSize[0x2B98] - InheritedSize[0x0258])
	 */
	class APoliceStation_T02_AI_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              MCloset_PatrolCorridor[0x28];                            // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBBot*                                              NPC_B01_Grunt_Patrol;                                    // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_B01_Grunt_PatrolFront;                               // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_B01_BigGrunt_OfficePatrol;                           // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_B01_BigGrunt_Street;                                 // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MCloset_PatrolStreet[0x10];                              // 0x02A8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              MCloset_SullyPort[0x28];                                 // 0x02B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBBot*                                              NPC_B02_Coyle;                                           // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ARBWaypoint*>                                 Local_B02_Coyle_Waypoint;                                // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ARBBot*                                              NPC_B02_Ambient_Sully;                                   // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_B02_Screamer_Basement1;                              // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_B02_Screamer_Basement2;                              // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MCloset_Basement[0x10];                                  // 0x0310(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBBot*                                              NPC_B01_Screamer_Patrol;                                 // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_B01_Screamer_Security;                               // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ARBLeashMarker*>                              Leashes_B01_BigGruntCorridorExt;                         // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ARBBot*                                              NPC_B07_Grunt_JailCorridor;                              // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MCloset_JailCorridor[0x28];                              // 0x0348(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MCloset_CentralCorridor[0x28];                           // 0x0370(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MCloset_JailCorridorExecution[0x28];                     // 0x0398(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              B04_CoyleSpawningCloset[0x28];                           // 0x03C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      B04_ExecutionTimer;                                      // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B6WV[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARBLeashMarker*                                      B04_CoyleLeash;                                          // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RG_04_PushCart[0x28];                                    // 0x03F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBBot*                                              NPC_B04_BigGruntRail;                                    // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_B04_GruntDetective;                                  // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_B04_GruntAdmin;                                      // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_B04_ScreamerDetective;                               // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_B04_ScreamerAdmin;                                   // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_B04_Coyle;                                           // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isCoyleTriggerPassed;                                    // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isAllGatesUnlocked;                                      // 0x0451(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isCoyleSpawned;                                          // 0x0452(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5WSL[0x1];                                   // 0x0453(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIConfigData                                       Coyle_B04;                                               // 0x0454(0x11BC) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<class ARBWaypoint*>                                 NPC_CoyleEndWaypoints;                                   // 0x1610(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ARBWaypoint*>                                 NPC_CoyleEndWaypoints_Hard;                              // 0x1620(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FRBAIConditionSet                                   ConditionPusherSpawn;                                    // 0x1630(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		unsigned char                                              RG_B01_Patrol[0x28];                                     // 0x1640(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RG_B02_Basement[0x28];                                   // 0x1668(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MCloset_BasementGym[0x28];                               // 0x1690(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBBot*                                              NPC_B02_Berserker_Basement;                              // 0x16B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              VolumeInves_PatrolOffice[0x10];                          // 0x16C0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              VolumeInves_PatrolStreet[0x10];                          // 0x16D0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              VolumeInves_BigGrunt_RailPatrol[0x10];                   // 0x16E0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              VolumeInves_BigGrunt_RailAdmin[0x10];                    // 0x16F0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              VolumeInves_BigGrunt_RailAdmin_Hard[0x10];               // 0x1700(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              VolumeInves_BigGrunt_RailLobby[0x10];                    // 0x1710(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              VolumeInves_BigGrunt_RailLobby_Hard[0x10];               // 0x1720(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              VolumeInves_BigGrunt_RailDetective[0x10];                // 0x1730(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              VolumeInves_BigGrunt_RailExecutionLarge[0x10];           // 0x1740(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FConfigurableFloat                                  B04_ExecutionBigGruntTimer;                              // 0x1750(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		unsigned char                                              Coyle_FinalInvestigationRoom[0x10];                      // 0x1818(0x0010) UNKNOWN PROPERTY: ArrayProperty
		int32_t                                                    b01_nbPouncer;                                           // 0x1828(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    b02_nbPouncer;                                           // 0x182C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    b04_nbPouncer;                                           // 0x1830(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      b01_BGIntro_Timer;                                       // 0x1834(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAIConfigData                                       Coyle_Exit_Garage;                                       // 0x1838(0x11BC) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_FRYM[0x4];                                   // 0x29F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Leash_Patrol_Back[0x10];                                 // 0x29F8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Leash_Patrol_All[0x10];                                  // 0x2A08(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Leash_Admin[0x10];                                       // 0x2A18(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Leash_Detective[0x10];                                   // 0x2A28(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class ARBWaypoint*>                                 NPC_B07_GruntJailCorridor_WP;                            // 0x2A38(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		unsigned char                                              VolumeInves_Grunt_JailCorridor[0x10];                    // 0x2A48(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Leash_PatrolStreet_All[0x10];                            // 0x2A58(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Leash_Coyle_Execution[0x10];                             // 0x2A68(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Leash_Coyle_Execution_Hard[0x10];                        // 0x2A78(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ARBBot*                                              NPC_B01_Ambient01_Street;                                // 0x2A88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBBot*                                              NPC_B01_Ambient02_Street;                                // 0x2A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URBPartialAIConfig*                                  Coyle_Final;                                             // 0x2A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Leash_Basement_Blind[0x10];                              // 0x2AA0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class ANPC_Spawn_Coyle_C*                                  NPC_Spawn_Coyle2_2_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2AB0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_SleeperScreamer_Stand_C*                  NPC_Spawn_SleeperScreamer_Basement02_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2AB8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_SleeperScreamer_Stand_C*                  NPC_Spawn_SleeperScreamer_Basement01_0_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2AC0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_BG_C*                                     NPC_Spawn_T02B01_BigGruntRail_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2AC8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPlayerTriggerVolume*                              Trigger_T02_SpawnStreetBG_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2AD0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_Blind_C*                                  NPC_Spawn_Blind_5_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2AD8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_BG_C*                                     NPC_Spawn_T02B01_BG_Office_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2AE0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_SleeperScreamer_Stand_C*                  NPC_Spawn_SleeperScreamer_Patrol_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2AE8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_GruntBase_C*                              NPC_Spawn_T02B01_GruntBase_Patrol_Back_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2AF0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_GruntBase_C*                              NPC_Spawn_T02B01_GruntBase_Patrol_Front_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2AF8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_GruntBase_C*                              NPC_Spawn_T02B04_BigGruntRail_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B00(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_GruntBase_C*                              NPC_Spawn_T02B04_Patrol_Admin_Medium_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B08(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_SleeperScreamer_Stand_C*                  NPC_Spawn_SleeperScreamer_Admin_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B10(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_SleeperScreamer_Stand_C*                  NPC_Spawn_SleeperScreamer_Detective_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B18(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_GruntBase_C*                              NPC_Spawn_T02B04_Patrol_Detective_Medium_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B20(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_GruntBase_C*                              NPC_Spawn_T02B04_Patrol_Detective_Heavy_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B28(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBInvestigationPoint*                               RBInvestigationPoint170_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B30(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBInvestigationPoint*                               RBInvestigationPoint167_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B38(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Spawn_SleeperScreamer_Stand_C*                  NPC_Spawn_SleeperScreamer_PatrolOffices_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B40(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBInvestigationPoint*                               RBInvestigationPoint175_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B48(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBInvestigationPoint*                               RBInvestigationPoint61_50_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B50(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypointGroup*                                    RBWaypointGroup_T02B04_DetectiveShort_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B58(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Ambient_HH_stand_scratchy_C*                    NPC_Spawn_T02B01_Ambient_Front2_0_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B60(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Ambient_HH_stand_scratchy_C*                    NPC_Spawn_T02B01_Ambient_Front1_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B68(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANPC_Ambient_FakeSittingFloor_C*                     NPC_Spawn_T02B02_Ambient_Sully_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B70(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPlayerTriggerVolume*                              RBPlayerTriggerVolume_AI_SpawnCoyle_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B78(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypointGroup*                                    RBWaypointGroup_PatrolFront_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B80(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypointGroup*                                    RBWaypointGroup_AllBasement_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B88(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBWaypoint*                                         RBWaypoint_Coyle_Exec_1_ExecuteUbergraph_PoliceStation_T02_AI_RefProperty; // 0x2B90(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void getBGIntroTimer(float* GruntTimer);
		void B02_AI_SpawnCoyle();
		void B02_AI_Setup();
		void BndEvt__PoliceStation_T02_AI_RBPlayerTriggerVolume_AI_SpawnCoyleEasy_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void B02_AI_SpawnPouncer();
		void B02_AI_SpawnScreamer1();
		void B02_AI_SpawnScreamer2();
		void B02_AI_GeneratorCompleted_Remote();
		void B02_AI_SwapCoyleBehavior();
		void Event_OnResetStage();
		void B07_AI_Update();
		void B02_AI_Berzerker_Basement();
		void B01_AI_SpawnBigGruntRail();
		void B01_AI_ReachCell_Remote();
		void B04_AI_Setup();
		void B04_AI_SpawnPouncer();
		void B01_AI_ManagementAfterControlRoom();
		void B04_AI_AllGatesOpen();
		void B04_AI_CoyleTriggerPassed();
		void AI_DataSetup();
		void B01_AI_ButtonPress_Remote();
		void B04_AI_SpawnCoyle();
		void B01_AI_Spawn_PatrolOfficeBigGrunt();
		void B01_AI_SpawnPatrolScreamer();
		void B01_AI_SpawnPouncer();
		void B01_AI_SpawnGruntPatrol_Medium();
		void BndEvt__PoliceStation_T02_AI_Trigger_T02_SPawnBG_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void B01_AI_SpawnGruntPatrol_Heavy();
		void B01_AI_Spawn_PatrolStreetBigGrunt();
		void B02_AI_Cleaning_Part01();
		void B01_AI_Setup_Remote();
		void B04_AI_ExtendRailBGToAdmin();
		void B04_AI_SpawnGruntAdmin_Medium();
		void B04_AI_ExtendRailBGToLobby();
		void B04_AI_SpawnScreamerAdmin();
		void B04_AI_SpawnScreamerDetective();
		void B04_AI_SpawnGruntDetective_Medium();
		void B04_AI_SpawnGruntDetective_Heavy();
		void B04_AI_Cleaning();
		void B04_AI_SecondGateOpened_Remote();
		void B01_AI_SpawnSecuritySreamer();
		void B04_AI_ThirdGateOpened_Remote();
		void B04_AI_ExtendRailBGToDetective();
		void B01_AI_Spawn_PatrolStreetHeavyBigGrunt();
		void B02_AI_Cleaning_Part02();
		void B01_AI_ManagementBeforeGarage();
		void AI_StartDirectorHigh();
		void AI_StartDirector();
		void B01_AI_Spawn_AmbientPatrolStreet();
		void B02_AI_Spawn_AmbientSully();
		void B04_AI_FirstGateOpened_Remote();
		void B03_AI_GetBackSnitch_Remote();
		void B01_AI_ManagementAfterGenerator();
		void B02_AI_PlayerTriggerAvellanos_Remote();
		void ExecuteUbergraph_PoliceStation_T02_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
