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
	 * 		Name   -> Function ChatMessage_Entry.ChatMessage_Entry_C.Get_ChatType_Text_1
	 * 		Flags  -> ()
	 */
	class FText UChatMessage_Entry_C::Get_ChatType_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatMessage_Entry.ChatMessage_Entry_C.Get_ChatType_Text_1");
		
		UChatMessage_Entry_C_Get_ChatType_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatMessage_Entry.ChatMessage_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UChatMessage_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatMessage_Entry.ChatMessage_Entry_C.Construct");
		
		UChatMessage_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatMessage_Entry.ChatMessage_Entry_C.ExecuteUbergraph_ChatMessage_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatMessage_Entry_C::ExecuteUbergraph_ChatMessage_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatMessage_Entry.ChatMessage_Entry_C.ExecuteUbergraph_ChatMessage_Entry");
		
		UChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatMessage_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatMessage_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatMessage_Entry.ChatMessage_Entry_C");
		return ptr;
	}

}


