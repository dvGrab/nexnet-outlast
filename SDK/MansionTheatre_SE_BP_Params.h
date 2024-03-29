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
	 * Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.OnRep_IsHandOut
	 */
	struct AMansionTheatre_SE_BP_C_OnRep_IsHandOut_Params
	{	};

	/**
	 * Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.IsInteractionPossible
	 */
	struct AMansionTheatre_SE_BP_C_IsInteractionPossible_Params
	{
	public:
		class ARBPawn*                                             interactorPawn;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.GetInteractionPawnLocation
	 */
	struct AMansionTheatre_SE_BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BLTL[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JKB4[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.UserConstructionScript
	 */
	struct AMansionTheatre_SE_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.OnPawnPlaySpecialMoveAnimation
	 */
	struct AMansionTheatre_SE_BP_C_OnPawnPlaySpecialMoveAnimation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.appleme
	 */
	struct AMansionTheatre_SE_BP_C_appleme_Params
	{	};

	/**
	 * Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.Event_OnResetStage
	 */
	struct AMansionTheatre_SE_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.ReceiveBeginPlay
	 */
	struct AMansionTheatre_SE_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.DelayedSetInteractible
	 */
	struct AMansionTheatre_SE_BP_C_DelayedSetInteractible_Params
	{
	public:
		bool                                                       bInteractible;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.UpdateLookAt
	 */
	struct AMansionTheatre_SE_BP_C_UpdateLookAt_Params
	{	};

	/**
	 * Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.HandOut
	 */
	struct AMansionTheatre_SE_BP_C_HandOut_Params
	{	};

	/**
	 * Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AMansionTheatre_SE_BP_C_BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L9HD[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.ExecuteUbergraph_MansionTheatre_SE_BP
	 */
	struct AMansionTheatre_SE_BP_C_ExecuteUbergraph_MansionTheatre_SE_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F3Q3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
