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
	 * 		Name   -> Function Generic_Fire_1912.Generic_Fire_1911_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void UGeneric_Fire_1911_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Generic_Fire_1912.Generic_Fire_1911_C.NewFunction_1");
		
		UGeneric_Fire_1911_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneric_Fire_1911_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneric_Fire_1911_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Generic_Fire_1912.Generic_Fire_1911_C");
		return ptr;
	}

}


