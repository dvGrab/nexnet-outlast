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
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_ItemBought
	 */
	struct UCustomizationContentWidget_V2_C_Event_ItemBought_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.SetMenuCharacterCusto
	 */
	struct UCustomizationContentWidget_V2_C_SetMenuCharacterCusto_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          Custo;                                                   // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.NotifyMenuCharacterCategoryClicked
	 */
	struct UCustomizationContentWidget_V2_C_NotifyMenuCharacterCategoryClicked_Params
	{
	public:
		ECustomizationMenuCategory                                 Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RefreshBoughtItem
	 */
	struct UCustomizationContentWidget_V2_C_RefreshBoughtItem_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnFocusReceived
	 */
	struct UCustomizationContentWidget_V2_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.TransmitFocusToCustoOption
	 */
	struct UCustomizationContentWidget_V2_C_TransmitFocusToCustoOption_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategories
	 */
	struct UCustomizationContentWidget_V2_C_CycleCategories_Params
	{
	public:
		bool                                                       CycleRight;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K4V3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.GetCellCustomizationActor
	 */
	struct UCustomizationContentWidget_V2_C_GetCellCustomizationActor_Params
	{
	public:
		class ACellCustomizationCameraActor_C*                     NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.PreviewCellItem
	 */
	struct UCustomizationContentWidget_V2_C_PreviewCellItem_Params
	{
	public:
		ECustomizationMenuCategory                                 Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BAMQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URBPlayerCellItemDefinition*                         ItemDefinition;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.UpdateCategories
	 */
	struct UCustomizationContentWidget_V2_C_UpdateCategories_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleFocus
	 */
	struct UCustomizationContentWidget_V2_C_CycleFocus_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_ItemEquipped
	 */
	struct UCustomizationContentWidget_V2_C_Event_ItemEquipped_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.PlayPreviewVoiceline
	 */
	struct UCustomizationContentWidget_V2_C_PlayPreviewVoiceline_Params
	{
	public:
		class URBVoiceCustomizationOption*                         VoiceOption;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.AddCategoriesItems
	 */
	struct UCustomizationContentWidget_V2_C_AddCategoriesItems_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.AddCustomizationItems
	 */
	struct UCustomizationContentWidget_V2_C_AddCustomizationItems_Params
	{
	public:
		TArray<struct FUICustomizationItem>                        Items;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ChangeCategory
	 */
	struct UCustomizationContentWidget_V2_C_ChangeCategory_Params
	{
	public:
		ECustomizationMenuCategory                                 custoCategory;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_608J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ResetPreview
	 */
	struct UCustomizationContentWidget_V2_C_ResetPreview_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.GetPageSpecificButtons
	 */
	struct UCustomizationContentWidget_V2_C_GetPageSpecificButtons_Params
	{
	public:
		TArray<class UUserWidget*>                                 outButtons;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnCategoryClicked
	 */
	struct UCustomizationContentWidget_V2_C_OnCategoryClicked_Params
	{
	public:
		ECustomizationMenuCategory                                 custoCategory;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemUnhovered
	 */
	struct UCustomizationContentWidget_V2_C_OnItemUnhovered_Params
	{
	public:
		struct FUICustomizationItem                                CustoItem;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemHovered
	 */
	struct UCustomizationContentWidget_V2_C_OnItemHovered_Params
	{
	public:
		struct FUICustomizationItem                                CustoItem;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Finished_21144A754E101553B7E45DA67E7780FE
	 */
	struct UCustomizationContentWidget_V2_C_Finished_21144A754E101553B7E45DA67E7780FE_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateViewer
	 */
	struct UCustomizationContentWidget_V2_C_RotateViewer_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Initialize
	 */
	struct UCustomizationContentWidget_V2_C_Initialize_Params
	{
	public:
		EMetaNPCType                                               ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isTutorial;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3HC5[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AMenuCharacter_C*                                    _MenuCharacter;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              viewerReturnTarget;                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ACellCustomizationCameraActor_C*                     CellCustomizationActor;                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateButtonPressed
	 */
	struct UCustomizationContentWidget_V2_C_RotateButtonPressed_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateButtonReleased
	 */
	struct UCustomizationContentWidget_V2_C_RotateButtonReleased_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnTabUnselected
	 */
	struct UCustomizationContentWidget_V2_C_Event_OnTabUnselected_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_LoadingStarted
	 */
	struct UCustomizationContentWidget_V2_C_Event_LoadingStarted_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnTabSelected
	 */
	struct UCustomizationContentWidget_V2_C_Event_OnTabSelected_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_AddCustomizationItems
	 */
	struct UCustomizationContentWidget_V2_C_Event_AddCustomizationItems_Params
	{
	public:
		TArray<struct FUICustomizationItem>                        Items;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event OnItemClicked
	 */
	struct UCustomizationContentWidget_V2_C_Event_OnItemClicked_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Destruct
	 */
	struct UCustomizationContentWidget_V2_C_Destruct_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Construct
	 */
	struct UCustomizationContentWidget_V2_C_Construct_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.EventOnItemPressed_Event_1
	 */
	struct UCustomizationContentWidget_V2_C_EventOnItemPressed_Event_1_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.EventOnItemReleased_Event_1
	 */
	struct UCustomizationContentWidget_V2_C_EventOnItemReleased_Event_1_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.StartTransition
	 */
	struct UCustomizationContentWidget_V2_C_StartTransition_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_PlayerCustomizationUpdated
	 */
	struct UCustomizationContentWidget_V2_C_Event_PlayerCustomizationUpdated_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnParentFocused
	 */
	struct UCustomizationContentWidget_V2_C_Event_OnParentFocused_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnChangeFocusRequested
	 */
	struct UCustomizationContentWidget_V2_C_OnChangeFocusRequested_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_RefreshItemInfos
	 */
	struct UCustomizationContentWidget_V2_C_Event_RefreshItemInfos_Params
	{
	public:
		TArray<struct FUICustomizationItem>                        Items;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_CycleFocus
	 */
	struct UCustomizationContentWidget_V2_C_Event_CycleFocus_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategoriesRight
	 */
	struct UCustomizationContentWidget_V2_C_CycleCategoriesRight_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategoriesLeft
	 */
	struct UCustomizationContentWidget_V2_C_CycleCategoriesLeft_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnParentPopped
	 */
	struct UCustomizationContentWidget_V2_C_Event_OnParentPopped_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnInputSourceChanged
	 */
	struct UCustomizationContentWidget_V2_C_OnInputSourceChanged_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ExecuteUbergraph_CustomizationContentWidget_V2
	 */
	struct UCustomizationContentWidget_V2_C_ExecuteUbergraph_CustomizationContentWidget_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BRY6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemHoveredEvent__DelegateSignature
	 */
	struct UCustomizationContentWidget_V2_C_OnItemHoveredEvent__DelegateSignature_Params
	{
	public:
		struct FUICustomizationItem                                CustoItem;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemsAdded__DelegateSignature
	 */
	struct UCustomizationContentWidget_V2_C_OnItemsAdded__DelegateSignature_Params
	{
	public:
		int32_t                                                    amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemEquippedEvent__DelegateSignature
	 */
	struct UCustomizationContentWidget_V2_C_OnItemEquippedEvent__DelegateSignature_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnCategoryChangeRequested__DelegateSignature
	 */
	struct UCustomizationContentWidget_V2_C_OnCategoryChangeRequested__DelegateSignature_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.UpdatePaletteDisplay__DelegateSignature
	 */
	struct UCustomizationContentWidget_V2_C_UpdatePaletteDisplay__DelegateSignature_Params
	{
	public:
		bool                                                       ShouldShowPalette;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnStoppedPreview__DelegateSignature
	 */
	struct UCustomizationContentWidget_V2_C_OnStoppedPreview__DelegateSignature_Params
	{	};

	/**
	 * Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemPreviewed__DelegateSignature
	 */
	struct UCustomizationContentWidget_V2_C_OnItemPreviewed__DelegateSignature_Params
	{
	public:
		struct FUICustomizationItem                                Custo_Item;                                              // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
