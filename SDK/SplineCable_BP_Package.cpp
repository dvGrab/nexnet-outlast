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
	 * 		Name   -> Function SplineCable_BP.SplineCable_BP_C.SetupMeshCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MeshComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineCable_BP_C::SetupMeshCollision(class UPrimitiveComponent* MeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineCable_BP.SplineCable_BP_C.SetupMeshCollision");
		
		ASplineCable_BP_C_SetupMeshCollision_Params params {};
		params.MeshComponent = MeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineCable_BP.SplineCable_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASplineCable_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineCable_BP.SplineCable_BP_C.UserConstructionScript");
		
		ASplineCable_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASplineCable_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASplineCable_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SplineCable_BP.SplineCable_BP_C");
		return ptr;
	}

}


