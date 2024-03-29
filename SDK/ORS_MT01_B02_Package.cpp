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
	 * 		Name   -> Function ORS_MT01_B02.ORS_MT01_B02_C.B02_GatherAndDeliver_SingleObjCompleted
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B02_C::B02_GatherAndDeliver_SingleObjCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B02.ORS_MT01_B02_C.B02_GatherAndDeliver_SingleObjCompleted");
		
		AORS_MT01_B02_C_B02_GatherAndDeliver_SingleObjCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B02.ORS_MT01_B02_C.ExecuteUbergraph_ORS_MT01_B02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AORS_MT01_B02_C::ExecuteUbergraph_ORS_MT01_B02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B02.ORS_MT01_B02_C.ExecuteUbergraph_ORS_MT01_B02");
		
		AORS_MT01_B02_C_ExecuteUbergraph_ORS_MT01_B02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AORS_MT01_B02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AORS_MT01_B02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ORS_MT01_B02.ORS_MT01_B02_C");
		return ptr;
	}

}


