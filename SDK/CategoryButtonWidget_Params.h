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
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.SetHovered
	 */
	struct UCategoryButtonWidget_C_SetHovered_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.SetIsNew
	 */
	struct UCategoryButtonWidget_C_SetIsNew_Params
	{
	public:
		bool                                                       InIsNew;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InHasNewItemsInSubCategory;                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.SetIsEquipped
	 */
	struct UCategoryButtonWidget_C_SetIsEquipped_Params
	{
	public:
		bool                                                       inIsEquipped;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.Set Upgrade Item State
	 */
	struct UCategoryButtonWidget_C_Set_Upgrade_Item_State_Params
	{
	public:
		EMenuUpgradeItemState                                      upgradeItemState;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.SetBaseColor
	 */
	struct UCategoryButtonWidget_C_SetBaseColor_Params
	{
	public:
		struct FSlateColor                                         Color;                                                   // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.SetCanShowIcon
	 */
	struct UCategoryButtonWidget_C_SetCanShowIcon_Params
	{
	public:
		bool                                                       CanShowIcon;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.Set Icon
	 */
	struct UCategoryButtonWidget_C_Set_Icon_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       matchSize;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.SetState
	 */
	struct UCategoryButtonWidget_C_SetState_Params
	{
	public:
		ECategoryButtonState                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.SetSelected
	 */
	struct UCategoryButtonWidget_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCategoryButtonWidget_C_BndEvt__Button_596_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCategoryButtonWidget_C_BndEvt__Button_596_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCategoryButtonWidget_C_BndEvt__Button_596_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.PreConstruct
	 */
	struct UCategoryButtonWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UCategoryButtonWidget_C_BndEvt__Button_596_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UCategoryButtonWidget_C_BndEvt__Button_596_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.ExecuteUbergraph_CategoryButtonWidget
	 */
	struct UCategoryButtonWidget_C_ExecuteUbergraph_CategoryButtonWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnReleased__DelegateSignature
	 */
	struct UCategoryButtonWidget_C_Event_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnPressed__DelegateSignature
	 */
	struct UCategoryButtonWidget_C_Event_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnUnhovered__DelegateSignature
	 */
	struct UCategoryButtonWidget_C_Event_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnHovered__DelegateSignature
	 */
	struct UCategoryButtonWidget_C_Event_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnClicked__DelegateSignature
	 */
	struct UCategoryButtonWidget_C_Event_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
