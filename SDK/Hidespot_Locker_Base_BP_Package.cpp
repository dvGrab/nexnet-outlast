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
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.SetExitCameraLimits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBHidespotComponent*                        hidespotComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Locker_Base_BP_C::SetExitCameraLimits(class URBHidespotComponent* hidespotComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.SetExitCameraLimits");
		
		AHidespot_Locker_Base_BP_C_SetExitCameraLimits_Params params {};
		params.hidespotComponent = hidespotComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.RandomizeEnabledMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             RandomizationRoot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RandomSeedOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Locker_Base_BP_C::RandomizeEnabledMeshes(class USceneComponent* RandomizationRoot, int32_t RandomSeedOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.RandomizeEnabledMeshes");
		
		AHidespot_Locker_Base_BP_C_RandomizeEnabledMeshes_Params params {};
		params.RandomizationRoot = RandomizationRoot;
		params.RandomSeedOffset = RandomSeedOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.Editor_RefreshEnabledMeshesVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowEnabledVisuals                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_Locker_Base_BP_C::Editor_RefreshEnabledMeshesVisibility(bool* bShowEnabledVisuals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.Editor_RefreshEnabledMeshesVisibility");
		
		AHidespot_Locker_Base_BP_C_Editor_RefreshEnabledMeshesVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShowEnabledVisuals != nullptr)
			*bShowEnabledVisuals = params.bShowEnabledVisuals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.FixUpDoors
	 * 		Flags  -> ()
	 */
	void AHidespot_Locker_Base_BP_C::FixUpDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.FixUpDoors");
		
		AHidespot_Locker_Base_BP_C_FixUpDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.UpdateEnabledMeshForFlip
	 * 		Flags  -> ()
	 */
	void AHidespot_Locker_Base_BP_C::UpdateEnabledMeshForFlip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.UpdateEnabledMeshForFlip");
		
		AHidespot_Locker_Base_BP_C_UpdateEnabledMeshForFlip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.SetAllMeshesToMasterPoseComponent
	 * 		Flags  -> ()
	 */
	void AHidespot_Locker_Base_BP_C::SetAllMeshesToMasterPoseComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.SetAllMeshesToMasterPoseComponent");
		
		AHidespot_Locker_Base_BP_C_SetAllMeshesToMasterPoseComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.OnDisabledChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             DisabledMeshRoot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UStaticMeshComponent*                        LockerDoor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Locker_Base_BP_C::OnDisabledChanged(class USceneComponent* DisabledMeshRoot, bool Disabled, class UStaticMeshComponent* LockerDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.OnDisabledChanged");
		
		AHidespot_Locker_Base_BP_C_OnDisabledChanged_Params params {};
		params.DisabledMeshRoot = DisabledMeshRoot;
		params.Disabled = Disabled;
		params.LockerDoor = LockerDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.Editor_RefreshDisabledMeshesVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowDisabledVisuals                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_Locker_Base_BP_C::Editor_RefreshDisabledMeshesVisibility(bool* bShowDisabledVisuals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.Editor_RefreshDisabledMeshesVisibility");
		
		AHidespot_Locker_Base_BP_C_Editor_RefreshDisabledMeshesVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShowDisabledVisuals != nullptr)
			*bShowDisabledVisuals = params.bShowDisabledVisuals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.SetDisabledMeshesState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDisabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             RandomizationRootOverride                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Locker_Base_BP_C::SetDisabledMeshesState(bool bDisabled, class USceneComponent* RandomizationRootOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.SetDisabledMeshesState");
		
		AHidespot_Locker_Base_BP_C_SetDisabledMeshesState_Params params {};
		params.bDisabled = bDisabled;
		params.RandomizationRootOverride = RandomizationRootOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.ResetLockerHidespot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        LockerDoor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             DisabledMeshesRoot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Locker_Base_BP_C::ResetLockerHidespot(class UStaticMeshComponent* LockerDoor, class USceneComponent* DisabledMeshesRoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.ResetLockerHidespot");
		
		AHidespot_Locker_Base_BP_C_ResetLockerHidespot_Params params {};
		params.LockerDoor = LockerDoor;
		params.DisabledMeshesRoot = DisabledMeshesRoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.RandomizeDisabledMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             RandomizationRoot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RandomSeedOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Locker_Base_BP_C::RandomizeDisabledMeshes(class USceneComponent* RandomizationRoot, int32_t RandomSeedOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.RandomizeDisabledMeshes");
		
		AHidespot_Locker_Base_BP_C_RandomizeDisabledMeshes_Params params {};
		params.RandomizationRoot = RandomizationRoot;
		params.RandomSeedOffset = RandomSeedOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.RefreshHidespotSettings
	 * 		Flags  -> ()
	 */
	void AHidespot_Locker_Base_BP_C::RefreshHidespotSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.RefreshHidespotSettings");
		
		AHidespot_Locker_Base_BP_C_RefreshHidespotSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.RefreshDoorMeshes
	 * 		Flags  -> ()
	 */
	void AHidespot_Locker_Base_BP_C::RefreshDoorMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.RefreshDoorMeshes");
		
		AHidespot_Locker_Base_BP_C_RefreshDoorMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AHidespot_Locker_Base_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.UserConstructionScript");
		
		AHidespot_Locker_Base_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AHidespot_Locker_Base_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.Event_OnResetStage");
		
		AHidespot_Locker_Base_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot1_K2Node_ComponentBoundEvent_0_OnHidespotDisabledChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBHidespotComponent*                        hidespot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDisabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_Locker_Base_BP_C::BndEvt__RBHidespot1_K2Node_ComponentBoundEvent_0_OnHidespotDisabledChangedEvent__DelegateSignature(class URBHidespotComponent* hidespot, bool bDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot1_K2Node_ComponentBoundEvent_0_OnHidespotDisabledChangedEvent__DelegateSignature");
		
		AHidespot_Locker_Base_BP_C_BndEvt__RBHidespot1_K2Node_ComponentBoundEvent_0_OnHidespotDisabledChangedEvent__DelegateSignature_Params params {};
		params.hidespot = hidespot;
		params.bDisabled = bDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot2_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBHidespotComponent*                        hidespot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDisabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_Locker_Base_BP_C::BndEvt__RBHidespot2_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature(class URBHidespotComponent* hidespot, bool bDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot2_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature");
		
		AHidespot_Locker_Base_BP_C_BndEvt__RBHidespot2_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature_Params params {};
		params.hidespot = hidespot;
		params.bDisabled = bDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot3_K2Node_ComponentBoundEvent_7_OnHidespotDisabledChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBHidespotComponent*                        hidespot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDisabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_Locker_Base_BP_C::BndEvt__RBHidespot3_K2Node_ComponentBoundEvent_7_OnHidespotDisabledChangedEvent__DelegateSignature(class URBHidespotComponent* hidespot, bool bDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot3_K2Node_ComponentBoundEvent_7_OnHidespotDisabledChangedEvent__DelegateSignature");
		
		AHidespot_Locker_Base_BP_C_BndEvt__RBHidespot3_K2Node_ComponentBoundEvent_7_OnHidespotDisabledChangedEvent__DelegateSignature_Params params {};
		params.hidespot = hidespot;
		params.bDisabled = bDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot4_K2Node_ComponentBoundEvent_8_OnHidespotDisabledChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBHidespotComponent*                        hidespot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDisabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_Locker_Base_BP_C::BndEvt__RBHidespot4_K2Node_ComponentBoundEvent_8_OnHidespotDisabledChangedEvent__DelegateSignature(class URBHidespotComponent* hidespot, bool bDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot4_K2Node_ComponentBoundEvent_8_OnHidespotDisabledChangedEvent__DelegateSignature");
		
		AHidespot_Locker_Base_BP_C_BndEvt__RBHidespot4_K2Node_ComponentBoundEvent_8_OnHidespotDisabledChangedEvent__DelegateSignature_Params params {};
		params.hidespot = hidespot;
		params.bDisabled = bDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot5_K2Node_ComponentBoundEvent_9_OnHidespotDisabledChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBHidespotComponent*                        hidespot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDisabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_Locker_Base_BP_C::BndEvt__RBHidespot5_K2Node_ComponentBoundEvent_9_OnHidespotDisabledChangedEvent__DelegateSignature(class URBHidespotComponent* hidespot, bool bDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot5_K2Node_ComponentBoundEvent_9_OnHidespotDisabledChangedEvent__DelegateSignature");
		
		AHidespot_Locker_Base_BP_C_BndEvt__RBHidespot5_K2Node_ComponentBoundEvent_9_OnHidespotDisabledChangedEvent__DelegateSignature_Params params {};
		params.hidespot = hidespot;
		params.bDisabled = bDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.Info
	 * 		Flags  -> ()
	 */
	void AHidespot_Locker_Base_BP_C::Info()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.Info");
		
		AHidespot_Locker_Base_BP_C_Info_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void AHidespot_Locker_Base_BP_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.OnEditorPostLoad");
		
		AHidespot_Locker_Base_BP_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AHidespot_Locker_Base_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.ReceiveBeginPlay");
		
		AHidespot_Locker_Base_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.ExecuteUbergraph_Hidespot_Locker_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Locker_Base_BP_C::ExecuteUbergraph_Hidespot_Locker_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.ExecuteUbergraph_Hidespot_Locker_Base_BP");
		
		AHidespot_Locker_Base_BP_C_ExecuteUbergraph_Hidespot_Locker_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHidespot_Locker_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHidespot_Locker_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C");
		return ptr;
	}

}


