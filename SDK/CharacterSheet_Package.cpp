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
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.RefreshNewState
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::RefreshNewState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.RefreshNewState");
		
		UCharacterSheet_C_RefreshNewState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.TryShowStatsTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isShowingTutorial                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterSheet_C::TryShowStatsTutorial(bool* isShowingTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.TryShowStatsTutorial");
		
		UCharacterSheet_C_TryShowStatsTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isShowingTutorial != nullptr)
			*isShowingTutorial = params.isShowingTutorial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.Refresh
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.Refresh");
		
		UCharacterSheet_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.UpdateTrialBoardTutorialAnchors
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::UpdateTrialBoardTutorialAnchors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.UpdateTrialBoardTutorialAnchors");
		
		UCharacterSheet_C_UpdateTrialBoardTutorialAnchors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.GetSelfOverheadPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Left                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Top                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheet_C::GetSelfOverheadPosition(float* Left, float* Top)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.GetSelfOverheadPosition");
		
		UCharacterSheet_C_GetSelfOverheadPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Left != nullptr)
			*Left = params.Left;
		if (Top != nullptr)
			*Top = params.Top;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.TryShowTrialBoardTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isShowingTutorial                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterSheet_C::TryShowTrialBoardTutorial(bool* isShowingTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.TryShowTrialBoardTutorial");
		
		UCharacterSheet_C_TryShowTrialBoardTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isShowingTutorial != nullptr)
			*isShowingTutorial = params.isShowingTutorial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.TryShowEvidenceTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isShowingTutorial                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterSheet_C::TryShowEvidenceTutorial(bool* isShowingTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.TryShowEvidenceTutorial");
		
		UCharacterSheet_C_TryShowEvidenceTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isShowingTutorial != nullptr)
			*isShowingTutorial = params.isShowingTutorial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.ChangeActiveSkill
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::ChangeActiveSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.ChangeActiveSkill");
		
		UCharacterSheet_C_ChangeActiveSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UCharacterSheet_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.OnFocusReceived");
		
		UCharacterSheet_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.TryShowLoadoutTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isShowingTutorial                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterSheet_C::TryShowLoadoutTutorial(bool* isShowingTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.TryShowLoadoutTutorial");
		
		UCharacterSheet_C_TryShowLoadoutTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isShowingTutorial != nullptr)
			*isShowingTutorial = params.isShowingTutorial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.TryStartNextMenuTutorial
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::TryStartNextMenuTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.TryStartNextMenuTutorial");
		
		UCharacterSheet_C_TryStartNextMenuTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.Event_OnMenuTabSwitched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            previousIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheet_C::Event_OnMenuTabSwitched(int32_t previousIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.Event_OnMenuTabSwitched");
		
		UCharacterSheet_C_Event_OnMenuTabSwitched_Params params {};
		params.previousIndex = previousIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.Event_UpdateNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanExitMenu                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterSheet_C::Event_UpdateNavigation(bool CanExitMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.Event_UpdateNavigation");
		
		UCharacterSheet_C_Event_UpdateNavigation_Params params {};
		params.CanExitMenu = CanExitMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheet_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UCharacterSheet_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.Event_OnPush
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::Event_OnPush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.Event_OnPush");
		
		UCharacterSheet_C_Event_OnPush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.Event_OnMenuTutorialSeen
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::Event_OnMenuTutorialSeen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.Event_OnMenuTutorialSeen");
		
		UCharacterSheet_C_Event_OnMenuTutorialSeen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.EventRequestTutorial_Event_1
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::EventRequestTutorial_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.EventRequestTutorial_Event_1");
		
		UCharacterSheet_C_EventRequestTutorial_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.Event_StartTransitionOut
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::Event_StartTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.Event_StartTransitionOut");
		
		UCharacterSheet_C_Event_StartTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.BndEvt__ReplayMenuTutorialButton_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::BndEvt__ReplayMenuTutorialButton_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.BndEvt__ReplayMenuTutorialButton_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature");
		
		UCharacterSheet_C_BndEvt__ReplayMenuTutorialButton_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.Construct
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.Construct");
		
		UCharacterSheet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.Event_OnFocusMenu
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::Event_OnFocusMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.Event_OnFocusMenu");
		
		UCharacterSheet_C_Event_OnFocusMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.ShowSocialMenu
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::ShowSocialMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.ShowSocialMenu");
		
		UCharacterSheet_C_ShowSocialMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.Destruct");
		
		UCharacterSheet_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.BndEvt__CharacterSheet_SocialMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheet_C::BndEvt__CharacterSheet_SocialMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.BndEvt__CharacterSheet_SocialMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UCharacterSheet_C_BndEvt__CharacterSheet_SocialMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheet_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.Tick");
		
		UCharacterSheet_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.Event_MenuTabRight_Pressed
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::Event_MenuTabRight_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.Event_MenuTabRight_Pressed");
		
		UCharacterSheet_C_Event_MenuTabRight_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.Event_MenuTabLeft_Pressed
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::Event_MenuTabLeft_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.Event_MenuTabLeft_Pressed");
		
		UCharacterSheet_C_Event_MenuTabLeft_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.BndEvt__CharacterSheet_CharacterSheetDocumentsTab_K2Node_ComponentBoundEvent_3_OnDocumentSeenEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::BndEvt__CharacterSheet_CharacterSheetDocumentsTab_K2Node_ComponentBoundEvent_3_OnDocumentSeenEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.BndEvt__CharacterSheet_CharacterSheetDocumentsTab_K2Node_ComponentBoundEvent_3_OnDocumentSeenEvent__DelegateSignature");
		
		UCharacterSheet_C_BndEvt__CharacterSheet_CharacterSheetDocumentsTab_K2Node_ComponentBoundEvent_3_OnDocumentSeenEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.BndEvt__CharacterSheet_TrialBoardTab_K2Node_ComponentBoundEvent_4_OnCurrentSectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheet_C::BndEvt__CharacterSheet_TrialBoardTab_K2Node_ComponentBoundEvent_4_OnCurrentSectionChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.BndEvt__CharacterSheet_TrialBoardTab_K2Node_ComponentBoundEvent_4_OnCurrentSectionChanged__DelegateSignature");
		
		UCharacterSheet_C_BndEvt__CharacterSheet_TrialBoardTab_K2Node_ComponentBoundEvent_4_OnCurrentSectionChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheet.CharacterSheet_C.ExecuteUbergraph_CharacterSheet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheet_C::ExecuteUbergraph_CharacterSheet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheet.CharacterSheet_C.ExecuteUbergraph_CharacterSheet");
		
		UCharacterSheet_C_ExecuteUbergraph_CharacterSheet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterSheet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterSheet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterSheet.CharacterSheet_C");
		return ptr;
	}

}


