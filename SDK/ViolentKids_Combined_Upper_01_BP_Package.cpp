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
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetObjectiveTypeIndex
	 * 		Flags  -> ()
	 */
	int32_t AViolentKids_Combined_Upper01_BP_C::GetObjectiveTypeIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetObjectiveTypeIndex");
		
		AViolentKids_Combined_Upper01_BP_C_GetObjectiveTypeIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.FixUp
	 * 		Flags  -> ()
	 */
	bool AViolentKids_Combined_Upper01_BP_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.FixUp");
		
		AViolentKids_Combined_Upper01_BP_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.BP_MapCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapCheckType                                      checkType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outErrorMsg                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool AViolentKids_Combined_Upper01_BP_C::BP_MapCheck(EMapCheckType checkType, class FString* outErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.BP_MapCheck");
		
		AViolentKids_Combined_Upper01_BP_C_BP_MapCheck_Params params {};
		params.checkType = checkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outErrorMsg != nullptr)
			*outErrorMsg = params.outErrorMsg;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetPropAnimationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UViolentKids_MannequinData_BP_C*             NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Combined_Upper01_BP_C::GetPropAnimationData(class UViolentKids_MannequinData_BP_C** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetPropAnimationData");
		
		AViolentKids_Combined_Upper01_BP_C_GetPropAnimationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetAnimationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UViolentKids_MannequinData_BP_C*             Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Combined_Upper01_BP_C::GetAnimationData(class UViolentKids_MannequinData_BP_C** Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetAnimationData");
		
		AViolentKids_Combined_Upper01_BP_C_GetAnimationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetInteractionActionCollisionCheck
	 * 		Flags  -> ()
	 */
	bool AViolentKids_Combined_Upper01_BP_C::GetInteractionActionCollisionCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetInteractionActionCollisionCheck");
		
		AViolentKids_Combined_Upper01_BP_C_GetInteractionActionCollisionCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnRep_IsGrinded
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::OnRep_IsGrinded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnRep_IsGrinded");
		
		AViolentKids_Combined_Upper01_BP_C_OnRep_IsGrinded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnRep_bIsMannequinActive_Server
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::OnRep_bIsMannequinActive_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnRep_bIsMannequinActive_Server");
		
		AViolentKids_Combined_Upper01_BP_C_OnRep_bIsMannequinActive_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.IsChildMannequinActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Combined_Upper01_BP_C::IsChildMannequinActive(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.IsChildMannequinActive");
		
		AViolentKids_Combined_Upper01_BP_C_IsChildMannequinActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnRep_bStillAttached_Server
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::OnRep_bStillAttached_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnRep_bStillAttached_Server");
		
		AViolentKids_Combined_Upper01_BP_C_OnRep_bStillAttached_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.UpdateIsOnGround
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::UpdateIsOnGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.UpdateIsOnGround");
		
		AViolentKids_Combined_Upper01_BP_C_UpdateIsOnGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.SetForcedHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Combined_Upper01_BP_C::SetForcedHidden(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.SetForcedHidden");
		
		AViolentKids_Combined_Upper01_BP_C_SetForcedHidden_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.ResetAnims
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::ResetAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.ResetAnims");
		
		AViolentKids_Combined_Upper01_BP_C_ResetAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetAllLinkedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              LinkedActors                                               (Parm, OutParm)
	 */
	void AViolentKids_Combined_Upper01_BP_C::GetAllLinkedActors(TArray<class AActor*>* LinkedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetAllLinkedActors");
		
		AViolentKids_Combined_Upper01_BP_C_GetAllLinkedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkedActors != nullptr)
			*LinkedActors = params.LinkedActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.ToggleAllLinkedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Combined_Upper01_BP_C::ToggleAllLinkedActors(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.ToggleAllLinkedActors");
		
		AViolentKids_Combined_Upper01_BP_C_ToggleAllLinkedActors_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.UpdateForceHidden
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::UpdateForceHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.UpdateForceHidden");
		
		AViolentKids_Combined_Upper01_BP_C_UpdateForceHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnRep_ForcedHidden
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::OnRep_ForcedHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnRep_ForcedHidden");
		
		AViolentKids_Combined_Upper01_BP_C_OnRep_ForcedHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetCustomPickupInteractionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        out_CustomInteractionText                                  (Parm, OutParm)
	 */
	bool AViolentKids_Combined_Upper01_BP_C::GetCustomPickupInteractionText(class ARBPlayer* Player, class FText* out_CustomInteractionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetCustomPickupInteractionText");
		
		AViolentKids_Combined_Upper01_BP_C_GetCustomPickupInteractionText_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (out_CustomInteractionText != nullptr)
			*out_CustomInteractionText = params.out_CustomInteractionText;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnRep_IsWaiting
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::OnRep_IsWaiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnRep_IsWaiting");
		
		AViolentKids_Combined_Upper01_BP_C_OnRep_IsWaiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.InitAnims
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::InitAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.InitAnims");
		
		AViolentKids_Combined_Upper01_BP_C_InitAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Update Attached Components
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::UpdateAttachedComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Update Attached Components");
		
		AViolentKids_Combined_Upper01_BP_C_UpdateAttachedComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.UpdateIconPosition
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::UpdateIconPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.UpdateIconPosition");
		
		AViolentKids_Combined_Upper01_BP_C_UpdateIconPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.SetIsGrinded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Grinded                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Combined_Upper01_BP_C::SetIsGrinded(bool Grinded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.SetIsGrinded");
		
		AViolentKids_Combined_Upper01_BP_C_SetIsGrinded_Params params {};
		params.Grinded = Grinded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Set Still Attached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Combined_Upper01_BP_C::SetStillAttached(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Set Still Attached");
		
		AViolentKids_Combined_Upper01_BP_C_SetStillAttached_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.SetAnimBPWaiting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Waiting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Combined_Upper01_BP_C::SetAnimBPWaiting(bool Waiting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.SetAnimBPWaiting");
		
		AViolentKids_Combined_Upper01_BP_C_SetAnimBPWaiting_Params params {};
		params.Waiting = Waiting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AViolentKids_Combined_Upper01_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.GetInteractionPawnLocation");
		
		AViolentKids_Combined_Upper01_BP_C_GetInteractionPawnLocation_Params params {};
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
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.UpdateSex
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::UpdateSex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.UpdateSex");
		
		AViolentKids_Combined_Upper01_BP_C_UpdateSex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnRep_IsGirl
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::OnRep_IsGirl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnRep_IsGirl");
		
		AViolentKids_Combined_Upper01_BP_C_OnRep_IsGirl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.StartGrindingAnimation
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::StartGrindingAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.StartGrindingAnimation");
		
		AViolentKids_Combined_Upper01_BP_C_StartGrindingAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.BP_ShouldPlayAnimAfterAdjustPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AViolentKids_Combined_Upper01_BP_C::BP_ShouldPlayAnimAfterAdjustPosition(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.BP_ShouldPlayAnimAfterAdjustPosition");
		
		AViolentKids_Combined_Upper01_BP_C_BP_ShouldPlayAnimAfterAdjustPosition_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Reset Mannequin
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::ResetMannequin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Reset Mannequin");
		
		AViolentKids_Combined_Upper01_BP_C_ResetMannequin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.UserConstructionScript");
		
		AViolentKids_Combined_Upper01_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnEditorPostLoad");
		
		AViolentKids_Combined_Upper01_BP_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AViolentKids_Combined_Upper01_BP_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnPostActorsPasted");
		
		AViolentKids_Combined_Upper01_BP_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.PostAddedToLevel");
		
		AViolentKids_Combined_Upper01_BP_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Combined_Upper01_BP_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.PostDuplicated");
		
		AViolentKids_Combined_Upper01_BP_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Combined_Upper01_BP_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.PostEditChange");
		
		AViolentKids_Combined_Upper01_BP_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Combined_Upper01_BP_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.PostEditMove");
		
		AViolentKids_Combined_Upper01_BP_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.TickSelected
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.TickSelected");
		
		AViolentKids_Combined_Upper01_BP_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.BP_PrepareMapCheck
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::BP_PrepareMapCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.BP_PrepareMapCheck");
		
		AViolentKids_Combined_Upper01_BP_C_BP_PrepareMapCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Event_OnUsedOnInteractible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBLargeObjectInteractionPanelComponent*     interactible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Combined_Upper01_BP_C::Event_OnUsedOnInteractible(class ARBPawn* interactor, class URBLargeObjectInteractionPanelComponent* interactible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Event_OnUsedOnInteractible");
		
		AViolentKids_Combined_Upper01_BP_C_Event_OnUsedOnInteractible_Params params {};
		params.interactor = interactor;
		params.interactible = interactible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Event_OnResetStage");
		
		AViolentKids_Combined_Upper01_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.NotifySpecialMoveCompletedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Combined_Upper01_BP_C::NotifySpecialMoveCompletedEvent(class ARBPawn* Pawn, ESpecialMove specialMove, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.NotifySpecialMoveCompletedEvent");
		
		AViolentKids_Combined_Upper01_BP_C_NotifySpecialMoveCompletedEvent_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.BP_PlaySequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Combined_Upper01_BP_C::BP_PlaySequence(class UAnimSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.BP_PlaySequence");
		
		AViolentKids_Combined_Upper01_BP_C_BP_PlaySequence_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.PostToggled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bToggleEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Combined_Upper01_BP_C::PostToggled(bool bToggleEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.PostToggled");
		
		AViolentKids_Combined_Upper01_BP_C_PostToggled_Params params {};
		params.bToggleEnabled = bToggleEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.BndEvt__ChildMannequin_Combined_Upper-01_BP_RandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::BndEvt__ChildMannequin_Combined_Upper01_BP_RandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.BndEvt__ChildMannequin_Combined_Upper-01_BP_RandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature");
		
		AViolentKids_Combined_Upper01_BP_C_BndEvt__ChildMannequin_Combined_Upper01_BP_RandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Event_OnIsLockedChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Combined_Upper01_BP_C::Event_OnIsLockedChanged(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Event_OnIsLockedChanged");
		
		AViolentKids_Combined_Upper01_BP_C_Event_OnIsLockedChanged_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.LinkButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AViolentKids_Button_BP_C*                    Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Combined_Upper01_BP_C::LinkButton(class AViolentKids_Button_BP_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.LinkButton");
		
		AViolentKids_Combined_Upper01_BP_C_LinkButton_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnButtonPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPressed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Combined_Upper01_BP_C::OnButtonPressed(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnButtonPressed");
		
		AViolentKids_Combined_Upper01_BP_C_OnButtonPressed_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.DelayedUpdateInteractionBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Combined_Upper01_BP_C::DelayedUpdateInteractionBox(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.DelayedUpdateInteractionBox");
		
		AViolentKids_Combined_Upper01_BP_C_DelayedUpdateInteractionBox_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnWorldPopulateFinished");
		
		AViolentKids_Combined_Upper01_BP_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Multicast_PlayChildVO
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::Multicast_PlayChildVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.Multicast_PlayChildVO");
		
		AViolentKids_Combined_Upper01_BP_C_Multicast_PlayChildVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.UpdateLoopingChildVOs_Server
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::UpdateLoopingChildVOs_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.UpdateLoopingChildVOs_Server");
		
		AViolentKids_Combined_Upper01_BP_C_UpdateLoopingChildVOs_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.ResetVOTimer_Server
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::ResetVOTimer_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.ResetVOTimer_Server");
		
		AViolentKids_Combined_Upper01_BP_C_ResetVOTimer_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnPawnPlaySpecialMoveAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Combined_Upper01_BP_C::OnPawnPlaySpecialMoveAnimation(class ARBPawn* Pawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnPawnPlaySpecialMoveAnimation");
		
		AViolentKids_Combined_Upper01_BP_C_OnPawnPlaySpecialMoveAnimation_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnWorldFullyLoaded
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::OnWorldFullyLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.OnWorldFullyLoaded");
		
		AViolentKids_Combined_Upper01_BP_C_OnWorldFullyLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.StartMannequinVOLoop
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::StartMannequinVOLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.StartMannequinVOLoop");
		
		AViolentKids_Combined_Upper01_BP_C_StartMannequinVOLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.SnapToState
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.SnapToState");
		
		AViolentKids_Combined_Upper01_BP_C_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.ValidateGrinded
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::ValidateGrinded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.ValidateGrinded");
		
		AViolentKids_Combined_Upper01_BP_C_ValidateGrinded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Upper01_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.ReceiveBeginPlay");
		
		AViolentKids_Combined_Upper01_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.NotifySpecialMoveStartedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Combined_Upper01_BP_C::NotifySpecialMoveStartedEvent(class ARBPawn* Pawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.NotifySpecialMoveStartedEvent");
		
		AViolentKids_Combined_Upper01_BP_C_NotifySpecialMoveStartedEvent_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.ExecuteUbergraph_ViolentKids_Combined_Upper-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Combined_Upper01_BP_C::ExecuteUbergraph_ViolentKids_Combined_Upper01_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Upper-01_BP.ViolentKids_Combined_Upper-01_BP_C.ExecuteUbergraph_ViolentKids_Combined_Upper-01_BP");
		
		AViolentKids_Combined_Upper01_BP_C_ExecuteUbergraph_ViolentKids_Combined_Upper01_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AViolentKids_Combined_Upper01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AViolentKids_Combined_Upper01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ViolentKids_Combined_Upper_01_BP.ViolentKids_Combined_Upper-01_BP_C");
		return ptr;
	}

}


