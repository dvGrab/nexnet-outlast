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
	 * 		Name   -> Function DISP_Port.DISP_Port_C.Construct
	 * 		Flags  -> ()
	 */
	void UDISP_Port_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DISP_Port.DISP_Port_C.Construct");
		
		UDISP_Port_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DISP_Port.DISP_Port_C.DispatchFadedIn
	 * 		Flags  -> ()
	 */
	void UDISP_Port_C::DispatchFadedIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DISP_Port.DISP_Port_C.DispatchFadedIn");
		
		UDISP_Port_C_DispatchFadedIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DISP_Port.DISP_Port_C.ExecuteUbergraph_DISP_Port
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDISP_Port_C::ExecuteUbergraph_DISP_Port(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DISP_Port.DISP_Port_C.ExecuteUbergraph_DISP_Port");
		
		UDISP_Port_C_ExecuteUbergraph_DISP_Port_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDISP_Port_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDISP_Port_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DISP_Port.DISP_Port_C");
		return ptr;
	}

}


