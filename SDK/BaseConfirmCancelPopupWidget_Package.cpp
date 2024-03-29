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
	 * 		Name   -> Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBaseConfirmCancelPopupWidget_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.OnPreviewMouseButtonDown");
		
		UBaseConfirmCancelPopupWidget_C_OnPreviewMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.SetCancelSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseConfirmCancelPopupWidget_C::SetCancelSound(class UAkAudioEvent* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.SetCancelSound");
		
		UBaseConfirmCancelPopupWidget_C_SetCancelSound_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.SetConfrmSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseConfirmCancelPopupWidget_C::SetConfrmSound(class UAkAudioEvent* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.SetConfrmSound");
		
		UBaseConfirmCancelPopupWidget_C_SetConfrmSound_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseConfirmCancelPopupWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.PreConstruct");
		
		UBaseConfirmCancelPopupWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UBaseConfirmCancelPopupWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.Construct");
		
		UBaseConfirmCancelPopupWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.Event_InitializePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TitleText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        MainText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        ConfirmText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        CancelText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBaseConfirmCancelPopupWidget_C::Event_InitializePopup(const class FText& TitleText, const class FText& MainText, const class FText& ConfirmText, const class FText& CancelText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.Event_InitializePopup");
		
		UBaseConfirmCancelPopupWidget_C_Event_InitializePopup_Params params {};
		params.TitleText = TitleText;
		params.MainText = MainText;
		params.ConfirmText = ConfirmText;
		params.CancelText = CancelText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseConfirmCancelPopupWidget_C::BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBaseConfirmCancelPopupWidget_C_BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.BndEvt__CancelMenuButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseConfirmCancelPopupWidget_C::BndEvt__CancelMenuButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.BndEvt__CancelMenuButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UBaseConfirmCancelPopupWidget_C_BndEvt__CancelMenuButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBaseConfirmCancelPopupWidget_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.Destruct");
		
		UBaseConfirmCancelPopupWidget_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.OninputChanged
	 * 		Flags  -> ()
	 */
	void UBaseConfirmCancelPopupWidget_C::OninputChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.OninputChanged");
		
		UBaseConfirmCancelPopupWidget_C_OninputChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.ExecuteUbergraph_BaseConfirmCancelPopupWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseConfirmCancelPopupWidget_C::ExecuteUbergraph_BaseConfirmCancelPopupWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C.ExecuteUbergraph_BaseConfirmCancelPopupWidget");
		
		UBaseConfirmCancelPopupWidget_C_ExecuteUbergraph_BaseConfirmCancelPopupWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseConfirmCancelPopupWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseConfirmCancelPopupWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C");
		return ptr;
	}

}


