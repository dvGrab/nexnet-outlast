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
	 * 		Name   -> Function CommonNotificationWidget.CommonNotificationWidget_C.EnableBlockButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonNotificationWidget_C::EnableBlockButton(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonNotificationWidget.CommonNotificationWidget_C.EnableBlockButton");
		
		UCommonNotificationWidget_C_EnableBlockButton_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonNotificationWidget.CommonNotificationWidget_C.SetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonNotificationWidget_C::SetMessage(const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonNotificationWidget.CommonNotificationWidget_C.SetMessage");
		
		UCommonNotificationWidget_C_SetMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonNotificationWidget.CommonNotificationWidget_C.UpdateProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonNotificationWidget_C::UpdateProgress(float progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonNotificationWidget.CommonNotificationWidget_C.UpdateProgress");
		
		UCommonNotificationWidget_C_UpdateProgress_Params params {};
		params.progress = progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonNotificationWidget.CommonNotificationWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonNotificationWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonNotificationWidget.CommonNotificationWidget_C.PreConstruct");
		
		UCommonNotificationWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonNotificationWidget.CommonNotificationWidget_C.InputSourceChanged
	 * 		Flags  -> ()
	 */
	void UCommonNotificationWidget_C::InputSourceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonNotificationWidget.CommonNotificationWidget_C.InputSourceChanged");
		
		UCommonNotificationWidget_C_InputSourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonNotificationWidget.CommonNotificationWidget_C.BndEvt__CommonNotificationWidget_AcceptButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonNotificationWidget_C::BndEvt__CommonNotificationWidget_AcceptButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonNotificationWidget.CommonNotificationWidget_C.BndEvt__CommonNotificationWidget_AcceptButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UCommonNotificationWidget_C_BndEvt__CommonNotificationWidget_AcceptButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonNotificationWidget.CommonNotificationWidget_C.BndEvt__CommonNotificationWidget_DeclineButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonNotificationWidget_C::BndEvt__CommonNotificationWidget_DeclineButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonNotificationWidget.CommonNotificationWidget_C.BndEvt__CommonNotificationWidget_DeclineButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UCommonNotificationWidget_C_BndEvt__CommonNotificationWidget_DeclineButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonNotificationWidget.CommonNotificationWidget_C.BndEvt__CommonNotificationWidget_BlockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonNotificationWidget_C::BndEvt__CommonNotificationWidget_BlockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonNotificationWidget.CommonNotificationWidget_C.BndEvt__CommonNotificationWidget_BlockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UCommonNotificationWidget_C_BndEvt__CommonNotificationWidget_BlockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonNotificationWidget.CommonNotificationWidget_C.ExecuteUbergraph_CommonNotificationWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonNotificationWidget_C::ExecuteUbergraph_CommonNotificationWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonNotificationWidget.CommonNotificationWidget_C.ExecuteUbergraph_CommonNotificationWidget");
		
		UCommonNotificationWidget_C_ExecuteUbergraph_CommonNotificationWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonNotificationWidget.CommonNotificationWidget_C.OnBlockButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonNotificationWidget_C::OnBlockButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonNotificationWidget.CommonNotificationWidget_C.OnBlockButtonClicked__DelegateSignature");
		
		UCommonNotificationWidget_C_OnBlockButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonNotificationWidget.CommonNotificationWidget_C.OnDeclinedButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonNotificationWidget_C::OnDeclinedButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonNotificationWidget.CommonNotificationWidget_C.OnDeclinedButtonClicked__DelegateSignature");
		
		UCommonNotificationWidget_C_OnDeclinedButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonNotificationWidget.CommonNotificationWidget_C.OnAcceptedButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonNotificationWidget_C::OnAcceptedButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonNotificationWidget.CommonNotificationWidget_C.OnAcceptedButtonClicked__DelegateSignature");
		
		UCommonNotificationWidget_C_OnAcceptedButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonNotificationWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonNotificationWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonNotificationWidget.CommonNotificationWidget_C");
		return ptr;
	}

}


