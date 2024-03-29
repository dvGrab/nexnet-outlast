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
	 * 		Name   -> Function MainMenu.MainMenu_C.GetFirstDisplayedEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMainMenuButton_C*                           NewParam                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMenu_C::GetFirstDisplayedEntry(class UMainMenuButton_C** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.GetFirstDisplayedEntry");
		
		UMainMenu_C_GetFirstDisplayedEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.GamepadNav_NewsToButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UMainMenu_C::GamepadNav_NewsToButtons(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.GamepadNav_NewsToButtons");
		
		UMainMenu_C_GamepadNav_NewsToButtons_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.GamepadNav_ButtonsToNews
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UMainMenu_C::GamepadNav_ButtonsToNews(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.GamepadNav_ButtonsToNews");
		
		UMainMenu_C_GamepadNav_ButtonsToNews_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UMainMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnFocusReceived");
		
		UMainMenu_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.Get_TutorialButton_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UMainMenu_C::Get_TutorialButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Get_TutorialButton_Visibility_1");
		
		UMainMenu_C_Get_TutorialButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.Get_EnterButton_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UMainMenu_C::Get_EnterButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Get_EnterButton_Visibility_1");
		
		UMainMenu_C_Get_EnterButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.GetRejoinSoloGameSessionButtonVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UMainMenu_C::GetRejoinSoloGameSessionButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.GetRejoinSoloGameSessionButtonVisibility");
		
		UMainMenu_C_GetRejoinSoloGameSessionButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.GetRejoinPartyButtonVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UMainMenu_C::GetRejoinPartyButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.GetRejoinPartyButtonVisibility");
		
		UMainMenu_C_GetRejoinPartyButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.Get_Crossplay_Text_1
	 * 		Flags  -> ()
	 */
	class FText UMainMenu_C::Get_Crossplay_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Get_Crossplay_Text_1");
		
		UMainMenu_C_Get_Crossplay_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.StartGame
	 * 		Flags  -> ()
	 */
	void UMainMenu_C::StartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.StartGame");
		
		UMainMenu_C_StartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.GetChangelist
	 * 		Flags  -> ()
	 */
	class FString UMainMenu_C::GetChangelist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.GetChangelist");
		
		UMainMenu_C_GetChangelist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.Get_SpectateGridPanel_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UMainMenu_C::Get_SpectateGridPanel_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Get_SpectateGridPanel_Visibility_1");
		
		UMainMenu_C_Get_SpectateGridPanel_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UMainMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Construct");
		
		UMainMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.BndEvt__EnterButton_K2Node_ComponentBoundEvent_4_Event_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMainMenu_C::BndEvt__EnterButton_K2Node_ComponentBoundEvent_4_Event_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__EnterButton_K2Node_ComponentBoundEvent_4_Event_Clicked__DelegateSignature");
		
		UMainMenu_C_BndEvt__EnterButton_K2Node_ComponentBoundEvent_4_Event_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_5_Event_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMainMenu_C::BndEvt__OptionsButton_K2Node_ComponentBoundEvent_5_Event_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_5_Event_Clicked__DelegateSignature");
		
		UMainMenu_C_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_5_Event_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_6_Event_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMainMenu_C::BndEvt__CreditsButton_K2Node_ComponentBoundEvent_6_Event_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_6_Event_Clicked__DelegateSignature");
		
		UMainMenu_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_6_Event_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_7_Event_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMainMenu_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_7_Event_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_7_Event_Clicked__DelegateSignature");
		
		UMainMenu_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_7_Event_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.BndEvt__RejoinPartyButton_K2Node_ComponentBoundEvent_0_Event_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMainMenu_C::BndEvt__RejoinPartyButton_K2Node_ComponentBoundEvent_0_Event_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__RejoinPartyButton_K2Node_ComponentBoundEvent_0_Event_Clicked__DelegateSignature");
		
		UMainMenu_C_BndEvt__RejoinPartyButton_K2Node_ComponentBoundEvent_0_Event_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.BndEvt__RejoinSoloGameSessionButton_K2Node_ComponentBoundEvent_1_Event_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMainMenu_C::BndEvt__RejoinSoloGameSessionButton_K2Node_ComponentBoundEvent_1_Event_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__RejoinSoloGameSessionButton_K2Node_ComponentBoundEvent_1_Event_Clicked__DelegateSignature");
		
		UMainMenu_C_BndEvt__RejoinSoloGameSessionButton_K2Node_ComponentBoundEvent_1_Event_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.BndEvt__MainMenu_TutorialButton_K2Node_ComponentBoundEvent_2_Event_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMainMenu_C::BndEvt__MainMenu_TutorialButton_K2Node_ComponentBoundEvent_2_Event_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__MainMenu_TutorialButton_K2Node_ComponentBoundEvent_2_Event_Clicked__DelegateSignature");
		
		UMainMenu_C_BndEvt__MainMenu_TutorialButton_K2Node_ComponentBoundEvent_2_Event_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.OnMainMenuFocused
	 * 		Flags  -> ()
	 */
	void UMainMenu_C::OnMainMenuFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnMainMenuFocused");
		
		UMainMenu_C_OnMainMenuFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMenu_C::ExecuteUbergraph_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu");
		
		UMainMenu_C_ExecuteUbergraph_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainMenu.MainMenu_C");
		return ptr;
	}

}


