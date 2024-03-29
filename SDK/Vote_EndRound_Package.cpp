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
	 * 		Name   -> Function Vote_EndRound.Vote_EndRound_C.OnReferendumPassed
	 * 		Flags  -> ()
	 */
	void AVote_EndRound_C::OnReferendumPassed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vote_EndRound.Vote_EndRound_C.OnReferendumPassed");
		
		AVote_EndRound_C_OnReferendumPassed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vote_EndRound.Vote_EndRound_C.ExecuteUbergraph_Vote_EndRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVote_EndRound_C::ExecuteUbergraph_Vote_EndRound(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vote_EndRound.Vote_EndRound_C.ExecuteUbergraph_Vote_EndRound");
		
		AVote_EndRound_C_ExecuteUbergraph_Vote_EndRound_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVote_EndRound_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVote_EndRound_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Vote_EndRound.Vote_EndRound_C");
		return ptr;
	}

}


