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
	 * 		Name   -> Function W_Combobox_Menu.W_Combobox_Menu_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Combobox_Menu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Combobox_Menu.W_Combobox_Menu_C.Construct");
		
		UW_Combobox_Menu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Combobox_Menu.W_Combobox_Menu_C.ExecuteUbergraph_W_Combobox_Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Combobox_Menu_C::ExecuteUbergraph_W_Combobox_Menu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Combobox_Menu.W_Combobox_Menu_C.ExecuteUbergraph_W_Combobox_Menu");
		
		UW_Combobox_Menu_C_ExecuteUbergraph_W_Combobox_Menu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Combobox_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Combobox_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Combobox_Menu.W_Combobox_Menu_C");
		return ptr;
	}

}


