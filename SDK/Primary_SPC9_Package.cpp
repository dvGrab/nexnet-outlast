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
	 * 		Name   -> Function Primary_SPC9.Primary_SPC9_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APrimary_SPC9_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Primary_SPC9.Primary_SPC9_C.ReceiveBeginPlay");
		
		APrimary_SPC9_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Primary_SPC9.Primary_SPC9_C.ExecuteUbergraph_Primary_SPC9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimary_SPC9_C::ExecuteUbergraph_Primary_SPC9(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Primary_SPC9.Primary_SPC9_C.ExecuteUbergraph_Primary_SPC9");
		
		APrimary_SPC9_C_ExecuteUbergraph_Primary_SPC9_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrimary_SPC9_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrimary_SPC9_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Primary_SPC9.Primary_SPC9_C");
		return ptr;
	}

}


