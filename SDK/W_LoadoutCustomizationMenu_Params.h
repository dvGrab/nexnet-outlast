#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_Quatermaster_Box_IsEnabled
	 */
	struct UW_LoadoutCustomizationMenu_C_Get_Quatermaster_Box_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FindIconFromItemClass
	 */
	struct UW_LoadoutCustomizationMenu_C_FindIconFromItemClass_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Return_Value;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.StopItemInfoCardAnimation
	 */
	struct UW_LoadoutCustomizationMenu_C_StopItemInfoCardAnimation_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FadeOutItemInfoCard
	 */
	struct UW_LoadoutCustomizationMenu_C_FadeOutItemInfoCard_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FadeInItemInfoCard
	 */
	struct UW_LoadoutCustomizationMenu_C_FadeInItemInfoCard_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_CurrentMenuDirectory_Text
	 */
	struct UW_LoadoutCustomizationMenu_C_Get_CurrentMenuDirectory_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.CanRenamePreset
	 */
	struct UW_LoadoutCustomizationMenu_C_CanRenamePreset_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Escape
	 */
	struct UW_LoadoutCustomizationMenu_C_Escape_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnselectLoadoutPreset
	 */
	struct UW_LoadoutCustomizationMenu_C_UnselectLoadoutPreset_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SelectLoadoutPreset
	 */
	struct UW_LoadoutCustomizationMenu_C_SelectLoadoutPreset_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnhoverLoadoutPreset
	 */
	struct UW_LoadoutCustomizationMenu_C_UnhoverLoadoutPreset_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.HoverLoadoutPreset
	 */
	struct UW_LoadoutCustomizationMenu_C_HoverLoadoutPreset_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutItemPresetButtonClicked (Internal)
	 */
	struct UW_LoadoutCustomizationMenu_C_OnLoadoutItemPresetButtonClicked_Internal_Params
	{
	public:
		class UW_LoadoutItem_Preset_C*                             Loadout_Item_Preset;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnKeyUp
	 */
	struct UW_LoadoutCustomizationMenu_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnKeyDown
	 */
	struct UW_LoadoutCustomizationMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.GetCurrentlyFocusedWidget
	 */
	struct UW_LoadoutCustomizationMenu_C_GetCurrentlyFocusedWidget_Params
	{
	public:
		class UWidget*                                             Return_Value;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_Quatermaster_Box_Visibility
	 */
	struct UW_LoadoutCustomizationMenu_C_Get_Quatermaster_Box_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.AnyLoadoutCategoryWidgetHovered
	 */
	struct UW_LoadoutCustomizationMenu_C_AnyLoadoutCategoryWidgetHovered_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6X57[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.CanUnselect
	 */
	struct UW_LoadoutCustomizationMenu_C_CanUnselect_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ApplyPresetToPreviewCharacterWeapon
	 */
	struct UW_LoadoutCustomizationMenu_C_ApplyPresetToPreviewCharacterWeapon_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_LoadoutItem_Preset_C*                             Loadout_Item_Preset;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDeselectAll;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XBHF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UpdateFireModeOptions
	 */
	struct UW_LoadoutCustomizationMenu_C_UpdateFireModeOptions_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.RenamePreset
	 */
	struct UW_LoadoutCustomizationMenu_C_RenamePreset_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnhoverAll
	 */
	struct UW_LoadoutCustomizationMenu_C_UnhoverAll_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_LoadoutItemInfo_Container_Visibility
	 */
	struct UW_LoadoutCustomizationMenu_C_Get_LoadoutItemInfo_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnhoverLoadoutCategory
	 */
	struct UW_LoadoutCustomizationMenu_C_UnhoverLoadoutCategory_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.HoverLoadoutCategory
	 */
	struct UW_LoadoutCustomizationMenu_C_HoverLoadoutCategory_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnselectLoadoutCategory
	 */
	struct UW_LoadoutCustomizationMenu_C_UnselectLoadoutCategory_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SelectLoadoutCategory
	 */
	struct UW_LoadoutCustomizationMenu_C_SelectLoadoutCategory_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.PreviousColumn
	 */
	struct UW_LoadoutCustomizationMenu_C_PreviousColumn_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.NextColumn
	 */
	struct UW_LoadoutCustomizationMenu_C_NextColumn_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.PreviousRow
	 */
	struct UW_LoadoutCustomizationMenu_C_PreviousRow_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.NextRow
	 */
	struct UW_LoadoutCustomizationMenu_C_NextRow_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UpdateItemInfoCard
	 */
	struct UW_LoadoutCustomizationMenu_C_UpdateItemInfoCard_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FocusOnWidget
	 */
	struct UW_LoadoutCustomizationMenu_C_FocusOnWidget_Params
	{
	public:
		class UWidget*                                             WidgetToFocus;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollIntoView
	 */
	struct UW_LoadoutCustomizationMenu_C_ScrollIntoView_Params
	{
	public:
		class UWidget*                                             WidgetToFind;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollIntoTop
	 */
	struct UW_LoadoutCustomizationMenu_C_ScrollIntoTop_Params
	{
	public:
		class UWidget*                                             WidgetToFind;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollIntoCenter
	 */
	struct UW_LoadoutCustomizationMenu_C_ScrollIntoCenter_Params
	{
	public:
		class UWidget*                                             WidgetToFind;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollToBottom
	 */
	struct UW_LoadoutCustomizationMenu_C_ScrollToBottom_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollToTop
	 */
	struct UW_LoadoutCustomizationMenu_C_ScrollToTop_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutItemButtonClicked (Internal)
	 */
	struct UW_LoadoutCustomizationMenu_C_OnLoadoutItemButtonClicked_Internal_Params
	{
	public:
		EItemClass                                                 ItemClass;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6W7I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemObjectClass;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsTactical;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RQL6[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TacticalSlot;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsMultipleTacticalSlots;                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YJ2Y[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MaxTacticalSlots;                                        // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Starting_Tactical_Slot;                                  // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9EV8[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_LoadoutItem_C*                                    LastSelectedLoadoutItem;                                 // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonHovered (Internal)
	 */
	struct UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonHovered_Internal_Params
	{
	public:
		class UW_LoadoutCategory_C*                                LoadoutCategory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonClicked (Internal)
	 */
	struct UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonClicked_Internal_Params
	{
	public:
		class UW_LoadoutCategory_C*                                LoadoutCategory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonClicked
	 */
	struct UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonClicked_Params
	{
	public:
		class UW_LoadoutCategory_C*                                LoadoutCategory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonHovered
	 */
	struct UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonHovered_Params
	{
	public:
		class UW_LoadoutCategory_C*                                LoadoutCategory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.InitializeWidget
	 */
	struct UW_LoadoutCustomizationMenu_C_InitializeWidget_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutLoaded
	 */
	struct UW_LoadoutCustomizationMenu_C_OnLoadoutLoaded_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature
	 */
	struct UW_LoadoutCustomizationMenu_C_BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature
	 */
	struct UW_LoadoutCustomizationMenu_C_BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	 */
	struct UW_LoadoutCustomizationMenu_C_BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ResetAttachments
	 */
	struct UW_LoadoutCustomizationMenu_C_ResetAttachments_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutItemButtonClicked
	 */
	struct UW_LoadoutCustomizationMenu_C_OnLoadoutItemButtonClicked_Params
	{
	public:
		EItemClass                                                 ItemClass;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6ZCB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemObjectClass;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsTactical;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7QIN[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TacticalSlot;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsMultipleTacticalSlots;                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YVPU[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MaxTacticalSlots;                                        // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Starting_Tactical_Slot;                                  // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4H5U[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_LoadoutItem_C*                                    Loadout_Item_Widget;                                     // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnPresetsLoaded
	 */
	struct UW_LoadoutCustomizationMenu_C_OnPresetsLoaded_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Anim_OnSlideInFinished
	 */
	struct UW_LoadoutCustomizationMenu_C_Anim_OnSlideInFinished_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Anim_OnSlideOutFinished
	 */
	struct UW_LoadoutCustomizationMenu_C_Anim_OnSlideOutFinished_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__DefaultFireMode_ComboBox_K2Node_ComponentBoundEvent_0_OnNewOptionSelected__DelegateSignature
	 */
	struct UW_LoadoutCustomizationMenu_C_BndEvt__DefaultFireMode_ComboBox_K2Node_ComponentBoundEvent_0_OnNewOptionSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewOption;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnDefaultWeaponFireModesLoaded
	 */
	struct UW_LoadoutCustomizationMenu_C_OnDefaultWeaponFireModesLoaded_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Tick
	 */
	struct UW_LoadoutCustomizationMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonUnhovered
	 */
	struct UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonUnhovered_Params
	{
	public:
		class UW_LoadoutCategory_C*                                LoadoutCategory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Initialize Team mate buttons
	 */
	struct UW_LoadoutCustomizationMenu_C_Initialize_Team_mate_buttons_Params
	{	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapSelectedEquippingCharacter
	 */
	struct UW_LoadoutCustomizationMenu_C_SwapSelectedEquippingCharacter_Params
	{
	public:
		EEquippingSwat                                             NewEquippingSwat;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapPlayer
	 */
	struct UW_LoadoutCustomizationMenu_C_SwapPlayer_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapAlpha
	 */
	struct UW_LoadoutCustomizationMenu_C_SwapAlpha_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapBeta
	 */
	struct UW_LoadoutCustomizationMenu_C_SwapBeta_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapCharlie
	 */
	struct UW_LoadoutCustomizationMenu_C_SwapCharlie_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapDelta
	 */
	struct UW_LoadoutCustomizationMenu_C_SwapDelta_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ExecuteUbergraph_W_LoadoutCustomizationMenu
	 */
	struct UW_LoadoutCustomizationMenu_C_ExecuteUbergraph_W_LoadoutCustomizationMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A6G6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
