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
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetMainParentSkeletalMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ARBNPC_Imposter_BP_C::GetMainParentSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetMainParentSkeletalMesh");
		
		ARBNPC_Imposter_BP_C_GetMainParentSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetWatchComponent
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* ARBNPC_Imposter_BP_C::GetWatchComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetWatchComponent");
		
		ARBNPC_Imposter_BP_C_GetWatchComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetPlayerCustomizationInfo
	 * 		Flags  -> ()
	 */
	struct FRBPlayerCustomizationInfo ARBNPC_Imposter_BP_C::GetPlayerCustomizationInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetPlayerCustomizationInfo");
		
		ARBNPC_Imposter_BP_C_GetPlayerCustomizationInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetSkeletalMeshComponentForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USkeletalMeshComponent* ARBNPC_Imposter_BP_C::GetSkeletalMeshComponentForSlot(EPlayerCustomizationSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetSkeletalMeshComponentForSlot");
		
		ARBNPC_Imposter_BP_C_GetSkeletalMeshComponentForSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetFaceFXSkeletalMeshComponent
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ARBNPC_Imposter_BP_C::GetFaceFXSkeletalMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetFaceFXSkeletalMeshComponent");
		
		ARBNPC_Imposter_BP_C_GetFaceFXSkeletalMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetFacePoseAsset
	 * 		Flags  -> ()
	 */
	class UPoseAsset* ARBNPC_Imposter_BP_C::GetFacePoseAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetFacePoseAsset");
		
		ARBNPC_Imposter_BP_C_GetFacePoseAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.UpdateESOPBatteryType
	 * 		Flags  -> ()
	 */
	void ARBNPC_Imposter_BP_C::UpdateESOPBatteryType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.UpdateESOPBatteryType");
		
		ARBNPC_Imposter_BP_C_UpdateESOPBatteryType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.DressCharacter
	 * 		Flags  -> ()
	 */
	void ARBNPC_Imposter_BP_C::DressCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.DressCharacter");
		
		ARBNPC_Imposter_BP_C_DressCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBNPC_Imposter_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.UserConstructionScript");
		
		ARBNPC_Imposter_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_OnTakeDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageInfo                                 Info                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ARBNPC_Imposter_BP_C::Event_OnTakeDamage(const struct FDamageInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_OnTakeDamage");
		
		ARBNPC_Imposter_BP_C_Event_OnTakeDamage_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_SetCustomization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBPlayerCustomizationInfo                  newCustomization                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ARBNPC_Imposter_BP_C::Event_SetCustomization(const struct FRBPlayerCustomizationInfo& newCustomization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_SetCustomization");
		
		ARBNPC_Imposter_BP_C_Event_SetCustomization_Params params {};
		params.newCustomization = newCustomization;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.OnExtraCustomizationMeshesAddedForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              addedExtraMeshes                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		EPlayerCustomizationSlot                           Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Imposter_BP_C::OnExtraCustomizationMeshesAddedForSlot(TArray<class USkeletalMeshComponent*> addedExtraMeshes, EPlayerCustomizationSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.OnExtraCustomizationMeshesAddedForSlot");
		
		ARBNPC_Imposter_BP_C_OnExtraCustomizationMeshesAddedForSlot_Params params {};
		params.addedExtraMeshes = addedExtraMeshes;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_OnStartRagePaintState
	 * 		Flags  -> ()
	 */
	void ARBNPC_Imposter_BP_C::Event_OnStartRagePaintState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_OnStartRagePaintState");
		
		ARBNPC_Imposter_BP_C_Event_OnStartRagePaintState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_OnEndRagePaintState
	 * 		Flags  -> ()
	 */
	void ARBNPC_Imposter_BP_C::Event_OnEndRagePaintState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_OnEndRagePaintState");
		
		ARBNPC_Imposter_BP_C_Event_OnEndRagePaintState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.ExecuteUbergraph_RBNPC_Imposter_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Imposter_BP_C::ExecuteUbergraph_RBNPC_Imposter_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.ExecuteUbergraph_RBNPC_Imposter_BP");
		
		ARBNPC_Imposter_BP_C_ExecuteUbergraph_RBNPC_Imposter_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBNPC_Imposter_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBNPC_Imposter_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBNPC_Imposter_BP.RBNPC_Imposter_BP_C");
		return ptr;
	}

}


