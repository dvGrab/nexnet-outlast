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
	 * 		Name   -> Function ReplayMenuTutorialButton.ReplayMenuTutorialButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UReplayMenuTutorialButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplayMenuTutorialButton.ReplayMenuTutorialButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UReplayMenuTutorialButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReplayMenuTutorialButton.ReplayMenuTutorialButton_C.ExecuteUbergraph_ReplayMenuTutorialButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UReplayMenuTutorialButton_C::ExecuteUbergraph_ReplayMenuTutorialButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplayMenuTutorialButton.ReplayMenuTutorialButton_C.ExecuteUbergraph_ReplayMenuTutorialButton");
		
		UReplayMenuTutorialButton_C_ExecuteUbergraph_ReplayMenuTutorialButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReplayMenuTutorialButton.ReplayMenuTutorialButton_C.Event_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UReplayMenuTutorialButton_C::Event_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplayMenuTutorialButton.ReplayMenuTutorialButton_C.Event_OnClicked__DelegateSignature");
		
		UReplayMenuTutorialButton_C_Event_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplayMenuTutorialButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplayMenuTutorialButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReplayMenuTutorialButton.ReplayMenuTutorialButton_C");
		return ptr;
	}

}


