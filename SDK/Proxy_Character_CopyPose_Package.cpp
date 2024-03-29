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
	 * 		Name   -> Function Proxy_Character_CopyPose.Proxy_Character_CopyPose_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UProxy_Character_CopyPose_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proxy_Character_CopyPose.Proxy_Character_CopyPose_C.AnimGraph");
		
		UProxy_Character_CopyPose_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Proxy_Character_CopyPose.Proxy_Character_CopyPose_C.ExecuteUbergraph_Proxy_Character_CopyPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProxy_Character_CopyPose_C::ExecuteUbergraph_Proxy_Character_CopyPose(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proxy_Character_CopyPose.Proxy_Character_CopyPose_C.ExecuteUbergraph_Proxy_Character_CopyPose");
		
		UProxy_Character_CopyPose_C_ExecuteUbergraph_Proxy_Character_CopyPose_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProxy_Character_CopyPose_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProxy_Character_CopyPose_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Proxy_Character_CopyPose.Proxy_Character_CopyPose_C");
		return ptr;
	}

}


