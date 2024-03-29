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
	 * 		Name   -> Function W_FireModeChanged.W_FireModeChanged_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_FireModeChanged_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModeChanged.W_FireModeChanged_C.Construct");
		
		UW_FireModeChanged_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModeChanged.W_FireModeChanged_C.ExecuteUbergraph_W_FireModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_FireModeChanged_C::ExecuteUbergraph_W_FireModeChanged(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModeChanged.W_FireModeChanged_C.ExecuteUbergraph_W_FireModeChanged");
		
		UW_FireModeChanged_C_ExecuteUbergraph_W_FireModeChanged_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_FireModeChanged_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_FireModeChanged_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_FireModeChanged.W_FireModeChanged_C");
		return ptr;
	}

}


