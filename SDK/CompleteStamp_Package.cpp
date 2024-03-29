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
	 * 		Name   -> Function CompleteStamp.CompleteStamp_C.PlayStampAnim
	 * 		Flags  -> ()
	 */
	void UCompleteStamp_C::PlayStampAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CompleteStamp.CompleteStamp_C.PlayStampAnim");
		
		UCompleteStamp_C_PlayStampAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CompleteStamp.CompleteStamp_C.ExecuteUbergraph_CompleteStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCompleteStamp_C::ExecuteUbergraph_CompleteStamp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CompleteStamp.CompleteStamp_C.ExecuteUbergraph_CompleteStamp");
		
		UCompleteStamp_C_ExecuteUbergraph_CompleteStamp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompleteStamp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompleteStamp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CompleteStamp.CompleteStamp_C");
		return ptr;
	}

}


