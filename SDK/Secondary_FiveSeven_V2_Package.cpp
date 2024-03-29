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
	 * 		Name   -> Function Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C.DestroyPouches_2
	 * 		Flags  -> ()
	 */
	void ASecondary_FiveSeven_V2_C::DestroyPouches_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C.DestroyPouches_2");
		
		ASecondary_FiveSeven_V2_C_DestroyPouches_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C.SpawnPouches_2
	 * 		Flags  -> ()
	 */
	void ASecondary_FiveSeven_V2_C::SpawnPouches_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C.SpawnPouches_2");
		
		ASecondary_FiveSeven_V2_C_SpawnPouches_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C.ExecuteUbergraph_Secondary_FiveSeven_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecondary_FiveSeven_V2_C::ExecuteUbergraph_Secondary_FiveSeven_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C.ExecuteUbergraph_Secondary_FiveSeven_V2");
		
		ASecondary_FiveSeven_V2_C_ExecuteUbergraph_Secondary_FiveSeven_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASecondary_FiveSeven_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecondary_FiveSeven_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C");
		return ptr;
	}

}


