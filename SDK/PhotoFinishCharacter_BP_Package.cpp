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
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetMainParentSkeletalMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* APhotoFinishCharacter_BP_C::GetMainParentSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetMainParentSkeletalMesh");
		
		APhotoFinishCharacter_BP_C_GetMainParentSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetWatchComponent
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* APhotoFinishCharacter_BP_C::GetWatchComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetWatchComponent");
		
		APhotoFinishCharacter_BP_C_GetWatchComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetPlayerCustomizationInfo
	 * 		Flags  -> ()
	 */
	struct FRBPlayerCustomizationInfo APhotoFinishCharacter_BP_C::GetPlayerCustomizationInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetPlayerCustomizationInfo");
		
		APhotoFinishCharacter_BP_C_GetPlayerCustomizationInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetSkeletalMeshComponentForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USkeletalMeshComponent* APhotoFinishCharacter_BP_C::GetSkeletalMeshComponentForSlot(EPlayerCustomizationSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetSkeletalMeshComponentForSlot");
		
		APhotoFinishCharacter_BP_C_GetSkeletalMeshComponentForSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetFacePose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPoseAsset*                                  GetFacePose                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APhotoFinishCharacter_BP_C::GetFacePose(class UPoseAsset** GetFacePose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetFacePose");
		
		APhotoFinishCharacter_BP_C_GetFacePose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GetFacePose != nullptr)
			*GetFacePose = params.GetFacePose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetupTrialSucessSettings
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::SetupTrialSucessSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetupTrialSucessSettings");
		
		APhotoFinishCharacter_BP_C_SetupTrialSucessSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetAnimBlueprintSelectionActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhotoFinishCharacter_BP_C::SetAnimBlueprintSelectionActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetAnimBlueprintSelectionActive");
		
		APhotoFinishCharacter_BP_C_SetAnimBlueprintSelectionActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetCharacterTQ
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              in_TQ                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APhotoFinishCharacter_BP_C::SetCharacterTQ(float in_TQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetCharacterTQ");
		
		APhotoFinishCharacter_BP_C_SetCharacterTQ_Params params {};
		params.in_TQ = in_TQ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.TryShow
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::TryShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.TryShow");
		
		APhotoFinishCharacter_BP_C_TryShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.RefreshRigs
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::RefreshRigs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.RefreshRigs");
		
		APhotoFinishCharacter_BP_C_RefreshRigs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetLightingChannels
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::SetLightingChannels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetLightingChannels");
		
		APhotoFinishCharacter_BP_C_SetLightingChannels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.OverrideActorMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APhotoFinishCharacter_BP_C::OverrideActorMaterials(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.OverrideActorMaterials");
		
		APhotoFinishCharacter_BP_C_OverrideActorMaterials_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetupMaterialOverride
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::SetupMaterialOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetupMaterialOverride");
		
		APhotoFinishCharacter_BP_C_SetupMaterialOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.CleanSpawnedRigs
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::CleanSpawnedRigs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.CleanSpawnedRigs");
		
		APhotoFinishCharacter_BP_C_CleanSpawnedRigs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.CleanExtraMeshes
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::CleanExtraMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.CleanExtraMeshes");
		
		APhotoFinishCharacter_BP_C_CleanExtraMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.RefreshPlayerCusto
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::RefreshPlayerCusto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.RefreshPlayerCusto");
		
		APhotoFinishCharacter_BP_C_RefreshPlayerCusto_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.Show
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.Show");
		
		APhotoFinishCharacter_BP_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.UserConstructionScript");
		
		APhotoFinishCharacter_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetFocusTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::SetFocusTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetFocusTimeline__FinishedFunc");
		
		APhotoFinishCharacter_BP_C_SetFocusTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetFocusTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::SetFocusTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetFocusTimeline__UpdateFunc");
		
		APhotoFinishCharacter_BP_C_SetFocusTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APhotoFinishCharacter_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.ReceiveEndPlay");
		
		APhotoFinishCharacter_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.OnExtraCustomizationMeshesAddedForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              addedExtraMeshes                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APhotoFinishCharacter_BP_C::OnExtraCustomizationMeshesAddedForSlot(TArray<class USkeletalMeshComponent*> addedExtraMeshes, EPlayerCustomizationSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.OnExtraCustomizationMeshesAddedForSlot");
		
		APhotoFinishCharacter_BP_C_OnExtraCustomizationMeshesAddedForSlot_Params params {};
		params.addedExtraMeshes = addedExtraMeshes;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.Event_RefreshPlayerCustomization
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::Event_RefreshPlayerCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.Event_RefreshPlayerCustomization");
		
		APhotoFinishCharacter_BP_C_Event_RefreshPlayerCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.Event_RefreshPlayerActiveSkill
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::Event_RefreshPlayerActiveSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.Event_RefreshPlayerActiveSkill");
		
		APhotoFinishCharacter_BP_C_Event_RefreshPlayerActiveSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetFocusEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APhotoFinishCharacter_BP_C::SetFocusEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetFocusEnabled");
		
		APhotoFinishCharacter_BP_C_SetFocusEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.Event_OnSetup
	 * 		Flags  -> ()
	 */
	void APhotoFinishCharacter_BP_C::Event_OnSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.Event_OnSetup");
		
		APhotoFinishCharacter_BP_C_Event_OnSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.ExecuteUbergraph_PhotoFinishCharacter_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APhotoFinishCharacter_BP_C::ExecuteUbergraph_PhotoFinishCharacter_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.ExecuteUbergraph_PhotoFinishCharacter_BP");
		
		APhotoFinishCharacter_BP_C_ExecuteUbergraph_PhotoFinishCharacter_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APhotoFinishCharacter_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APhotoFinishCharacter_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C");
		return ptr;
	}

}


