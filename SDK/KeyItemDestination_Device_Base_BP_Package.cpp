/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.GetAssociatedInvestigationComponent
	 * 		Flags  -> ()
	 */
	class URBPlayerInvestigationZoneComponent* AKeyItemDestination_Device_Base_BP_C::GetAssociatedInvestigationComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.GetAssociatedInvestigationComponent");
		
		AKeyItemDestination_Device_Base_BP_C_GetAssociatedInvestigationComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.GetClue
	 * 		Flags  -> ()
	 */
	struct FClueData AKeyItemDestination_Device_Base_BP_C::GetClue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.GetClue");
		
		AKeyItemDestination_Device_Base_BP_C_GetClue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.Unlock
	 * 		Flags  -> ()
	 */
	void AKeyItemDestination_Device_Base_BP_C::Unlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.Unlock");
		
		AKeyItemDestination_Device_Base_BP_C_Unlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AKeyItemDestination_Device_Base_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.UserConstructionScript");
		
		AKeyItemDestination_Device_Base_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AKeyItemDestination_Device_Base_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.Timeline_0__FinishedFunc");
		
		AKeyItemDestination_Device_Base_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AKeyItemDestination_Device_Base_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.Timeline_0__UpdateFunc");
		
		AKeyItemDestination_Device_Base_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.BndEvt__KeyItemDestination_Device_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AKeyItemDestination_Device_Base_BP_C::BndEvt__KeyItemDestination_Device_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.BndEvt__KeyItemDestination_Device_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature");
		
		AKeyItemDestination_Device_Base_BP_C_BndEvt__KeyItemDestination_Device_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.OnUnlock_Event
	 * 		Flags  -> ()
	 */
	void AKeyItemDestination_Device_Base_BP_C::OnUnlock_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.OnUnlock_Event");
		
		AKeyItemDestination_Device_Base_BP_C_OnUnlock_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.SetClue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FClueData                                   ClueData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void AKeyItemDestination_Device_Base_BP_C::SetClue(const struct FClueData& ClueData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.SetClue");
		
		AKeyItemDestination_Device_Base_BP_C_SetClue_Params params {};
		params.ClueData = ClueData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.BndEvt__KeyItemDestination_Device_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractionZoneComponent*                 Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AKeyItemDestination_Device_Base_BP_C::BndEvt__KeyItemDestination_Device_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.BndEvt__KeyItemDestination_Device_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature");
		
		AKeyItemDestination_Device_Base_BP_C_BndEvt__KeyItemDestination_Device_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AKeyItemDestination_Device_Base_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.Event_OnResetStage");
		
		AKeyItemDestination_Device_Base_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.BndEvt__KeyItemDestination_Device_Base_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AKeyItemDestination_Device_Base_BP_C::BndEvt__KeyItemDestination_Device_Base_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.BndEvt__KeyItemDestination_Device_Base_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature");
		
		AKeyItemDestination_Device_Base_BP_C_BndEvt__KeyItemDestination_Device_Base_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.ExecuteUbergraph_KeyItemDestination_Device_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AKeyItemDestination_Device_Base_BP_C::ExecuteUbergraph_KeyItemDestination_Device_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.ExecuteUbergraph_KeyItemDestination_Device_Base_BP");
		
		AKeyItemDestination_Device_Base_BP_C_ExecuteUbergraph_KeyItemDestination_Device_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AKeyItemDestination_Device_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKeyItemDestination_Device_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C");
		return ptr;
	}

}


