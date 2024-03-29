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
	 * 		Name   -> Function ToolCabinet-01_BP.ToolCabinet-01_BP_C.NewEventDispatcher_0_0__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AToolCabinet__BP_C::NewEventDispatcher_0_0__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolCabinet-01_BP.ToolCabinet-01_BP_C.NewEventDispatcher_0_0__DelegateSignature");
		
		AToolCabinet__BP_C_NewEventDispatcher_0_0__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AToolCabinet__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AToolCabinet__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ToolCabinet_01_BP.ToolCabinet-01_BP_C");
		return ptr;
	}

}


