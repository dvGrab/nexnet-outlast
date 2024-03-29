#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CustomizationMenu.CustomizationMenu_C.UpdateHairColorNavigation
	 */
	struct UCustomizationMenu_C_UpdateHairColorNavigation_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.TryStartNextMenuTutorial
	 */
	struct UCustomizationMenu_C_TryStartNextMenuTutorial_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.UpdateFTUESpecificElements
	 */
	struct UCustomizationMenu_C_UpdateFTUESpecificElements_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.UpdateListScrollBehaviour
	 */
	struct UCustomizationMenu_C_UpdateListScrollBehaviour_Params
	{
	public:
		bool                                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.UpdatePageSpecificButtons
	 */
	struct UCustomizationMenu_C_UpdatePageSpecificButtons_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.GamepadNav_TryToggleHairPalette
	 */
	struct UCustomizationMenu_C_GamepadNav_TryToggleHairPalette_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.TransmitFocusToCustoContent
	 */
	struct UCustomizationMenu_C_TransmitFocusToCustoContent_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.OnFocusReceived
	 */
	struct UCustomizationMenu_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.CreateRotateTooltip
	 */
	struct UCustomizationMenu_C_CreateRotateTooltip_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.PreviewCosts
	 */
	struct UCustomizationMenu_C_PreviewCosts_Params
	{
	public:
		struct FUICustomizationItem                                Custo_Item;                                              // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.UpdateCustoDetails
	 */
	struct UCustomizationMenu_C_UpdateCustoDetails_Params
	{
	public:
		struct FUICustomizationItem                                Custo_Item;                                              // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.SetupForCellCustomization
	 */
	struct UCustomizationMenu_C_SetupForCellCustomization_Params
	{
	public:
		bool                                                       bNewIsCellCustomization;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.SetupForTutorial
	 */
	struct UCustomizationMenu_C_SetupForTutorial_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.UpdateNavigation
	 */
	struct UCustomizationMenu_C_UpdateNavigation_Params
	{
	public:
		bool                                                       CanExitMenu;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UCustomizationMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UCustomizationMenu_C_BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UCustomizationMenu_C_BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.Initialize
	 */
	struct UCustomizationMenu_C_Initialize_Params
	{
	public:
		bool                                                       isTutorial;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CUMI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AMenuCharacter_C*                                    MenuCharacter;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ACellCustomizationCameraActor_C*                     CellCustomization;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.Destruct
	 */
	struct UCustomizationMenu_C_Destruct_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.Construct
	 */
	struct UCustomizationMenu_C_Construct_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.OnNavigationChangedEvent_Event_1
	 */
	struct UCustomizationMenu_C_OnNavigationChangedEvent_Event_1_Params
	{
	public:
		bool                                                       CanExitMenu;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.OnItemPreviewed
	 */
	struct UCustomizationMenu_C_OnItemPreviewed_Params
	{
	public:
		struct FUICustomizationItem                                CustoItem;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.OnStoppedPreview
	 */
	struct UCustomizationMenu_C_OnStoppedPreview_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.UpdatePaletteDisplay
	 */
	struct UCustomizationMenu_C_UpdatePaletteDisplay_Params
	{
	public:
		bool                                                       ShouldShowPalette;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.HairColorClicked
	 */
	struct UCustomizationMenu_C_HairColorClicked_Params
	{
	public:
		struct FRBHairColorOption                                  newHairColor;                                            // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.OnHairColorHovered
	 */
	struct UCustomizationMenu_C_OnHairColorHovered_Params
	{
	public:
		struct FRBHairColorOption                                  HoveredHairColor;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCustomizationMenu_C_BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCustomizationMenu_C_BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.GamepadNav_RotateCharacter
	 */
	struct UCustomizationMenu_C_GamepadNav_RotateCharacter_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.GamepadNav_StartRotation
	 */
	struct UCustomizationMenu_C_GamepadNav_StartRotation_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.GamepadNav_StopRotation
	 */
	struct UCustomizationMenu_C_GamepadNav_StopRotation_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.OnCategoryChangeRequested
	 */
	struct UCustomizationMenu_C_OnCategoryChangeRequested_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.GamepadNav_ToggleHairPalette
	 */
	struct UCustomizationMenu_C_GamepadNav_ToggleHairPalette_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_ColorPaletteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UCustomizationMenu_C_BndEvt__CustomizationMenu_ColorPaletteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.Event_InputSourceChanged
	 */
	struct UCustomizationMenu_C_Event_InputSourceChanged_Params
	{
	public:
		bool                                                       bIsGamepad;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_8_OnItemEquippedEvent__DelegateSignature
	 */
	struct UCustomizationMenu_C_BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_8_OnItemEquippedEvent__DelegateSignature_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.Tick
	 */
	struct UCustomizationMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.Event_OnMenuTutorialSeen
	 */
	struct UCustomizationMenu_C_Event_OnMenuTutorialSeen_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.Event_SetupPostRelease
	 */
	struct UCustomizationMenu_C_Event_SetupPostRelease_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.Event_MenuCancel_Pressed
	 */
	struct UCustomizationMenu_C_Event_MenuCancel_Pressed_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.SetupPostRelease
	 */
	struct UCustomizationMenu_C_SetupPostRelease_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_1_OnItemsAdded__DelegateSignature
	 */
	struct UCustomizationMenu_C_BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_1_OnItemsAdded__DelegateSignature_Params
	{
	public:
		int32_t                                                    amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.ToggleCellCustomization
	 */
	struct UCustomizationMenu_C_ToggleCellCustomization_Params
	{	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.SetGamepadRotateX
	 */
	struct UCustomizationMenu_C_SetGamepadRotateX_Params
	{
	public:
		float                                                      FactorX;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.SetGamepadRotateY
	 */
	struct UCustomizationMenu_C_SetGamepadRotateY_Params
	{
	public:
		float                                                      FactorY;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationMenu.CustomizationMenu_C.ExecuteUbergraph_CustomizationMenu
	 */
	struct UCustomizationMenu_C_ExecuteUbergraph_CustomizationMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
