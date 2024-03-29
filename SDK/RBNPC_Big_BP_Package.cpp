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
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.RandomizeCustomization
	 * 		Flags  -> ()
	 */
	void ARBNPC_Big_BP_C::RandomizeCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.RandomizeCustomization");
		
		ARBNPC_Big_BP_C_RandomizeCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.UpdateVoiceType_Server
	 * 		Flags  -> ()
	 */
	void ARBNPC_Big_BP_C::UpdateVoiceType_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.UpdateVoiceType_Server");
		
		ARBNPC_Big_BP_C_UpdateVoiceType_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.OnRep_CustomizationNetSeed
	 * 		Flags  -> ()
	 */
	void ARBNPC_Big_BP_C::OnRep_CustomizationNetSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.OnRep_CustomizationNetSeed");
		
		ARBNPC_Big_BP_C_OnRep_CustomizationNetSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.CleanMeshes
	 * 		Flags  -> ()
	 */
	void ARBNPC_Big_BP_C::CleanMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.CleanMeshes");
		
		ARBNPC_Big_BP_C_CleanMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.AddExtraBodyMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               NewMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Big_BP_C::AddExtraBodyMesh(class USkeletalMesh* NewMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.AddExtraBodyMesh");
		
		ARBNPC_Big_BP_C_AddExtraBodyMesh_Params params {};
		params.NewMesh = NewMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.GetRessourcesToLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSoftObjectPath>                     ressources                                                 (Parm, OutParm)
	 */
	void ARBNPC_Big_BP_C::GetRessourcesToLoad(TArray<struct FSoftObjectPath>* ressources)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.GetRessourcesToLoad");
		
		ARBNPC_Big_BP_C_GetRessourcesToLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ressources != nullptr)
			*ressources = params.ressources;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.GetFacePoseAsset
	 * 		Flags  -> ()
	 */
	class UPoseAsset* ARBNPC_Big_BP_C::GetFacePoseAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.GetFacePoseAsset");
		
		ARBNPC_Big_BP_C_GetFacePoseAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.GetFaceFXSkeletalMeshComponent
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ARBNPC_Big_BP_C::GetFaceFXSkeletalMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.GetFaceFXSkeletalMeshComponent");
		
		ARBNPC_Big_BP_C_GetFaceFXSkeletalMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.OnRep_RandomMesh
	 * 		Flags  -> ()
	 */
	void ARBNPC_Big_BP_C::OnRep_RandomMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.OnRep_RandomMesh");
		
		ARBNPC_Big_BP_C_OnRep_RandomMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBNPC_Big_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.UserConstructionScript");
		
		ARBNPC_Big_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ARBNPC_Big_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.ReceiveBeginPlay");
		
		ARBNPC_Big_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.RequestSkinRessources
	 * 		Flags  -> ()
	 */
	void ARBNPC_Big_BP_C::RequestSkinRessources()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.RequestSkinRessources");
		
		ARBNPC_Big_BP_C_RequestSkinRessources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.Event_OnWeaponVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENPCWeapon                                         weaponType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBNPCWeapon*                                weaponActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Big_BP_C::Event_OnWeaponVisible(ENPCWeapon weaponType, class ARBNPCWeapon* weaponActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.Event_OnWeaponVisible");
		
		ARBNPC_Big_BP_C_Event_OnWeaponVisible_Params params {};
		params.weaponType = weaponType;
		params.weaponActor = weaponActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.ApplySkinMeshes
	 * 		Flags  -> ()
	 */
	void ARBNPC_Big_BP_C::ApplySkinMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.ApplySkinMeshes");
		
		ARBNPC_Big_BP_C_ApplySkinMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.OnRessourcesLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      customizationOwner                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            requestID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPawnCustomizationRequestType                      requestType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Big_BP_C::OnRessourcesLoaded(class AActor* customizationOwner, int32_t requestID, EPawnCustomizationRequestType requestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.OnRessourcesLoaded");
		
		ARBNPC_Big_BP_C_OnRessourcesLoaded_Params params {};
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
	 * 		Name   -> Function RBNPC_Big_BP.RBNPC_Big_BP_C.ExecuteUbergraph_RBNPC_Big_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_Big_BP_C::ExecuteUbergraph_RBNPC_Big_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBNPC_Big_BP.RBNPC_Big_BP_C.ExecuteUbergraph_RBNPC_Big_BP");
		
		ARBNPC_Big_BP_C_ExecuteUbergraph_RBNPC_Big_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBNPC_Big_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBNPC_Big_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBNPC_Big_BP.RBNPC_Big_BP_C");
		return ptr;
	}

}


