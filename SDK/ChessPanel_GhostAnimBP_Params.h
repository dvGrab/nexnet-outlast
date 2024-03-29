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
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimGraph
	 */
	struct UChessPanel_GhostAnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.UpdateResetMove
	 */
	struct UChessPanel_GhostAnimBP_C_UpdateResetMove_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.InitPanelData
	 */
	struct UChessPanel_GhostAnimBP_C_InitPanelData_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.SetHandIK
	 */
	struct UChessPanel_GhostAnimBP_C_SetHandIK_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.ManageIK
	 */
	struct UChessPanel_GhostAnimBP_C_ManageIK_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.ManageLookAt
	 */
	struct UChessPanel_GhostAnimBP_C_ManageLookAt_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.Reset
	 */
	struct UChessPanel_GhostAnimBP_C_Reset_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.FinishGhost
	 */
	struct UChessPanel_GhostAnimBP_C_FinishGhost_Params
	{
	public:
		EGhostFinishReason                                         finishReason;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_97EJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GhostFinishCustomReason;                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_AD494F0644E31E08041F17AD085DAAAC
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_AD494F0644E31E08041F17AD085DAAAC_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_59F4F9784B5F8694C8614BAC294CBF8E
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_59F4F9784B5F8694C8614BAC294CBF8E_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E1B7D4014AFA5C34E625D7A7DBF9D51A
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E1B7D4014AFA5C34E625D7A7DBF9D51A_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_F4B9CD8A45F0344DDE1CECA00B9AD300
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_F4B9CD8A45F0344DDE1CECA00B9AD300_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_4C33560A4AAFC6A5A42B12B5193043E1
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_4C33560A4AAFC6A5A42B12B5193043E1_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_39CAA8F04E0434359EF16B8A82F833BE
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_39CAA8F04E0434359EF16B8A82F833BE_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_C9EBFC75468806B14911D49EE2295D6F
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_C9EBFC75468806B14911D49EE2295D6F_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_B6D70405436D8EFBE67F00B9807B4D62
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_B6D70405436D8EFBE67F00B9807B4D62_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_76F6CBA34D57ED3DD6DFBEAEE55CB37D
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_76F6CBA34D57ED3DD6DFBEAEE55CB37D_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_8D2CFEC946FEB7288E179D9F58BA2FFD
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_8D2CFEC946FEB7288E179D9F58BA2FFD_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_D5D8BF244510D5CE0BDBBFB3DDB999E2
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_D5D8BF244510D5CE0BDBBFB3DDB999E2_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_7C247B9C4F3274E175CBD68F0C751193
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_7C247B9C4F3274E175CBD68F0C751193_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F9D509EB42025585F723D18A7073B0BE
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F9D509EB42025585F723D18A7073B0BE_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_255CE84D4A61A87BBF29018177C50B57
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_255CE84D4A61A87BBF29018177C50B57_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_625E10DD424F05D1CC7C8B8B6F9E134A
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_625E10DD424F05D1CC7C8B8B6F9E134A_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_A23CE4EB417B01905D1DA38AEB297B56
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_A23CE4EB417B01905D1DA38AEB297B56_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_92B7E6C246CF2AEB021B29A9872A68EF
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_92B7E6C246CF2AEB021B29A9872A68EF_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_07303B3F465FE270B3C642B69EF090B4
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_07303B3F465FE270B3C642B69EF090B4_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_2FAD0A5342380D899375A0900E7EE358
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_2FAD0A5342380D899375A0900E7EE358_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F358446647921990ECA0BEB6DAB864E7
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F358446647921990ECA0BEB6DAB864E7_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_012879E54B7C38C0AC54A582DD040312
	 */
	struct UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_012879E54B7C38C0AC54A582DD040312_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.BlueprintUpdateAnimation
	 */
	struct UChessPanel_GhostAnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.BP_InitializeGhost
	 */
	struct UChessPanel_GhostAnimBP_C_BP_InitializeGhost_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EntryDone
	 */
	struct UChessPanel_GhostAnimBP_C_AnimNotify_EntryDone_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_Finished
	 */
	struct UChessPanel_GhostAnimBP_C_AnimNotify_Finished_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_RandomTaunt
	 */
	struct UChessPanel_GhostAnimBP_C_AnimNotify_RandomTaunt_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_ExitState
	 */
	struct UChessPanel_GhostAnimBP_C_AnimNotify_ExitState_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_WaitForOpponent
	 */
	struct UChessPanel_GhostAnimBP_C_AnimNotify_WaitForOpponent_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EndRound
	 */
	struct UChessPanel_GhostAnimBP_C_AnimNotify_EndRound_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EnteredMovePiece
	 */
	struct UChessPanel_GhostAnimBP_C_AnimNotify_EnteredMovePiece_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EnteredRevertMove
	 */
	struct UChessPanel_GhostAnimBP_C_AnimNotify_EnteredRevertMove_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_RevertMoveFullyBlended
	 */
	struct UChessPanel_GhostAnimBP_C_AnimNotify_RevertMoveFullyBlended_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EnteredWaitForTurn
	 */
	struct UChessPanel_GhostAnimBP_C_AnimNotify_EnteredWaitForTurn_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_DoneMovingEvent
	 */
	struct UChessPanel_GhostAnimBP_C_AnimNotify_DoneMovingEvent_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_FullyBlendedMovePiece
	 */
	struct UChessPanel_GhostAnimBP_C_AnimNotify_FullyBlendedMovePiece_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_LeftMovePiece
	 */
	struct UChessPanel_GhostAnimBP_C_AnimNotify_LeftMovePiece_Params
	{	};

	/**
	 * Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.ExecuteUbergraph_ChessPanel_GhostAnimBP
	 */
	struct UChessPanel_GhostAnimBP_C_ExecuteUbergraph_ChessPanel_GhostAnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
