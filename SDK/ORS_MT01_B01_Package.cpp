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
	 * 		Name   -> Function ORS_MT01_B01.ORS_MT01_B01_C.B01_SimpleObj_Completed
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B01_C::B01_SimpleObj_Completed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B01.ORS_MT01_B01_C.B01_SimpleObj_Completed");
		
		AORS_MT01_B01_C_B01_SimpleObj_Completed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B01.ORS_MT01_B01_C.ExecuteUbergraph_ORS_MT01_B01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AORS_MT01_B01_C::ExecuteUbergraph_ORS_MT01_B01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B01.ORS_MT01_B01_C.ExecuteUbergraph_ORS_MT01_B01");
		
		AORS_MT01_B01_C_ExecuteUbergraph_ORS_MT01_B01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AORS_MT01_B01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AORS_MT01_B01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ORS_MT01_B01.ORS_MT01_B01_C");
		return ptr;
	}

}


