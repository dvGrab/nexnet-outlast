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
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.GetMainParentSkeletalMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ASocialMenuCharacter_C::GetMainParentSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.GetMainParentSkeletalMesh");
		
		ASocialMenuCharacter_C_GetMainParentSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.GetWatchComponent
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* ASocialMenuCharacter_C::GetWatchComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.GetWatchComponent");
		
		ASocialMenuCharacter_C_GetWatchComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.GetPlayerCustomizationInfo
	 * 		Flags  -> ()
	 */
	struct FRBPlayerCustomizationInfo ASocialMenuCharacter_C::GetPlayerCustomizationInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.GetPlayerCustomizationInfo");
		
		ASocialMenuCharacter_C_GetPlayerCustomizationInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.GetSkeletalMeshComponentForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USkeletalMeshComponent* ASocialMenuCharacter_C::GetSkeletalMeshComponentForSlot(EPlayerCustomizationSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.GetSkeletalMeshComponentForSlot");
		
		ASocialMenuCharacter_C_GetSkeletalMeshComponentForSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.SetBatteryMaterial
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::SetBatteryMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.SetBatteryMaterial");
		
		ASocialMenuCharacter_C_SetBatteryMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.GetFacePose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPoseAsset*                                  FacePoseAsset                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASocialMenuCharacter_C::GetFacePose(class UPoseAsset** FacePoseAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.GetFacePose");
		
		ASocialMenuCharacter_C_GetFacePose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FacePoseAsset != nullptr)
			*FacePoseAsset = params.FacePoseAsset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.TryShow
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::TryShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.TryShow");
		
		ASocialMenuCharacter_C_TryShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.RefreshRigs
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::RefreshRigs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.RefreshRigs");
		
		ASocialMenuCharacter_C_RefreshRigs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.SetLightingChannels
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::SetLightingChannels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.SetLightingChannels");
		
		ASocialMenuCharacter_C_SetLightingChannels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.OverrideActorMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASocialMenuCharacter_C::OverrideActorMaterials(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.OverrideActorMaterials");
		
		ASocialMenuCharacter_C_OverrideActorMaterials_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.SetupMaterialOverride
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::SetupMaterialOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.SetupMaterialOverride");
		
		ASocialMenuCharacter_C_SetupMaterialOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.CleanSpawnedRigs
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::CleanSpawnedRigs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.CleanSpawnedRigs");
		
		ASocialMenuCharacter_C_CleanSpawnedRigs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.CleanExtraMeshes
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::CleanExtraMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.CleanExtraMeshes");
		
		ASocialMenuCharacter_C_CleanExtraMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.RefreshPlayerCusto
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::RefreshPlayerCusto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.RefreshPlayerCusto");
		
		ASocialMenuCharacter_C_RefreshPlayerCusto_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.Show
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.Show");
		
		ASocialMenuCharacter_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.UserConstructionScript");
		
		ASocialMenuCharacter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.SetFocusTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::SetFocusTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.SetFocusTimeline__FinishedFunc");
		
		ASocialMenuCharacter_C_SetFocusTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.SetFocusTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::SetFocusTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.SetFocusTimeline__UpdateFunc");
		
		ASocialMenuCharacter_C_SetFocusTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASocialMenuCharacter_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.ReceiveEndPlay");
		
		ASocialMenuCharacter_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.OnExtraCustomizationMeshesAddedForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              addedExtraMeshes                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASocialMenuCharacter_C::OnExtraCustomizationMeshesAddedForSlot(TArray<class USkeletalMeshComponent*> addedExtraMeshes, EPlayerCustomizationSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.OnExtraCustomizationMeshesAddedForSlot");
		
		ASocialMenuCharacter_C_OnExtraCustomizationMeshesAddedForSlot_Params params {};
		params.addedExtraMeshes = addedExtraMeshes;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.Event_RefreshPlayerCustomization
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::Event_RefreshPlayerCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.Event_RefreshPlayerCustomization");
		
		ASocialMenuCharacter_C_Event_RefreshPlayerCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.Event_RefreshPlayerActiveSkill
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::Event_RefreshPlayerActiveSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.Event_RefreshPlayerActiveSkill");
		
		ASocialMenuCharacter_C_Event_RefreshPlayerActiveSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.SetFocusEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASocialMenuCharacter_C::SetFocusEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.SetFocusEnabled");
		
		ASocialMenuCharacter_C_SetFocusEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.Event_OnSetup
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::Event_OnSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.Event_OnSetup");
		
		ASocialMenuCharacter_C_Event_OnSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.Event_OnVisibleChanged
	 * 		Flags  -> ()
	 */
	void ASocialMenuCharacter_C::Event_OnVisibleChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.Event_OnVisibleChanged");
		
		ASocialMenuCharacter_C_Event_OnVisibleChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenuCharacter.SocialMenuCharacter_C.ExecuteUbergraph_SocialMenuCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASocialMenuCharacter_C::ExecuteUbergraph_SocialMenuCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenuCharacter.SocialMenuCharacter_C.ExecuteUbergraph_SocialMenuCharacter");
		
		ASocialMenuCharacter_C_ExecuteUbergraph_SocialMenuCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASocialMenuCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASocialMenuCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SocialMenuCharacter.SocialMenuCharacter_C");
		return ptr;
	}

}


