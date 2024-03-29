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
	 * 		Name   -> Function TextChatWidget_BP.TextChatWidget_BP_C.OnEntryHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextChatEntry_C*                            Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextChatWidget_BP_C::OnEntryHidden(class UTextChatEntry_C* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextChatWidget_BP.TextChatWidget_BP_C.OnEntryHidden");
		
		UTextChatWidget_BP_C_OnEntryHidden_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextChatWidget_BP.TextChatWidget_BP_C.AddMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBTextChatMessage                          Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTextChatWidget_BP_C::AddMessage(const struct FRBTextChatMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextChatWidget_BP.TextChatWidget_BP_C.AddMessage");
		
		UTextChatWidget_BP_C_AddMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextChatWidget_BP.TextChatWidget_BP_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTextChatWidget_BP_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextChatWidget_BP.TextChatWidget_BP_C.PreConstruct");
		
		UTextChatWidget_BP_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextChatWidget_BP.TextChatWidget_BP_C.Event_ShowMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBTextChatMessage                          Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UTextChatWidget_BP_C::Event_ShowMessage(const struct FRBTextChatMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextChatWidget_BP.TextChatWidget_BP_C.Event_ShowMessage");
		
		UTextChatWidget_BP_C_Event_ShowMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextChatWidget_BP.TextChatWidget_BP_C.Event_HideMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MessageId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextChatWidget_BP_C::Event_HideMessage(int32_t MessageId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextChatWidget_BP.TextChatWidget_BP_C.Event_HideMessage");
		
		UTextChatWidget_BP_C_Event_HideMessage_Params params {};
		params.MessageId = MessageId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextChatWidget_BP.TextChatWidget_BP_C.ExecuteUbergraph_TextChatWidget_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextChatWidget_BP_C::ExecuteUbergraph_TextChatWidget_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextChatWidget_BP.TextChatWidget_BP_C.ExecuteUbergraph_TextChatWidget_BP");
		
		UTextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextChatWidget_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextChatWidget_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TextChatWidget_BP.TextChatWidget_BP_C");
		return ptr;
	}

}


