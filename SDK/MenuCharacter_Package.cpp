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
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.GetMainParentSkeletalMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* AMenuCharacter_C::GetMainParentSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.GetMainParentSkeletalMesh");
		
		AMenuCharacter_C_GetMainParentSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.GetWatchComponent
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* AMenuCharacter_C::GetWatchComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.GetWatchComponent");
		
		AMenuCharacter_C_GetWatchComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.GetPlayerCustomizationInfo
	 * 		Flags  -> ()
	 */
	struct FRBPlayerCustomizationInfo AMenuCharacter_C::GetPlayerCustomizationInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.GetPlayerCustomizationInfo");
		
		AMenuCharacter_C_GetPlayerCustomizationInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.GetSkeletalMeshComponentForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USkeletalMeshComponent* AMenuCharacter_C::GetSkeletalMeshComponentForSlot(EPlayerCustomizationSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.GetSkeletalMeshComponentForSlot");
		
		AMenuCharacter_C_GetSkeletalMeshComponentForSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.GetFacePoseAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPoseAsset*                                  FacePoseAsset                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::GetFacePoseAsset(class UPoseAsset** FacePoseAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.GetFacePoseAsset");
		
		AMenuCharacter_C_GetFacePoseAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FacePoseAsset != nullptr)
			*FacePoseAsset = params.FacePoseAsset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.ResetPlacementAndAnim
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::ResetPlacementAndAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.ResetPlacementAndAnim");
		
		AMenuCharacter_C_ResetPlacementAndAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.HasCustomizationChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBPlayerCustomizationInfo                  RBPlayerCustomizationInfo                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bHasChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenuCharacter_C::HasCustomizationChanged(const struct FRBPlayerCustomizationInfo& RBPlayerCustomizationInfo, bool* bHasChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.HasCustomizationChanged");
		
		AMenuCharacter_C_HasCustomizationChanged_Params params {};
		params.RBPlayerCustomizationInfo = RBPlayerCustomizationInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasChanged != nullptr)
			*bHasChanged = params.bHasChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.SetHairColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        newHairColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::SetHairColor(const class FName& newHairColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.SetHairColor");
		
		AMenuCharacter_C_SetHairColor_Params params {};
		params.newHairColor = newHairColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.CycleDebugPose
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::CycleDebugPose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.CycleDebugPose");
		
		AMenuCharacter_C_CycleDebugPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.SetCharacterHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hidden                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenuCharacter_C::SetCharacterHidden(bool Hidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.SetCharacterHidden");
		
		AMenuCharacter_C_SetCharacterHidden_Params params {};
		params.Hidden = Hidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.SetDebugMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               debug                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenuCharacter_C::SetDebugMode(bool debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.SetDebugMode");
		
		AMenuCharacter_C_SetDebugMode_Params params {};
		params.debug = debug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.SetLightsActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAffectWorld                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenuCharacter_C::SetLightsActivation(bool bAffectWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.SetLightsActivation");
		
		AMenuCharacter_C_SetLightsActivation_Params params {};
		params.bAffectWorld = bAffectWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.GetCameras
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::GetCameras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.GetCameras");
		
		AMenuCharacter_C_GetCameras_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.DeactivateViewer
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::DeactivateViewer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.DeactivateViewer");
		
		AMenuCharacter_C_DeactivateViewer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.ActivateViewer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      CustomReturnViewTarget                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::ActivateViewer(class AActor* CustomReturnViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.ActivateViewer");
		
		AMenuCharacter_C_ActivateViewer_Params params {};
		params.CustomReturnViewTarget = CustomReturnViewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.SetLightingChannels
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::SetLightingChannels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.SetLightingChannels");
		
		AMenuCharacter_C_SetLightingChannels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.SetCustomization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBPlayerCustomizationInfo                  customizationInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AMenuCharacter_C::SetCustomization(const struct FRBPlayerCustomizationInfo& customizationInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.SetCustomization");
		
		AMenuCharacter_C_SetCustomization_Params params {};
		params.customizationInfo = customizationInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.OnCategoryClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         CustomizationCategory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::OnCategoryClicked(ECustomizationMenuCategory CustomizationCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.OnCategoryClicked");
		
		AMenuCharacter_C_OnCategoryClicked_Params params {};
		params.CustomizationCategory = CustomizationCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.OnItemBought
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::OnItemBought()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.OnItemBought");
		
		AMenuCharacter_C_OnItemBought_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.On Item Equipped
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::On_Item_Equipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.On Item Equipped");
		
		AMenuCharacter_C_On_Item_Equipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.ChangeBodyType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFemale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class URBPlayerCustomizationOption*>        Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AMenuCharacter_C::ChangeBodyType(bool IsFemale, TArray<class URBPlayerCustomizationOption*>* Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.ChangeBodyType");
		
		AMenuCharacter_C_ChangeBodyType_Params params {};
		params.IsFemale = IsFemale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Options != nullptr)
			*Options = params.Options;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.UpdateCustomization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerCustomizationOption*                Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::UpdateCustomization(class URBPlayerCustomizationOption* Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.UpdateCustomization");
		
		AMenuCharacter_C_UpdateCustomization_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.CleanSpawnedRigs
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::CleanSpawnedRigs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.CleanSpawnedRigs");
		
		AMenuCharacter_C_CleanSpawnedRigs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.GetSelectedCustomizationOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBPlayerCustomizationOption*                SelectedOption                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::GetSelectedCustomizationOption(EPlayerCustomizationSlot Slot, class URBPlayerCustomizationOption** SelectedOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.GetSelectedCustomizationOption");
		
		AMenuCharacter_C_GetSelectedCustomizationOption_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedOption != nullptr)
			*SelectedOption = params.SelectedOption;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.UpdateSlotSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerCustomizationOption*                NewCustomizationOption                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::UpdateSlotSelection(class URBPlayerCustomizationOption* NewCustomizationOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.UpdateSlotSelection");
		
		AMenuCharacter_C_UpdateSlotSelection_Params params {};
		params.NewCustomizationOption = NewCustomizationOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.LoadCustomization
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::LoadCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.LoadCustomization");
		
		AMenuCharacter_C_LoadCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.Show
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.Show");
		
		AMenuCharacter_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.DressCharacter
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::DressCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.DressCharacter");
		
		AMenuCharacter_C_DressCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.UserConstructionScript");
		
		AMenuCharacter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.AddCharacterRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Factor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::AddCharacterRotation(float Factor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.AddCharacterRotation");
		
		AMenuCharacter_C_AddCharacterRotation_Params params {};
		params.Factor = Factor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.ReceiveBeginPlay");
		
		AMenuCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.ReceiveEndPlay");
		
		AMenuCharacter_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         CustomizationMenuCategory                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::CustomEvent_1(ECustomizationMenuCategory CustomizationMenuCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.CustomEvent_1");
		
		AMenuCharacter_C_CustomEvent_1_Params params {};
		params.CustomizationMenuCategory = CustomizationMenuCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.BindOnCategoryChanged
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::BindOnCategoryChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.BindOnCategoryChanged");
		
		AMenuCharacter_C_BindOnCategoryChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.GoingToMainPosition
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::GoingToMainPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.GoingToMainPosition");
		
		AMenuCharacter_C_GoingToMainPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.StartInteracting
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::StartInteracting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.StartInteracting");
		
		AMenuCharacter_C_StartInteracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.RequestDressCharacter
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::RequestDressCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.RequestDressCharacter");
		
		AMenuCharacter_C_RequestDressCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.OnExtraCustomizationMeshesAddedForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              addedExtraMeshes                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::OnExtraCustomizationMeshesAddedForSlot(TArray<class USkeletalMeshComponent*> addedExtraMeshes, EPlayerCustomizationSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.OnExtraCustomizationMeshesAddedForSlot");
		
		AMenuCharacter_C_OnExtraCustomizationMeshesAddedForSlot_Params params {};
		params.addedExtraMeshes = addedExtraMeshes;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.RequestSpawnRig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EActiveSkillType                                   skillType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::RequestSpawnRig(EActiveSkillType skillType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.RequestSpawnRig");
		
		AMenuCharacter_C_RequestSpawnRig_Params params {};
		params.skillType = skillType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.OnActiveSkillLoaded
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::OnActiveSkillLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.OnActiveSkillLoaded");
		
		AMenuCharacter_C_OnActiveSkillLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.OnPlayerCustoLoaded
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::OnPlayerCustoLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.OnPlayerCustoLoaded");
		
		AMenuCharacter_C_OnPlayerCustoLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.OnCustomizationLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      customizationOwner                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            requestID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPawnCustomizationRequestType                      requestType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::OnCustomizationLoaded(class AActor* customizationOwner, int32_t requestID, EPawnCustomizationRequestType requestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.OnCustomizationLoaded");
		
		AMenuCharacter_C_OnCustomizationLoaded_Params params {};
		params.customizationOwner = customizationOwner;
		params.requestID = requestID;
		params.requestType = requestType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.ReachedMainPosition
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::ReachedMainPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.ReachedMainPosition");
		
		AMenuCharacter_C_ReachedMainPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.OnCurrentLoadoutChanged
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::OnCurrentLoadoutChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.OnCurrentLoadoutChanged");
		
		AMenuCharacter_C_OnCurrentLoadoutChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.ExecuteUbergraph_MenuCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::ExecuteUbergraph_MenuCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.ExecuteUbergraph_MenuCharacter");
		
		AMenuCharacter_C_ExecuteUbergraph_MenuCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.OnCustomizationLoadedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AMenuCharacter_C::OnCustomizationLoadedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.OnCustomizationLoadedEvent__DelegateSignature");
		
		AMenuCharacter_C_OnCustomizationLoadedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter.MenuCharacter_C.OncategoryClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         CustomizationMenuCategory                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuCharacter_C::OncategoryClickedEvent__DelegateSignature(ECustomizationMenuCategory CustomizationMenuCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter.MenuCharacter_C.OncategoryClickedEvent__DelegateSignature");
		
		AMenuCharacter_C_OncategoryClickedEvent__DelegateSignature_Params params {};
		params.CustomizationMenuCategory = CustomizationMenuCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMenuCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMenuCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MenuCharacter.MenuCharacter_C");
		return ptr;
	}

}


