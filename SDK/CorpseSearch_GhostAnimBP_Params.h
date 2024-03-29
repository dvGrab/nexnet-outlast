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
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimGraph
	 */
	struct UCorpseSearch_GhostAnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.GetSpawnedItem
	 */
	struct UCorpseSearch_GhostAnimBP_C_GetSpawnedItem_Params
	{
	public:
		class ARBPickup*                                           Item;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.FinishGhost
	 */
	struct UCorpseSearch_GhostAnimBP_C_FinishGhost_Params
	{
	public:
		EGhostFinishReason                                         finishReason;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BY3M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GhostFinishCustomReason;                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.IsGameplayCompleted
	 */
	struct UCorpseSearch_GhostAnimBP_C_IsGameplayCompleted_Params
	{
	public:
		bool                                                       completed;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_GhostAnimBP_AnimGraphNode_TransitionResult_8AF3320C485D5B1C8392A0BDC3F17B9E
	 */
	struct UCorpseSearch_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_GhostAnimBP_AnimGraphNode_TransitionResult_8AF3320C485D5B1C8392A0BDC3F17B9E_Params
	{	};

	/**
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_GhostAnimBP_AnimGraphNode_TransitionResult_78B43B654C0CB9CF6336D9B014C0A002
	 */
	struct UCorpseSearch_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CorpseSearch_GhostAnimBP_AnimGraphNode_TransitionResult_78B43B654C0CB9CF6336D9B014C0A002_Params
	{	};

	/**
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.BP_InitializeGhost
	 */
	struct UCorpseSearch_GhostAnimBP_C_BP_InitializeGhost_Params
	{	};

	/**
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_EntryDone
	 */
	struct UCorpseSearch_GhostAnimBP_C_AnimNotify_EntryDone_Params
	{	};

	/**
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_Finished
	 */
	struct UCorpseSearch_GhostAnimBP_C_AnimNotify_Finished_Params
	{	};

	/**
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_AttachObject
	 */
	struct UCorpseSearch_GhostAnimBP_C_AnimNotify_AttachObject_Params
	{	};

	/**
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.BP_ClearGhost
	 */
	struct UCorpseSearch_GhostAnimBP_C_BP_ClearGhost_Params
	{	};

	/**
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_Stop Interact
	 */
	struct UCorpseSearch_GhostAnimBP_C_AnimNotify_StopInteract_Params
	{	};

	/**
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.AnimNotify_EnterDone
	 */
	struct UCorpseSearch_GhostAnimBP_C_AnimNotify_EnterDone_Params
	{	};

	/**
	 * Function CorpseSearch_GhostAnimBP.CorpseSearch_GhostAnimBP_C.ExecuteUbergraph_CorpseSearch_GhostAnimBP
	 */
	struct UCorpseSearch_GhostAnimBP_C_ExecuteUbergraph_CorpseSearch_GhostAnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A3T2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
