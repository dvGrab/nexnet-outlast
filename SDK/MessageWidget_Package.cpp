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
	 * 		Name   -> Function MessageWidget.MessageWidget_C.HideIcons
	 * 		Flags  -> ()
	 */
	void UMessageWidget_C::HideIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.HideIcons");
		
		UMessageWidget_C_HideIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageWidget.MessageWidget_C.HandleItemsIconsDisplay
	 * 		Flags  -> ()
	 */
	void UMessageWidget_C::HandleItemsIconsDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.HandleItemsIconsDisplay");
		
		UMessageWidget_C_HandleItemsIconsDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageWidget.MessageWidget_C.OninputChanged
	 * 		Flags  -> ()
	 */
	void UMessageWidget_C::OninputChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.OninputChanged");
		
		UMessageWidget_C_OninputChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageWidget.MessageWidget_C.SetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        messageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                DefaultColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMessageWidget_C::SetMessage(const class FText& messageText, const struct FLinearColor& DefaultColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.SetMessage");
		
		UMessageWidget_C_SetMessage_Params params {};
		params.messageText = messageText;
		params.DefaultColor = DefaultColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageWidget.MessageWidget_C.SendTemporaryText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        messageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMessageWidget_C::SendTemporaryText(const class FText& messageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.SendTemporaryText");
		
		UMessageWidget_C_SendTemporaryText_Params params {};
		params.messageText = messageText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageWidget.MessageWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UMessageWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.Construct");
		
		UMessageWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageWidget.MessageWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMessageWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.PreConstruct");
		
		UMessageWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageWidget.MessageWidget_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UMessageWidget_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.Event_Show");
		
		UMessageWidget_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageWidget.MessageWidget_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UMessageWidget_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.Event_Hide");
		
		UMessageWidget_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageWidget.MessageWidget_C.ExecuteUbergraph_MessageWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMessageWidget_C::ExecuteUbergraph_MessageWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageWidget.MessageWidget_C.ExecuteUbergraph_MessageWidget");
		
		UMessageWidget_C_ExecuteUbergraph_MessageWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMessageWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMessageWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MessageWidget.MessageWidget_C");
		return ptr;
	}

}


