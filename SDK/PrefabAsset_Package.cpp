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
	 * 		Name   -> Function PrefabAsset.PrefabActor.SetPrefab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrefabAsset*                                NewPrefab                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceRevertEvenDisconnected                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APrefabActor::SetPrefab(class UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.SetPrefab");
		
		APrefabActor_SetPrefab_Params params {};
		params.NewPrefab = NewPrefab;
		params.bForceRevertEvenDisconnected = bForceRevertEvenDisconnected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrefabAsset.PrefabActor.SetMobility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EComponentMobility                                 InMobility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APrefabActor::SetMobility(EComponentMobility InMobility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.SetMobility");
		
		APrefabActor_SetMobility_Params params {};
		params.InMobility = InMobility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrefabAsset.PrefabActor.GetPrefab
	 * 		Flags  -> ()
	 */
	class UPrefabAsset* APrefabActor::GetPrefab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.GetPrefab");
		
		APrefabActor_GetPrefab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrefabAsset.PrefabActor.DestroyPrefabActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDestroyAttachedChildren                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APrefabActor::DestroyPrefabActor(bool bDestroyAttachedChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.DestroyPrefabActor");
		
		APrefabActor_DestroyPrefabActor_Params params {};
		params.bDestroyAttachedChildren = bDestroyAttachedChildren;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrefabActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrefabActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabAsset.PrefabActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabAsset.PrefabAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabVariantAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabVariantAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabAsset.PrefabVariantAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabAsset.PrefabComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrefabAsset.PrefabFunctionLibrary.SpawnPrefab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrefabAsset*                                PrefabAsset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              OutSpawnPrefabInstances                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSpawnInstancesOnly                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APrefabActor* UPrefabFunctionLibrary::SpawnPrefab(class UObject* WorldContextObject, class UPrefabAsset* PrefabAsset, const struct FTransform& SpawnTransform, TArray<class AActor*>* OutSpawnPrefabInstances, bool bSpawnInstancesOnly, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabFunctionLibrary.SpawnPrefab");
		
		UPrefabFunctionLibrary_SpawnPrefab_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PrefabAsset = PrefabAsset;
		params.SpawnTransform = SpawnTransform;
		params.bSpawnInstancesOnly = bSpawnInstancesOnly;
		params.CollisionHandlingOverride = CollisionHandlingOverride;
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSpawnPrefabInstances != nullptr)
			*OutSpawnPrefabInstances = params.OutSpawnPrefabInstances;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabAsset.PrefabFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabAsset.PrefabExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabLevelExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabLevelExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabAsset.PrefabLevelExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabObjectExporterT3D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabObjectExporterT3D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabAsset.PrefabObjectExporterT3D");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabToolSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabToolSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabAsset.PrefabToolSettings");
		return ptr;
	}

}


