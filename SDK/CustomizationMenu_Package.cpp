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
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.UpdateHairColorNavigation
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::UpdateHairColorNavigation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.UpdateHairColorNavigation");
		
		UCustomizationMenu_C_UpdateHairColorNavigation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.TryStartNextMenuTutorial
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::TryStartNextMenuTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.TryStartNextMenuTutorial");
		
		UCustomizationMenu_C_TryStartNextMenuTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.UpdateFTUESpecificElements
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::UpdateFTUESpecificElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.UpdateFTUESpecificElements");
		
		UCustomizationMenu_C_UpdateFTUESpecificElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.UpdateListScrollBehaviour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationMenu_C::UpdateListScrollBehaviour(bool Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.UpdateListScrollBehaviour");
		
		UCustomizationMenu_C_UpdateListScrollBehaviour_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.UpdatePageSpecificButtons
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::UpdatePageSpecificButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.UpdatePageSpecificButtons");
		
		UCustomizationMenu_C_UpdatePageSpecificButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.GamepadNav_TryToggleHairPalette
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::GamepadNav_TryToggleHairPalette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.GamepadNav_TryToggleHairPalette");
		
		UCustomizationMenu_C_GamepadNav_TryToggleHairPalette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.TransmitFocusToCustoContent
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::TransmitFocusToCustoContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.TransmitFocusToCustoContent");
		
		UCustomizationMenu_C_TransmitFocusToCustoContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UCustomizationMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.OnFocusReceived");
		
		UCustomizationMenu_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.CreateRotateTooltip
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::CreateRotateTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.CreateRotateTooltip");
		
		UCustomizationMenu_C_CreateRotateTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.PreviewCosts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Custo_Item                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationMenu_C::PreviewCosts(const struct FUICustomizationItem& Custo_Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.PreviewCosts");
		
		UCustomizationMenu_C_PreviewCosts_Params params {};
		params.Custo_Item = Custo_Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.UpdateCustoDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Custo_Item                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UCustomizationMenu_C::UpdateCustoDetails(const struct FUICustomizationItem& Custo_Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.UpdateCustoDetails");
		
		UCustomizationMenu_C_UpdateCustoDetails_Params params {};
		params.Custo_Item = Custo_Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.SetupForCellCustomization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewIsCellCustomization                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationMenu_C::SetupForCellCustomization(bool bNewIsCellCustomization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.SetupForCellCustomization");
		
		UCustomizationMenu_C_SetupForCellCustomization_Params params {};
		params.bNewIsCellCustomization = bNewIsCellCustomization;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.SetupForTutorial
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::SetupForTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.SetupForTutorial");
		
		UCustomizationMenu_C_SetupForTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.UpdateNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanExitMenu                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationMenu_C::UpdateNavigation(bool CanExitMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.UpdateNavigation");
		
		UCustomizationMenu_C_UpdateNavigation_Params params {};
		params.CanExitMenu = CanExitMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UCustomizationMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UCustomizationMenu_C_BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");
		
		UCustomizationMenu_C_BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isTutorial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMenuCharacter_C*                            MenuCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACellCustomizationCameraActor_C*             CellCustomization                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationMenu_C::Initialize(bool isTutorial, class AMenuCharacter_C* MenuCharacter, class ACellCustomizationCameraActor_C* CellCustomization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.Initialize");
		
		UCustomizationMenu_C_Initialize_Params params {};
		params.isTutorial = isTutorial;
		params.MenuCharacter = MenuCharacter;
		params.CellCustomization = CellCustomization;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.Destruct");
		
		UCustomizationMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.Construct");
		
		UCustomizationMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.OnNavigationChangedEvent_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanExitMenu                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationMenu_C::OnNavigationChangedEvent_Event_1(bool CanExitMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.OnNavigationChangedEvent_Event_1");
		
		UCustomizationMenu_C_OnNavigationChangedEvent_Event_1_Params params {};
		params.CanExitMenu = CanExitMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.OnItemPreviewed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        CustoItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationMenu_C::OnItemPreviewed(const struct FUICustomizationItem& CustoItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.OnItemPreviewed");
		
		UCustomizationMenu_C_OnItemPreviewed_Params params {};
		params.CustoItem = CustoItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.OnStoppedPreview
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::OnStoppedPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.OnStoppedPreview");
		
		UCustomizationMenu_C_OnStoppedPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.UpdatePaletteDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldShowPalette                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationMenu_C::UpdatePaletteDisplay(bool ShouldShowPalette)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.UpdatePaletteDisplay");
		
		UCustomizationMenu_C_UpdatePaletteDisplay_Params params {};
		params.ShouldShowPalette = ShouldShowPalette;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.HairColorClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBHairColorOption                          newHairColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationMenu_C::HairColorClicked(const struct FRBHairColorOption& newHairColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.HairColorClicked");
		
		UCustomizationMenu_C_HairColorClicked_Params params {};
		params.newHairColor = newHairColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.OnHairColorHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBHairColorOption                          HoveredHairColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationMenu_C::OnHairColorHovered(const struct FRBHairColorOption& HoveredHairColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.OnHairColorHovered");
		
		UCustomizationMenu_C_OnHairColorHovered_Params params {};
		params.HoveredHairColor = HoveredHairColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UCustomizationMenu_C_BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UCustomizationMenu_C_BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.GamepadNav_RotateCharacter
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::GamepadNav_RotateCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.GamepadNav_RotateCharacter");
		
		UCustomizationMenu_C_GamepadNav_RotateCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.GamepadNav_StartRotation
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::GamepadNav_StartRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.GamepadNav_StartRotation");
		
		UCustomizationMenu_C_GamepadNav_StartRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.GamepadNav_StopRotation
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::GamepadNav_StopRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.GamepadNav_StopRotation");
		
		UCustomizationMenu_C_GamepadNav_StopRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.OnCategoryChangeRequested
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::OnCategoryChangeRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.OnCategoryChangeRequested");
		
		UCustomizationMenu_C_OnCategoryChangeRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.GamepadNav_ToggleHairPalette
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::GamepadNav_ToggleHairPalette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.GamepadNav_ToggleHairPalette");
		
		UCustomizationMenu_C_GamepadNav_ToggleHairPalette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_ColorPaletteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationMenu_C::BndEvt__CustomizationMenu_ColorPaletteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_ColorPaletteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UCustomizationMenu_C_BndEvt__CustomizationMenu_ColorPaletteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.Event_InputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsGamepad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationMenu_C::Event_InputSourceChanged(bool bIsGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.Event_InputSourceChanged");
		
		UCustomizationMenu_C_Event_InputSourceChanged_Params params {};
		params.bIsGamepad = bIsGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_8_OnItemEquippedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationMenu_C::BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_8_OnItemEquippedEvent__DelegateSignature(const struct FUICustomizationItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_8_OnItemEquippedEvent__DelegateSignature");
		
		UCustomizationMenu_C_BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_8_OnItemEquippedEvent__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.Tick");
		
		UCustomizationMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.Event_OnMenuTutorialSeen
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::Event_OnMenuTutorialSeen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.Event_OnMenuTutorialSeen");
		
		UCustomizationMenu_C_Event_OnMenuTutorialSeen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.Event_SetupPostRelease
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::Event_SetupPostRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.Event_SetupPostRelease");
		
		UCustomizationMenu_C_Event_SetupPostRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.Event_MenuCancel_Pressed
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::Event_MenuCancel_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.Event_MenuCancel_Pressed");
		
		UCustomizationMenu_C_Event_MenuCancel_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.SetupPostRelease
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::SetupPostRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.SetupPostRelease");
		
		UCustomizationMenu_C_SetupPostRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_1_OnItemsAdded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationMenu_C::BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_1_OnItemsAdded__DelegateSignature(int32_t amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_1_OnItemsAdded__DelegateSignature");
		
		UCustomizationMenu_C_BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_1_OnItemsAdded__DelegateSignature_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.ToggleCellCustomization
	 * 		Flags  -> ()
	 */
	void UCustomizationMenu_C::ToggleCellCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.ToggleCellCustomization");
		
		UCustomizationMenu_C_ToggleCellCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.SetGamepadRotateX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FactorX                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationMenu_C::SetGamepadRotateX(float FactorX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.SetGamepadRotateX");
		
		UCustomizationMenu_C_SetGamepadRotateX_Params params {};
		params.FactorX = FactorX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.SetGamepadRotateY
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FactorY                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationMenu_C::SetGamepadRotateY(float FactorY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.SetGamepadRotateY");
		
		UCustomizationMenu_C_SetGamepadRotateY_Params params {};
		params.FactorY = FactorY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationMenu.CustomizationMenu_C.ExecuteUbergraph_CustomizationMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationMenu_C::ExecuteUbergraph_CustomizationMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationMenu.CustomizationMenu_C.ExecuteUbergraph_CustomizationMenu");
		
		UCustomizationMenu_C_ExecuteUbergraph_CustomizationMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomizationMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomizationMenu.CustomizationMenu_C");
		return ptr;
	}

}


