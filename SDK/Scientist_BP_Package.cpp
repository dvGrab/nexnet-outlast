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
	 * 		Name   -> Function Scientist_BP.Scientist_BP_C.RandomizeMeshes
	 * 		Flags  -> ()
	 */
	void AScientist_BP_C::RandomizeMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scientist_BP.Scientist_BP_C.RandomizeMeshes");
		
		AScientist_BP_C_RandomizeMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Scientist_BP.Scientist_BP_C.CanBeFemale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScientist_BP_C::CanBeFemale(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scientist_BP.Scientist_BP_C.CanBeFemale");
		
		AScientist_BP_C_CanBeFemale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Scientist_BP.Scientist_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AScientist_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scientist_BP.Scientist_BP_C.UserConstructionScript");
		
		AScientist_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Scientist_BP.Scientist_BP_C.OnLoaded_5B190DD74C9C1BA5309F1B83ACAC3AEA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScientist_BP_C::OnLoaded_5B190DD74C9C1BA5309F1B83ACAC3AEA(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scientist_BP.Scientist_BP_C.OnLoaded_5B190DD74C9C1BA5309F1B83ACAC3AEA");
		
		AScientist_BP_C_OnLoaded_5B190DD74C9C1BA5309F1B83ACAC3AEA_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Scientist_BP.Scientist_BP_C.ApplyMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Component                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MeshIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScientist_BP_C::ApplyMesh(class USkeletalMeshComponent* Component, int32_t MeshIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scientist_BP.Scientist_BP_C.ApplyMesh");
		
		AScientist_BP_C_ApplyMesh_Params params {};
		params.Component = Component;
		params.MeshIndex = MeshIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Scientist_BP.Scientist_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AScientist_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scientist_BP.Scientist_BP_C.ReceiveBeginPlay");
		
		AScientist_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Scientist_BP.Scientist_BP_C.ApplyAllMeshes
	 * 		Flags  -> ()
	 */
	void AScientist_BP_C::ApplyAllMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scientist_BP.Scientist_BP_C.ApplyAllMeshes");
		
		AScientist_BP_C_ApplyAllMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Scientist_BP.Scientist_BP_C.ExecuteUbergraph_Scientist_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScientist_BP_C::ExecuteUbergraph_Scientist_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scientist_BP.Scientist_BP_C.ExecuteUbergraph_Scientist_BP");
		
		AScientist_BP_C_ExecuteUbergraph_Scientist_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScientist_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScientist_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Scientist_BP.Scientist_BP_C");
		return ptr;
	}

}


