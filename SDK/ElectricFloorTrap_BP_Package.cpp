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
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool AElectricFloorTrap_BP_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.GetStateName");
		
		AElectricFloorTrap_BP_C_GetStateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (stateA != nullptr)
			*stateA = params.stateA;
		if (stateB != nullptr)
			*stateB = params.stateB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool AElectricFloorTrap_BP_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.IsStateA");
		
		AElectricFloorTrap_BP_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.ShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 */
	bool AElectricFloorTrap_BP_C::ShouldBeIgnoredForLots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.ShouldBeIgnoredForLots");
		
		AElectricFloorTrap_BP_C_ShouldBeIgnoredForLots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.ShouldVFXPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectricFloorTrap_BP_C::ShouldVFXPlay(bool* ShouldPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.ShouldVFXPlay");
		
		AElectricFloorTrap_BP_C_ShouldVFXPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldPlay != nullptr)
			*ShouldPlay = params.ShouldPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.GetVFXposition
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::GetVFXposition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.GetVFXposition");
		
		AElectricFloorTrap_BP_C_GetVFXposition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetVisualState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EElectricFloorTrapState                            State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectricFloorTrap_BP_C::SetVisualState(EElectricFloorTrapState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetVisualState");
		
		AElectricFloorTrap_BP_C_SetVisualState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetElectricVFXAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraSystem*                              NiagaraAsset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectricFloorTrap_BP_C::SetElectricVFXAsset(class UNiagaraSystem* NiagaraAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetElectricVFXAsset");
		
		AElectricFloorTrap_BP_C_SetElectricVFXAsset_Params params {};
		params.NiagaraAsset = NiagaraAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.PlayElectricVFXAtRandomLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AssociatedSound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectricFloorTrap_BP_C::PlayElectricVFXAtRandomLocation(class UAkAudioEvent* AssociatedSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.PlayElectricVFXAtRandomLocation");
		
		AElectricFloorTrap_BP_C_PlayElectricVFXAtRandomLocation_Params params {};
		params.AssociatedSound = AssociatedSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.GetRandomLocationOnFloor
	 * 		Flags  -> ()
	 */
	struct FVector AElectricFloorTrap_BP_C::GetRandomLocationOnFloor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.GetRandomLocationOnFloor");
		
		AElectricFloorTrap_BP_C_GetRandomLocationOnFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.GetTrapState
	 * 		Flags  -> ()
	 */
	EElectricFloorTrapState AElectricFloorTrap_BP_C::GetTrapState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.GetTrapState");
		
		AElectricFloorTrap_BP_C_GetTrapState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnTrapStateChanged
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::OnTrapStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnTrapStateChanged");
		
		AElectricFloorTrap_BP_C_OnTrapStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.UserConstructionScript");
		
		AElectricFloorTrap_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SppedFlash__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::SppedFlash__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SppedFlash__FinishedFunc");
		
		AElectricFloorTrap_BP_C_SppedFlash__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SppedFlash__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::SppedFlash__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SppedFlash__UpdateFunc");
		
		AElectricFloorTrap_BP_C_SppedFlash__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.Timeline_0__FinishedFunc");
		
		AElectricFloorTrap_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.Timeline_0__UpdateFunc");
		
		AElectricFloorTrap_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.PrepareState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      randomOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectricFloorTrap_BP_C::PrepareState(bool bStateA, class AActor* randomOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.PrepareState");
		
		AElectricFloorTrap_BP_C_PrepareState_Params params {};
		params.bStateA = bStateA;
		params.randomOwner = randomOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectricFloorTrap_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.ReceiveEndPlay");
		
		AElectricFloorTrap_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.Event_OnResetStage");
		
		AElectricFloorTrap_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.BndEvt__RBElectricFloorTrap_K2Node_ComponentBoundEvent_1_OnElectricFloorTrapEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBElectricFloorTrapComponent*               trap                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectricFloorTrap_BP_C::BndEvt__RBElectricFloorTrap_K2Node_ComponentBoundEvent_1_OnElectricFloorTrapEvent__DelegateSignature(class URBElectricFloorTrapComponent* trap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.BndEvt__RBElectricFloorTrap_K2Node_ComponentBoundEvent_1_OnElectricFloorTrapEvent__DelegateSignature");
		
		AElectricFloorTrap_BP_C_BndEvt__RBElectricFloorTrap_K2Node_ComponentBoundEvent_1_OnElectricFloorTrapEvent__DelegateSignature_Params params {};
		params.trap = trap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStateChange_ActiveOff
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::OnStateChange_ActiveOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStateChange_ActiveOff");
		
		AElectricFloorTrap_BP_C_OnStateChange_ActiveOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStateChange_ActiveOn
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::OnStateChange_ActiveOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStateChange_ActiveOn");
		
		AElectricFloorTrap_BP_C_OnStateChange_ActiveOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStateChange_Inactive
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::OnStateChange_Inactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStateChange_Inactive");
		
		AElectricFloorTrap_BP_C_OnStateChange_Inactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectricFloorTrap_BP_C::SetState(bool bStateA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetState");
		
		AElectricFloorTrap_BP_C_SetState_Params params {};
		params.bStateA = bStateA;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectricFloorTrap_BP_C::SetShouldBeIgnoredForLots(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetShouldBeIgnoredForLots");
		
		AElectricFloorTrap_BP_C_SetShouldBeIgnoredForLots_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStageChange_ActiveTriggered
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::OnStageChange_ActiveTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStageChange_ActiveTriggered");
		
		AElectricFloorTrap_BP_C_OnStageChange_ActiveTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStateChange_Broken
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::OnStateChange_Broken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStateChange_Broken");
		
		AElectricFloorTrap_BP_C_OnStateChange_Broken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.BndEvt__RBDamageable_K2Node_ComponentBoundEvent_2_OnDamageableDestroyed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBDamageableComponent*                      DamageableComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectricFloorTrap_BP_C::BndEvt__RBDamageable_K2Node_ComponentBoundEvent_2_OnDamageableDestroyed__DelegateSignature(class URBDamageableComponent* DamageableComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.BndEvt__RBDamageable_K2Node_ComponentBoundEvent_2_OnDamageableDestroyed__DelegateSignature");
		
		AElectricFloorTrap_BP_C_BndEvt__RBDamageable_K2Node_ComponentBoundEvent_2_OnDamageableDestroyed__DelegateSignature_Params params {};
		params.DamageableComponent = DamageableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStageChange_ActiveWarning
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::OnStageChange_ActiveWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStageChange_ActiveWarning");
		
		AElectricFloorTrap_BP_C_OnStageChange_ActiveWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SpeedSlash
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::SpeedSlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SpeedSlash");
		
		AElectricFloorTrap_BP_C_SpeedSlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.LightFlash
	 * 		Flags  -> ()
	 */
	void AElectricFloorTrap_BP_C::LightFlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.LightFlash");
		
		AElectricFloorTrap_BP_C_LightFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetBrokenMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBroken                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectricFloorTrap_BP_C::SetBrokenMesh(bool IsBroken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetBrokenMesh");
		
		AElectricFloorTrap_BP_C_SetBrokenMesh_Params params {};
		params.IsBroken = IsBroken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.ExecuteUbergraph_ElectricFloorTrap_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectricFloorTrap_BP_C::ExecuteUbergraph_ElectricFloorTrap_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.ExecuteUbergraph_ElectricFloorTrap_BP");
		
		AElectricFloorTrap_BP_C_ExecuteUbergraph_ElectricFloorTrap_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AElectricFloorTrap_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElectricFloorTrap_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElectricFloorTrap_BP.ElectricFloorTrap_BP_C");
		return ptr;
	}

}


