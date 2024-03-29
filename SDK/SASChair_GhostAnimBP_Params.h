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
	 * Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.AnimGraph
	 */
	struct USASChair_GhostAnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.FinishGhost
	 */
	struct USASChair_GhostAnimBP_C_FinishGhost_Params
	{
	public:
		EGhostFinishReason                                         finishReason;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RWIJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GhostFinishCustomReason;                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.AnimNotify_Finished
	 */
	struct USASChair_GhostAnimBP_C_AnimNotify_Finished_Params
	{	};

	/**
	 * Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.BP_InitializeGhost
	 */
	struct USASChair_GhostAnimBP_C_BP_InitializeGhost_Params
	{	};

	/**
	 * Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.OnShouldFaceTVChanged
	 */
	struct USASChair_GhostAnimBP_C_OnShouldFaceTVChanged_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.AnimNotify_EnteredTVState
	 */
	struct USASChair_GhostAnimBP_C_AnimNotify_EnteredTVState_Params
	{	};

	/**
	 * Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.BlueprintInitializeAnimation
	 */
	struct USASChair_GhostAnimBP_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.BlueprintUpdateAnimation
	 */
	struct USASChair_GhostAnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.ExecuteUbergraph_SASChair_GhostAnimBP
	 */
	struct USASChair_GhostAnimBP_C_ExecuteUbergraph_SASChair_GhostAnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.NewEventDispatcher_0__DelegateSignature
	 */
	struct USASChair_GhostAnimBP_C_NewEventDispatcher_0__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
