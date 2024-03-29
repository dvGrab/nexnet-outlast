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
	 * 		Name   -> Function Secondary_Makarov.Secondary_Makarov_C.DestroyPouches_2
	 * 		Flags  -> ()
	 */
	void ASecondary_Makarov_C::DestroyPouches_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Makarov.Secondary_Makarov_C.DestroyPouches_2");
		
		ASecondary_Makarov_C_DestroyPouches_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_Makarov.Secondary_Makarov_C.SpawnPouches_2
	 * 		Flags  -> ()
	 */
	void ASecondary_Makarov_C::SpawnPouches_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Makarov.Secondary_Makarov_C.SpawnPouches_2");
		
		ASecondary_Makarov_C_SpawnPouches_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Secondary_Makarov.Secondary_Makarov_C.ExecuteUbergraph_Secondary_Makarov
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecondary_Makarov_C::ExecuteUbergraph_Secondary_Makarov(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Secondary_Makarov.Secondary_Makarov_C.ExecuteUbergraph_Secondary_Makarov");
		
		ASecondary_Makarov_C_ExecuteUbergraph_Secondary_Makarov_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASecondary_Makarov_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecondary_Makarov_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Secondary_Makarov.Secondary_Makarov_C");
		return ptr;
	}

}


