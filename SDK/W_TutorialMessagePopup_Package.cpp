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
	 * 		Name   -> Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_TutorialMessagePopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.Construct");
		
		UW_TutorialMessagePopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ShowMessagePrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFirstShowing                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<class FText>                                Content                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_TutorialMessagePopup_C::ShowMessagePrompt(bool IsFirstShowing, const class FText& Title, TArray<class FText> Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ShowMessagePrompt");
		
		UW_TutorialMessagePopup_C_ShowMessagePrompt_Params params {};
		params.IsFirstShowing = IsFirstShowing;
		params.Title = Title;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.HideMessagePrompt
	 * 		Flags  -> ()
	 */
	void UW_TutorialMessagePopup_C::HideMessagePrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.HideMessagePrompt");
		
		UW_TutorialMessagePopup_C_HideMessagePrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.UpdateMessageContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                Content                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_TutorialMessagePopup_C::UpdateMessageContent(TArray<class FText> Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.UpdateMessageContent");
		
		UW_TutorialMessagePopup_C_UpdateMessageContent_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ClearMessages
	 * 		Flags  -> ()
	 */
	void UW_TutorialMessagePopup_C::ClearMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ClearMessages");
		
		UW_TutorialMessagePopup_C_ClearMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ExecuteUbergraph_W_TutorialMessagePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_TutorialMessagePopup_C::ExecuteUbergraph_W_TutorialMessagePopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ExecuteUbergraph_W_TutorialMessagePopup");
		
		UW_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_TutorialMessagePopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_TutorialMessagePopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_TutorialMessagePopup.W_TutorialMessagePopup_C");
		return ptr;
	}

}


