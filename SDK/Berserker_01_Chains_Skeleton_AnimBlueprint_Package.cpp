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
	 * 		Name   -> Function Berserker_01_Chains_Skeleton_AnimBlueprint.Berserker_01_Chains_Skeleton_AnimBlueprint_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBerserker_01_Chains_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Berserker_01_Chains_Skeleton_AnimBlueprint.Berserker_01_Chains_Skeleton_AnimBlueprint_C.AnimGraph");
		
		UBerserker_01_Chains_Skeleton_AnimBlueprint_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Berserker_01_Chains_Skeleton_AnimBlueprint.Berserker_01_Chains_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Berserker_01_Chains_Skeleton_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBerserker_01_Chains_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Berserker_01_Chains_Skeleton_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Berserker_01_Chains_Skeleton_AnimBlueprint.Berserker_01_Chains_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Berserker_01_Chains_Skeleton_AnimBlueprint");
		
		UBerserker_01_Chains_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Berserker_01_Chains_Skeleton_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBerserker_01_Chains_Skeleton_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBerserker_01_Chains_Skeleton_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Berserker_01_Chains_Skeleton_AnimBlueprint.Berserker_01_Chains_Skeleton_AnimBlueprint_C");
		return ptr;
	}

}


