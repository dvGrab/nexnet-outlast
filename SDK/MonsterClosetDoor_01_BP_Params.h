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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.PlayOpenSound
	 */
	struct AMonsterClosetDoor__BP_C_PlayOpenSound_Params
	{
	public:
		bool                                                       Open;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z5DN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.BP_Tick
	 */
	struct AMonsterClosetDoor__BP_C_BP_Tick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Set Height
	 */
	struct AMonsterClosetDoor__BP_C_Set_Height_Params
	{	};

	/**
	 * Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.OnTimelineUpdate
	 */
	struct AMonsterClosetDoor__BP_C_OnTimelineUpdate_Params
	{
	public:
		float                                                      ratio;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.UserConstructionScript
	 */
	struct AMonsterClosetDoor__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.AnimationTimeline__FinishedFunc
	 */
	struct AMonsterClosetDoor__BP_C_AnimationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.AnimationTimeline__UpdateFunc
	 */
	struct AMonsterClosetDoor__BP_C_AnimationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_OnPlayerInClosetChanged
	 */
	struct AMonsterClosetDoor__BP_C_Event_OnPlayerInClosetChanged_Params
	{
	public:
		class ARBPlayer*                                           oldPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_TriggerNPCSpawnAnnouncement
	 */
	struct AMonsterClosetDoor__BP_C_Event_TriggerNPCSpawnAnnouncement_Params
	{
	public:
		ENPCType                                                   NPCType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.SetWarningLightActive
	 */
	struct AMonsterClosetDoor__BP_C_SetWarningLightActive_Params
	{
	public:
		bool                                                       AlarmLightState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_SetNPCSpawnWarningActive
	 */
	struct AMonsterClosetDoor__BP_C_Event_SetNPCSpawnWarningActive_Params
	{
	public:
		bool                                                       bWarningActive;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_ApplyOpenState
	 */
	struct AMonsterClosetDoor__BP_C_Event_ApplyOpenState_Params
	{
	public:
		bool                                                       bOpen;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.ExecuteUbergraph_MonsterClosetDoor-01_BP
	 */
	struct AMonsterClosetDoor__BP_C_ExecuteUbergraph_MonsterClosetDoor__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
