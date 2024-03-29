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
	 * Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.GetProgressionRatio
	 */
	struct UCoopButton_OperatableComponent_BP_C_GetProgressionRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.OnRep_OperatedActive
	 */
	struct UCoopButton_OperatableComponent_BP_C_OnRep_OperatedActive_Params
	{	};

	/**
	 * Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.GetOperatorStopAnimation
	 */
	struct UCoopButton_OperatableComponent_BP_C_GetOperatorStopAnimation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFirstPerson;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BKW9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.GetOperatorLoopAnimation
	 */
	struct UCoopButton_OperatableComponent_BP_C_GetOperatorLoopAnimation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFirstPerson;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z2WK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.GetOperatorStartAnimation
	 */
	struct UCoopButton_OperatableComponent_BP_C_GetOperatorStartAnimation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFirstPerson;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HHYA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.OnTriggerableActivated
	 */
	struct UCoopButton_OperatableComponent_BP_C_OnTriggerableActivated_Params
	{
	public:
		class ARBTriggerable*                                      triggerable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.OnPawnDoSpecialMoveAction
	 */
	struct UCoopButton_OperatableComponent_BP_C_OnPawnDoSpecialMoveAction_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.Event_OnEnabledChanged
	 */
	struct UCoopButton_OperatableComponent_BP_C_Event_OnEnabledChanged_Params
	{	};

	/**
	 * Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.Event_DelayedReleaseButtonServerTimestampChanged
	 */
	struct UCoopButton_OperatableComponent_BP_C_Event_DelayedReleaseButtonServerTimestampChanged_Params
	{	};

	/**
	 * Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.ExecuteUbergraph_CoopButton_OperatableComponent_BP
	 */
	struct UCoopButton_OperatableComponent_BP_C_ExecuteUbergraph_CoopButton_OperatableComponent_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
