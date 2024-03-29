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
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetPingItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        outName                                                    (Parm, OutParm)
	 */
	bool AHidespot_Base_BP_C::GetPingItemName(class FText* outName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetPingItemName");
		
		AHidespot_Base_BP_C_GetPingItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outName != nullptr)
			*outName = params.outName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetPingEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               outIsEnabled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AHidespot_Base_BP_C::GetPingEnabled(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, bool* outIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetPingEnabled");
		
		AHidespot_Base_BP_C_GetPingEnabled_Params params {};
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
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetPlayerPingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FPlayerPingData                             outData                                                    (Parm, OutParm)
	 */
	bool AHidespot_Base_BP_C::GetPlayerPingData(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FPlayerPingData* outData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetPlayerPingData");
		
		AHidespot_Base_BP_C_GetPlayerPingData_Params params {};
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
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetPlayerPingWorldLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AHidespot_Base_BP_C::GetPlayerPingWorldLocation(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetPlayerPingWorldLocation");
		
		AHidespot_Base_BP_C_GetPlayerPingWorldLocation_Params params {};
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
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool AHidespot_Base_BP_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetStateName");
		
		AHidespot_Base_BP_C_GetStateName_Params params {};
		
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
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool AHidespot_Base_BP_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.IsStateA");
		
		AHidespot_Base_BP_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.ShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 */
	bool AHidespot_Base_BP_C::ShouldBeIgnoredForLots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.ShouldBeIgnoredForLots");
		
		AHidespot_Base_BP_C_ShouldBeIgnoredForLots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.FixUp
	 * 		Flags  -> ()
	 */
	bool AHidespot_Base_BP_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.FixUp");
		
		AHidespot_Base_BP_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.RandomizeEnabledMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             RandomizationRoot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RandomSeedOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Base_BP_C::RandomizeEnabledMeshes(class USceneComponent* RandomizationRoot, int32_t RandomSeedOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.RandomizeEnabledMeshes");
		
		AHidespot_Base_BP_C_RandomizeEnabledMeshes_Params params {};
		params.RandomizationRoot = RandomizationRoot;
		params.RandomSeedOffset = RandomSeedOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.UpdateInteractionIgnoreComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBHidespotComponent*                        hidespot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Base_BP_C::UpdateInteractionIgnoreComponents(class URBHidespotComponent* hidespot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.UpdateInteractionIgnoreComponents");
		
		AHidespot_Base_BP_C_UpdateInteractionIgnoreComponents_Params params {};
		params.hidespot = hidespot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.Editor_RefreshEnabledMeshesVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowEnabledVisuals                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_Base_BP_C::Editor_RefreshEnabledMeshesVisibility(bool* bShowEnabledVisuals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.Editor_RefreshEnabledMeshesVisibility");
		
		AHidespot_Base_BP_C_Editor_RefreshEnabledMeshesVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShowEnabledVisuals != nullptr)
			*bShowEnabledVisuals = params.bShowEnabledVisuals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.IntitializeClearanceBoxes
	 * 		Flags  -> ()
	 */
	void AHidespot_Base_BP_C::IntitializeClearanceBoxes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.IntitializeClearanceBoxes");
		
		AHidespot_Base_BP_C_IntitializeClearanceBoxes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.DisabledAttachedComponentsFromServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Base_BP_C::DisabledAttachedComponentsFromServer(class USceneComponent* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.DisabledAttachedComponentsFromServer");
		
		AHidespot_Base_BP_C_DisabledAttachedComponentsFromServer_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.DisableExtraComponentsFromServer
	 * 		Flags  -> ()
	 */
	void AHidespot_Base_BP_C::DisableExtraComponentsFromServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.DisableExtraComponentsFromServer");
		
		AHidespot_Base_BP_C_DisableExtraComponentsFromServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.SetupMasterPose
	 * 		Flags  -> ()
	 */
	void AHidespot_Base_BP_C::SetupMasterPose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.SetupMasterPose");
		
		AHidespot_Base_BP_C_SetupMasterPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.GatherAvailableRandomizationSceneComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Root                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class USceneComponent*>                     Availables                                                 (Parm, OutParm, ContainsInstancedReference)
	 * 		TArray<class USceneComponent*>                     Discarded                                                  (Parm, OutParm, ContainsInstancedReference)
	 */
	void AHidespot_Base_BP_C::GatherAvailableRandomizationSceneComp(class USceneComponent* Root, TArray<class USceneComponent*>* Availables, TArray<class USceneComponent*>* Discarded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.GatherAvailableRandomizationSceneComp");
		
		AHidespot_Base_BP_C_GatherAvailableRandomizationSceneComp_Params params {};
		params.Root = Root;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Availables != nullptr)
			*Availables = params.Availables;
		if (Discarded != nullptr)
			*Discarded = params.Discarded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.TrySetupRandomizedSkeletalMeshFromRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             InComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Base_BP_C::TrySetupRandomizedSkeletalMeshFromRoot(class USceneComponent* InComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.TrySetupRandomizedSkeletalMeshFromRoot");
		
		AHidespot_Base_BP_C_TrySetupRandomizedSkeletalMeshFromRoot_Params params {};
		params.InComponent = InComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.TrySetupRandomizedSkeletalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             InComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Base_BP_C::TrySetupRandomizedSkeletalMesh(class USceneComponent* InComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.TrySetupRandomizedSkeletalMesh");
		
		AHidespot_Base_BP_C_TrySetupRandomizedSkeletalMesh_Params params {};
		params.InComponent = InComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.WakeUpDisabledSkeletalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             OverrideDisableRoot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Base_BP_C::WakeUpDisabledSkeletalMesh(class USceneComponent* OverrideDisableRoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.WakeUpDisabledSkeletalMesh");
		
		AHidespot_Base_BP_C_WakeUpDisabledSkeletalMesh_Params params {};
		params.OverrideDisableRoot = OverrideDisableRoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.Editor_RefreshDisabledMeshesVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowDisabledVisuals                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_Base_BP_C::Editor_RefreshDisabledMeshesVisibility(bool* bShowDisabledVisuals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.Editor_RefreshDisabledMeshesVisibility");
		
		AHidespot_Base_BP_C_Editor_RefreshDisabledMeshesVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShowDisabledVisuals != nullptr)
			*bShowDisabledVisuals = params.bShowDisabledVisuals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.SetDisabledMeshesState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDisabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             RandomizationRootOverride                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Base_BP_C::SetDisabledMeshesState(bool bDisabled, class USceneComponent* RandomizationRootOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.SetDisabledMeshesState");
		
		AHidespot_Base_BP_C_SetDisabledMeshesState_Params params {};
		params.bDisabled = bDisabled;
		params.RandomizationRootOverride = RandomizationRootOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.RandomizeDisabledMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             RandomizationRoot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RandomSeedOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Base_BP_C::RandomizeDisabledMeshes(class USceneComponent* RandomizationRoot, int32_t RandomSeedOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.RandomizeDisabledMeshes");
		
		AHidespot_Base_BP_C_RandomizeDisabledMeshes_Params params {};
		params.RandomizationRoot = RandomizationRoot;
		params.RandomSeedOffset = RandomSeedOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.TryGenerateRandomSeed
	 * 		Flags  -> ()
	 */
	void AHidespot_Base_BP_C::TryGenerateRandomSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.TryGenerateRandomSeed");
		
		AHidespot_Base_BP_C_TryGenerateRandomSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AHidespot_Base_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.UserConstructionScript");
		
		AHidespot_Base_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.PrepareState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      randomOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Base_BP_C::PrepareState(bool bStateA, class AActor* randomOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.PrepareState");
		
		AHidespot_Base_BP_C_PrepareState_Params params {};
		params.bStateA = bStateA;
		params.randomOwner = randomOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AHidespot_Base_BP_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.OnPostActorsPasted");
		
		AHidespot_Base_BP_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void AHidespot_Base_BP_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostAddedToLevel");
		
		AHidespot_Base_BP_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Base_BP_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostEditChange");
		
		AHidespot_Base_BP_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_Base_BP_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostEditMove");
		
		AHidespot_Base_BP_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.TickSelected
	 * 		Flags  -> ()
	 */
	void AHidespot_Base_BP_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.TickSelected");
		
		AHidespot_Base_BP_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Base_BP_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostDuplicated");
		
		AHidespot_Base_BP_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AHidespot_Base_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.Event_OnResetStage");
		
		AHidespot_Base_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostToggled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bToggleEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_Base_BP_C::PostToggled(bool bToggleEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostToggled");
		
		AHidespot_Base_BP_C_PostToggled_Params params {};
		params.bToggleEnabled = bToggleEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.SetShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_Base_BP_C::SetShouldBeIgnoredForLots(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.SetShouldBeIgnoredForLots");
		
		AHidespot_Base_BP_C_SetShouldBeIgnoredForLots_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHidespot_Base_BP_C::SetState(bool bStateA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.SetState");
		
		AHidespot_Base_BP_C_SetState_Params params {};
		params.bStateA = bStateA;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void AHidespot_Base_BP_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.OnEditorPostLoad");
		
		AHidespot_Base_BP_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hidespot_Base_BP.Hidespot_Base_BP_C.ExecuteUbergraph_Hidespot_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidespot_Base_BP_C::ExecuteUbergraph_Hidespot_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hidespot_Base_BP.Hidespot_Base_BP_C.ExecuteUbergraph_Hidespot_Base_BP");
		
		AHidespot_Base_BP_C_ExecuteUbergraph_Hidespot_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHidespot_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHidespot_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hidespot_Base_BP.Hidespot_Base_BP_C");
		return ptr;
	}

}


