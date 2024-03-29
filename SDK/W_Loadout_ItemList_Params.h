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
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.RefreshEquippedArmourMaterial
	 */
	struct UW_Loadout_ItemList_C_RefreshEquippedArmourMaterial_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.RefreshEquippedAmmo
	 */
	struct UW_Loadout_ItemList_C_RefreshEquippedAmmo_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.CreateArmourMaterialLoadoutWidgetItem
	 */
	struct UW_Loadout_ItemList_C_CreateArmourMaterialLoadoutWidgetItem_Params
	{
	public:
		class UArmourMaterial*                                     ArmourMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScrollBoxSlot*                                      AsScroll_Box_Slot;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_LoadoutSlot_C*                                    LoadoutSlotWidget;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.PopulateArmourMaterials
	 */
	struct UW_Loadout_ItemList_C_PopulateArmourMaterials_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.CreateAmmoLoadoutWidgetItem
	 */
	struct UW_Loadout_ItemList_C_CreateAmmoLoadoutWidgetItem_Params
	{
	public:
		class FName                                                AmmoType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Weapon;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScrollBoxSlot*                                      AsScroll_Box_Slot;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_LoadoutSlot_C*                                    LoadoutSlotWidget;                                       // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.PopulateAmmo
	 */
	struct UW_Loadout_ItemList_C_PopulateAmmo_Params
	{
	public:
		TArray<class FName>                                        AmmoTypes;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UClass*                                              Weapon;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToPage
	 */
	struct UW_Loadout_ItemList_C_ScrollToPage_Params
	{
	public:
		int32_t                                                    Page;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToTargetIndex
	 */
	struct UW_Loadout_ItemList_C_ScrollToTargetIndex_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToPreviousItem
	 */
	struct UW_Loadout_ItemList_C_ScrollToPreviousItem_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToNextItem
	 */
	struct UW_Loadout_ItemList_C_ScrollToNextItem_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToPreviousPage
	 */
	struct UW_Loadout_ItemList_C_ScrollToPreviousPage_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToNextPage
	 */
	struct UW_Loadout_ItemList_C_ScrollToNextPage_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.UpdateScrollPage
	 */
	struct UW_Loadout_ItemList_C_UpdateScrollPage_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.SetupScrollPagination
	 */
	struct UW_Loadout_ItemList_C_SetupScrollPagination_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToEquipped
	 */
	struct UW_Loadout_ItemList_C_ScrollToEquipped_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.RefreshEquippedAttachments
	 */
	struct UW_Loadout_ItemList_C_RefreshEquippedAttachments_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.RefreshEquippedItems
	 */
	struct UW_Loadout_ItemList_C_RefreshEquippedItems_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.SetListItemPadding
	 */
	struct UW_Loadout_ItemList_C_SetListItemPadding_Params
	{
	public:
		bool                                                       IsFirstItem;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C2DA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UScrollBoxSlot*                                      ScrollBoxSlotItem;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.PopulateAttachments
	 */
	struct UW_Loadout_ItemList_C_PopulateAttachments_Params
	{
	public:
		TArray<class UClass*>                                      Attachments;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.RefreshEquipped
	 */
	struct UW_Loadout_ItemList_C_RefreshEquipped_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       RefreshAttachments;                                      // 0x0178(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.SortItems
	 */
	struct UW_Loadout_ItemList_C_SortItems_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.CreateLoadoutWidgetItem
	 */
	struct UW_Loadout_ItemList_C_CreateLoadoutWidgetItem_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScrollBoxSlot*                                      AsScroll_Box_Slot;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_LoadoutSlot_C*                                    LoadoutSlotWidget;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.GetItemArrayBySlot
	 */
	struct UW_Loadout_ItemList_C_GetItemArrayBySlot_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.PopulateItems
	 */
	struct UW_Loadout_ItemList_C_PopulateItems_Params
	{
	public:
		TArray<struct FLoadoutCategory>                            GearCategoryClasses;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.PopulateSubnav
	 */
	struct UW_Loadout_ItemList_C_PopulateSubnav_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.InitializeLoadoutList
	 */
	struct UW_Loadout_ItemList_C_InitializeLoadoutList_Params
	{
	public:
		EItemCategory                                              LoadoutSlot;                                             // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J7FC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLoadoutCategory>                            GearCategoryClasses;                                     // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.SubnavButtonClicked
	 */
	struct UW_Loadout_ItemList_C_SubnavButtonClicked_Params
	{
	public:
		class UW_Button_C*                                         TriggeringButton;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.InitializeAttachmentList
	 */
	struct UW_Loadout_ItemList_C_InitializeAttachmentList_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EWeaponAttachmentType                                      AttachmentType;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.HideList
	 */
	struct UW_Loadout_ItemList_C_HideList_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.LoadoutItemDoubleClicked
	 */
	struct UW_Loadout_ItemList_C_LoadoutItemDoubleClicked_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TrigeringItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OpenList
	 */
	struct UW_Loadout_ItemList_C_OpenList_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.AttachmentItemClicked
	 */
	struct UW_Loadout_ItemList_C_AttachmentItemClicked_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringAttachment;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.AttachmentItemHovered
	 */
	struct UW_Loadout_ItemList_C_AttachmentItemHovered_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringAttachment;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.LoadoutItemClicked
	 */
	struct UW_Loadout_ItemList_C_LoadoutItemClicked_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TrigeringItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.Tick
	 */
	struct UW_Loadout_ItemList_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.UpdateActiveLoadout
	 */
	struct UW_Loadout_ItemList_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.UpdateCurrentItemMap
	 */
	struct UW_Loadout_ItemList_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.UpdateCurrentSlot
	 */
	struct UW_Loadout_ItemList_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollOpenedToEquipped
	 */
	struct UW_Loadout_ItemList_C_ScrollOpenedToEquipped_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.Hide
	 */
	struct UW_Loadout_ItemList_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.Reveal
	 */
	struct UW_Loadout_ItemList_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.InitializeDeployableList
	 */
	struct UW_Loadout_ItemList_C_InitializeDeployableList_Params
	{
	public:
		EItemCategory                                              LoadoutSlot;                                             // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RKED[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLoadoutCategory>                            GearCategoryClasses;                                     // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UClass*>                                      ExcludedItems;                                           // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.Construct
	 */
	struct UW_Loadout_ItemList_C_Construct_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.InitializeAmmoList
	 */
	struct UW_Loadout_ItemList_C_InitializeAmmoList_Params
	{
	public:
		class FName                                                ExcludedAmmoType;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Weapon;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.PreConstruct
	 */
	struct UW_Loadout_ItemList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.AmmoItemClicked
	 */
	struct UW_Loadout_ItemList_C_AmmoItemClicked_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TrigeringItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.AmmoItemHovered
	 */
	struct UW_Loadout_ItemList_C_AmmoItemHovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TrigeringItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.AmmoItemDoubleClicked
	 */
	struct UW_Loadout_ItemList_C_AmmoItemDoubleClicked_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TrigeringItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.InitializeArmourMaterialList
	 */
	struct UW_Loadout_ItemList_C_InitializeArmourMaterialList_Params
	{	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.SetLoadoutWidget
	 */
	struct UW_Loadout_ItemList_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.ArmourMaterialClicked
	 */
	struct UW_Loadout_ItemList_C_ArmourMaterialClicked_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TrigeringItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.ArmourMaterialHovered
	 */
	struct UW_Loadout_ItemList_C_ArmourMaterialHovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TrigeringItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.ArmourMaterialDoubleClicked
	 */
	struct UW_Loadout_ItemList_C_ArmourMaterialDoubleClicked_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TrigeringItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.AttachmentItemUnhovered
	 */
	struct UW_Loadout_ItemList_C_AttachmentItemUnhovered_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringAttachment;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.LoadoutItemHovered
	 */
	struct UW_Loadout_ItemList_C_LoadoutItemHovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.LoadoutItemUnhovered
	 */
	struct UW_Loadout_ItemList_C_LoadoutItemUnhovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.AmmoItemUnhovered
	 */
	struct UW_Loadout_ItemList_C_AmmoItemUnhovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.ArmourMaterialUnhovered
	 */
	struct UW_Loadout_ItemList_C_ArmourMaterialUnhovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.ExecuteUbergraph_W_Loadout_ItemList
	 */
	struct UW_Loadout_ItemList_C_ExecuteUbergraph_W_Loadout_ItemList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VJEQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnLoadoutItemUnhovered__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_OnLoadoutItemUnhovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnLoadoutItemHovered__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_OnLoadoutItemHovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnAttachmentUnhovered__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_OnAttachmentUnhovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringAttachment;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnArmourMaterialHovered__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_OnArmourMaterialHovered__DelegateSignature_Params
	{
	public:
		class UArmourMaterial*                                     ArmourMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnArmourMaterialDoubleClicked__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_OnArmourMaterialDoubleClicked__DelegateSignature_Params
	{
	public:
		class UArmourMaterial*                                     ArmourMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnArmourMaterialClicked__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_OnArmourMaterialClicked__DelegateSignature_Params
	{
	public:
		class UArmourMaterial*                                     ArmourMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnAmmoItemDoubleClicked__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_OnAmmoItemDoubleClicked__DelegateSignature_Params
	{
	public:
		class FName                                                AmmoType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnAmmoItemHovered__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_OnAmmoItemHovered__DelegateSignature_Params
	{
	public:
		class FName                                                AmmoType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnAmmoItemClicked__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_OnAmmoItemClicked__DelegateSignature_Params
	{
	public:
		class FName                                                AmmoType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Weapon;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnAttachmentItemHovered__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_OnAttachmentItemHovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringAttachment;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnAttachmentItemClicked__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_OnAttachmentItemClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              AttachingWeapon;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AttachmentData;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnLoadoutItemDoubleClicked__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_OnLoadoutItemDoubleClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnLoadoutItemClicked__DelegateSignature
	 */
	struct UW_Loadout_ItemList_C_OnLoadoutItemClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
