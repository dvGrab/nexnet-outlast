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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.TurnOnFlipSwitches
	 */
	struct USwitchesMatchPanelComponent_BP_C_TurnOnFlipSwitches_Params
	{	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.TurnOffFlipSwitches
	 */
	struct USwitchesMatchPanelComponent_BP_C_TurnOffFlipSwitches_Params
	{	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.ShouldBPTick
	 */
	struct USwitchesMatchPanelComponent_BP_C_ShouldBPTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WFF1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.GetInteractionDiodeColor
	 */
	struct USwitchesMatchPanelComponent_BP_C_GetInteractionDiodeColor_Params
	{
	public:
		int32_t                                                    DiodeIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        DiodeColor;                                              // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.RefreshInteractionDiodesState
	 */
	struct USwitchesMatchPanelComponent_BP_C_RefreshInteractionDiodesState_Params
	{
	public:
		bool                                                       bForceColor;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7JPN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        ForcedColor;                                             // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.AppendInteractionCountDiode
	 */
	struct USwitchesMatchPanelComponent_BP_C_AppendInteractionCountDiode_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.OnGeneratorInteractibleStateChange
	 */
	struct USwitchesMatchPanelComponent_BP_C_OnGeneratorInteractibleStateChange_Params
	{	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.GetInteractionPawnLocation
	 */
	struct USwitchesMatchPanelComponent_BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8MV0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QYXO[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnPanelSuccessStateChanged
	 */
	struct USwitchesMatchPanelComponent_BP_C_Event_OnPanelSuccessStateChanged_Params
	{	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.ReceiveBeginPlay
	 */
	struct USwitchesMatchPanelComponent_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnNumbersOfInteractionChanged
	 */
	struct USwitchesMatchPanelComponent_BP_C_Event_OnNumbersOfInteractionChanged_Params
	{	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnCurrentPuzzleChanged
	 */
	struct USwitchesMatchPanelComponent_BP_C_Event_OnCurrentPuzzleChanged_Params
	{	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.ReceiveTick
	 */
	struct USwitchesMatchPanelComponent_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnResetStage
	 */
	struct USwitchesMatchPanelComponent_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnCurrentPuzzleReset
	 */
	struct USwitchesMatchPanelComponent_BP_C_Event_OnCurrentPuzzleReset_Params
	{	};

	/**
	 * Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.ExecuteUbergraph_SwitchesMatchPanelComponent_BP
	 */
	struct USwitchesMatchPanelComponent_BP_C_ExecuteUbergraph_SwitchesMatchPanelComponent_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JNR9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
