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
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateLoadoutPresetInfo
	 */
	struct UW_Loadout_InformationTable_C_UpdateLoadoutPresetInfo_Params
	{	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.SetAttachmentEffects
	 */
	struct UW_Loadout_InformationTable_C_SetAttachmentEffects_Params
	{
	public:
		TArray<struct FST_ItemEffects>                             Effects;                                                 // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.QuickHide
	 */
	struct UW_Loadout_InformationTable_C_QuickHide_Params
	{	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Play Refresh Anim
	 */
	struct UW_Loadout_InformationTable_C_Play_Refresh_Anim_Params
	{	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateAttachmentInfo
	 */
	struct UW_Loadout_InformationTable_C_UpdateAttachmentInfo_Params
	{	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateArmourMaterialInfo
	 */
	struct UW_Loadout_InformationTable_C_UpdateArmourMaterialInfo_Params
	{	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateAmmoInfo
	 */
	struct UW_Loadout_InformationTable_C_UpdateAmmoInfo_Params
	{	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.GetWeaponClassText
	 */
	struct UW_Loadout_InformationTable_C_GetWeaponClassText_Params
	{
	public:
		class FText                                                WeaponClass;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateItemInfo
	 */
	struct UW_Loadout_InformationTable_C_UpdateItemInfo_Params
	{	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.SetLoadoutWidget
	 */
	struct UW_Loadout_InformationTable_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.PreConstruct
	 */
	struct UW_Loadout_InformationTable_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Tick
	 */
	struct UW_Loadout_InformationTable_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateCurrentSlot
	 */
	struct UW_Loadout_InformationTable_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateCurrentItemMap
	 */
	struct UW_Loadout_InformationTable_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Construct
	 */
	struct UW_Loadout_InformationTable_C_Construct_Params
	{	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelItemInfo
	 */
	struct UW_Loadout_InformationTable_C_RefreshPanelItemInfo_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UClass*                                              ItemClass;                                               // 0x0178(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemCategory                                              LoadoutSlot;                                             // 0x0180(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Restricted;                                              // 0x0181(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.ModifyWeaponClicked
	 */
	struct UW_Loadout_InformationTable_C_ModifyWeaponClicked_Params
	{
	public:
		class UClass*                                              ItemToModify;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.InitializePanel
	 */
	struct UW_Loadout_InformationTable_C_InitializePanel_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateActiveLoadout
	 */
	struct UW_Loadout_InformationTable_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Reveal
	 */
	struct UW_Loadout_InformationTable_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Hide
	 */
	struct UW_Loadout_InformationTable_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.AttachmentItemClicked
	 */
	struct UW_Loadout_InformationTable_C_AttachmentItemClicked_Params
	{
	public:
		class UW_LoadoutInfo_AttachmentListEntry_C*                AttachmentListItem;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelAmmoInfo
	 */
	struct UW_Loadout_InformationTable_C_RefreshPanelAmmoInfo_Params
	{
	public:
		class FName                                                AmmoType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              WeaponData;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelArmourMaterial
	 */
	struct UW_Loadout_InformationTable_C_RefreshPanelArmourMaterial_Params
	{
	public:
		class UArmourMaterial*                                     ArmourMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelAttachment
	 */
	struct UW_Loadout_InformationTable_C_RefreshPanelAttachment_Params
	{
	public:
		class UClass*                                              Attachment;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AttachingWeapon;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RemoveAttachmentItemClicked
	 */
	struct UW_Loadout_InformationTable_C_RemoveAttachmentItemClicked_Params
	{
	public:
		class UW_LoadoutInfo_AttachmentListEntry_C*                AttachmentListItem;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelLoadoutPreset
	 */
	struct UW_Loadout_InformationTable_C_RefreshPanelLoadoutPreset_Params
	{
	public:
		struct FLoadoutPreset                                      LoadoutPreset;                                           // 0x0000(0x0180)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.ExecuteUbergraph_W_Loadout_InformationTable
	 */
	struct UW_Loadout_InformationTable_C_ExecuteUbergraph_W_Loadout_InformationTable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0ZOL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelRemoveAttachmentClicked__DelegateSignature
	 */
	struct UW_Loadout_InformationTable_C_OnInfoPanelRemoveAttachmentClicked__DelegateSignature_Params
	{
	public:
		EWeaponAttachmentType                                      Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelAttachmentClicked__DelegateSignature
	 */
	struct UW_Loadout_InformationTable_C_OnInfoPanelAttachmentClicked__DelegateSignature_Params
	{
	public:
		EWeaponAttachmentType                                      Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JTYM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              AttachmentData;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnCancelRefresh__DelegateSignature
	 */
	struct UW_Loadout_InformationTable_C_OnCancelRefresh__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelRemoved__DelegateSignature
	 */
	struct UW_Loadout_InformationTable_C_OnInfoPanelRemoved__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnModifyWeaponButtonClicked__DelegateSignature
	 */
	struct UW_Loadout_InformationTable_C_OnModifyWeaponButtonClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemToModify;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
