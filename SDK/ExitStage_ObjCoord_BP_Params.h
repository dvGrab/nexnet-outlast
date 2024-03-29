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
	 * Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.PlayCountdownVO
	 */
	struct AExitStage_ObjCoord_BP_C_PlayCountdownVO_Params
	{	};

	/**
	 * Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.SetTrainArrivalTime
	 */
	struct AExitStage_ObjCoord_BP_C_SetTrainArrivalTime_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.SetCountdownTime
	 */
	struct AExitStage_ObjCoord_BP_C_SetCountdownTime_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UR35[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.Event_OnCoordinatorStateChanged
	 */
	struct AExitStage_ObjCoord_BP_C_Event_OnCoordinatorStateChanged_Params
	{
	public:
		EObjectiveCoordinatorState                                 oldState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EObjectiveCoordinatorState                                 newState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.ReceiveEndPlay
	 */
	struct AExitStage_ObjCoord_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.Event_OnExitStageObjectiveStateChanged
	 */
	struct AExitStage_ObjCoord_BP_C_Event_OnExitStageObjectiveStateChanged_Params
	{
	public:
		EExitStageObjectiveState                                   objectiveState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.ReceiveTick
	 */
	struct AExitStage_ObjCoord_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.Event_OnResetStage
	 */
	struct AExitStage_ObjCoord_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.ExecuteUbergraph_ExitStage_ObjCoord_BP
	 */
	struct AExitStage_ObjCoord_BP_C_ExecuteUbergraph_ExitStage_ObjCoord_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
