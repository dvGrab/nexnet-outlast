/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function ExecutionConsole_Lever_AnimBP.ExecutionConsole_Lever_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UExecutionConsole_Lever_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionConsole_Lever_AnimBP.ExecutionConsole_Lever_AnimBP_C.AnimGraph");
		
		UExecutionConsole_Lever_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExecutionConsole_Lever_AnimBP.ExecutionConsole_Lever_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UExecutionConsole_Lever_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionConsole_Lever_AnimBP.ExecutionConsole_Lever_AnimBP_C.BlueprintUpdateAnimation");
		
		UExecutionConsole_Lever_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExecutionConsole_Lever_AnimBP.ExecutionConsole_Lever_AnimBP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UExecutionConsole_Lever_AnimBP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionConsole_Lever_AnimBP.ExecutionConsole_Lever_AnimBP_C.BlueprintBeginPlay");
		
		UExecutionConsole_Lever_AnimBP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExecutionConsole_Lever_AnimBP.ExecutionConsole_Lever_AnimBP_C.ExecuteUbergraph_ExecutionConsole_Lever_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UExecutionConsole_Lever_AnimBP_C::ExecuteUbergraph_ExecutionConsole_Lever_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExecutionConsole_Lever_AnimBP.ExecutionConsole_Lever_AnimBP_C.ExecuteUbergraph_ExecutionConsole_Lever_AnimBP");
		
		UExecutionConsole_Lever_AnimBP_C_ExecuteUbergraph_ExecutionConsole_Lever_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExecutionConsole_Lever_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExecutionConsole_Lever_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ExecutionConsole_Lever_AnimBP.ExecutionConsole_Lever_AnimBP_C");
		return ptr;
	}

}


