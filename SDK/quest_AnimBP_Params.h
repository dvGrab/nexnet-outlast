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
	 * Function quest_AnimBP.quest_AnimBP_C.AnimGraph
	 */
	struct Uquest_AnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.BlueprintUpdateAnimation
	 */
	struct Uquest_AnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.BlueprintInitializeAnimation
	 */
	struct Uquest_AnimBP_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_InGameIdle
	 */
	struct Uquest_AnimBP_C_AnimNotify_InGameIdle_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_ExitGameIdle
	 */
	struct Uquest_AnimBP_C_AnimNotify_ExitGameIdle_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_quest_AnimBP_AnimGraphNode_TransitionResult_FA4FB40B408066EC5CCBC99638BD8F72
	 */
	struct Uquest_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_quest_AnimBP_AnimGraphNode_TransitionResult_FA4FB40B408066EC5CCBC99638BD8F72_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.ReactToPlayerPurchase
	 */
	struct Uquest_AnimBP_C_ReactToPlayerPurchase_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_quest_AnimBP_AnimGraphNode_TransitionResult_1EAD20D9478CB251B162C79680F1644C
	 */
	struct Uquest_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_quest_AnimBP_AnimGraphNode_TransitionResult_1EAD20D9478CB251B162C79680F1644C_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.FinishedPlayingReaction
	 */
	struct Uquest_AnimBP_C_FinishedPlayingReaction_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_InServingPlayer
	 */
	struct Uquest_AnimBP_C_AnimNotify_InServingPlayer_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_ExitServingPlayer
	 */
	struct Uquest_AnimBP_C_AnimNotify_ExitServingPlayer_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_quest_AnimBP_AnimGraphNode_TransitionResult_54DE063948BB931ED73B60A6CA91381A
	 */
	struct Uquest_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_quest_AnimBP_AnimGraphNode_TransitionResult_54DE063948BB931ED73B60A6CA91381A_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_ReactionReset
	 */
	struct Uquest_AnimBP_C_AnimNotify_ReactionReset_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_StartNotice
	 */
	struct Uquest_AnimBP_C_AnimNotify_StartNotice_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_Callout
	 */
	struct Uquest_AnimBP_C_AnimNotify_Callout_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.CategoryChangeUP
	 */
	struct Uquest_AnimBP_C_CategoryChangeUP_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.CategoryChangeDOWN
	 */
	struct Uquest_AnimBP_C_CategoryChangeDOWN_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_quest_AnimBP_AnimGraphNode_TransitionResult_763DC7EF410C9A88DD19E4BD84B86A67
	 */
	struct Uquest_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_quest_AnimBP_AnimGraphNode_TransitionResult_763DC7EF410C9A88DD19E4BD84B86A67_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.StartShopping
	 */
	struct Uquest_AnimBP_C_StartShopping_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.StopShopping
	 */
	struct Uquest_AnimBP_C_StopShopping_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.StartServing
	 */
	struct Uquest_AnimBP_C_StartServing_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_TaskReset
	 */
	struct Uquest_AnimBP_C_AnimNotify_TaskReset_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AcceptTask
	 */
	struct Uquest_AnimBP_C_AcceptTask_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.CompleteTask
	 */
	struct Uquest_AnimBP_C_CompleteTask_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_CategoryReset
	 */
	struct Uquest_AnimBP_C_AnimNotify_CategoryReset_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_ProgressReset
	 */
	struct Uquest_AnimBP_C_AnimNotify_ProgressReset_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_Reset
	 */
	struct Uquest_AnimBP_C_AnimNotify_Reset_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.BuySomethin
	 */
	struct Uquest_AnimBP_C_BuySomethin_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_GetBusy
	 */
	struct Uquest_AnimBP_C_AnimNotify_GetBusy_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_NotBusy
	 */
	struct Uquest_AnimBP_C_AnimNotify_NotBusy_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_PurchaseDone
	 */
	struct Uquest_AnimBP_C_AnimNotify_PurchaseDone_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.HeadGesture
	 */
	struct Uquest_AnimBP_C_HeadGesture_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.UpperBodyGesture
	 */
	struct Uquest_AnimBP_C_UpperBodyGesture_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_IsWaitBreaker
	 */
	struct Uquest_AnimBP_C_AnimNotify_IsWaitBreaker_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_IsNoticeBreaker
	 */
	struct Uquest_AnimBP_C_AnimNotify_IsNoticeBreaker_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.AnimNotify_EndNotice
	 */
	struct Uquest_AnimBP_C_AnimNotify_EndNotice_Params
	{	};

	/**
	 * Function quest_AnimBP.quest_AnimBP_C.ExecuteUbergraph_quest_AnimBP
	 */
	struct Uquest_AnimBP_C_ExecuteUbergraph_quest_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
