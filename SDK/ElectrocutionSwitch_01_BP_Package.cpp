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
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.Update Display Enabled
	 * 		Flags  -> ()
	 */
	void AElectrocutionSwitch01_BP_C::UpdateDisplayEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.Update Display Enabled");
		
		AElectrocutionSwitch01_BP_C_UpdateDisplayEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.CalculateTargetNeedleRatio
	 * 		Flags  -> ()
	 */
	void AElectrocutionSwitch01_BP_C::CalculateTargetNeedleRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.CalculateTargetNeedleRatio");
		
		AElectrocutionSwitch01_BP_C_CalculateTargetNeedleRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.SetCurrentNeedleAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrocutionSwitch01_BP_C::SetCurrentNeedleAngle(float ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.SetCurrentNeedleAngle");
		
		AElectrocutionSwitch01_BP_C_SetCurrentNeedleAngle_Params params {};
		params.ratio = ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.SetTargetNeedleAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SnapToValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectrocutionSwitch01_BP_C::SetTargetNeedleAngle(float Angle, bool SnapToValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.SetTargetNeedleAngle");
		
		AElectrocutionSwitch01_BP_C_SetTargetNeedleAngle_Params params {};
		params.Angle = Angle;
		params.SnapToValue = SnapToValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.UpdateNeedlePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrocutionSwitch01_BP_C::UpdateNeedlePosition(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.UpdateNeedlePosition");
		
		AElectrocutionSwitch01_BP_C_UpdateNeedlePosition_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.IsUpdatingNeedle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectrocutionSwitch01_BP_C::IsUpdatingNeedle(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.IsUpdatingNeedle");
		
		AElectrocutionSwitch01_BP_C_IsUpdatingNeedle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.StopAllSounds
	 * 		Flags  -> ()
	 */
	void AElectrocutionSwitch01_BP_C::StopAllSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.StopAllSounds");
		
		AElectrocutionSwitch01_BP_C_StopAllSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.UpdateNumberOfVisibleLights
	 * 		Flags  -> ()
	 */
	void AElectrocutionSwitch01_BP_C::UpdateNumberOfVisibleLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.UpdateNumberOfVisibleLights");
		
		AElectrocutionSwitch01_BP_C_UpdateNumberOfVisibleLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.HasInteractingPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectrocutionSwitch01_BP_C::HasInteractingPawn(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.HasInteractingPawn");
		
		AElectrocutionSwitch01_BP_C_HasInteractingPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AElectrocutionSwitch01_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.Timeline_0__FinishedFunc");
		
		AElectrocutionSwitch01_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AElectrocutionSwitch01_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.Timeline_0__UpdateFunc");
		
		AElectrocutionSwitch01_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AElectrocutionSwitch01_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.Event_OnResetStage");
		
		AElectrocutionSwitch01_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AElectrocutionSwitch01_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.ReceiveBeginPlay");
		
		AElectrocutionSwitch01_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.UpdateLightDisplay
	 * 		Flags  -> ()
	 */
	void AElectrocutionSwitch01_BP_C::UpdateLightDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.UpdateLightDisplay");
		
		AElectrocutionSwitch01_BP_C_UpdateLightDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.BndEvt__ElectrocutionSwitch-01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrocutionSwitch01_BP_C::BndEvt__ElectrocutionSwitch01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.BndEvt__ElectrocutionSwitch-01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature");
		
		AElectrocutionSwitch01_BP_C_BndEvt__ElectrocutionSwitch01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.BndEvt__ElectrocutionSwitch-01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrocutionSwitch01_BP_C::BndEvt__ElectrocutionSwitch01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.BndEvt__ElectrocutionSwitch-01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature");
		
		AElectrocutionSwitch01_BP_C_BndEvt__ElectrocutionSwitch01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrocutionSwitch01_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.ReceiveTick");
		
		AElectrocutionSwitch01_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.BndEvt__ElectrocutionSwitch-01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractionZoneComponent*                 Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrocutionSwitch01_BP_C::BndEvt__ElectrocutionSwitch01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.BndEvt__ElectrocutionSwitch-01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature");
		
		AElectrocutionSwitch01_BP_C_BndEvt__ElectrocutionSwitch01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.ElecticalVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectrocutionSwitch01_BP_C::ElecticalVFX(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.ElecticalVFX");
		
		AElectrocutionSwitch01_BP_C_ElecticalVFX_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.ExecuteUbergraph_ElectrocutionSwitch-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrocutionSwitch01_BP_C::ExecuteUbergraph_ElectrocutionSwitch01_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.ExecuteUbergraph_ElectrocutionSwitch-01_BP");
		
		AElectrocutionSwitch01_BP_C_ExecuteUbergraph_ElectrocutionSwitch01_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.OnWaitingForResetCompletedChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AElectrocutionSwitch01_BP_C::OnWaitingForResetCompletedChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.OnWaitingForResetCompletedChanged__DelegateSignature");
		
		AElectrocutionSwitch01_BP_C_OnWaitingForResetCompletedChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AElectrocutionSwitch01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElectrocutionSwitch01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElectrocutionSwitch_01_BP.ElectrocutionSwitch-01_BP_C");
		return ptr;
	}

}


