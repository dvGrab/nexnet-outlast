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
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.GetFaceFXSkeletalMeshComponent
	 */
	struct ABaseAnimatedQuestGiver_BP_C_GetFaceFXSkeletalMeshComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.SetAnimationParameters
	 */
	struct ABaseAnimatedQuestGiver_BP_C_SetAnimationParameters_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FLII[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class Uquest_AnimBP_C*                                     NewParam;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.TryPlayHailing
	 */
	struct ABaseAnimatedQuestGiver_BP_C_TryPlayHailing_Params
	{	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.GetInteractionPawnLocation
	 */
	struct ABaseAnimatedQuestGiver_BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3NJV[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABaseAnimatedQuestGiver_BP_C_BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ELEW[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.OnFocused
	 */
	struct ABaseAnimatedQuestGiver_BP_C_OnFocused_Params
	{	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.BndEvt__HailingZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABaseAnimatedQuestGiver_BP_C_BndEvt__HailingZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.OnItemPurchased
	 */
	struct ABaseAnimatedQuestGiver_BP_C_OnItemPurchased_Params
	{
	public:
		class ARBController*                                       RBController;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ItemId;                                                  // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.OnPawnPlaySpecialMoveAnimation
	 */
	struct ABaseAnimatedQuestGiver_BP_C_OnPawnPlaySpecialMoveAnimation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Serve
	 */
	struct ABaseAnimatedQuestGiver_BP_C_Serve_Params
	{	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.NoticeStart
	 */
	struct ABaseAnimatedQuestGiver_BP_C_NoticeStart_Params
	{	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.NoticeStop
	 */
	struct ABaseAnimatedQuestGiver_BP_C_NoticeStop_Params
	{	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Purchase
	 */
	struct ABaseAnimatedQuestGiver_BP_C_Purchase_Params
	{	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Stop Serve
	 */
	struct ABaseAnimatedQuestGiver_BP_C_Stop_Serve_Params
	{	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Onpop
	 */
	struct ABaseAnimatedQuestGiver_BP_C_Onpop_Params
	{	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.UpdateLookAt
	 */
	struct ABaseAnimatedQuestGiver_BP_C_UpdateLookAt_Params
	{	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Event_PostInitializeComponents
	 */
	struct ABaseAnimatedQuestGiver_BP_C_Event_PostInitializeComponents_Params
	{	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Event_OnLocalPlayerInteracted
	 */
	struct ABaseAnimatedQuestGiver_BP_C_Event_OnLocalPlayerInteracted_Params
	{	};

	/**
	 * Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.ExecuteUbergraph_BaseAnimatedQuestGiver_BP
	 */
	struct ABaseAnimatedQuestGiver_BP_C_ExecuteUbergraph_BaseAnimatedQuestGiver_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
