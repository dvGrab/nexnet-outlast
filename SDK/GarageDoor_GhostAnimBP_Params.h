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
	 * Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.AnimGraph
	 */
	struct UGarageDoor_GhostAnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.FinishGhost
	 */
	struct UGarageDoor_GhostAnimBP_C_FinishGhost_Params
	{
	public:
		EGhostFinishReason                                         finishReason;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CEET[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GhostFinishCustomReason;                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.GetCurrentGarageDoorHeightRatio
	 */
	struct UGarageDoor_GhostAnimBP_C_GetCurrentGarageDoorHeightRatio_Params
	{
	public:
		float                                                      HeightRatio;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_D40F81CF4CF87C842BB5FCBC27E67962
	 */
	struct UGarageDoor_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_D40F81CF4CF87C842BB5FCBC27E67962_Params
	{	};

	/**
	 * Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E9620A0540FA1E73238AF8A84A884782
	 */
	struct UGarageDoor_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E9620A0540FA1E73238AF8A84A884782_Params
	{	};

	/**
	 * Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_SequenceEvaluator_5AAA0EDA49095AF564260C9435CEF136
	 */
	struct UGarageDoor_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_SequenceEvaluator_5AAA0EDA49095AF564260C9435CEF136_Params
	{	};

	/**
	 * Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_TransitionResult_A5EE02094A5E17E6834EB185ADA9BE5D
	 */
	struct UGarageDoor_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_TransitionResult_A5EE02094A5E17E6834EB185ADA9BE5D_Params
	{	};

	/**
	 * Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.BP_InitializeGhost
	 */
	struct UGarageDoor_GhostAnimBP_C_BP_InitializeGhost_Params
	{	};

	/**
	 * Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.AnimNotify_ActionDone
	 */
	struct UGarageDoor_GhostAnimBP_C_AnimNotify_ActionDone_Params
	{	};

	/**
	 * Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.AnimNotify_StepInDone
	 */
	struct UGarageDoor_GhostAnimBP_C_AnimNotify_StepInDone_Params
	{	};

	/**
	 * Function GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C.ExecuteUbergraph_GarageDoor_GhostAnimBP
	 */
	struct UGarageDoor_GhostAnimBP_C_ExecuteUbergraph_GarageDoor_GhostAnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
