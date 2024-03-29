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
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.GetLookAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     outLookAtLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::GetLookAtLocation(struct FVector* outLookAtLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.GetLookAtLocation");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_GetLookAtLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outLookAtLocation != nullptr)
			*outLookAtLocation = params.outLookAtLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.DestroyedSpawnedBattery
	 * 		Flags  -> ()
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::DestroyedSpawnedBattery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.DestroyedSpawnedBattery");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_DestroyedSpawnedBattery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ATriggerTrap_BatteryPowered_Right_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.GetInteractionPawnLocation");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_GetInteractionPawnLocation_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		if (outDirection != nullptr)
			*outDirection = params.outDirection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.PlaySpecialMoveAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactorPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ATriggerTrap_BatteryPowered_Right_BP_C::PlaySpecialMoveAnimation(class ARBPawn* interactorPawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.PlaySpecialMoveAnimation");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_PlaySpecialMoveAnimation_Params params {};
		params.interactorPawn = interactorPawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.OnRep_bOpen
	 * 		Flags  -> ()
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::OnRep_bOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.OnRep_bOpen");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_OnRep_bOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.SetSpawnedItemsInteractible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInteractibe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::SetSpawnedItemsInteractible(bool IsInteractibe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.SetSpawnedItemsInteractible");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_SetSpawnedItemsInteractible_Params params {};
		params.IsInteractibe = IsInteractibe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.UserConstructionScript");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.BP_OnArmed
	 * 		Flags  -> ()
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::BP_OnArmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.BP_OnArmed");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_BP_OnArmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.BP_OnDisarmed
	 * 		Flags  -> ()
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::BP_OnDisarmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.BP_OnDisarmed");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_BP_OnDisarmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.Event_OnCompletedOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ARBPawn*>                             pawns                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::Event_OnCompletedOperation(TArray<class ARBPawn*> pawns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.Event_OnCompletedOperation");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_Event_OnCompletedOperation_Params params {};
		params.pawns = pawns;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.OpenTrap
	 * 		Flags  -> ()
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::OpenTrap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.OpenTrap");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_OpenTrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.OnRep_Open
	 * 		Flags  -> ()
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::OnRep_Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.OnRep_Open");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_OnRep_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.BndEvt__BatterySpawnerActor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBActorPrevisComponent*                     actorPrevis                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      runtimeChildActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::BndEvt__BatterySpawnerActor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature(class URBActorPrevisComponent* actorPrevis, class AActor* runtimeChildActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.BndEvt__BatterySpawnerActor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_BndEvt__BatterySpawnerActor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature_Params params {};
		params.actorPrevis = actorPrevis;
		params.runtimeChildActor = runtimeChildActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.Event_SnapToState");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.OnDisarmed_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSnapToState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::OnDisarmed_Internal(bool bSnapToState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.OnDisarmed_Internal");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_OnDisarmed_Internal_Params params {};
		params.bSnapToState = bSnapToState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.BP_OnTrapBatteryStateChanged
	 * 		Flags  -> ()
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::BP_OnTrapBatteryStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.BP_OnTrapBatteryStateChanged");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_BP_OnTrapBatteryStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.ExecuteUbergraph_TriggerTrap_BatteryPowered_Right_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATriggerTrap_BatteryPowered_Right_BP_C::ExecuteUbergraph_TriggerTrap_BatteryPowered_Right_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.ExecuteUbergraph_TriggerTrap_BatteryPowered_Right_BP");
		
		ATriggerTrap_BatteryPowered_Right_BP_C_ExecuteUbergraph_TriggerTrap_BatteryPowered_Right_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATriggerTrap_BatteryPowered_Right_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATriggerTrap_BatteryPowered_Right_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C");
		return ptr;
	}

}


