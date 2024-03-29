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
	 * 		Name   -> Function SASChair_BP.SASChair_BP_C.IsChairRotating
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASASChair_BP_C::IsChairRotating(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_BP.SASChair_BP_C.IsChairRotating");
		
		ASASChair_BP_C_IsChairRotating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_BP.SASChair_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASASChair_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_BP.SASChair_BP_C.UserConstructionScript");
		
		ASASChair_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_BP.SASChair_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ASASChair_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_BP.SASChair_BP_C.Event_OnResetStage");
		
		ASASChair_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASChair_BP_C::BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature");
		
		ASASChair_BP_C_BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASChair_BP_C::BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature");
		
		ASASChair_BP_C_BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASChair_BP_C::BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature");
		
		ASASChair_BP_C_BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_3_OnEnabledChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractionZoneComponent*                 Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASChair_BP_C::BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_3_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_3_OnEnabledChanged__DelegateSignature");
		
		ASASChair_BP_C_BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_3_OnEnabledChanged__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_BP.SASChair_BP_C.TestTVDownAnimation
	 * 		Flags  -> ()
	 */
	void ASASChair_BP_C::TestTVDownAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_BP.SASChair_BP_C.TestTVDownAnimation");
		
		ASASChair_BP_C_TestTVDownAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_BP.SASChair_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASASChair_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_BP.SASChair_BP_C.ReceiveBeginPlay");
		
		ASASChair_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_4_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASChair_BP_C::BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_4_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_4_OnPanelEvent__DelegateSignature");
		
		ASASChair_BP_C_BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_4_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_BP.SASChair_BP_C.ExecuteUbergraph_SASChair_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASChair_BP_C::ExecuteUbergraph_SASChair_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_BP.SASChair_BP_C.ExecuteUbergraph_SASChair_BP");
		
		ASASChair_BP_C_ExecuteUbergraph_SASChair_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_BP.SASChair_BP_C.OnChairStartedTurning__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASASChair_BP_C*                              Chair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TurnTowardTV                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASASChair_BP_C::OnChairStartedTurning__DelegateSignature(class ASASChair_BP_C* Chair, bool TurnTowardTV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_BP.SASChair_BP_C.OnChairStartedTurning__DelegateSignature");
		
		ASASChair_BP_C_OnChairStartedTurning__DelegateSignature_Params params {};
		params.Chair = Chair;
		params.TurnTowardTV = TurnTowardTV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChair_BP.SASChair_BP_C.OnPlayerTVReady__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ASASChair_BP_C::OnPlayerTVReady__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASChair_BP.SASChair_BP_C.OnPlayerTVReady__DelegateSignature");
		
		ASASChair_BP_C_OnPlayerTVReady__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASASChair_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASASChair_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SASChair_BP.SASChair_BP_C");
		return ptr;
	}

}


