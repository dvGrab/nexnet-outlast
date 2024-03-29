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
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.TryPlayFacialAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      lineId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool ARBNPC_Grunt_C::TryPlayFacialAnim(const class FString& lineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.TryPlayFacialAnim");
		
		ARBNPC_Grunt_C_TryPlayFacialAnim_Params params {};
		params.lineId = lineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.GetFacePoseAsset
	 * 		Flags  -> ()
	 */
	class UPoseAsset* ARBNPC_Grunt_C::GetFacePoseAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.GetFacePoseAsset");
		
		ARBNPC_Grunt_C_GetFacePoseAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.GetFoleySwitchOverride
	 * 		Flags  -> ()
	 */
	class FName ARBNPC_Grunt_C::GetFoleySwitchOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.GetFoleySwitchOverride");
		
		ARBNPC_Grunt_C_GetFoleySwitchOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.OnRep_SelectedCustomizationInfo
	 * 		Flags  -> ()
	 */
	void ARBNPC_Grunt_C::OnRep_SelectedCustomizationInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.OnRep_SelectedCustomizationInfo");
		
		ARBNPC_Grunt_C_OnRep_SelectedCustomizationInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.ApplyGruntCustomization
	 * 		Flags  -> ()
	 */
	void ARBNPC_Grunt_C::ApplyGruntCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.ApplyGruntCustomization");
		
		ARBNPC_Grunt_C_ApplyGruntCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.CustomizeCharacter
	 * 		Flags  -> ()
	 */
	void ARBNPC_Grunt_C::CustomizeCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.CustomizeCharacter");
		
		ARBNPC_Grunt_C_CustomizeCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.UpdateMaterialsOnCustomizedMeshFromMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FString, class UMaterialInstanceConstant*> MaterialOverrides                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ARBNPC_Grunt_C::UpdateMaterialsOnCustomizedMeshFromMap(class USkeletalMeshComponent** SkeletalMeshComponent, TMap<class FString, class UMaterialInstanceConstant*>* MaterialOverrides)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.UpdateMaterialsOnCustomizedMeshFromMap");
		
		ARBNPC_Grunt_C_UpdateMaterialsOnCustomizedMeshFromMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkeletalMeshComponent != nullptr)
			*SkeletalMeshComponent = params.SkeletalMeshComponent;
		if (MaterialOverrides != nullptr)
			*MaterialOverrides = params.MaterialOverrides;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.UpdateMaterialsOnCustomizedMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FString, class UMaterialInstanceConstant*> MaterialOverrides                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ARBNPC_Grunt_C::UpdateMaterialsOnCustomizedMesh(class USkeletalMeshComponent** SkeletalMeshComponent, TMap<class FString, class UMaterialInstanceConstant*>* MaterialOverrides)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.UpdateMaterialsOnCustomizedMesh");
		
		ARBNPC_Grunt_C_UpdateMaterialsOnCustomizedMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkeletalMeshComponent != nullptr)
			*SkeletalMeshComponent = params.SkeletalMeshComponent;
		if (MaterialOverrides != nullptr)
			*MaterialOverrides = params.MaterialOverrides;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.UpdateComponentFromIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENPCCustomizationSlot                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Grunt_C::UpdateComponentFromIndex(class USkeletalMeshComponent** MeshComponent, ENPCCustomizationSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.UpdateComponentFromIndex");
		
		ARBNPC_Grunt_C_UpdateComponentFromIndex_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshComponent != nullptr)
			*MeshComponent = params.MeshComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.GetFaceFXSkeletalMeshComponent
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ARBNPC_Grunt_C::GetFaceFXSkeletalMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.GetFaceFXSkeletalMeshComponent");
		
		ARBNPC_Grunt_C_GetFaceFXSkeletalMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBNPC_Grunt_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.UserConstructionScript");
		
		ARBNPC_Grunt_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.RequestGruntCustomization
	 * 		Flags  -> ()
	 */
	void ARBNPC_Grunt_C::RequestGruntCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.RequestGruntCustomization");
		
		ARBNPC_Grunt_C_RequestGruntCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.OnCustomizationLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      customizationOwner                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            requestID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPawnCustomizationRequestType                      requestType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Grunt_C::OnCustomizationLoaded(class AActor* customizationOwner, int32_t requestID, EPawnCustomizationRequestType requestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.OnCustomizationLoaded");
		
		ARBNPC_Grunt_C_OnCustomizationLoaded_Params params {};
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
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ARBNPC_Grunt_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.ReceiveBeginPlay");
		
		ARBNPC_Grunt_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.Event_OnWeaponVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENPCWeapon                                         weaponType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBNPCWeapon*                                weaponActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Grunt_C::Event_OnWeaponVisible(ENPCWeapon weaponType, class ARBNPCWeapon* weaponActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.Event_OnWeaponVisible");
		
		ARBNPC_Grunt_C_Event_OnWeaponVisible_Params params {};
		params.weaponType = weaponType;
		params.weaponActor = weaponActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Grunt.RBNPC_Grunt_C.ExecuteUbergraph_RBNPC_Grunt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Grunt_C::ExecuteUbergraph_RBNPC_Grunt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Grunt.RBNPC_Grunt_C.ExecuteUbergraph_RBNPC_Grunt");
		
		ARBNPC_Grunt_C_ExecuteUbergraph_RBNPC_Grunt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBNPC_Grunt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBNPC_Grunt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBNPC_Grunt.RBNPC_Grunt_C");
		return ptr;
	}

}


