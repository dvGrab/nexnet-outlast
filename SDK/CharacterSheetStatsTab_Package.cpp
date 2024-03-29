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
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.BuildRecentTrialArray
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::BuildRecentTrialArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.BuildRecentTrialArray");
		
		UCharacterSheetStatsTab_C_BuildRecentTrialArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Setup Score Lines
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRecordedScoringEvent>               scoringEvents                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCharacterSheetStatsTab_C::Setup_Score_Lines(TArray<struct FRecordedScoringEvent>* scoringEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Setup Score Lines");
		
		UCharacterSheetStatsTab_C_Setup_Score_Lines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (scoringEvents != nullptr)
			*scoringEvents = params.scoringEvents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.SetupVariators
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHorizontalBox*                              targetHBox                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TrialId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheetStatsTab_C::SetupVariators(class UHorizontalBox* targetHBox, const class FName& TrialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.SetupVariators");
		
		UCharacterSheetStatsTab_C_SetupVariators_Params params {};
		params.targetHBox = targetHBox;
		params.TrialId = TrialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.SetupTrialResults
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::SetupTrialResults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.SetupTrialResults");
		
		UCharacterSheetStatsTab_C_SetupTrialResults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.SetPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewPageIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheetStatsTab_C::SetPage(int32_t NewPageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.SetPage");
		
		UCharacterSheetStatsTab_C_SetPage_Params params {};
		params.NewPageIndex = NewPageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UCharacterSheetStatsTab_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnFocusReceived");
		
		UCharacterSheetStatsTab_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.NextPage
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::NextPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.NextPage");
		
		UCharacterSheetStatsTab_C_NextPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.PreviousPage
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::PreviousPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.PreviousPage");
		
		UCharacterSheetStatsTab_C_PreviousPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.UpdateGamepadPageNav
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::UpdateGamepadPageNav()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.UpdateGamepadPageNav");
		
		UCharacterSheetStatsTab_C_UpdateGamepadPageNav_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.GetPageTitle
	 * 		Flags  -> ()
	 */
	class FText UCharacterSheetStatsTab_C::GetPageTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.GetPageTitle");
		
		UCharacterSheetStatsTab_C_GetPageTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Refresh
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Refresh");
		
		UCharacterSheetStatsTab_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshLevel
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::RefreshLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshLevel");
		
		UCharacterSheetStatsTab_C_RefreshLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshStats
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::RefreshStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshStats");
		
		UCharacterSheetStatsTab_C_RefreshStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_Refresh");
		
		UCharacterSheetStatsTab_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCharacterSheetStatsTab_C_BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCharacterSheetStatsTab_C_BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Construct
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Construct");
		
		UCharacterSheetStatsTab_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnMenuInputSourceChanged
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::OnMenuInputSourceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnMenuInputSourceChanged");
		
		UCharacterSheetStatsTab_C_OnMenuInputSourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Destruct");
		
		UCharacterSheetStatsTab_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnGamepadPageLeft
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::OnGamepadPageLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnGamepadPageLeft");
		
		UCharacterSheetStatsTab_C_OnGamepadPageLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnGamepadPageRight
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::OnGamepadPageRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnGamepadPageRight");
		
		UCharacterSheetStatsTab_C_OnGamepadPageRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_OnTabSelected
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::Event_OnTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_OnTabSelected");
		
		UCharacterSheetStatsTab_C_Event_OnTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_OnTabUnselected
	 * 		Flags  -> ()
	 */
	void UCharacterSheetStatsTab_C::Event_OnTabUnselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_OnTabUnselected");
		
		UCharacterSheetStatsTab_C_Event_OnTabUnselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.ExecuteUbergraph_CharacterSheetStatsTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheetStatsTab_C::ExecuteUbergraph_CharacterSheetStatsTab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.ExecuteUbergraph_CharacterSheetStatsTab");
		
		UCharacterSheetStatsTab_C_ExecuteUbergraph_CharacterSheetStatsTab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterSheetStatsTab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterSheetStatsTab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterSheetStatsTab.CharacterSheetStatsTab_C");
		return ptr;
	}

}


