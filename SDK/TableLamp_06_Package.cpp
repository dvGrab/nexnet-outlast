/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function TableLamp-06.TableLamp-06_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ATableLamp06_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TableLamp-06.TableLamp-06_C.UserConstructionScript");
		
		ATableLamp06_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATableLamp06_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATableLamp06_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TableLamp_06.TableLamp-06_C");
		return ptr;
	}

}


