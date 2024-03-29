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
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.SequenceEvent__ENTRYPOINTW_LoadoutSlot_1
	 */
	struct UW_LoadoutSlot_C_SequenceEvent__ENTRYPOINTW_LoadoutSlot_1_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.DisableInteraction
	 */
	struct UW_LoadoutSlot_C_DisableInteraction_Params
	{
	public:
		bool                                                       Disabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.SetCompactLayout
	 */
	struct UW_LoadoutSlot_C_SetCompactLayout_Params
	{
	public:
		bool                                                       CompactLayout;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.SetExclusiveLock
	 */
	struct UW_LoadoutSlot_C_SetExclusiveLock_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.ApplyIcon
	 */
	struct UW_LoadoutSlot_C_ApplyIcon_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.RefreshArmourMaterialInfo
	 */
	struct UW_LoadoutSlot_C_RefreshArmourMaterialInfo_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.GetLoadoutWidget
	 */
	struct UW_LoadoutSlot_C_GetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.GetAmmoCategoryText
	 */
	struct UW_LoadoutSlot_C_GetAmmoCategoryText_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.RefreshAmmoInfo
	 */
	struct UW_LoadoutSlot_C_RefreshAmmoInfo_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.SetCountText
	 */
	struct UW_LoadoutSlot_C_SetCountText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.GetInvetoryCount
	 */
	struct UW_LoadoutSlot_C_GetInvetoryCount_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.SetEquipped
	 */
	struct UW_LoadoutSlot_C_SetEquipped_Params
	{
	public:
		bool                                                       Equipped;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.GetItemIcon
	 */
	struct UW_LoadoutSlot_C_GetItemIcon_Params
	{
	public:
		unsigned char                                              UnknownData_DEE4[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.RefreshItemInfo
	 */
	struct UW_LoadoutSlot_C_RefreshItemInfo_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.SetLayout
	 */
	struct UW_LoadoutSlot_C_SetLayout_Params
	{
	public:
		bool                                                       MinimalLayout;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.GetIsSuppressed
	 */
	struct UW_LoadoutSlot_C_GetIsSuppressed_Params
	{
	public:
		bool                                                       IsSuppressed;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.GetHoverState
	 */
	struct UW_LoadoutSlot_C_GetHoverState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.SetActive
	 */
	struct UW_LoadoutSlot_C_SetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.OnLoaded_2301B5524398E883D7B4A9A8DD59E91D
	 */
	struct UW_LoadoutSlot_C_OnLoaded_2301B5524398E883D7B4A9A8DD59E91D_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.OnLoaded_FCECFCDB446A3843E9F216BC9A4A7723
	 */
	struct UW_LoadoutSlot_C_OnLoaded_FCECFCDB446A3843E9F216BC9A4A7723_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.Finished_D51AD9A24CFA959F985A078C69194B2E
	 */
	struct UW_LoadoutSlot_C_Finished_D51AD9A24CFA959F985A078C69194B2E_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature
	 */
	struct UW_LoadoutSlot_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.InitializeItemData
	 */
	struct UW_LoadoutSlot_C_InitializeItemData_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.InitializeAsListItem
	 */
	struct UW_LoadoutSlot_C_InitializeAsListItem_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.UpdateActiveLoadout
	 */
	struct UW_LoadoutSlot_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.Reveal
	 */
	struct UW_LoadoutSlot_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.Hide
	 */
	struct UW_LoadoutSlot_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.InitializeAsSlot
	 */
	struct UW_LoadoutSlot_C_InitializeAsSlot_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.ReinitializeItemData
	 */
	struct UW_LoadoutSlot_C_ReinitializeItemData_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.ForceClick
	 */
	struct UW_LoadoutSlot_C_ForceClick_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.ForceDoubleClick
	 */
	struct UW_LoadoutSlot_C_ForceDoubleClick_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.InitializeAmmoData
	 */
	struct UW_LoadoutSlot_C_InitializeAmmoData_Params
	{
	public:
		bool                                                       Primary;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AASJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                AmmoType;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_04H2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Weapon;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoCount;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.Collapse
	 */
	struct UW_LoadoutSlot_C_Collapse_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
	 */
	struct UW_LoadoutSlot_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.SetLoadoutWidget
	 */
	struct UW_LoadoutSlot_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.InitializeArmourMaterialData
	 */
	struct UW_LoadoutSlot_C_InitializeArmourMaterialData_Params
	{
	public:
		class UArmourMaterial*                                     ArmourMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.Construct
	 */
	struct UW_LoadoutSlot_C_Construct_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.PreConstruct
	 */
	struct UW_LoadoutSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.UpdateCurrentItemMap
	 */
	struct UW_LoadoutSlot_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.UpdateCurrentSlot
	 */
	struct UW_LoadoutSlot_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.ReinitializeAmmoData
	 */
	struct UW_LoadoutSlot_C_ReinitializeAmmoData_Params
	{
	public:
		bool                                                       Primary;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SYUB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                AmmoType;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TE16[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Weapon;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoCount;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.ReinitializeArmorMaterialData
	 */
	struct UW_LoadoutSlot_C_ReinitializeArmorMaterialData_Params
	{
	public:
		class UArmourMaterial*                                     ArmourMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.OnListItemObjectSet
	 */
	struct UW_LoadoutSlot_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.ApplyAugment
	 */
	struct UW_LoadoutSlot_C_ApplyAugment_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.UpdateAugment
	 */
	struct UW_LoadoutSlot_C_UpdateAugment_Params
	{
	public:
		class FText                                                AugmentText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.BP_OnItemSelectionChanged
	 */
	struct UW_LoadoutSlot_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
	 */
	struct UW_LoadoutSlot_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.UpdateAmmoCount
	 */
	struct UW_LoadoutSlot_C_UpdateAmmoCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.BP_OnItemExpansionChanged
	 */
	struct UW_LoadoutSlot_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.BP_OnEntryReleased
	 */
	struct UW_LoadoutSlot_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UW_LoadoutSlot_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.ExpandReveal
	 */
	struct UW_LoadoutSlot_C_ExpandReveal_Params
	{	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.ExecuteUbergraph_W_LoadoutSlot
	 */
	struct UW_LoadoutSlot_C_ExecuteUbergraph_W_LoadoutSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PN6K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.OnSlotDoubleClicked__DelegateSignature
	 */
	struct UW_LoadoutSlot_C_OnSlotDoubleClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.OnSlotUnhovered__DelegateSignature
	 */
	struct UW_LoadoutSlot_C_OnSlotUnhovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.OnSlotHovered__DelegateSignature
	 */
	struct UW_LoadoutSlot_C_OnSlotHovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutSlot.W_LoadoutSlot_C.OnSlotClicked__DelegateSignature
	 */
	struct UW_LoadoutSlot_C_OnSlotClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
