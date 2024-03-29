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
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.GetTotalOfPlayers
	 */
	struct ARegroup_Button_BP_C_GetTotalOfPlayers_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.GetNumberOfPlayersInZone
	 */
	struct ARegroup_Button_BP_C_GetNumberOfPlayersInZone_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.SignAnim
	 */
	struct ARegroup_Button_BP_C_SignAnim_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LGVZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Current;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMeshComponent*                                playerSign;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.UserConstructionScript
	 */
	struct ARegroup_Button_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.UpdatePlayerSign
	 */
	struct ARegroup_Button_BP_C_UpdatePlayerSign_Params
	{
	public:
		int32_t                                                    NumberOfPlayer;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumberOfPlayerInTheZone;                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.ReceiveTick
	 */
	struct ARegroup_Button_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.OnObjectiveStarted
	 */
	struct ARegroup_Button_BP_C_OnObjectiveStarted_Params
	{
	public:
		class ARBRegroupObjectiveCoordinator*                      coordinator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.OnObjectiveEnded
	 */
	struct ARegroup_Button_BP_C_OnObjectiveEnded_Params
	{	};

	/**
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.Event_OnResetStage
	 */
	struct ARegroup_Button_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.OnNumberOfPlayerInZoneChanged
	 */
	struct ARegroup_Button_BP_C_OnNumberOfPlayerInZoneChanged_Params
	{
	public:
		int32_t                                                    numberOfPlayers;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.OnRegroupObjectiveStateChanged
	 */
	struct ARegroup_Button_BP_C_OnRegroupObjectiveStateChanged_Params
	{
	public:
		ERegroupObjectiveState                                     newState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.OnTotalNumberOfPlayersChanged
	 */
	struct ARegroup_Button_BP_C_OnTotalNumberOfPlayersChanged_Params
	{
	public:
		int32_t                                                    numberOfPlayers;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.OnRegroupActionFailed
	 */
	struct ARegroup_Button_BP_C_OnRegroupActionFailed_Params
	{	};

	/**
	 * Function Regroup_Button_BP.Regroup_Button_BP_C.ExecuteUbergraph_Regroup_Button_BP
	 */
	struct ARegroup_Button_BP_C_ExecuteUbergraph_Regroup_Button_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
