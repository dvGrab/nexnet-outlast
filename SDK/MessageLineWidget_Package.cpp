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
	 * 		Name   -> Function MessageLineWidget.MessageLineWidget_C.SetDefaultColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                DefaultColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMessageLineWidget_C::SetDefaultColor(const struct FLinearColor& DefaultColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageLineWidget.MessageLineWidget_C.SetDefaultColor");
		
		UMessageLineWidget_C_SetDefaultColor_Params params {};
		params.DefaultColor = DefaultColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageLineWidget.MessageLineWidget_C.SetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        messageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMessageLineWidget_C::SetMessage(const class FText& messageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageLineWidget.MessageLineWidget_C.SetMessage");
		
		UMessageLineWidget_C_SetMessage_Params params {};
		params.messageText = messageText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageLineWidget.MessageLineWidget_C.SendTemporaryText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        messageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMessageLineWidget_C::SendTemporaryText(const class FText& messageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageLineWidget.MessageLineWidget_C.SendTemporaryText");
		
		UMessageLineWidget_C_SendTemporaryText_Params params {};
		params.messageText = messageText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageLineWidget.MessageLineWidget_C.ExecuteUbergraph_MessageLineWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMessageLineWidget_C::ExecuteUbergraph_MessageLineWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageLineWidget.MessageLineWidget_C.ExecuteUbergraph_MessageLineWidget");
		
		UMessageLineWidget_C_ExecuteUbergraph_MessageLineWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMessageLineWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMessageLineWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MessageLineWidget.MessageLineWidget_C");
		return ptr;
	}

}


