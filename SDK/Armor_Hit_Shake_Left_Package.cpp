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
	 * 		Name   -> Function Armor_Hit_Shake_Left.Armor_Hit_Shake_Left_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void UArmor_Hit_Shake_Left_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Armor_Hit_Shake_Left.Armor_Hit_Shake_Left_C.NewFunction_1");
		
		UArmor_Hit_Shake_Left_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArmor_Hit_Shake_Left_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArmor_Hit_Shake_Left_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Armor_Hit_Shake_Left.Armor_Hit_Shake_Left_C");
		return ptr;
	}

}


