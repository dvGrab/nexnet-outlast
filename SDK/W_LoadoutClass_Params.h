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
	 * Function W_LoadoutClass.W_LoadoutClass_C.UpdateItemNameText
	 */
	struct UW_LoadoutClass_C_UpdateItemNameText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.GetCurrentMenuDirectory
	 */
	struct UW_LoadoutClass_C_GetCurrentMenuDirectory_Params
	{
	public:
		class FText                                                Return_Value;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.EnterPresetsMenu
	 */
	struct UW_LoadoutClass_C_EnterPresetsMenu_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.ExitPresetsMenu
	 */
	struct UW_LoadoutClass_C_ExitPresetsMenu_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.Escape
	 */
	struct UW_LoadoutClass_C_Escape_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.UnselectUIElement
	 */
	struct UW_LoadoutClass_C_UnselectUIElement_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.SelectUIElement
	 */
	struct UW_LoadoutClass_C_SelectUIElement_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.UnhoverUIElement
	 */
	struct UW_LoadoutClass_C_UnhoverUIElement_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.HoverUIElement
	 */
	struct UW_LoadoutClass_C_HoverUIElement_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.OnKeyUp
	 */
	struct UW_LoadoutClass_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.CanExit
	 */
	struct UW_LoadoutClass_C_CanExit_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.GetAllUncollapsedLoadoutItemWidgets
	 */
	struct UW_LoadoutClass_C_GetAllUncollapsedLoadoutItemWidgets_Params
	{
	public:
		TArray<class UW_LoadoutItem_C*>                            Return_Value;                                            // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.Get_SelectedItemInfo_Container_Visibility
	 */
	struct UW_LoadoutClass_C_Get_SelectedItemInfo_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.GetAllTacticalDeviceClassesExpectGrenades
	 */
	struct UW_LoadoutClass_C_GetAllTacticalDeviceClassesExpectGrenades_Params
	{
	public:
		TArray<class UClass*>                                      Return_Value;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.GetAllGrenadeClasses
	 */
	struct UW_LoadoutClass_C_GetAllGrenadeClasses_Params
	{
	public:
		TArray<class UClass*>                                      Return_Value;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.OnMouseMove
	 */
	struct UW_LoadoutClass_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.UnhoverLoadoutItem
	 */
	struct UW_LoadoutClass_C_UnhoverLoadoutItem_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.HoverLoadoutItem
	 */
	struct UW_LoadoutClass_C_HoverLoadoutItem_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.UnselectLoadoutItem
	 */
	struct UW_LoadoutClass_C_UnselectLoadoutItem_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.SelectLoadoutItem
	 */
	struct UW_LoadoutClass_C_SelectLoadoutItem_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.PreviousColumn
	 */
	struct UW_LoadoutClass_C_PreviousColumn_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.NextColumn
	 */
	struct UW_LoadoutClass_C_NextColumn_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.PreviousRow
	 */
	struct UW_LoadoutClass_C_PreviousRow_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.NextRow
	 */
	struct UW_LoadoutClass_C_NextRow_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.OnKeyDown
	 */
	struct UW_LoadoutClass_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.SimulateClick
	 */
	struct UW_LoadoutClass_C_SimulateClick_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.SimulateUnhover
	 */
	struct UW_LoadoutClass_C_SimulateUnhover_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.SimulateHover
	 */
	struct UW_LoadoutClass_C_SimulateHover_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.SelectActiveLoadout
	 */
	struct UW_LoadoutClass_C_SelectActiveLoadout_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.ShowSelectedItemInfo
	 */
	struct UW_LoadoutClass_C_ShowSelectedItemInfo_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.HideSelectedItemInfo
	 */
	struct UW_LoadoutClass_C_HideSelectedItemInfo_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutItemClicked
	 */
	struct UW_LoadoutClass_C_OnLoadoutItemClicked_Params
	{
	public:
		class UW_LoadoutItem_C*                                    LoadoutItemWidget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.CreateLoadoutItemWidget
	 */
	struct UW_LoadoutClass_C_CreateLoadoutItemWidget_Params
	{
	public:
		class FText                                                LoadoutItemName;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EItemClass                                                 ItemClass;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FNMS[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemObjectClass;                                         // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsTactical;                                             // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CO61[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TacticalSlot;                                            // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsMultipleTacticalSlots;                                // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1T62[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MaxTacticalSlots;                                        // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StartingTacticalSlot;                                    // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.InitializeLoadoutItems
	 */
	struct UW_LoadoutClass_C_InitializeLoadoutItems_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.DeselectAllExcept
	 */
	struct UW_LoadoutClass_C_DeselectAllExcept_Params
	{
	public:
		class UW_LoadoutItem_C*                                    InLoadoutItemWidget;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.RemoveAllChildren
	 */
	struct UW_LoadoutClass_C_RemoveAllChildren_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.ExpandChildren
	 */
	struct UW_LoadoutClass_C_ExpandChildren_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.CollapseChildren
	 */
	struct UW_LoadoutClass_C_CollapseChildren_Params
	{
	public:
		bool                                                       bResetPreviewAnim;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_41QN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.PreConstruct
	 */
	struct UW_LoadoutClass_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.BndEvt__W_StandardButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UW_LoadoutClass_C_BndEvt__W_StandardButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UW_LoadoutClass_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 */
	struct UW_LoadoutClass_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutLoaded
	 */
	struct UW_LoadoutClass_C_OnLoadoutLoaded_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 */
	struct UW_LoadoutClass_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutItemButtonHovered
	 */
	struct UW_LoadoutClass_C_OnLoadoutItemButtonHovered_Params
	{
	public:
		class UW_LoadoutItem_C*                                    LoadoutItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutItemButtonUnhovered
	 */
	struct UW_LoadoutClass_C_OnLoadoutItemButtonUnhovered_Params
	{
	public:
		class UW_LoadoutItem_C*                                    LoadoutItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.ExecuteUbergraph_W_LoadoutClass
	 */
	struct UW_LoadoutClass_C_ExecuteUbergraph_W_LoadoutClass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.OnButtonHovered__DelegateSignature
	 */
	struct UW_LoadoutClass_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutClass_C*                                   LoadoutClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.OnChildButtonClicked__DelegateSignature
	 */
	struct UW_LoadoutClass_C_OnChildButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutItem_C*                                    LoadoutItemWidget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutClass.W_LoadoutClass_C.OnButtonClicked__DelegateSignature
	 */
	struct UW_LoadoutClass_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutClass_C*                                   LoadoutClassWidget;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
