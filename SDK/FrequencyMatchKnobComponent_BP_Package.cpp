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
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.RefreshLocallyFocused
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchKnobComponent_BP_C::RefreshLocallyFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.RefreshLocallyFocused");
		
		UFrequencyMatchKnobComponent_BP_C_RefreshLocallyFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.RefreshRTPC
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchKnobComponent_BP_C::RefreshRTPC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.RefreshRTPC");
		
		UFrequencyMatchKnobComponent_BP_C_RefreshRTPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.RefreshShimmer
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchKnobComponent_BP_C::RefreshShimmer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.RefreshShimmer");
		
		UFrequencyMatchKnobComponent_BP_C_RefreshShimmer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Refresh
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchKnobComponent_BP_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Refresh");
		
		UFrequencyMatchKnobComponent_BP_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.RefreshPosition
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchKnobComponent_BP_C::RefreshPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.RefreshPosition");
		
		UFrequencyMatchKnobComponent_BP_C_RefreshPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.IsCloseToCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrequencyMatchKnobComponent_BP_C::IsCloseToCompleted(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.IsCloseToCompleted");
		
		UFrequencyMatchKnobComponent_BP_C_IsCloseToCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Refresh Status
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchKnobComponent_BP_C::RefreshStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Refresh Status");
		
		UFrequencyMatchKnobComponent_BP_C_RefreshStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.OnParentConstruction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        StatusMesh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrequencyMatchKnobComponent_BP_C::OnParentConstruction(class UStaticMeshComponent* StatusMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.OnParentConstruction");
		
		UFrequencyMatchKnobComponent_BP_C_OnParentConstruction_Params params {};
		params.StatusMesh = StatusMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchKnobComponent_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.ReceiveBeginPlay");
		
		UFrequencyMatchKnobComponent_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchKnobComponent_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnResetStage");
		
		UFrequencyMatchKnobComponent_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnIsCompletedChanged
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchKnobComponent_BP_C::Event_OnIsCompletedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnIsCompletedChanged");
		
		UFrequencyMatchKnobComponent_BP_C_Event_OnIsCompletedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.OnInteractingPawnChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrequencyMatchKnobComponent_BP_C::OnInteractingPawnChanged(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.OnInteractingPawnChanged");
		
		UFrequencyMatchKnobComponent_BP_C_OnInteractingPawnChanged_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnCurrentRatioChanged
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchKnobComponent_BP_C::Event_OnCurrentRatioChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnCurrentRatioChanged");
		
		UFrequencyMatchKnobComponent_BP_C_Event_OnCurrentRatioChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnPlayerOnKnobChanged
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchKnobComponent_BP_C::Event_OnPlayerOnKnobChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnPlayerOnKnobChanged");
		
		UFrequencyMatchKnobComponent_BP_C_Event_OnPlayerOnKnobChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnLocallyFocusedChanged
	 * 		Flags  -> ()
	 */
	void UFrequencyMatchKnobComponent_BP_C::Event_OnLocallyFocusedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnLocallyFocusedChanged");
		
		UFrequencyMatchKnobComponent_BP_C_Event_OnLocallyFocusedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.OnParentEnabledChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractionZoneComponent*                 Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrequencyMatchKnobComponent_BP_C::OnParentEnabledChanged(class URBInteractionZoneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.OnParentEnabledChanged");
		
		UFrequencyMatchKnobComponent_BP_C_OnParentEnabledChanged_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.ExecuteUbergraph_FrequencyMatchKnobComponent_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrequencyMatchKnobComponent_BP_C::ExecuteUbergraph_FrequencyMatchKnobComponent_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.ExecuteUbergraph_FrequencyMatchKnobComponent_BP");
		
		UFrequencyMatchKnobComponent_BP_C_ExecuteUbergraph_FrequencyMatchKnobComponent_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrequencyMatchKnobComponent_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrequencyMatchKnobComponent_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C");
		return ptr;
	}

}


