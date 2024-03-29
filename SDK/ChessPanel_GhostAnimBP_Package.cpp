/**
 * Name: TRIALS
 * Version: FINAL
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UChessPanel_GhostAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimGraph");
		
		UChessPanel_GhostAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.UpdateResetMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChessPanel_GhostAnimBP_C::UpdateResetMove(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.UpdateResetMove");
		
		UChessPanel_GhostAnimBP_C_UpdateResetMove_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.InitPanelData
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::InitPanelData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.InitPanelData");
		
		UChessPanel_GhostAnimBP_C_InitPanelData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.SetHandIK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChessPanel_GhostAnimBP_C::SetHandIK(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.SetHandIK");
		
		UChessPanel_GhostAnimBP_C_SetHandIK_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.ManageIK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChessPanel_GhostAnimBP_C::ManageIK(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.ManageIK");
		
		UChessPanel_GhostAnimBP_C_ManageIK_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.ManageLookAt
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::ManageLookAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.ManageLookAt");
		
		UChessPanel_GhostAnimBP_C_ManageLookAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.Reset
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.Reset");
		
		UChessPanel_GhostAnimBP_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.FinishGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGhostFinishReason                                 finishReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GhostFinishCustomReason                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UChessPanel_GhostAnimBP_C::FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.FinishGhost");
		
		UChessPanel_GhostAnimBP_C_FinishGhost_Params params {};
		params.finishReason = finishReason;
		params.GhostFinishCustomReason = GhostFinishCustomReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_AD494F0644E31E08041F17AD085DAAAC
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_AD494F0644E31E08041F17AD085DAAAC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_AD494F0644E31E08041F17AD085DAAAC");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_AD494F0644E31E08041F17AD085DAAAC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_59F4F9784B5F8694C8614BAC294CBF8E
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_59F4F9784B5F8694C8614BAC294CBF8E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_59F4F9784B5F8694C8614BAC294CBF8E");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_59F4F9784B5F8694C8614BAC294CBF8E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E1B7D4014AFA5C34E625D7A7DBF9D51A
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E1B7D4014AFA5C34E625D7A7DBF9D51A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E1B7D4014AFA5C34E625D7A7DBF9D51A");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E1B7D4014AFA5C34E625D7A7DBF9D51A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_F4B9CD8A45F0344DDE1CECA00B9AD300
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_F4B9CD8A45F0344DDE1CECA00B9AD300()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_F4B9CD8A45F0344DDE1CECA00B9AD300");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_F4B9CD8A45F0344DDE1CECA00B9AD300_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_4C33560A4AAFC6A5A42B12B5193043E1
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_4C33560A4AAFC6A5A42B12B5193043E1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_4C33560A4AAFC6A5A42B12B5193043E1");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_4C33560A4AAFC6A5A42B12B5193043E1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_39CAA8F04E0434359EF16B8A82F833BE
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_39CAA8F04E0434359EF16B8A82F833BE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_39CAA8F04E0434359EF16B8A82F833BE");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_39CAA8F04E0434359EF16B8A82F833BE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_C9EBFC75468806B14911D49EE2295D6F
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_C9EBFC75468806B14911D49EE2295D6F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_C9EBFC75468806B14911D49EE2295D6F");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_C9EBFC75468806B14911D49EE2295D6F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_B6D70405436D8EFBE67F00B9807B4D62
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_B6D70405436D8EFBE67F00B9807B4D62()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_B6D70405436D8EFBE67F00B9807B4D62");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_B6D70405436D8EFBE67F00B9807B4D62_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_76F6CBA34D57ED3DD6DFBEAEE55CB37D
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_76F6CBA34D57ED3DD6DFBEAEE55CB37D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_76F6CBA34D57ED3DD6DFBEAEE55CB37D");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_76F6CBA34D57ED3DD6DFBEAEE55CB37D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_8D2CFEC946FEB7288E179D9F58BA2FFD
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_8D2CFEC946FEB7288E179D9F58BA2FFD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_8D2CFEC946FEB7288E179D9F58BA2FFD");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_8D2CFEC946FEB7288E179D9F58BA2FFD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_D5D8BF244510D5CE0BDBBFB3DDB999E2
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_D5D8BF244510D5CE0BDBBFB3DDB999E2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_D5D8BF244510D5CE0BDBBFB3DDB999E2");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_D5D8BF244510D5CE0BDBBFB3DDB999E2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_7C247B9C4F3274E175CBD68F0C751193
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_7C247B9C4F3274E175CBD68F0C751193()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_7C247B9C4F3274E175CBD68F0C751193");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_7C247B9C4F3274E175CBD68F0C751193_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F9D509EB42025585F723D18A7073B0BE
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F9D509EB42025585F723D18A7073B0BE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F9D509EB42025585F723D18A7073B0BE");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F9D509EB42025585F723D18A7073B0BE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_255CE84D4A61A87BBF29018177C50B57
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_255CE84D4A61A87BBF29018177C50B57()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_255CE84D4A61A87BBF29018177C50B57");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_255CE84D4A61A87BBF29018177C50B57_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_625E10DD424F05D1CC7C8B8B6F9E134A
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_625E10DD424F05D1CC7C8B8B6F9E134A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_625E10DD424F05D1CC7C8B8B6F9E134A");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_625E10DD424F05D1CC7C8B8B6F9E134A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_A23CE4EB417B01905D1DA38AEB297B56
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_A23CE4EB417B01905D1DA38AEB297B56()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_A23CE4EB417B01905D1DA38AEB297B56");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_A23CE4EB417B01905D1DA38AEB297B56_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_92B7E6C246CF2AEB021B29A9872A68EF
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_92B7E6C246CF2AEB021B29A9872A68EF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_92B7E6C246CF2AEB021B29A9872A68EF");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_92B7E6C246CF2AEB021B29A9872A68EF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_07303B3F465FE270B3C642B69EF090B4
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_07303B3F465FE270B3C642B69EF090B4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_07303B3F465FE270B3C642B69EF090B4");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_07303B3F465FE270B3C642B69EF090B4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_2FAD0A5342380D899375A0900E7EE358
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_2FAD0A5342380D899375A0900E7EE358()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_2FAD0A5342380D899375A0900E7EE358");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_2FAD0A5342380D899375A0900E7EE358_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F358446647921990ECA0BEB6DAB864E7
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F358446647921990ECA0BEB6DAB864E7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F358446647921990ECA0BEB6DAB864E7");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F358446647921990ECA0BEB6DAB864E7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_012879E54B7C38C0AC54A582DD040312
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_012879E54B7C38C0AC54A582DD040312()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_012879E54B7C38C0AC54A582DD040312");
		
		UChessPanel_GhostAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_012879E54B7C38C0AC54A582DD040312_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChessPanel_GhostAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.BlueprintUpdateAnimation");
		
		UChessPanel_GhostAnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.BP_InitializeGhost
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::BP_InitializeGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.BP_InitializeGhost");
		
		UChessPanel_GhostAnimBP_C_BP_InitializeGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EntryDone
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::AnimNotify_EntryDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EntryDone");
		
		UChessPanel_GhostAnimBP_C_AnimNotify_EntryDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_Finished
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::AnimNotify_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_Finished");
		
		UChessPanel_GhostAnimBP_C_AnimNotify_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_RandomTaunt
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::AnimNotify_RandomTaunt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_RandomTaunt");
		
		UChessPanel_GhostAnimBP_C_AnimNotify_RandomTaunt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_ExitState
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::AnimNotify_ExitState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_ExitState");
		
		UChessPanel_GhostAnimBP_C_AnimNotify_ExitState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_WaitForOpponent
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::AnimNotify_WaitForOpponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_WaitForOpponent");
		
		UChessPanel_GhostAnimBP_C_AnimNotify_WaitForOpponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EndRound
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::AnimNotify_EndRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EndRound");
		
		UChessPanel_GhostAnimBP_C_AnimNotify_EndRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EnteredMovePiece
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::AnimNotify_EnteredMovePiece()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EnteredMovePiece");
		
		UChessPanel_GhostAnimBP_C_AnimNotify_EnteredMovePiece_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EnteredRevertMove
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::AnimNotify_EnteredRevertMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EnteredRevertMove");
		
		UChessPanel_GhostAnimBP_C_AnimNotify_EnteredRevertMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_RevertMoveFullyBlended
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::AnimNotify_RevertMoveFullyBlended()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_RevertMoveFullyBlended");
		
		UChessPanel_GhostAnimBP_C_AnimNotify_RevertMoveFullyBlended_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EnteredWaitForTurn
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::AnimNotify_EnteredWaitForTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_EnteredWaitForTurn");
		
		UChessPanel_GhostAnimBP_C_AnimNotify_EnteredWaitForTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_DoneMovingEvent
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::AnimNotify_DoneMovingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_DoneMovingEvent");
		
		UChessPanel_GhostAnimBP_C_AnimNotify_DoneMovingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_FullyBlendedMovePiece
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::AnimNotify_FullyBlendedMovePiece()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_FullyBlendedMovePiece");
		
		UChessPanel_GhostAnimBP_C_AnimNotify_FullyBlendedMovePiece_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_LeftMovePiece
	 * 		Flags  -> ()
	 */
	void UChessPanel_GhostAnimBP_C::AnimNotify_LeftMovePiece()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.AnimNotify_LeftMovePiece");
		
		UChessPanel_GhostAnimBP_C_AnimNotify_LeftMovePiece_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.ExecuteUbergraph_ChessPanel_GhostAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChessPanel_GhostAnimBP_C::ExecuteUbergraph_ChessPanel_GhostAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C.ExecuteUbergraph_ChessPanel_GhostAnimBP");
		
		UChessPanel_GhostAnimBP_C_ExecuteUbergraph_ChessPanel_GhostAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChessPanel_GhostAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChessPanel_GhostAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C");
		return ptr;
	}

}


