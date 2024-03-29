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
	 * Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.GetLookAtLocation
	 */
	struct ACont_Health_Medkit_BP_C_GetLookAtLocation_Params
	{
	public:
		struct FVector                                             outLookAtLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.GetInteractionPawnLocation
	 */
	struct ACont_Health_Medkit_BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PKSA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4IDQ[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.PlaySpecialMoveAnimation
	 */
	struct ACont_Health_Medkit_BP_C_PlaySpecialMoveAnimation_Params
	{
	public:
		class ARBPawn*                                             interactorPawn;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RIIO[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.UserConstructionScript
	 */
	struct ACont_Health_Medkit_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.Event_SnapToState
	 */
	struct ACont_Health_Medkit_BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.Event_OnIsOpenedChanged
	 */
	struct ACont_Health_Medkit_BP_C_Event_OnIsOpenedChanged_Params
	{	};

	/**
	 * Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.OnPawnPlaySpecialMoveAnimation
	 */
	struct ACont_Health_Medkit_BP_C_OnPawnPlaySpecialMoveAnimation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.Event_OnResetStage
	 */
	struct ACont_Health_Medkit_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.ReceiveBeginPlay
	 */
	struct ACont_Health_Medkit_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.ExecuteUbergraph_Cont-Health-Medkit_BP
	 */
	struct ACont_Health_Medkit_BP_C_ExecuteUbergraph_Cont_Health_Medkit_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
