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
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.HandleSliderOnInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLeftPressed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseOptionsEntry_C::HandleSliderOnInput(bool bLeftPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.HandleSliderOnInput");
		
		UBaseOptionsEntry_C_HandleSliderOnInput_Params params {};
		params.bLeftPressed = bLeftPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.GetArrowBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UArrowButton_C*                              ArrowButton                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseOptionsEntry_C::GetArrowBtn(bool Left, class UArrowButton_C** ArrowButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.GetArrowBtn");
		
		UBaseOptionsEntry_C_GetArrowBtn_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrowButton != nullptr)
			*ArrowButton = params.ArrowButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.OnAnalogValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBaseOptionsEntry_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.OnAnalogValueChanged");
		
		UBaseOptionsEntry_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBaseOptionsEntry_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.OnKeyUp");
		
		UBaseOptionsEntry_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBaseOptionsEntry_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.OnKeyDown");
		
		UBaseOptionsEntry_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.TrySetupCounter
	 * 		Flags  -> ()
	 */
	void UBaseOptionsEntry_C::TrySetupCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.TrySetupCounter");
		
		UBaseOptionsEntry_C_TrySetupCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.RefreshCounter
	 * 		Flags  -> ()
	 */
	void UBaseOptionsEntry_C::RefreshCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.RefreshCounter");
		
		UBaseOptionsEntry_C_RefreshCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.SetupCounter
	 * 		Flags  -> ()
	 */
	void UBaseOptionsEntry_C::SetupCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.SetupCounter");
		
		UBaseOptionsEntry_C_SetupCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.UpdateEnableStatus
	 * 		Flags  -> ()
	 */
	void UBaseOptionsEntry_C::UpdateEnableStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.UpdateEnableStatus");
		
		UBaseOptionsEntry_C_UpdateEnableStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.RefreshDisplay
	 * 		Flags  -> ()
	 */
	void UBaseOptionsEntry_C::RefreshDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.RefreshDisplay");
		
		UBaseOptionsEntry_C_RefreshDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.ColorChangedEntries
	 * 		Flags  -> ()
	 */
	void UBaseOptionsEntry_C::ColorChangedEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.ColorChangedEntries");
		
		UBaseOptionsEntry_C_ColorChangedEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.RefreshEntry
	 * 		Flags  -> ()
	 */
	void UBaseOptionsEntry_C::RefreshEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.RefreshEntry");
		
		UBaseOptionsEntry_C_RefreshEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseOptionsEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.PreConstruct");
		
		UBaseOptionsEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.Event_UpdateTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        newTitle                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBaseOptionsEntry_C::Event_UpdateTitle(const class FText& newTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.Event_UpdateTitle");
		
		UBaseOptionsEntry_C_Event_UpdateTitle_Params params {};
		params.newTitle = newTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.Event_RefreshEntry
	 * 		Flags  -> ()
	 */
	void UBaseOptionsEntry_C::Event_RefreshEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.Event_RefreshEntry");
		
		UBaseOptionsEntry_C_Event_RefreshEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.Event_UpdateSubButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBaseOptionsEntry_C::Event_UpdateSubButtonText(const class FText& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.Event_UpdateSubButtonText");
		
		UBaseOptionsEntry_C_Event_UpdateSubButtonText_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.RefreshValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               forceUpdateSlider                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseOptionsEntry_C::RefreshValue(bool forceUpdateSlider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.RefreshValue");
		
		UBaseOptionsEntry_C_RefreshValue_Params params {};
		params.forceUpdateSlider = forceUpdateSlider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseOptionsEntry.BaseOptionsEntry_C.ExecuteUbergraph_BaseOptionsEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseOptionsEntry_C::ExecuteUbergraph_BaseOptionsEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseOptionsEntry.BaseOptionsEntry_C.ExecuteUbergraph_BaseOptionsEntry");
		
		UBaseOptionsEntry_C_ExecuteUbergraph_BaseOptionsEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseOptionsEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseOptionsEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BaseOptionsEntry.BaseOptionsEntry_C");
		return ptr;
	}

}


