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
	 * 		Name   -> Function NarrativeScreen-01_BP.NarrativeScreen-01_BP_C.Event_OnGlassShatterStateChanged
	 * 		Flags  -> ()
	 */
	void ANarrativeScreen__BP_C::Event_OnGlassShatterStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreen-01_BP.NarrativeScreen-01_BP_C.Event_OnGlassShatterStateChanged");
		
		ANarrativeScreen__BP_C_Event_OnGlassShatterStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NarrativeScreen-01_BP.NarrativeScreen-01_BP_C.ExecuteUbergraph_NarrativeScreen-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANarrativeScreen__BP_C::ExecuteUbergraph_NarrativeScreen__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NarrativeScreen-01_BP.NarrativeScreen-01_BP_C.ExecuteUbergraph_NarrativeScreen-01_BP");
		
		ANarrativeScreen__BP_C_ExecuteUbergraph_NarrativeScreen__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANarrativeScreen__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANarrativeScreen__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NarrativeScreen_01_BP.NarrativeScreen-01_BP_C");
		return ptr;
	}

}


