/**
 * Name: OUTLAST
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
	 * 		Name   -> Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.OnAnalogValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UPolicyDocumentMenuWidget_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.OnAnalogValueChanged");
		
		UPolicyDocumentMenuWidget_C_OnAnalogValueChanged_Params params {};
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
	 * 		Name   -> Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPolicyDocumentMenuWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Tick");
		
		UPolicyDocumentMenuWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Event_Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPolicyDocumentMenuWidget_C::Event_Setup(const class FString& Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Event_Setup");
		
		UPolicyDocumentMenuWidget_C_Event_Setup_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.BndEvt__PolicyDocumentMenuWidget_AcceptBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPolicyDocumentMenuWidget_C::BndEvt__PolicyDocumentMenuWidget_AcceptBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.BndEvt__PolicyDocumentMenuWidget_AcceptBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UPolicyDocumentMenuWidget_C_BndEvt__PolicyDocumentMenuWidget_AcceptBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UPolicyDocumentMenuWidget_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.OnFocusLost");
		
		UPolicyDocumentMenuWidget_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Event_OnPush
	 * 		Flags  -> ()
	 */
	void UPolicyDocumentMenuWidget_C::Event_OnPush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Event_OnPush");
		
		UPolicyDocumentMenuWidget_C_Event_OnPush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Event_MenuConfirm_Released
	 * 		Flags  -> ()
	 */
	void UPolicyDocumentMenuWidget_C::Event_MenuConfirm_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.Event_MenuConfirm_Released");
		
		UPolicyDocumentMenuWidget_C_Event_MenuConfirm_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.ExecuteUbergraph_PolicyDocumentMenuWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPolicyDocumentMenuWidget_C::ExecuteUbergraph_PolicyDocumentMenuWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C.ExecuteUbergraph_PolicyDocumentMenuWidget");
		
		UPolicyDocumentMenuWidget_C_ExecuteUbergraph_PolicyDocumentMenuWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolicyDocumentMenuWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolicyDocumentMenuWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PolicyDocumentMenuWidget.PolicyDocumentMenuWidget_C");
		return ptr;
	}

}


