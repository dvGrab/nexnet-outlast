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
	 * 		Name   -> Function ScriptedMannequin_Base_AnimBP.ScriptedMannequin_Base_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UScriptedMannequin_Base_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedMannequin_Base_AnimBP.ScriptedMannequin_Base_AnimBP_C.AnimGraph");
		
		UScriptedMannequin_Base_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedMannequin_Base_AnimBP.ScriptedMannequin_Base_AnimBP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UScriptedMannequin_Base_AnimBP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedMannequin_Base_AnimBP.ScriptedMannequin_Base_AnimBP_C.BlueprintBeginPlay");
		
		UScriptedMannequin_Base_AnimBP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedMannequin_Base_AnimBP.ScriptedMannequin_Base_AnimBP_C.AnimNotify_OnDone
	 * 		Flags  -> ()
	 */
	void UScriptedMannequin_Base_AnimBP_C::AnimNotify_OnDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedMannequin_Base_AnimBP.ScriptedMannequin_Base_AnimBP_C.AnimNotify_OnDone");
		
		UScriptedMannequin_Base_AnimBP_C_AnimNotify_OnDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedMannequin_Base_AnimBP.ScriptedMannequin_Base_AnimBP_C.ExecuteUbergraph_ScriptedMannequin_Base_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScriptedMannequin_Base_AnimBP_C::ExecuteUbergraph_ScriptedMannequin_Base_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedMannequin_Base_AnimBP.ScriptedMannequin_Base_AnimBP_C.ExecuteUbergraph_ScriptedMannequin_Base_AnimBP");
		
		UScriptedMannequin_Base_AnimBP_C_ExecuteUbergraph_ScriptedMannequin_Base_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptedMannequin_Base_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptedMannequin_Base_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ScriptedMannequin_Base_AnimBP.ScriptedMannequin_Base_AnimBP_C");
		return ptr;
	}

}


