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
	 * 		Name   -> Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.SetSkipButton
	 * 		Flags  -> ()
	 */
	void UIntroRecapVideoMenuWidget_C::SetSkipButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.SetSkipButton");
		
		UIntroRecapVideoMenuWidget_C_SetSkipButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Finished_F6A9744E4EE11F3E963A7D8C071ED177
	 * 		Flags  -> ()
	 */
	void UIntroRecapVideoMenuWidget_C::Finished_F6A9744E4EE11F3E963A7D8C071ED177()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Finished_F6A9744E4EE11F3E963A7D8C071ED177");
		
		UIntroRecapVideoMenuWidget_C_Finished_F6A9744E4EE11F3E963A7D8C071ED177_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UIntroRecapVideoMenuWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Construct");
		
		UIntroRecapVideoMenuWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.OnMediaOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UIntroRecapVideoMenuWidget_C::OnMediaOpened(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.OnMediaOpened");
		
		UIntroRecapVideoMenuWidget_C_OnMediaOpened_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.HideSkipPrompt
	 * 		Flags  -> ()
	 */
	void UIntroRecapVideoMenuWidget_C::HideSkipPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.HideSkipPrompt");
		
		UIntroRecapVideoMenuWidget_C_HideSkipPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.OnCutsceneEnded
	 * 		Flags  -> ()
	 */
	void UIntroRecapVideoMenuWidget_C::OnCutsceneEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.OnCutsceneEnded");
		
		UIntroRecapVideoMenuWidget_C_OnCutsceneEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Event_ShowSkipPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldStartHideTimer                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIntroRecapVideoMenuWidget_C::Event_ShowSkipPrompt(bool bShouldStartHideTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Event_ShowSkipPrompt");
		
		UIntroRecapVideoMenuWidget_C_Event_ShowSkipPrompt_Params params {};
		params.bShouldStartHideTimer = bShouldStartHideTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Event_EndCutsceneRequested
	 * 		Flags  -> ()
	 */
	void UIntroRecapVideoMenuWidget_C::Event_EndCutsceneRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Event_EndCutsceneRequested");
		
		UIntroRecapVideoMenuWidget_C_Event_EndCutsceneRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Destruct
	 * 		Flags  -> ()
	 */
	void UIntroRecapVideoMenuWidget_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Destruct");
		
		UIntroRecapVideoMenuWidget_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Event_OnPop
	 * 		Flags  -> ()
	 */
	void UIntroRecapVideoMenuWidget_C::Event_OnPop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.Event_OnPop");
		
		UIntroRecapVideoMenuWidget_C_Event_OnPop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.ExecuteUbergraph_IntroRecapVideoMenuWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIntroRecapVideoMenuWidget_C::ExecuteUbergraph_IntroRecapVideoMenuWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.ExecuteUbergraph_IntroRecapVideoMenuWidget");
		
		UIntroRecapVideoMenuWidget_C_ExecuteUbergraph_IntroRecapVideoMenuWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.FinishedReading__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UIntroRecapVideoMenuWidget_C::FinishedReading__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C.FinishedReading__DelegateSignature");
		
		UIntroRecapVideoMenuWidget_C_FinishedReading__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIntroRecapVideoMenuWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntroRecapVideoMenuWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C");
		return ptr;
	}

}


