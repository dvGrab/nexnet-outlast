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
	 * 		Name   -> Function M1911_Camera_Draw.M1911_Camera_Draw_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void UM1911_Camera_Draw_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function M1911_Camera_Draw.M1911_Camera_Draw_C.NewFunction_1");
		
		UM1911_Camera_Draw_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UM1911_Camera_Draw_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UM1911_Camera_Draw_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass M1911_Camera_Draw.M1911_Camera_Draw_C");
		return ptr;
	}

}


