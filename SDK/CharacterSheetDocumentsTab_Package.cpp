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
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewPageIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheetDocumentsTab_C::SetPage(int32_t NewPageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetPage");
		
		UCharacterSheetDocumentsTab_C_SetPage_Params params {};
		params.NewPageIndex = NewPageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.UpdateGamepadPageNav
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::UpdateGamepadPageNav()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.UpdateGamepadPageNav");
		
		UCharacterSheetDocumentsTab_C_UpdateGamepadPageNav_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.NextPage
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::NextPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.NextPage");
		
		UCharacterSheetDocumentsTab_C_NextPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.PreviousPage
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::PreviousPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.PreviousPage");
		
		UCharacterSheetDocumentsTab_C_PreviousPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.GetGroupIndexFromId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheetDocumentsTab_C::GetGroupIndexFromId(const class FName& ID, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.GetGroupIndexFromId");
		
		UCharacterSheetDocumentsTab_C_GetGroupIndexFromId_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.GamepadNav_HandleGridNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UCharacterSheetDocumentsTab_C::GamepadNav_HandleGridNavigation(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.GamepadNav_HandleGridNavigation");
		
		UCharacterSheetDocumentsTab_C_GamepadNav_HandleGridNavigation_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.HandleFocusTransmission
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::HandleFocusTransmission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.HandleFocusTransmission");
		
		UCharacterSheetDocumentsTab_C_HandleFocusTransmission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UCharacterSheetDocumentsTab_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnFocusReceived");
		
		UCharacterSheetDocumentsTab_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.GetPageTitle
	 * 		Flags  -> ()
	 */
	class FText UCharacterSheetDocumentsTab_C::GetPageTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.GetPageTitle");
		
		UCharacterSheetDocumentsTab_C_GetPageTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.IsReadyToClose
	 * 		Flags  -> ()
	 */
	bool UCharacterSheetDocumentsTab_C::IsReadyToClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.IsReadyToClose");
		
		UCharacterSheetDocumentsTab_C_IsReadyToClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentSeen
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::OnDocumentSeen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentSeen");
		
		UCharacterSheetDocumentsTab_C_OnDocumentSeen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentUnselected
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::OnDocumentUnselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentUnselected");
		
		UCharacterSheetDocumentsTab_C_OnDocumentUnselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBCollectibleDocumentDefinitionRow         Document                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCharacterSheetDocumentsTab_C::OnDocumentSelected(const struct FRBCollectibleDocumentDefinitionRow& Document)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentSelected");
		
		UCharacterSheetDocumentsTab_C_OnDocumentSelected_Params params {};
		params.Document = Document;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentGroupSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DocumentGroupId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheetDocumentsTab_C::OnDocumentGroupSelected(const class FName& DocumentGroupId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentGroupSelected");
		
		UCharacterSheetDocumentsTab_C_OnDocumentGroupSelected_Params params {};
		params.DocumentGroupId = DocumentGroupId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetupDocumentGroupDetails
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::SetupDocumentGroupDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetupDocumentGroupDetails");
		
		UCharacterSheetDocumentsTab_C_SetupDocumentGroupDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetupDocuments
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::SetupDocuments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetupDocuments");
		
		UCharacterSheetDocumentsTab_C_SetupDocuments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetupDocumentGroups
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::SetupDocumentGroups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.SetupDocumentGroups");
		
		UCharacterSheetDocumentsTab_C_SetupDocumentGroups_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Refresh
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Refresh");
		
		UCharacterSheetDocumentsTab_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnBackRequested
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::OnBackRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnBackRequested");
		
		UCharacterSheetDocumentsTab_C_OnBackRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Construct
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Construct");
		
		UCharacterSheetDocumentsTab_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_NextPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::BndEvt__CharacterSheetDocumentsTab_NextPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_NextPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCharacterSheetDocumentsTab_C_BndEvt__CharacterSheetDocumentsTab_NextPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_PreviousPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::BndEvt__CharacterSheetDocumentsTab_PreviousPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_PreviousPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCharacterSheetDocumentsTab_C_BndEvt__CharacterSheetDocumentsTab_PreviousPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_ExitDocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::BndEvt__CharacterSheetDocumentsTab_ExitDocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_ExitDocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UCharacterSheetDocumentsTab_C_BndEvt__CharacterSheetDocumentsTab_ExitDocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Event_OnTabUnselected
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::Event_OnTabUnselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Event_OnTabUnselected");
		
		UCharacterSheetDocumentsTab_C_Event_OnTabUnselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_PreviousDocumentGroupPageButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::BndEvt__CharacterSheetDocumentsTab_PreviousDocumentGroupPageButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_PreviousDocumentGroupPageButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UCharacterSheetDocumentsTab_C_BndEvt__CharacterSheetDocumentsTab_PreviousDocumentGroupPageButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_NextDocumentGroupPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::BndEvt__CharacterSheetDocumentsTab_NextDocumentGroupPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.BndEvt__CharacterSheetDocumentsTab_NextDocumentGroupPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UCharacterSheetDocumentsTab_C_BndEvt__CharacterSheetDocumentsTab_NextDocumentGroupPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnMenuInputSourceChanged
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::OnMenuInputSourceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnMenuInputSourceChanged");
		
		UCharacterSheetDocumentsTab_C_OnMenuInputSourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnGamepadPageLeft
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::OnGamepadPageLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnGamepadPageLeft");
		
		UCharacterSheetDocumentsTab_C_OnGamepadPageLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnGamepadPageRight
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::OnGamepadPageRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnGamepadPageRight");
		
		UCharacterSheetDocumentsTab_C_OnGamepadPageRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Destruct");
		
		UCharacterSheetDocumentsTab_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Event_OnTabSelected
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::Event_OnTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.Event_OnTabSelected");
		
		UCharacterSheetDocumentsTab_C_Event_OnTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.ExecuteUbergraph_CharacterSheetDocumentsTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheetDocumentsTab_C::ExecuteUbergraph_CharacterSheetDocumentsTab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.ExecuteUbergraph_CharacterSheetDocumentsTab");
		
		UCharacterSheetDocumentsTab_C_ExecuteUbergraph_CharacterSheetDocumentsTab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentSeenEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheetDocumentsTab_C::OnDocumentSeenEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C.OnDocumentSeenEvent__DelegateSignature");
		
		UCharacterSheetDocumentsTab_C_OnDocumentSeenEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterSheetDocumentsTab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterSheetDocumentsTab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterSheetDocumentsTab.CharacterSheetDocumentsTab_C");
		return ptr;
	}

}


