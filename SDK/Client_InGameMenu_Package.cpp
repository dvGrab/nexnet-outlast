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
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.SetupTrialInfos
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::SetupTrialInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.SetupTrialInfos");
		
		UClient_InGameMenu_C_SetupTrialInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.Setup Loadout
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::Setup_Loadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.Setup Loadout");
		
		UClient_InGameMenu_C_Setup_Loadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UClient_InGameMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.OnMouseButtonDown");
		
		UClient_InGameMenu_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.SetupVariators
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::SetupVariators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.SetupVariators");
		
		UClient_InGameMenu_C_SetupVariators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.ShowGroup
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::ShowGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.ShowGroup");
		
		UClient_InGameMenu_C_ShowGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.ShowSystem
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::ShowSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.ShowSystem");
		
		UClient_InGameMenu_C_ShowSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.GetQuitFacilityButtonsEnabled
	 * 		Flags  -> ()
	 */
	bool UClient_InGameMenu_C::GetQuitFacilityButtonsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.GetQuitFacilityButtonsEnabled");
		
		UClient_InGameMenu_C_GetQuitFacilityButtonsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.GetReturnToLobbyBtnIsEnabled
	 * 		Flags  -> ()
	 */
	bool UClient_InGameMenu_C::GetReturnToLobbyBtnIsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.GetReturnToLobbyBtnIsEnabled");
		
		UClient_InGameMenu_C_GetReturnToLobbyBtnIsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.GetReturnToLobbyBtnVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UClient_InGameMenu_C::GetReturnToLobbyBtnVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.GetReturnToLobbyBtnVisibility");
		
		UClient_InGameMenu_C_GetReturnToLobbyBtnVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.GetDevOptionsBtnVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UClient_InGameMenu_C::GetDevOptionsBtnVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.GetDevOptionsBtnVisibility");
		
		UClient_InGameMenu_C_GetDevOptionsBtnVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__ResumeBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::BndEvt__ResumeBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__ResumeBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UClient_InGameMenu_C_BndEvt__ResumeBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__DebugBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::BndEvt__DebugBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__DebugBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UClient_InGameMenu_C_BndEvt__DebugBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__QuitBtn_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::BndEvt__QuitBtn_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__QuitBtn_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");
		
		UClient_InGameMenu_C_BndEvt__QuitBtn_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__AudioOptionsBtn_1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::BndEvt__AudioOptionsBtn_1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__AudioOptionsBtn_1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");
		
		UClient_InGameMenu_C_BndEvt__AudioOptionsBtn_1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UClient_InGameMenu_C_BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.Construct");
		
		UClient_InGameMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__Client_InGameMenu_ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClient_InGameMenu_C::BndEvt__Client_InGameMenu_ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__Client_InGameMenu_ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UClient_InGameMenu_C_BndEvt__Client_InGameMenu_ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UClient_InGameMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.PreConstruct");
		
		UClient_InGameMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.Destruct");
		
		UClient_InGameMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__Client_InGameMenu_SystemButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuTabButton*                            Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClient_InGameMenu_C::BndEvt__Client_InGameMenu_SystemButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature(class URBMenuTabButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__Client_InGameMenu_SystemButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature");
		
		UClient_InGameMenu_C_BndEvt__Client_InGameMenu_SystemButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__Client_InGameMenu_GroupButtom_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuTabButton*                            Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClient_InGameMenu_C::BndEvt__Client_InGameMenu_GroupButtom_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature(class URBMenuTabButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.BndEvt__Client_InGameMenu_GroupButtom_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature");
		
		UClient_InGameMenu_C_BndEvt__Client_InGameMenu_GroupButtom_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.Event_OnPush
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::Event_OnPush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.Event_OnPush");
		
		UClient_InGameMenu_C_Event_OnPush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.Event_MenuTabLeft_Pressed
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::Event_MenuTabLeft_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.Event_MenuTabLeft_Pressed");
		
		UClient_InGameMenu_C_Event_MenuTabLeft_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.Event_MenuTabRight_Pressed
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::Event_MenuTabRight_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.Event_MenuTabRight_Pressed");
		
		UClient_InGameMenu_C_Event_MenuTabRight_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.Event_OnMenuSettingsModified
	 * 		Flags  -> ()
	 */
	void UClient_InGameMenu_C::Event_OnMenuSettingsModified()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.Event_OnMenuSettingsModified");
		
		UClient_InGameMenu_C_Event_OnMenuSettingsModified_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Client_InGameMenu.Client_InGameMenu_C.ExecuteUbergraph_Client_InGameMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClient_InGameMenu_C::ExecuteUbergraph_Client_InGameMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Client_InGameMenu.Client_InGameMenu_C.ExecuteUbergraph_Client_InGameMenu");
		
		UClient_InGameMenu_C_ExecuteUbergraph_Client_InGameMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClient_InGameMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClient_InGameMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Client_InGameMenu.Client_InGameMenu_C");
		return ptr;
	}

}


