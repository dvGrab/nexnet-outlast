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
	 * 		Name   -> Function HudTutorialMessages.HUDTutorialMessages_C.UpdateInputDecorator
	 * 		Flags  -> ()
	 */
	void UHUDTutorialMessages_C::UpdateInputDecorator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudTutorialMessages.HUDTutorialMessages_C.UpdateInputDecorator");
		
		UHUDTutorialMessages_C_UpdateInputDecorator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudTutorialMessages.HUDTutorialMessages_C.UpdateTextSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUIFontSize                                        Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDTutorialMessages_C::UpdateTextSize(EUIFontSize Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudTutorialMessages.HUDTutorialMessages_C.UpdateTextSize");
		
		UHUDTutorialMessages_C_UpdateTextSize_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudTutorialMessages.HUDTutorialMessages_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UHUDTutorialMessages_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudTutorialMessages.HUDTutorialMessages_C.ShouldShow");
		
		UHUDTutorialMessages_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudTutorialMessages.HUDTutorialMessages_C.SetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUDTutorialMessages_C::SetMessage(const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudTutorialMessages.HUDTutorialMessages_C.SetMessage");
		
		UHUDTutorialMessages_C_SetMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudTutorialMessages.HUDTutorialMessages_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDTutorialMessages_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudTutorialMessages.HUDTutorialMessages_C.PreConstruct");
		
		UHUDTutorialMessages_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudTutorialMessages.HUDTutorialMessages_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUDTutorialMessages_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudTutorialMessages.HUDTutorialMessages_C.Construct");
		
		UHUDTutorialMessages_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudTutorialMessages.HUDTutorialMessages_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UHUDTutorialMessages_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudTutorialMessages.HUDTutorialMessages_C.Event_Show");
		
		UHUDTutorialMessages_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudTutorialMessages.HUDTutorialMessages_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UHUDTutorialMessages_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudTutorialMessages.HUDTutorialMessages_C.Event_Hide");
		
		UHUDTutorialMessages_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudTutorialMessages.HUDTutorialMessages_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUDTutorialMessages_C::CustomEvent_1(const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudTutorialMessages.HUDTutorialMessages_C.CustomEvent_1");
		
		UHUDTutorialMessages_C_CustomEvent_1_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudTutorialMessages.HUDTutorialMessages_C.OnHideTutorialMessage_Event_1
	 * 		Flags  -> ()
	 */
	void UHUDTutorialMessages_C::OnHideTutorialMessage_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudTutorialMessages.HUDTutorialMessages_C.OnHideTutorialMessage_Event_1");
		
		UHUDTutorialMessages_C_OnHideTutorialMessage_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudTutorialMessages.HUDTutorialMessages_C.OnTutorialSizeChangedEvent
	 * 		Flags  -> ()
	 */
	void UHUDTutorialMessages_C::OnTutorialSizeChangedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudTutorialMessages.HUDTutorialMessages_C.OnTutorialSizeChangedEvent");
		
		UHUDTutorialMessages_C_OnTutorialSizeChangedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudTutorialMessages.HUDTutorialMessages_C.ExecuteUbergraph_HUDTutorialMessages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDTutorialMessages_C::ExecuteUbergraph_HUDTutorialMessages(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudTutorialMessages.HUDTutorialMessages_C.ExecuteUbergraph_HUDTutorialMessages");
		
		UHUDTutorialMessages_C_ExecuteUbergraph_HUDTutorialMessages_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDTutorialMessages_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDTutorialMessages_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudTutorialMessages.HUDTutorialMessages_C");
		return ptr;
	}

}


