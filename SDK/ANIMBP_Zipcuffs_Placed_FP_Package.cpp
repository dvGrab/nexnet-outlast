/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> Function ANIMBP_Zipcuffs_Placed_FP.ANIMBP_Zipcuffs_Placed_FP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_Zipcuffs_Placed_FP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Zipcuffs_Placed_FP.ANIMBP_Zipcuffs_Placed_FP_C.AnimGraph");
		
		UANIMBP_Zipcuffs_Placed_FP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Zipcuffs_Placed_FP.ANIMBP_Zipcuffs_Placed_FP_C.ExecuteUbergraph_ANIMBP_Zipcuffs_Placed_FP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_Zipcuffs_Placed_FP_C::ExecuteUbergraph_ANIMBP_Zipcuffs_Placed_FP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Zipcuffs_Placed_FP.ANIMBP_Zipcuffs_Placed_FP_C.ExecuteUbergraph_ANIMBP_Zipcuffs_Placed_FP");
		
		UANIMBP_Zipcuffs_Placed_FP_C_ExecuteUbergraph_ANIMBP_Zipcuffs_Placed_FP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_Zipcuffs_Placed_FP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_Zipcuffs_Placed_FP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_Zipcuffs_Placed_FP.ANIMBP_Zipcuffs_Placed_FP_C");
		return ptr;
	}

}


