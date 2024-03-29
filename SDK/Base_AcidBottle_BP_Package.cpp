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
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FixUp
	 * 		Flags  -> ()
	 */
	bool ABase_AcidBottle_BP_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FixUp");
		
		ABase_AcidBottle_BP_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.GetObjectiveTypeIndex
	 * 		Flags  -> ()
	 */
	int32_t ABase_AcidBottle_BP_C::GetObjectiveTypeIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.GetObjectiveTypeIndex");
		
		ABase_AcidBottle_BP_C_GetObjectiveTypeIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnRep_bFinishedPouring
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::OnRep_bFinishedPouring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnRep_bFinishedPouring");
		
		ABase_AcidBottle_BP_C_OnRep_bFinishedPouring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.StartPouring
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::StartPouring(class URBInteractiblePanelComponent* panel, class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.StartPouring");
		
		ABase_AcidBottle_BP_C_StartPouring_Params params {};
		params.panel = panel;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ActiveAcidSplashVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAcidBottleDamageType                              DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::ActiveAcidSplashVFX(EAcidBottleDamageType DamageType, class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ActiveAcidSplashVFX");
		
		ABase_AcidBottle_BP_C_ActiveAcidSplashVFX_Params params {};
		params.DamageType = DamageType;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.TriggerDither
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_AcidBottle_BP_C::TriggerDither(bool bOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.TriggerDither");
		
		ABase_AcidBottle_BP_C_TriggerDither_Params params {};
		params.bOn = bOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnRep_bHiddenDithered
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::OnRep_bHiddenDithered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnRep_bHiddenDithered");
		
		ABase_AcidBottle_BP_C_OnRep_bHiddenDithered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.UpdateMotionDetection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::UpdateMotionDetection(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.UpdateMotionDetection");
		
		ABase_AcidBottle_BP_C_UpdateMotionDetection_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ApplyMotionToWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::ApplyMotionToWater(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ApplyMotionToWater");
		
		ABase_AcidBottle_BP_C_ApplyMotionToWater_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ShouldBPTick
	 * 		Flags  -> ()
	 */
	bool ABase_AcidBottle_BP_C::ShouldBPTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ShouldBPTick");
		
		ABase_AcidBottle_BP_C_ShouldBPTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.DamagePlayersInRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAcidBottleDamageType                              DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::DamagePlayersInRadius(EAcidBottleDamageType DamageType, class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.DamagePlayersInRadius");
		
		ABase_AcidBottle_BP_C_DamagePlayersInRadius_Params params {};
		params.DamageType = DamageType;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Timeline_0__FinishedFunc");
		
		ABase_AcidBottle_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Timeline_0__UpdateFunc");
		
		ABase_AcidBottle_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Dither__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::Dither__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Dither__FinishedFunc");
		
		ABase_AcidBottle_BP_C_Dither__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Dither__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::Dither__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Dither__UpdateFunc");
		
		ABase_AcidBottle_BP_C_Dither__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeOutLiquidTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::FadeOutLiquidTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeOutLiquidTimeline__FinishedFunc");
		
		ABase_AcidBottle_BP_C_FadeOutLiquidTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeOutLiquidTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::FadeOutLiquidTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeOutLiquidTimeline__UpdateFunc");
		
		ABase_AcidBottle_BP_C_FadeOutLiquidTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeFakeLightTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::FadeFakeLightTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeFakeLightTimeline__FinishedFunc");
		
		ABase_AcidBottle_BP_C_FadeFakeLightTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeFakeLightTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::FadeFakeLightTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeFakeLightTimeline__UpdateFunc");
		
		ABase_AcidBottle_BP_C_FadeFakeLightTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnEditorPostLoad");
		
		ABase_AcidBottle_BP_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABase_AcidBottle_BP_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnPostActorsPasted");
		
		ABase_AcidBottle_BP_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.PostAddedToLevel");
		
		ABase_AcidBottle_BP_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.PostDuplicated");
		
		ABase_AcidBottle_BP_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.PostEditChange");
		
		ABase_AcidBottle_BP_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_AcidBottle_BP_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.PostEditMove");
		
		ABase_AcidBottle_BP_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.TickSelected
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.TickSelected");
		
		ABase_AcidBottle_BP_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnHoldingPlayerChangedEvent_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     holdingPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBLargePickup*                              largePickup                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::OnHoldingPlayerChangedEvent_Event_1(class ARBPawn* holdingPlayer, class ARBLargePickup* largePickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnHoldingPlayerChangedEvent_Event_1");
		
		ABase_AcidBottle_BP_C_OnHoldingPlayerChangedEvent_Event_1_Params params {};
		params.holdingPlayer = holdingPlayer;
		params.largePickup = largePickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ReceiveBeginPlay");
		
		ABase_AcidBottle_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnPlayerLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              landingHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::OnPlayerLanded(class ARBPlayer* Player, float landingHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnPlayerLanded");
		
		ABase_AcidBottle_BP_C_OnPlayerLanded_Params params {};
		params.Player = Player;
		params.landingHeight = landingHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnPlayerTraversal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              landingHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::OnPlayerTraversal(class ARBPlayer* Player, float landingHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnPlayerTraversal");
		
		ABase_AcidBottle_BP_C_OnPlayerTraversal_Params params {};
		params.Player = Player;
		params.landingHeight = landingHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ReceiveEndPlay");
		
		ABase_AcidBottle_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ReceiveTick");
		
		ABase_AcidBottle_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.BindEvents
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::BindEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.BindEvents");
		
		ABase_AcidBottle_BP_C_BindEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnWorldPopulateFinished");
		
		ABase_AcidBottle_BP_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.TriggerMaterialRipples
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              WaterWaveAlphaTarget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::TriggerMaterialRipples(float WaterWaveAlphaTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.TriggerMaterialRipples");
		
		ABase_AcidBottle_BP_C_TriggerMaterialRipples_Params params {};
		params.WaterWaveAlphaTarget = WaterWaveAlphaTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnDither
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::OnDither()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnDither");
		
		ABase_AcidBottle_BP_C_OnDither_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Event_OnResetStage");
		
		ABase_AcidBottle_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnPlayerBashed_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::OnPlayerBashed_Event_1(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnPlayerBashed_Event_1");
		
		ABase_AcidBottle_BP_C_OnPlayerBashed_Event_1_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeOutLiquid
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::FadeOutLiquid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeOutLiquid");
		
		ABase_AcidBottle_BP_C_FadeOutLiquid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.SetFadeFakeLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_AcidBottle_BP_C::SetFadeFakeLight(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.SetFadeFakeLight");
		
		ABase_AcidBottle_BP_C_SetFadeFakeLight_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Multicast_ActivateAcidSplashVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAcidBottleDamageType                              DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::Multicast_ActivateAcidSplashVFX(EAcidBottleDamageType DamageType, class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Multicast_ActivateAcidSplashVFX");
		
		ABase_AcidBottle_BP_C_Multicast_ActivateAcidSplashVFX_Params params {};
		params.DamageType = DamageType;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.BP_OnHoldingPawnChanged
	 * 		Flags  -> ()
	 */
	void ABase_AcidBottle_BP_C::BP_OnHoldingPawnChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.BP_OnHoldingPawnChanged");
		
		ABase_AcidBottle_BP_C_BP_OnHoldingPawnChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ExecuteUbergraph_Base_AcidBottle_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_AcidBottle_BP_C::ExecuteUbergraph_Base_AcidBottle_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ExecuteUbergraph_Base_AcidBottle_BP");
		
		ABase_AcidBottle_BP_C_ExecuteUbergraph_Base_AcidBottle_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_AcidBottle_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_AcidBottle_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_AcidBottle_BP.Base_AcidBottle_BP_C");
		return ptr;
	}

}


