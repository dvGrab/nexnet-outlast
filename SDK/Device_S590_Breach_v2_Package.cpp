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
	 * 		Name   -> Function Device_S590_Breach_v2.Device_S590_Breach_v2_C.DoReloadComplete_2
	 * 		Flags  -> ()
	 */
	void ADevice_S590_Breach_v2_C::DoReloadComplete_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Device_S590_Breach_v2.Device_S590_Breach_v2_C.DoReloadComplete_2");
		
		ADevice_S590_Breach_v2_C_DoReloadComplete_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Device_S590_Breach_v2.Device_S590_Breach_v2_C.ExecuteUbergraph_Device_S590_Breach_v2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADevice_S590_Breach_v2_C::ExecuteUbergraph_Device_S590_Breach_v2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Device_S590_Breach_v2.Device_S590_Breach_v2_C.ExecuteUbergraph_Device_S590_Breach_v2");
		
		ADevice_S590_Breach_v2_C_ExecuteUbergraph_Device_S590_Breach_v2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADevice_S590_Breach_v2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADevice_S590_Breach_v2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Device_S590_Breach_v2.Device_S590_Breach_v2_C");
		return ptr;
	}

}


