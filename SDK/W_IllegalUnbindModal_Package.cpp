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
	 * 		Name   -> Function W_IllegalUnbindModal.W_IllegalUnbindModal_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_IllegalUnbindModal_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_IllegalUnbindModal.W_IllegalUnbindModal_C.Construct");
		
		UW_IllegalUnbindModal_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_IllegalUnbindModal.W_IllegalUnbindModal_C.ExecuteUbergraph_W_IllegalUnbindModal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_IllegalUnbindModal_C::ExecuteUbergraph_W_IllegalUnbindModal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_IllegalUnbindModal.W_IllegalUnbindModal_C.ExecuteUbergraph_W_IllegalUnbindModal");
		
		UW_IllegalUnbindModal_C_ExecuteUbergraph_W_IllegalUnbindModal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_IllegalUnbindModal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_IllegalUnbindModal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_IllegalUnbindModal.W_IllegalUnbindModal_C");
		return ptr;
	}

}


