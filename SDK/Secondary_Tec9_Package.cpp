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
	 * 		Name   -> Function Secondary_Tec9.Secondary_Tec9_C.DestroyPouches_2
	 * 		Flags  -> ()
	 */
	void ASecondary_Tec9_C::DestroyPouches_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Tec9.Secondary_Tec9_C.DestroyPouches_2");
		
		ASecondary_Tec9_C_DestroyPouches_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_Tec9.Secondary_Tec9_C.SpawnPouches_2
	 * 		Flags  -> ()
	 */
	void ASecondary_Tec9_C::SpawnPouches_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Tec9.Secondary_Tec9_C.SpawnPouches_2");
		
		ASecondary_Tec9_C_SpawnPouches_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_Tec9.Secondary_Tec9_C.ExecuteUbergraph_Secondary_Tec9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecondary_Tec9_C::ExecuteUbergraph_Secondary_Tec9(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Tec9.Secondary_Tec9_C.ExecuteUbergraph_Secondary_Tec9");
		
		ASecondary_Tec9_C_ExecuteUbergraph_Secondary_Tec9_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASecondary_Tec9_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecondary_Tec9_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Secondary_Tec9.Secondary_Tec9_C");
		return ptr;
	}

}


