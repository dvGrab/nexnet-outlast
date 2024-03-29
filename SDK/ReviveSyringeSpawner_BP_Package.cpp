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
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetLookAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     outLookAtLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AReviveSyringeSpawner_BP_C::GetLookAtLocation(struct FVector* outLookAtLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetLookAtLocation");
		
		AReviveSyringeSpawner_BP_C_GetLookAtLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outLookAtLocation != nullptr)
			*outLookAtLocation = params.outLookAtLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.DisableLightOnServer
	 * 		Flags  -> ()
	 */
	void AReviveSyringeSpawner_BP_C::DisableLightOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.DisableLightOnServer");
		
		AReviveSyringeSpawner_BP_C_DisableLightOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ShouldSpawnPill
	 * 		Flags  -> ()
	 */
	bool AReviveSyringeSpawner_BP_C::ShouldSpawnPill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ShouldSpawnPill");
		
		AReviveSyringeSpawner_BP_C_ShouldSpawnPill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetPingEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               outIsEnabled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AReviveSyringeSpawner_BP_C::GetPingEnabled(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, bool* outIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetPingEnabled");
		
		AReviveSyringeSpawner_BP_C_GetPingEnabled_Params params {};
		params.pingOwner = pingOwner;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outIsEnabled != nullptr)
			*outIsEnabled = params.outIsEnabled;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetPlayerPingWorldLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AReviveSyringeSpawner_BP_C::GetPlayerPingWorldLocation(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetPlayerPingWorldLocation");
		
		AReviveSyringeSpawner_BP_C_GetPlayerPingWorldLocation_Params params {};
		params.pingOwner = pingOwner;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetPlayerPingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FPlayerPingData                             outData                                                    (Parm, OutParm)
	 */
	bool AReviveSyringeSpawner_BP_C::GetPlayerPingData(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FPlayerPingData* outData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetPlayerPingData");
		
		AReviveSyringeSpawner_BP_C_GetPlayerPingData_Params params {};
		params.pingOwner = pingOwner;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outData != nullptr)
			*outData = params.outData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.OnRep_IsBroken_Server
	 * 		Flags  -> ()
	 */
	void AReviveSyringeSpawner_BP_C::OnRep_IsBroken_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.OnRep_IsBroken_Server");
		
		AReviveSyringeSpawner_BP_C_OnRep_IsBroken_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.OnRep_NeedInsideLight
	 * 		Flags  -> ()
	 */
	void AReviveSyringeSpawner_BP_C::OnRep_NeedInsideLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.OnRep_NeedInsideLight");
		
		AReviveSyringeSpawner_BP_C_OnRep_NeedInsideLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.UpdateLights
	 * 		Flags  -> ()
	 */
	void AReviveSyringeSpawner_BP_C::UpdateLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.UpdateLights");
		
		AReviveSyringeSpawner_BP_C_UpdateLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.IsOpen
	 * 		Flags  -> ()
	 */
	bool AReviveSyringeSpawner_BP_C::IsOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.IsOpen");
		
		AReviveSyringeSpawner_BP_C_IsOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.UpdateBrokenState
	 * 		Flags  -> ()
	 */
	void AReviveSyringeSpawner_BP_C::UpdateBrokenState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.UpdateBrokenState");
		
		AReviveSyringeSpawner_BP_C_UpdateBrokenState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.PlaySpecialMoveAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactorPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AReviveSyringeSpawner_BP_C::PlaySpecialMoveAnimation(class ARBPawn* interactorPawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.PlaySpecialMoveAnimation");
		
		AReviveSyringeSpawner_BP_C_PlaySpecialMoveAnimation_Params params {};
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
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AReviveSyringeSpawner_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetInteractionPawnLocation");
		
		AReviveSyringeSpawner_BP_C_GetInteractionPawnLocation_Params params {};
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
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AReviveSyringeSpawner_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.UserConstructionScript");
		
		AReviveSyringeSpawner_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void AReviveSyringeSpawner_BP_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.OnWorldPopulateFinished");
		
		AReviveSyringeSpawner_BP_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ForceBreak_Server
	 * 		Flags  -> ()
	 */
	void AReviveSyringeSpawner_BP_C::ForceBreak_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ForceBreak_Server");
		
		AReviveSyringeSpawner_BP_C_ForceBreak_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AReviveSyringeSpawner_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ReceiveBeginPlay");
		
		AReviveSyringeSpawner_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.Break
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Damager                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AReviveSyringeSpawner_BP_C::Break(class AActor* Damager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.Break");
		
		AReviveSyringeSpawner_BP_C_Break_Params params {};
		params.Damager = Damager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AReviveSyringeSpawner_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.Event_OnResetStage");
		
		AReviveSyringeSpawner_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.PostToggled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bToggleEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AReviveSyringeSpawner_BP_C::PostToggled(bool bToggleEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.PostToggled");
		
		AReviveSyringeSpawner_BP_C_PostToggled_Params params {};
		params.bToggleEnabled = bToggleEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.OnPawnDoSpecialMoveAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AReviveSyringeSpawner_BP_C::OnPawnDoSpecialMoveAction(class ARBPawn* Pawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.OnPawnDoSpecialMoveAction");
		
		AReviveSyringeSpawner_BP_C_OnPawnDoSpecialMoveAction_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.Event_ItemPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AReviveSyringeSpawner_BP_C::Event_ItemPickedUp(class ARBPawn* Pawn, class ARBPickup* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.Event_ItemPickedUp");
		
		AReviveSyringeSpawner_BP_C_Event_ItemPickedUp_Params params {};
		params.Pawn = Pawn;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ValidateBroken
	 * 		Flags  -> ()
	 */
	void AReviveSyringeSpawner_BP_C::ValidateBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ValidateBroken");
		
		AReviveSyringeSpawner_BP_C_ValidateBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.BndEvt__ReviveSyringeSpawner_BP_DamageableComponent_K2Node_ComponentBoundEvent_1_OnDamageableEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBDamageableComponent*                      DamageableComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AReviveSyringeSpawner_BP_C::BndEvt__ReviveSyringeSpawner_BP_DamageableComponent_K2Node_ComponentBoundEvent_1_OnDamageableEvent__DelegateSignature(class URBDamageableComponent* DamageableComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.BndEvt__ReviveSyringeSpawner_BP_DamageableComponent_K2Node_ComponentBoundEvent_1_OnDamageableEvent__DelegateSignature");
		
		AReviveSyringeSpawner_BP_C_BndEvt__ReviveSyringeSpawner_BP_DamageableComponent_K2Node_ComponentBoundEvent_1_OnDamageableEvent__DelegateSignature_Params params {};
		params.DamageableComponent = DamageableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ExecuteUbergraph_ReviveSyringeSpawner_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AReviveSyringeSpawner_BP_C::ExecuteUbergraph_ReviveSyringeSpawner_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ExecuteUbergraph_ReviveSyringeSpawner_BP");
		
		AReviveSyringeSpawner_BP_C_ExecuteUbergraph_ReviveSyringeSpawner_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AReviveSyringeSpawner_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AReviveSyringeSpawner_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C");
		return ptr;
	}

}


