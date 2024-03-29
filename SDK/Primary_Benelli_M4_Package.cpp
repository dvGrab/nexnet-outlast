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
	 * 		Name   -> Function Primary_Benelli_M4.Primary_Benelli_M4_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APrimary_Benelli_M4_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Primary_Benelli_M4.Primary_Benelli_M4_C.ReceiveBeginPlay");
		
		APrimary_Benelli_M4_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Primary_Benelli_M4.Primary_Benelli_M4_C.ExecuteUbergraph_Primary_Benelli_M4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimary_Benelli_M4_C::ExecuteUbergraph_Primary_Benelli_M4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Primary_Benelli_M4.Primary_Benelli_M4_C.ExecuteUbergraph_Primary_Benelli_M4");
		
		APrimary_Benelli_M4_C_ExecuteUbergraph_Primary_Benelli_M4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrimary_Benelli_M4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrimary_Benelli_M4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Primary_Benelli_M4.Primary_Benelli_M4_C");
		return ptr;
	}

}


