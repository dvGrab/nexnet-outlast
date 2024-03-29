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
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.Get_ReplayBtn_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_MainMenu_V2_C::Get_ReplayBtn_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.Get_ReplayBtn_Visibility_1");
		
		UW_MainMenu_V2_C_Get_ReplayBtn_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.FadeInMenu
	 * 		Flags  -> ()
	 */
	void UW_MainMenu_V2_C::FadeInMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.FadeInMenu");
		
		UW_MainMenu_V2_C_FadeInMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.OnMouseButtonDown_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_MainMenu_V2_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.OnMouseButtonDown_1");
		
		UW_MainMenu_V2_C_OnMouseButtonDown_1_Params params {};
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
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_MainMenu_V2_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.OnKeyDown");
		
		UW_MainMenu_V2_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Options_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::BndEvt__W_MainMenu_V2_btn_Options_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Options_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");
		
		UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Options_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Quit_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::BndEvt__W_MainMenu_V2_btn_Quit_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Quit_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");
		
		UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Quit_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Bug_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::BndEvt__W_MainMenu_V2_btn_Bug_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Bug_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");
		
		UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Bug_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_MainMenu_V2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.Construct");
		
		UW_MainMenu_V2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_FindSession_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::BndEvt__W_MainMenu_V2_btn_FindSession_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_FindSession_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");
		
		UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_FindSession_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Play_1_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::BndEvt__W_MainMenu_V2_btn_Play_1_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Play_1_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");
		
		UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Play_1_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Play_2_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::BndEvt__W_MainMenu_V2_btn_Play_2_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Play_2_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");
		
		UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Play_2_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Play_3_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::BndEvt__W_MainMenu_V2_btn_Play_3_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Play_3_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature");
		
		UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Play_3_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Cancel_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::BndEvt__W_MainMenu_V2_btn_Cancel_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Cancel_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature");
		
		UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Cancel_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_MainMenu_V2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.PreConstruct");
		
		UW_MainMenu_V2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.RetryLogin
	 * 		Flags  -> ()
	 */
	void UW_MainMenu_V2_C::RetryLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.RetryLogin");
		
		UW_MainMenu_V2_C_RetryLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Play_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::BndEvt__W_MainMenu_V2_btn_Play_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_btn_Play_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
		
		UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_btn_Play_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UW_MainMenu_V2_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.CustomEvent_1");
		
		UW_MainMenu_V2_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.OnUpdateSessionSearch_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bComplete                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        OutMessage                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bPVPSearch                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_MainMenu_V2_C::OnUpdateSessionSearch_Event_1(bool bComplete, const class FText& OutMessage, bool bPVPSearch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.OnUpdateSessionSearch_Event_1");
		
		UW_MainMenu_V2_C_OnUpdateSessionSearch_Event_1_Params params {};
		params.bComplete = bComplete;
		params.OutMessage = OutMessage;
		params.bPVPSearch = bPVPSearch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_W_Button_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::BndEvt__W_MainMenu_V2_W_Button_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_W_Button_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");
		
		UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_W_Button_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_FindPVPSessionBtn_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::BndEvt__W_MainMenu_V2_FindPVPSessionBtn_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_FindPVPSessionBtn_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature");
		
		UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_FindPVPSessionBtn_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_FindPVPSessionCancelBtn_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::BndEvt__W_MainMenu_V2_FindPVPSessionCancelBtn_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_FindPVPSessionCancelBtn_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature");
		
		UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_FindPVPSessionCancelBtn_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_ReplayBtn_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::BndEvt__W_MainMenu_V2_ReplayBtn_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.BndEvt__W_MainMenu_V2_ReplayBtn_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature");
		
		UW_MainMenu_V2_C_BndEvt__W_MainMenu_V2_ReplayBtn_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MainMenu_V2.W_MainMenu_V2_C.ExecuteUbergraph_W_MainMenu_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MainMenu_V2_C::ExecuteUbergraph_W_MainMenu_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MainMenu_V2.W_MainMenu_V2_C.ExecuteUbergraph_W_MainMenu_V2");
		
		UW_MainMenu_V2_C_ExecuteUbergraph_W_MainMenu_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_MainMenu_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_MainMenu_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MainMenu_V2.W_MainMenu_V2_C");
		return ptr;
	}

}


