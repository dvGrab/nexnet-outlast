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
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.Can Interact Pre Mission Planning
	 */
	struct UW_LoadoutCategory_C_Can_Interact_Pre_Mission_Planning_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EMI3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.GetCurrentMenuDirectory
	 */
	struct UW_LoadoutCategory_C_GetCurrentMenuDirectory_Params
	{
	public:
		class FText                                                Return_Value;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.GetAllUncollapsedLoadoutWidgets
	 */
	struct UW_LoadoutCategory_C_GetAllUncollapsedLoadoutWidgets_Params
	{
	public:
		TArray<class UBaseWidget*>                                 Return_Value;                                            // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.CreateLoadoutItemWidget
	 */
	struct UW_LoadoutCategory_C_CreateLoadoutItemWidget_Params
	{
	public:
		class FText                                                LoadoutItemName;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EItemClass                                                 ItemClass;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L2IU[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemObjectClass;                                         // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsTactical;                                             // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IOLD[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TacticalSlot;                                            // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsMultipleTacticalSlots;                                // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_67OH[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MaxTacticalSlots;                                        // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StartingTacticalSlot;                                    // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.ExitPresetsMenu
	 */
	struct UW_LoadoutCategory_C_ExitPresetsMenu_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.EnterPresetsMenu
	 */
	struct UW_LoadoutCategory_C_EnterPresetsMenu_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.Escape
	 */
	struct UW_LoadoutCategory_C_Escape_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectLoadoutPreset
	 */
	struct UW_LoadoutCategory_C_UnselectLoadoutPreset_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.SelectLoadoutPreset
	 */
	struct UW_LoadoutCategory_C_SelectLoadoutPreset_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverLoadoutPreset
	 */
	struct UW_LoadoutCategory_C_UnhoverLoadoutPreset_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.HoverLoadoutPreset
	 */
	struct UW_LoadoutCategory_C_HoverLoadoutPreset_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.OnKeyUp
	 */
	struct UW_LoadoutCategory_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.CanExit
	 */
	struct UW_LoadoutCategory_C_CanExit_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.OnMouseMove
	 */
	struct UW_LoadoutCategory_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.Get_SelectedItemInfo_Container_Visibility
	 */
	struct UW_LoadoutCategory_C_Get_SelectedItemInfo_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectLoadoutClass
	 */
	struct UW_LoadoutCategory_C_UnselectLoadoutClass_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.SelectLoadoutClass
	 */
	struct UW_LoadoutCategory_C_SelectLoadoutClass_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverLoadoutClass
	 */
	struct UW_LoadoutCategory_C_UnhoverLoadoutClass_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.HoverLoadoutClass
	 */
	struct UW_LoadoutCategory_C_HoverLoadoutClass_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectUIElement
	 */
	struct UW_LoadoutCategory_C_UnselectUIElement_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.SelectUIElement
	 */
	struct UW_LoadoutCategory_C_SelectUIElement_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverUIElement
	 */
	struct UW_LoadoutCategory_C_UnhoverUIElement_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.HoverUIElement
	 */
	struct UW_LoadoutCategory_C_HoverUIElement_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.PreviousColumn
	 */
	struct UW_LoadoutCategory_C_PreviousColumn_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.NextColumn
	 */
	struct UW_LoadoutCategory_C_NextColumn_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.PreviousRow
	 */
	struct UW_LoadoutCategory_C_PreviousRow_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.NextRow
	 */
	struct UW_LoadoutCategory_C_NextRow_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.OnKeyDown
	 */
	struct UW_LoadoutCategory_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemClicked
	 */
	struct UW_LoadoutCategory_C_OnLoadoutItemClicked_Params
	{
	public:
		class UW_LoadoutItem_C*                                    LoadoutItemWidget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutClassClicked
	 */
	struct UW_LoadoutCategory_C_OnLoadoutClassClicked_Params
	{
	public:
		class UW_LoadoutClass_C*                                   LoadoutClassWidget;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateUnhover
	 */
	struct UW_LoadoutCategory_C_SimulateUnhover_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateHover
	 */
	struct UW_LoadoutCategory_C_SimulateHover_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateClick
	 */
	struct UW_LoadoutCategory_C_SimulateClick_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.UpdateSelectedItemName
	 */
	struct UW_LoadoutCategory_C_UpdateSelectedItemName_Params
	{
	public:
		class FText                                                InItemName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.RemoveAllLoadoutClassWidgets
	 */
	struct UW_LoadoutCategory_C_RemoveAllLoadoutClassWidgets_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.DeselectAllChildrenExcept
	 */
	struct UW_LoadoutCategory_C_DeselectAllChildrenExcept_Params
	{
	public:
		class UW_LoadoutItem_C*                                    InLoadoutItemWidget;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.CollapseAllChildrenExcept
	 */
	struct UW_LoadoutCategory_C_CollapseAllChildrenExcept_Params
	{
	public:
		class UW_LoadoutClass_C*                                   InLoadoutClassWidget;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.CreateLoadoutItem
	 */
	struct UW_LoadoutCategory_C_CreateLoadoutItem_Params
	{
	public:
		struct FLoadoutCategory                                    InLoadoutCategory;                                       // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.ExpandChildren
	 */
	struct UW_LoadoutCategory_C_ExpandChildren_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.CollapseChildren
	 */
	struct UW_LoadoutCategory_C_CollapseChildren_Params
	{
	public:
		bool                                                       bResetPreviewAnim;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2YPF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.PreConstruct
	 */
	struct UW_LoadoutCategory_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UW_LoadoutCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UW_LoadoutCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 */
	struct UW_LoadoutCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutLoaded
	 */
	struct UW_LoadoutCategory_C_OnLoadoutLoaded_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 */
	struct UW_LoadoutCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutClassButtonHovered
	 */
	struct UW_LoadoutCategory_C_OnLoadoutClassButtonHovered_Params
	{
	public:
		class UW_LoadoutClass_C*                                   LoadoutClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonHovered
	 */
	struct UW_LoadoutCategory_C_OnLoadoutItemButtonHovered_Params
	{
	public:
		class UW_LoadoutItem_C*                                    LoadoutItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
	 */
	struct UW_LoadoutCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonUnhovered
	 */
	struct UW_LoadoutCategory_C_OnLoadoutItemButtonUnhovered_Params
	{
	public:
		class UW_LoadoutItem_C*                                    LoadoutItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.Tick
	 */
	struct UW_LoadoutCategory_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.ExecuteUbergraph_W_LoadoutCategory
	 */
	struct UW_LoadoutCategory_C_ExecuteUbergraph_W_LoadoutCategory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UW_LoadoutCategory_C_OnButtonUnhovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutCategory_C*                                LoadoutCategory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonHovered__DelegateSignature
	 */
	struct UW_LoadoutCategory_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutCategory_C*                                LoadoutCategory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonClicked__DelegateSignature
	 */
	struct UW_LoadoutCategory_C_OnLoadoutItemButtonClicked__DelegateSignature_Params
	{
	public:
		EItemClass                                                 ItemClass;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OB07[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemObjectClass;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsTactical;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S9DR[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TacticalSlot;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsMultipleTacticalSlots;                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BK5Q[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MaxTacticalSlots;                                        // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Starting_Tactical_Slot;                                  // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EACT[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_LoadoutItem_C*                                    Loadout_Item_Widget;                                     // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonClicked__DelegateSignature
	 */
	struct UW_LoadoutCategory_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutCategory_C*                                LoadoutCategory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
