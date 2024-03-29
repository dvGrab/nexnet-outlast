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
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.UpdateGamepadPageNav
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::UpdateGamepadPageNav()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.UpdateGamepadPageNav");
		
		USocialMenu_EntryList_C_UpdateGamepadPageNav_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.SlotHasFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            column                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            row                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHasFocus                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_EntryList_C::SlotHasFocus(int32_t column, int32_t row, bool* bHasFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.SlotHasFocus");
		
		USocialMenu_EntryList_C_SlotHasFocus_Params params {};
		params.column = column;
		params.row = row;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasFocus != nullptr)
			*bHasFocus = params.bHasFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.SetupInitialFocus
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::SetupInitialFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.SetupInitialFocus");
		
		USocialMenu_EntryList_C_SetupInitialFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply USocialMenu_EntryList_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.OnFocusReceived");
		
		USocialMenu_EntryList_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.GetPreviousPageButtonEnabled
	 * 		Flags  -> ()
	 */
	bool USocialMenu_EntryList_C::GetPreviousPageButtonEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.GetPreviousPageButtonEnabled");
		
		USocialMenu_EntryList_C_GetPreviousPageButtonEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.GetNextPageButtonEnabled
	 * 		Flags  -> ()
	 */
	bool USocialMenu_EntryList_C::GetNextPageButtonEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.GetNextPageButtonEnabled");
		
		USocialMenu_EntryList_C_GetNextPageButtonEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.SetSize
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::SetSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.SetSize");
		
		USocialMenu_EntryList_C_SetSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.SetupEditorPreview
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::SetupEditorPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.SetupEditorPreview");
		
		USocialMenu_EntryList_C_SetupEditorPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.UpdateEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            column                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            row                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_EntryList_C::UpdateEntry(class UWidget* Entry, int32_t column, int32_t row)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.UpdateEntry");
		
		USocialMenu_EntryList_C_UpdateEntry_Params params {};
		params.Entry = Entry;
		params.column = column;
		params.row = row;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.Setup
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.Setup");
		
		USocialMenu_EntryList_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.Construct
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.Construct");
		
		USocialMenu_EntryList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_RemoveEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBUserWidget*                               Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_EntryList_C::Event_RemoveEntry(class URBUserWidget* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_RemoveEntry");
		
		USocialMenu_EntryList_C_Event_RemoveEntry_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_UpdateEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBUserWidget*                               Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            column                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            row                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_EntryList_C::Event_UpdateEntry(class URBUserWidget* Entry, int32_t column, int32_t row)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_UpdateEntry");
		
		USocialMenu_EntryList_C_Event_UpdateEntry_Params params {};
		params.Entry = Entry;
		params.column = column;
		params.row = row;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_Clear
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::Event_Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_Clear");
		
		USocialMenu_EntryList_C_Event_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_EntryList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.PreConstruct");
		
		USocialMenu_EntryList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_OnDataPending
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsDataPending                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_EntryList_C::Event_OnDataPending(bool bIsDataPending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_OnDataPending");
		
		USocialMenu_EntryList_C_Event_OnDataPending_Params params {};
		params.bIsDataPending = bIsDataPending;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_OnEmptyStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEmpty                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_EntryList_C::Event_OnEmptyStateChanged(bool bIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_OnEmptyStateChanged");
		
		USocialMenu_EntryList_C_Event_OnEmptyStateChanged_Params params {};
		params.bIsEmpty = bIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.BndEvt__SocialMenu_EntryList_PreviousPageButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::BndEvt__SocialMenu_EntryList_PreviousPageButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.BndEvt__SocialMenu_EntryList_PreviousPageButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		USocialMenu_EntryList_C_BndEvt__SocialMenu_EntryList_PreviousPageButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.BndEvt__SocialMenu_EntryList_NextPageButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::BndEvt__SocialMenu_EntryList_NextPageButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.BndEvt__SocialMenu_EntryList_NextPageButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		USocialMenu_EntryList_C_BndEvt__SocialMenu_EntryList_NextPageButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.OnMenuInputSourceChanged
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::OnMenuInputSourceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.OnMenuInputSourceChanged");
		
		USocialMenu_EntryList_C_OnMenuInputSourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.Destruct
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.Destruct");
		
		USocialMenu_EntryList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.OnGamepadPageLeft
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::OnGamepadPageLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.OnGamepadPageLeft");
		
		USocialMenu_EntryList_C_OnGamepadPageLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.OnGamepadPageRight
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::OnGamepadPageRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.OnGamepadPageRight");
		
		USocialMenu_EntryList_C_OnGamepadPageRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_EntriesUpdated
	 * 		Flags  -> ()
	 */
	void USocialMenu_EntryList_C::Event_EntriesUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.Event_EntriesUpdated");
		
		USocialMenu_EntryList_C_Event_EntriesUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_EntryList.SocialMenu_EntryList_C.ExecuteUbergraph_SocialMenu_EntryList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_EntryList_C::ExecuteUbergraph_SocialMenu_EntryList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_EntryList.SocialMenu_EntryList_C.ExecuteUbergraph_SocialMenu_EntryList");
		
		USocialMenu_EntryList_C_ExecuteUbergraph_SocialMenu_EntryList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialMenu_EntryList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialMenu_EntryList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SocialMenu_EntryList.SocialMenu_EntryList_C");
		return ptr;
	}

}


