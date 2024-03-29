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
	 * 		Name   -> Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.TickTimer
	 * 		Flags  -> ()
	 */
	void AValveUnlockingButton_BP_C::TickTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.TickTimer");
		
		AValveUnlockingButton_BP_C_TickTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.RefreshTimerDiodesVisual
	 * 		Flags  -> ()
	 */
	void AValveUnlockingButton_BP_C::RefreshTimerDiodesVisual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.RefreshTimerDiodesVisual");
		
		AValveUnlockingButton_BP_C_RefreshTimerDiodesVisual_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.ShouldTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldTick                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AValveUnlockingButton_BP_C::ShouldTick(bool* bShouldTick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.ShouldTick");
		
		AValveUnlockingButton_BP_C_ShouldTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldTick != nullptr)
			*bShouldTick = params.bShouldTick;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AValveUnlockingButton_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.UserConstructionScript");
		
		AValveUnlockingButton_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AValveUnlockingButton_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.ReceiveTick");
		
		AValveUnlockingButton_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.BndEvt__ValveUnlocking-Button_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnCoopOperatableEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBCoopOperatableComponent*                  Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AValveUnlockingButton_BP_C::BndEvt__ValveUnlockingButton_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnCoopOperatableEvent__DelegateSignature(class URBCoopOperatableComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.BndEvt__ValveUnlocking-Button_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnCoopOperatableEvent__DelegateSignature");
		
		AValveUnlockingButton_BP_C_BndEvt__ValveUnlockingButton_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnCoopOperatableEvent__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.BndEvt__ValveUnlocking-Button_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractionZoneComponent*                 Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AValveUnlockingButton_BP_C::BndEvt__ValveUnlockingButton_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.BndEvt__ValveUnlocking-Button_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature");
		
		AValveUnlockingButton_BP_C_BndEvt__ValveUnlockingButton_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.ExecuteUbergraph_ValveUnlocking-Button_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AValveUnlockingButton_BP_C::ExecuteUbergraph_ValveUnlockingButton_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.ExecuteUbergraph_ValveUnlocking-Button_BP");
		
		AValveUnlockingButton_BP_C_ExecuteUbergraph_ValveUnlockingButton_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AValveUnlockingButton_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AValveUnlockingButton_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ValveUnlocking_Button_BP.ValveUnlocking-Button_BP_C");
		return ptr;
	}

}


