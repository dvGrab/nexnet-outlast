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
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OpenMessenger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FocusChatBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_Tablet_Messenger_C::OpenMessenger(bool FocusChatBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OpenMessenger");
		
		UW_PreMission_Tablet_Messenger_C_OpenMessenger_Params params {};
		params.FocusChatBox = FocusChatBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.SendMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        MessageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_PreMission_Tablet_Messenger_C::SendMessage(const class FText& MessageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.SendMessage");
		
		UW_PreMission_Tablet_Messenger_C_SendMessage_Params params {};
		params.MessageText = MessageText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.AddChatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRChatMessage                               Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_PreMission_Tablet_Messenger_C::AddChatMessage(const struct FRChatMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.AddChatMessage");
		
		UW_PreMission_Tablet_Messenger_C_AddChatMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_PreMission_Tablet_Messenger_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnKeyUp");
		
		UW_PreMission_Tablet_Messenger_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.PopulateChatHistory
	 * 		Flags  -> ()
	 */
	void UW_PreMission_Tablet_Messenger_C::PopulateChatHistory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.PopulateChatHistory");
		
		UW_PreMission_Tablet_Messenger_C_PopulateChatHistory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_Tablet_Messenger_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.PreConstruct");
		
		UW_PreMission_Tablet_Messenger_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.CloseMessenger
	 * 		Flags  -> ()
	 */
	void UW_PreMission_Tablet_Messenger_C::CloseMessenger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.CloseMessenger");
		
		UW_PreMission_Tablet_Messenger_C_CloseMessenger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.NewMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRChatMessage                               Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_PreMission_Tablet_Messenger_C::NewMessage(const struct FRChatMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.NewMessage");
		
		UW_PreMission_Tablet_Messenger_C_NewMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.HideToast
	 * 		Flags  -> ()
	 */
	void UW_PreMission_Tablet_Messenger_C::HideToast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.HideToast");
		
		UW_PreMission_Tablet_Messenger_C_HideToast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_Tablet_Messenger_C::BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
		
		UW_PreMission_Tablet_Messenger_C_BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_Tablet_Messenger_C::BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
		
		UW_PreMission_Tablet_Messenger_C_BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_btn_SendMessage_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_Tablet_Messenger_C::BndEvt__W_PreMission_Tablet_Messenger_btn_SendMessage_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_btn_SendMessage_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");
		
		UW_PreMission_Tablet_Messenger_C_BndEvt__W_PreMission_Tablet_Messenger_btn_SendMessage_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.ExecuteUbergraph_W_PreMission_Tablet_Messenger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_Tablet_Messenger_C::ExecuteUbergraph_W_PreMission_Tablet_Messenger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.ExecuteUbergraph_W_PreMission_Tablet_Messenger");
		
		UW_PreMission_Tablet_Messenger_C_ExecuteUbergraph_W_PreMission_Tablet_Messenger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnMessengerOpen__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_Tablet_Messenger_C::OnMessengerOpen__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnMessengerOpen__DelegateSignature");
		
		UW_PreMission_Tablet_Messenger_C_OnMessengerOpen__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnMessengerClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PreMission_Tablet_Messenger_C::OnMessengerClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnMessengerClose__DelegateSignature");
		
		UW_PreMission_Tablet_Messenger_C_OnMessengerClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PreMission_Tablet_Messenger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PreMission_Tablet_Messenger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C");
		return ptr;
	}

}


