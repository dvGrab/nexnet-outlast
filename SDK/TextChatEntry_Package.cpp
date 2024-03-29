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
	 * 		Name   -> Function TextChatEntry.TextChatEntry_C.Hide
	 * 		Flags  -> ()
	 */
	void UTextChatEntry_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextChatEntry.TextChatEntry_C.Hide");
		
		UTextChatEntry_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextChatEntry.TextChatEntry_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBTextChatMessage                          Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTextChatWidget_BP_C*                        Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextChatEntry_C::Setup(const struct FRBTextChatMessage& Message, class UTextChatWidget_BP_C* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextChatEntry.TextChatEntry_C.Setup");
		
		UTextChatEntry_C_Setup_Params params {};
		params.Message = Message;
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextChatEntry.TextChatEntry_C.WidgetAnimationEvt_HideAnim_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UTextChatEntry_C::WidgetAnimationEvt_HideAnim_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextChatEntry.TextChatEntry_C.WidgetAnimationEvt_HideAnim_K2Node_WidgetAnimationEvent_1");
		
		UTextChatEntry_C_WidgetAnimationEvt_HideAnim_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextChatEntry.TextChatEntry_C.ExecuteUbergraph_TextChatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextChatEntry_C::ExecuteUbergraph_TextChatEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextChatEntry.TextChatEntry_C.ExecuteUbergraph_TextChatEntry");
		
		UTextChatEntry_C_ExecuteUbergraph_TextChatEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextChatEntry.TextChatEntry_C.OnHidden__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextChatEntry_C*                            Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextChatEntry_C::OnHidden__DelegateSignature(class UTextChatEntry_C* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextChatEntry.TextChatEntry_C.OnHidden__DelegateSignature");
		
		UTextChatEntry_C_OnHidden__DelegateSignature_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextChatEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextChatEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TextChatEntry.TextChatEntry_C");
		return ptr;
	}

}


