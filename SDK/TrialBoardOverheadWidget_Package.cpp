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
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UTrialBoardOverheadWidget_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.OnFocusLost");
		
		UTrialBoardOverheadWidget_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UTrialBoardOverheadWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.OnFocusReceived");
		
		UTrialBoardOverheadWidget_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPerksList
	 * 		Flags  -> ()
	 */
	void UTrialBoardOverheadWidget_C::SetupPerksList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPerksList");
		
		UTrialBoardOverheadWidget_C_SetupPerksList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPlayerLevel
	 * 		Flags  -> ()
	 */
	void UTrialBoardOverheadWidget_C::SetupPlayerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPlayerLevel");
		
		UTrialBoardOverheadWidget_C_SetupPlayerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPartyLeaderIcon
	 * 		Flags  -> ()
	 */
	void UTrialBoardOverheadWidget_C::SetupPartyLeaderIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPartyLeaderIcon");
		
		UTrialBoardOverheadWidget_C_SetupPartyLeaderIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupActiveSkill
	 * 		Flags  -> ()
	 */
	void UTrialBoardOverheadWidget_C::SetupActiveSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupActiveSkill");
		
		UTrialBoardOverheadWidget_C_SetupActiveSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetName
	 * 		Flags  -> ()
	 */
	void UTrialBoardOverheadWidget_C::SetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetName");
		
		UTrialBoardOverheadWidget_C_SetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UTrialBoardOverheadWidget_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.Event_Refresh");
		
		UTrialBoardOverheadWidget_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActiveSkillButton_C*                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardOverheadWidget_C::BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature(class UActiveSkillButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature");
		
		UTrialBoardOverheadWidget_C_BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_1_OnHoveredEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActiveSkillButton_C*                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardOverheadWidget_C::BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_1_OnHoveredEvent__DelegateSignature(class UActiveSkillButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_1_OnHoveredEvent__DelegateSignature");
		
		UTrialBoardOverheadWidget_C_BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_1_OnHoveredEvent__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_2_OnUnhoveredEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActiveSkillButton_C*                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardOverheadWidget_C::BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_2_OnUnhoveredEvent__DelegateSignature(class UActiveSkillButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_2_OnUnhoveredEvent__DelegateSignature");
		
		UTrialBoardOverheadWidget_C_BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_2_OnUnhoveredEvent__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_GamepadButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTrialBoardOverheadWidget_C::BndEvt__TrialBoardOverheadWidget_GamepadButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_GamepadButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UTrialBoardOverheadWidget_C_BndEvt__TrialBoardOverheadWidget_GamepadButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.ExecuteUbergraph_TrialBoardOverheadWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardOverheadWidget_C::ExecuteUbergraph_TrialBoardOverheadWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.ExecuteUbergraph_TrialBoardOverheadWidget");
		
		UTrialBoardOverheadWidget_C_ExecuteUbergraph_TrialBoardOverheadWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrialBoardOverheadWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrialBoardOverheadWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TrialBoardOverheadWidget.TrialBoardOverheadWidget_C");
		return ptr;
	}

}


