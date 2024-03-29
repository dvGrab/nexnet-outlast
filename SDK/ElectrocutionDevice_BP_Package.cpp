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
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.GetGoalIconActor
	 * 		Flags  -> ()
	 */
	class AActor* AElectrocutionDevice_BP_C::GetGoalIconActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.GetGoalIconActor");
		
		AElectrocutionDevice_BP_C_GetGoalIconActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.GetGoalTrigger
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* AElectrocutionDevice_BP_C::GetGoalTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.GetGoalTrigger");
		
		AElectrocutionDevice_BP_C_GetGoalTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ResetLitnFX
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::ResetLitnFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ResetLitnFX");
		
		AElectrocutionDevice_BP_C_ResetLitnFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Update Execution Looping Sound
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::UpdateExecutionLoopingSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Update Execution Looping Sound");
		
		AElectrocutionDevice_BP_C_UpdateExecutionLoopingSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.DisableFX
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::DisableFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.DisableFX");
		
		AElectrocutionDevice_BP_C_DisableFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.EnableFX
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::EnableFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.EnableFX");
		
		AElectrocutionDevice_BP_C_EnableFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.SetShouldBeOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectrocutionDevice_BP_C::SetShouldBeOpened(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.SetShouldBeOpened");
		
		AElectrocutionDevice_BP_C_SetShouldBeOpened_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.SetOpenedRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrocutionDevice_BP_C::SetOpenedRatio(float ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.SetOpenedRatio");
		
		AElectrocutionDevice_BP_C_SetOpenedRatio_Params params {};
		params.ratio = ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.OnRep_ShouldBeOpened
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::OnRep_ShouldBeOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.OnRep_ShouldBeOpened");
		
		AElectrocutionDevice_BP_C_OnRep_ShouldBeOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ShouldTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectrocutionDevice_BP_C::ShouldTick(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ShouldTick");
		
		AElectrocutionDevice_BP_C_ShouldTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.UserConstructionScript");
		
		AElectrocutionDevice_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_0__FinishedFunc");
		
		AElectrocutionDevice_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_0__UpdateFunc");
		
		AElectrocutionDevice_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_1__FinishedFunc");
		
		AElectrocutionDevice_BP_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_1__UpdateFunc");
		
		AElectrocutionDevice_BP_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_1__Electric__EventFunc
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::Timeline_1__Electric__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_1__Electric__EventFunc");
		
		AElectrocutionDevice_BP_C_Timeline_1__Electric__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.OnWorldFullyLoaded
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::OnWorldFullyLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.OnWorldFullyLoaded");
		
		AElectrocutionDevice_BP_C_OnWorldFullyLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrocutionDevice_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ReceiveTick");
		
		AElectrocutionDevice_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnResetStage");
		
		AElectrocutionDevice_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.OpenDoorInternal
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::OpenDoorInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.OpenDoorInternal");
		
		AElectrocutionDevice_BP_C_OpenDoorInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.CloseDoorInternal
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::CloseDoorInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.CloseDoorInternal");
		
		AElectrocutionDevice_BP_C_CloseDoorInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.UpdateDoorState
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::UpdateDoorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.UpdateDoorState");
		
		AElectrocutionDevice_BP_C_UpdateDoorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.BndEvt__ElectrocutionDevice_BP_OpenDoorTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AElectrocutionDevice_BP_C::BndEvt__ElectrocutionDevice_BP_OpenDoorTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.BndEvt__ElectrocutionDevice_BP_OpenDoorTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		AElectrocutionDevice_BP_C_BndEvt__ElectrocutionDevice_BP_OpenDoorTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnStartedChanged
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::Event_OnStartedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnStartedChanged");
		
		AElectrocutionDevice_BP_C_Event_OnStartedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnPlayerOverloaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBElectrocutionSwitchPanelComponent*        panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrocutionDevice_BP_C::Event_OnPlayerOverloaded(class URBElectrocutionSwitchPanelComponent* panel, class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnPlayerOverloaded");
		
		AElectrocutionDevice_BP_C_Event_OnPlayerOverloaded_Params params {};
		params.panel = panel;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnCompletedChanged
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::Event_OnCompletedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnCompletedChanged");
		
		AElectrocutionDevice_BP_C_Event_OnCompletedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.PlayLight
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::PlayLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.PlayLight");
		
		AElectrocutionDevice_BP_C_PlayLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ElectricalShock
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::ElectricalShock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ElectricalShock");
		
		AElectrocutionDevice_BP_C_ElectricalShock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.bLast
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::bLast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.bLast");
		
		AElectrocutionDevice_BP_C_bLast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.BurnSnitch
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::BurnSnitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.BurnSnitch");
		
		AElectrocutionDevice_BP_C_BurnSnitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ReceiveBeginPlay");
		
		AElectrocutionDevice_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnCurrentVoltageChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              currentVoltage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrocutionDevice_BP_C::Event_OnCurrentVoltageChanged(float currentVoltage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnCurrentVoltageChanged");
		
		AElectrocutionDevice_BP_C_Event_OnCurrentVoltageChanged_Params params {};
		params.currentVoltage = currentVoltage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.BndEvt__ElectrocutionDevice_BP_CartGoalTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AElectrocutionDevice_BP_C::BndEvt__ElectrocutionDevice_BP_CartGoalTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.BndEvt__ElectrocutionDevice_BP_CartGoalTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
		AElectrocutionDevice_BP_C_BndEvt__ElectrocutionDevice_BP_CartGoalTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void AElectrocutionDevice_BP_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.OnWorldPopulateFinished");
		
		AElectrocutionDevice_BP_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ExecuteUbergraph_ElectrocutionDevice_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrocutionDevice_BP_C::ExecuteUbergraph_ElectrocutionDevice_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ExecuteUbergraph_ElectrocutionDevice_BP");
		
		AElectrocutionDevice_BP_C_ExecuteUbergraph_ElectrocutionDevice_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AElectrocutionDevice_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElectrocutionDevice_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElectrocutionDevice_BP.ElectrocutionDevice_BP_C");
		return ptr;
	}

}


