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
	 * 		Name   -> Function W_TutorialOverviewText.W_TutorialOverviewText_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_TutorialOverviewText_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialOverviewText.W_TutorialOverviewText_C.Construct");
		
		UW_TutorialOverviewText_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialOverviewText.W_TutorialOverviewText_C.BndEvt__Button_104_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_TutorialOverviewText_C::BndEvt__Button_104_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialOverviewText.W_TutorialOverviewText_C.BndEvt__Button_104_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_TutorialOverviewText_C_BndEvt__Button_104_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialOverviewText.W_TutorialOverviewText_C.UpdateMessageContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                MessageContent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_TutorialOverviewText_C::UpdateMessageContent(TArray<class FText> MessageContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialOverviewText.W_TutorialOverviewText_C.UpdateMessageContent");
		
		UW_TutorialOverviewText_C_UpdateMessageContent_Params params {};
		params.MessageContent = MessageContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialOverviewText.W_TutorialOverviewText_C.ShowOverview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title_Text                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<class FText>                                TitleContent                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_TutorialOverviewText_C::ShowOverview(const class FText& Title_Text, TArray<class FText>* TitleContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialOverviewText.W_TutorialOverviewText_C.ShowOverview");
		
		UW_TutorialOverviewText_C_ShowOverview_Params params {};
		params.Title_Text = Title_Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TitleContent != nullptr)
			*TitleContent = params.TitleContent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialOverviewText.W_TutorialOverviewText_C.ExecuteUbergraph_W_TutorialOverviewText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_TutorialOverviewText_C::ExecuteUbergraph_W_TutorialOverviewText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialOverviewText.W_TutorialOverviewText_C.ExecuteUbergraph_W_TutorialOverviewText");
		
		UW_TutorialOverviewText_C_ExecuteUbergraph_W_TutorialOverviewText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_TutorialOverviewText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_TutorialOverviewText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_TutorialOverviewText.W_TutorialOverviewText_C");
		return ptr;
	}

}


