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
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetObjectiveTypeIndex
	 * 		Flags  -> ()
	 */
	int32_t AViolentKid_Combined_Upper__BP_C::GetObjectiveTypeIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetObjectiveTypeIndex");
		
		AViolentKid_Combined_Upper__BP_C_GetObjectiveTypeIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.FixUp
	 * 		Flags  -> ()
	 */
	bool AViolentKid_Combined_Upper__BP_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.FixUp");
		
		AViolentKid_Combined_Upper__BP_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BP_MapCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapCheckType                                      checkType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outErrorMsg                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool AViolentKid_Combined_Upper__BP_C::BP_MapCheck(EMapCheckType checkType, class FString* outErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BP_MapCheck");
		
		AViolentKid_Combined_Upper__BP_C_BP_MapCheck_Params params {};
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
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetPropAnimationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UViolentKids_MannequinData_BP_C*             New_Param                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKid_Combined_Upper__BP_C::GetPropAnimationData(class UViolentKids_MannequinData_BP_C** New_Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetPropAnimationData");
		
		AViolentKid_Combined_Upper__BP_C_GetPropAnimationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (New_Param != nullptr)
			*New_Param = params.New_Param;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetAnimationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UViolentKids_MannequinData_BP_C*             Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKid_Combined_Upper__BP_C::GetAnimationData(class UViolentKids_MannequinData_BP_C** Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetAnimationData");
		
		AViolentKid_Combined_Upper__BP_C_GetAnimationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.TryPlayPickupSound
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::TryPlayPickupSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.TryPlayPickupSound");
		
		AViolentKid_Combined_Upper__BP_C_TryPlayPickupSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetInteractionActionCollisionCheck
	 * 		Flags  -> ()
	 */
	bool AViolentKid_Combined_Upper__BP_C::GetInteractionActionCollisionCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetInteractionActionCollisionCheck");
		
		AViolentKid_Combined_Upper__BP_C_GetInteractionActionCollisionCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_IsGrinded
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::OnRep_IsGrinded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_IsGrinded");
		
		AViolentKid_Combined_Upper__BP_C_OnRep_IsGrinded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_bIsMannequinActive_Server
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::OnRep_bIsMannequinActive_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_bIsMannequinActive_Server");
		
		AViolentKid_Combined_Upper__BP_C_OnRep_bIsMannequinActive_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.IsChildMannequinActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKid_Combined_Upper__BP_C::IsChildMannequinActive(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.IsChildMannequinActive");
		
		AViolentKid_Combined_Upper__BP_C_IsChildMannequinActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_bStillAttached_Server
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::OnRep_bStillAttached_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_bStillAttached_Server");
		
		AViolentKid_Combined_Upper__BP_C_OnRep_bStillAttached_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateIsOnGround
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::UpdateIsOnGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateIsOnGround");
		
		AViolentKid_Combined_Upper__BP_C_UpdateIsOnGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.SetForcedHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKid_Combined_Upper__BP_C::SetForcedHidden(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.SetForcedHidden");
		
		AViolentKid_Combined_Upper__BP_C_SetForcedHidden_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ResetAnims
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::ResetAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ResetAnims");
		
		AViolentKid_Combined_Upper__BP_C_ResetAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetAllLinkedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              LinkedActors                                               (Parm, OutParm)
	 */
	void AViolentKid_Combined_Upper__BP_C::GetAllLinkedActors(TArray<class AActor*>* LinkedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetAllLinkedActors");
		
		AViolentKid_Combined_Upper__BP_C_GetAllLinkedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkedActors != nullptr)
			*LinkedActors = params.LinkedActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ToggleAllLinkedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKid_Combined_Upper__BP_C::ToggleAllLinkedActors(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ToggleAllLinkedActors");
		
		AViolentKid_Combined_Upper__BP_C_ToggleAllLinkedActors_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateForceHidden
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::UpdateForceHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateForceHidden");
		
		AViolentKid_Combined_Upper__BP_C_UpdateForceHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_ForcedHidden
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::OnRep_ForcedHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_ForcedHidden");
		
		AViolentKid_Combined_Upper__BP_C_OnRep_ForcedHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetCustomPickupInteractionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        out_CustomInteractionText                                  (Parm, OutParm)
	 */
	bool AViolentKid_Combined_Upper__BP_C::GetCustomPickupInteractionText(class ARBPlayer* Player, class FText* out_CustomInteractionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetCustomPickupInteractionText");
		
		AViolentKid_Combined_Upper__BP_C_GetCustomPickupInteractionText_Params params {};
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
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_IsWaiting
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::OnRep_IsWaiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_IsWaiting");
		
		AViolentKid_Combined_Upper__BP_C_OnRep_IsWaiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.InitAnims
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::InitAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.InitAnims");
		
		AViolentKid_Combined_Upper__BP_C_InitAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Update Attached Components
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::Update_Attached_Components()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Update Attached Components");
		
		AViolentKid_Combined_Upper__BP_C_Update_Attached_Components_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateIconPosition
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::UpdateIconPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateIconPosition");
		
		AViolentKid_Combined_Upper__BP_C_UpdateIconPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.SetIsGrinded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Grinded                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKid_Combined_Upper__BP_C::SetIsGrinded(bool Grinded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.SetIsGrinded");
		
		AViolentKid_Combined_Upper__BP_C_SetIsGrinded_Params params {};
		params.Grinded = Grinded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Set Still Attached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKid_Combined_Upper__BP_C::Set_Still_Attached(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Set Still Attached");
		
		AViolentKid_Combined_Upper__BP_C_Set_Still_Attached_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.SetAnimBPWaiting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Waiting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKid_Combined_Upper__BP_C::SetAnimBPWaiting(bool Waiting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.SetAnimBPWaiting");
		
		AViolentKid_Combined_Upper__BP_C_SetAnimBPWaiting_Params params {};
		params.Waiting = Waiting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AViolentKid_Combined_Upper__BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetInteractionPawnLocation");
		
		AViolentKid_Combined_Upper__BP_C_GetInteractionPawnLocation_Params params {};
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
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateSex
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::UpdateSex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateSex");
		
		AViolentKid_Combined_Upper__BP_C_UpdateSex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_IsGirl
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::OnRep_IsGirl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_IsGirl");
		
		AViolentKid_Combined_Upper__BP_C_OnRep_IsGirl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.StartGrindingAnimation
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::StartGrindingAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.StartGrindingAnimation");
		
		AViolentKid_Combined_Upper__BP_C_StartGrindingAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BP_ShouldPlayAnimAfterAdjustPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AViolentKid_Combined_Upper__BP_C::BP_ShouldPlayAnimAfterAdjustPosition(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BP_ShouldPlayAnimAfterAdjustPosition");
		
		AViolentKid_Combined_Upper__BP_C_BP_ShouldPlayAnimAfterAdjustPosition_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Reset Mannequin
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::Reset_Mannequin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Reset Mannequin");
		
		AViolentKid_Combined_Upper__BP_C_Reset_Mannequin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UserConstructionScript");
		
		AViolentKid_Combined_Upper__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnEditorPostLoad");
		
		AViolentKid_Combined_Upper__BP_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AViolentKid_Combined_Upper__BP_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnPostActorsPasted");
		
		AViolentKid_Combined_Upper__BP_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostAddedToLevel");
		
		AViolentKid_Combined_Upper__BP_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKid_Combined_Upper__BP_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostDuplicated");
		
		AViolentKid_Combined_Upper__BP_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKid_Combined_Upper__BP_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostEditChange");
		
		AViolentKid_Combined_Upper__BP_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKid_Combined_Upper__BP_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostEditMove");
		
		AViolentKid_Combined_Upper__BP_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.TickSelected
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.TickSelected");
		
		AViolentKid_Combined_Upper__BP_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BP_PrepareMapCheck
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::BP_PrepareMapCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BP_PrepareMapCheck");
		
		AViolentKid_Combined_Upper__BP_C_BP_PrepareMapCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Event_OnUsedOnInteractible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBLargeObjectInteractionPanelComponent*     interactible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKid_Combined_Upper__BP_C::Event_OnUsedOnInteractible(class ARBPawn* interactor, class URBLargeObjectInteractionPanelComponent* interactible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Event_OnUsedOnInteractible");
		
		AViolentKid_Combined_Upper__BP_C_Event_OnUsedOnInteractible_Params params {};
		params.interactor = interactor;
		params.interactible = interactible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Event_OnResetStage");
		
		AViolentKid_Combined_Upper__BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.NotifySpecialMoveCompletedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKid_Combined_Upper__BP_C::NotifySpecialMoveCompletedEvent(class ARBPawn* Pawn, ESpecialMove specialMove, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.NotifySpecialMoveCompletedEvent");
		
		AViolentKid_Combined_Upper__BP_C_NotifySpecialMoveCompletedEvent_Params params {};
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
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BP_PlaySequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKid_Combined_Upper__BP_C::BP_PlaySequence(class UAnimSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BP_PlaySequence");
		
		AViolentKid_Combined_Upper__BP_C_BP_PlaySequence_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostToggled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bToggleEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKid_Combined_Upper__BP_C::PostToggled(bool bToggleEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostToggled");
		
		AViolentKid_Combined_Upper__BP_C_PostToggled_Params params {};
		params.bToggleEnabled = bToggleEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BndEvt__ChildMannequin_Combined_Upper-01_BP_RandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::BndEvt__ChildMannequin_Combined_Upper__BP_RandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BndEvt__ChildMannequin_Combined_Upper-01_BP_RandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature");
		
		AViolentKid_Combined_Upper__BP_C_BndEvt__ChildMannequin_Combined_Upper__BP_RandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Event_OnIsLockedChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKid_Combined_Upper__BP_C::Event_OnIsLockedChanged(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Event_OnIsLockedChanged");
		
		AViolentKid_Combined_Upper__BP_C_Event_OnIsLockedChanged_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.LinkButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AViolentKids_Button_BP_C*                    Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKid_Combined_Upper__BP_C::LinkButton(class AViolentKids_Button_BP_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.LinkButton");
		
		AViolentKid_Combined_Upper__BP_C_LinkButton_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnButtonPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPressed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKid_Combined_Upper__BP_C::OnButtonPressed(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnButtonPressed");
		
		AViolentKid_Combined_Upper__BP_C_OnButtonPressed_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.DelayedUpdateInteractionBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKid_Combined_Upper__BP_C::DelayedUpdateInteractionBox(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.DelayedUpdateInteractionBox");
		
		AViolentKid_Combined_Upper__BP_C_DelayedUpdateInteractionBox_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnWorldPopulateFinished");
		
		AViolentKid_Combined_Upper__BP_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Multicast_PlayChildVO
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::Multicast_PlayChildVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Multicast_PlayChildVO");
		
		AViolentKid_Combined_Upper__BP_C_Multicast_PlayChildVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateLoopingChildVOs_Server
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::UpdateLoopingChildVOs_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateLoopingChildVOs_Server");
		
		AViolentKid_Combined_Upper__BP_C_UpdateLoopingChildVOs_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ResetVOTimer_Server
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::ResetVOTimer_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ResetVOTimer_Server");
		
		AViolentKid_Combined_Upper__BP_C_ResetVOTimer_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnPawnPlaySpecialMoveAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKid_Combined_Upper__BP_C::OnPawnPlaySpecialMoveAnimation(class ARBPawn* Pawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnPawnPlaySpecialMoveAnimation");
		
		AViolentKid_Combined_Upper__BP_C_OnPawnPlaySpecialMoveAnimation_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnWorldFullyLoaded
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::OnWorldFullyLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnWorldFullyLoaded");
		
		AViolentKid_Combined_Upper__BP_C_OnWorldFullyLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.StartMannequinVOLoop
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::StartMannequinVOLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.StartMannequinVOLoop");
		
		AViolentKid_Combined_Upper__BP_C_StartMannequinVOLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.SnapToState
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.SnapToState");
		
		AViolentKid_Combined_Upper__BP_C_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ValidateGrinded
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::ValidateGrinded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ValidateGrinded");
		
		AViolentKid_Combined_Upper__BP_C_ValidateGrinded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AViolentKid_Combined_Upper__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ReceiveBeginPlay");
		
		AViolentKid_Combined_Upper__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ExecuteUbergraph_ViolentKid_Combined_Upper-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKid_Combined_Upper__BP_C::ExecuteUbergraph_ViolentKid_Combined_Upper__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ExecuteUbergraph_ViolentKid_Combined_Upper-01_BP");
		
		AViolentKid_Combined_Upper__BP_C_ExecuteUbergraph_ViolentKid_Combined_Upper__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AViolentKid_Combined_Upper__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AViolentKid_Combined_Upper__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ViolentKid_Combined_Upper_01_BP.ViolentKid_Combined_Upper-01_BP_C");
		return ptr;
	}

}


