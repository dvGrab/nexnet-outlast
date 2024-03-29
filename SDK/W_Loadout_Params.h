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
	 * Function W_Loadout.W_Loadout_C.ClearPreset
	 */
	struct UW_Loadout_C_ClearPreset_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.SetPresetModified
	 */
	struct UW_Loadout_C_SetPresetModified_Params
	{
	public:
		bool                                                       PresetDirty;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.LoadDefaultLoadout
	 */
	struct UW_Loadout_C_LoadDefaultLoadout_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.CheckPreset
	 */
	struct UW_Loadout_C_CheckPreset_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.DeleteLoadoutPreset
	 */
	struct UW_Loadout_C_DeleteLoadoutPreset_Params
	{
	public:
		class UW_StandardModal_C*                                  TriggeringModal;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                TextEntry;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.Open Loadout Preset Modal
	 */
	struct UW_Loadout_C_Open_Loadout_Preset_Modal_Params
	{
	public:
		class FString                                              CurrentPreset;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Delete;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L9OF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout.W_Loadout_C.ApplyLoadoutPreset
	 */
	struct UW_Loadout_C_ApplyLoadoutPreset_Params
	{
	public:
		struct FLoadoutPreset                                      LoadoutPreset;                                           // 0x0000(0x0180)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.OpenAttachmentList
	 */
	struct UW_Loadout_C_OpenAttachmentList_Params
	{
	public:
		bool                                                       VerticalList;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G8DO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EWeaponAttachmentType                                      AttachmentType;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5JV7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout.W_Loadout_C.OpenItemList
	 */
	struct UW_Loadout_C_OpenItemList_Params
	{
	public:
		bool                                                       VerticalList;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EItemCategory                                              LoadoutSlot;                                             // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_15VR[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLoadoutCategory>                            GearCategoryClasses;                                     // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.OpenDeployableList
	 */
	struct UW_Loadout_C_OpenDeployableList_Params
	{
	public:
		bool                                                       VerticalList;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EItemCategory                                              LoadoutSlot;                                             // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FVWH[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLoadoutCategory>                            GearCategoryClasses;                                     // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UClass*>                                      ExcludedItems;                                           // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.OpenArmourMaterialList
	 */
	struct UW_Loadout_C_OpenArmourMaterialList_Params
	{
	public:
		bool                                                       VerticalList;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z4VK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout.W_Loadout_C.OpenAmmoList
	 */
	struct UW_Loadout_C_OpenAmmoList_Params
	{
	public:
		bool                                                       VerticalList;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HQJX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ExcludedAmmoType;                                        // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UNO5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Weapon;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.SaveLoadoutPreset
	 */
	struct UW_Loadout_C_SaveLoadoutPreset_Params
	{
	public:
		class UW_StandardModal_C*                                  TriggeringModal;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                TextEntry;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.IsNullAttachment
	 */
	struct UW_Loadout_C_IsNullAttachment_Params
	{
	public:
		class UClass*                                              Attachment;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsNull;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LDZE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout.W_Loadout_C.RefreshAttachmentInfoPanel
	 */
	struct UW_Loadout_C_RefreshAttachmentInfoPanel_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         AttachmentSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.RefreshItemInfoPanel
	 */
	struct UW_Loadout_C_RefreshItemInfoPanel_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    LoadoutSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.HideItemList
	 */
	struct UW_Loadout_C_HideItemList_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.EquipArmourMaterial
	 */
	struct UW_Loadout_C_EquipArmourMaterial_Params
	{
	public:
		class UArmourMaterial*                                     ArmourMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.SaveArmorCoverage
	 */
	struct UW_Loadout_C_SaveArmorCoverage_Params
	{
	public:
		EArmourCoverage                                            ArmorCoverage;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C249[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout.W_Loadout_C.EquipSidearmAmmo
	 */
	struct UW_Loadout_C_EquipSidearmAmmo_Params
	{
	public:
		TArray<class FName>                                        SidearmAmmo;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.EquipPrimaryAmmo
	 */
	struct UW_Loadout_C_EquipPrimaryAmmo_Params
	{
	public:
		TArray<class FName>                                        PrimaryAmmo;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.OpenArmorQuartermaster
	 */
	struct UW_Loadout_C_OpenArmorQuartermaster_Params
	{
	public:
		class UClass*                                              ItemToModify;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.SaveTacticalSlotCount
	 */
	struct UW_Loadout_C_SaveTacticalSlotCount_Params
	{
	public:
		int32_t                                                    Tactical_Slots_Count;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.SaveGrenadeSlotCount
	 */
	struct UW_Loadout_C_SaveGrenadeSlotCount_Params
	{
	public:
		int32_t                                                    Grenade_Slots_Count;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.SaveSidearmAmmoSlotCount
	 */
	struct UW_Loadout_C_SaveSidearmAmmoSlotCount_Params
	{
	public:
		int32_t                                                    Secondary_Ammo_Slots_Count;                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.SavePrimaryAmmoSlotCount
	 */
	struct UW_Loadout_C_SavePrimaryAmmoSlotCount_Params
	{
	public:
		int32_t                                                    Primary_Ammo_Slots_Count;                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.UpdateCurrentItem
	 */
	struct UW_Loadout_C_UpdateCurrentItem_Params
	{
	public:
		EItemCategory                                              ItemCategory;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G1FI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemClass;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.DeselectAttachmentSlot
	 */
	struct UW_Loadout_C_DeselectAttachmentSlot_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.UpdateWorkbenchCameraRotation
	 */
	struct UW_Loadout_C_UpdateWorkbenchCameraRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.SetupWorkbenchCamera
	 */
	struct UW_Loadout_C_SetupWorkbenchCamera_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.LookAtAttachmentSlot
	 */
	struct UW_Loadout_C_LookAtAttachmentSlot_Params
	{
	public:
		EWeaponAttachmentType                                      AttachmentSlot;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B1GW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout.W_Loadout_C.SaveWeaponPreset
	 */
	struct UW_Loadout_C_SaveWeaponPreset_Params
	{
	public:
		class UW_StandardModal_C*                                  TriggeringModal;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                TextEntry;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.CleanCurrentWeapon
	 */
	struct UW_Loadout_C_CleanCurrentWeapon_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.CloseLoadout
	 */
	struct UW_Loadout_C_CloseLoadout_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.UpdateHUDStates
	 */
	struct UW_Loadout_C_UpdateHUDStates_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.ShowHUD
	 */
	struct UW_Loadout_C_ShowHUD_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.HideHUD
	 */
	struct UW_Loadout_C_HideHUD_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.SaveActiveLoadoutOld
	 */
	struct UW_Loadout_C_SaveActiveLoadoutOld_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.HolsterPreviewCharacterWeapon
	 */
	struct UW_Loadout_C_HolsterPreviewCharacterWeapon_Params
	{
	public:
		bool                                                       IsHolstering;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E7CO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout.W_Loadout_C.InitializeWeaponAttachmentMap
	 */
	struct UW_Loadout_C_InitializeWeaponAttachmentMap_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.UpdateAllPreviewWeaponAttachments
	 */
	struct UW_Loadout_C_UpdateAllPreviewWeaponAttachments_Params
	{
	public:
		bool                                                       IsWorkbench;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WA1O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Weapon;                                                  // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       IsSidearm;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CQQ9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout.W_Loadout_C.UpdatePreview
	 */
	struct UW_Loadout_C_UpdatePreview_Params
	{
	public:
		EItemCategory                                              Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.SetPreMissionCameraBySlot
	 */
	struct UW_Loadout_C_SetPreMissionCameraBySlot_Params
	{
	public:
		EItemCategory                                              LoadoutSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XU8V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      BlendTime;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.EquipSidearmAttachments
	 */
	struct UW_Loadout_C_EquipSidearmAttachments_Params
	{
	public:
		EWeaponAttachmentType                                      AttachmentType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H6QS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              AttachmentData;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AttachingWeapon;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.EquipPrimaryAttachments
	 */
	struct UW_Loadout_C_EquipPrimaryAttachments_Params
	{
	public:
		EWeaponAttachmentType                                      AttachmentType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1HZF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              AttachmentData;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AttachingWeapon;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.DeselectLoadoutSlot
	 */
	struct UW_Loadout_C_DeselectLoadoutSlot_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnMouseButtonUp
	 */
	struct UW_Loadout_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.GoBack
	 */
	struct UW_Loadout_C_GoBack_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnKeyDown
	 */
	struct UW_Loadout_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.EquipAttachment
	 */
	struct UW_Loadout_C_EquipAttachment_Params
	{
	public:
		class UClass*                                              AttachingWeapon;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AttachmentData;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.InitializeAttachmentSelectionPanel
	 */
	struct UW_Loadout_C_InitializeAttachmentSelectionPanel_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.InitializeItemSelectionRemote
	 */
	struct UW_Loadout_C_InitializeItemSelectionRemote_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.InitializeItemSelectionPanel
	 */
	struct UW_Loadout_C_InitializeItemSelectionPanel_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.EquipTactical
	 */
	struct UW_Loadout_C_EquipTactical_Params
	{
	public:
		TArray<class UClass*>                                      ItemData;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.EquipGrenades
	 */
	struct UW_Loadout_C_EquipGrenades_Params
	{
	public:
		TArray<class UClass*>                                      ItemData;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.EquipLongTactical
	 */
	struct UW_Loadout_C_EquipLongTactical_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.EquipHeadwear
	 */
	struct UW_Loadout_C_EquipHeadwear_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.EquipArmor
	 */
	struct UW_Loadout_C_EquipArmor_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.SidearmChanged
	 */
	struct UW_Loadout_C_SidearmChanged_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.PrimaryChanged
	 */
	struct UW_Loadout_C_PrimaryChanged_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.EquipItem
	 */
	struct UW_Loadout_C_EquipItem_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.SetActiveLoadout
	 */
	struct UW_Loadout_C_SetActiveLoadout_Params
	{
	public:
		class FString                                              LoadoutName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class AReadyOrNotPlayerState*                              RoNPlayerState;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEquippingSwat                                             EquippingUnit;                                           // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.SetupBindings
	 */
	struct UW_Loadout_C_SetupBindings_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OpenWeaponQuartermaster
	 */
	struct UW_Loadout_C_OpenWeaponQuartermaster_Params
	{
	public:
		class UClass*                                              ItemToModify;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.HideItemInfoPanel
	 */
	struct UW_Loadout_C_HideItemInfoPanel_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.ShowItemInfoPanel
	 */
	struct UW_Loadout_C_ShowItemInfoPanel_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    LoadoutSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.InitializeOverview
	 */
	struct UW_Loadout_C_InitializeOverview_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.ShowTooltip
	 */
	struct UW_Loadout_C_ShowTooltip_Params
	{
	public:
		struct FLevelDataLookupTable                               MissionDetails;                                          // 0x0000(0x0770)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnDragDetected
	 */
	struct UW_Loadout_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.DoItemUnhover
	 */
	struct UW_Loadout_C_DoItemUnhover_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_0_OnLoadoutItemClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_0_OnLoadoutItemClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_LoadoutCharacterSelect_K2Node_ComponentBoundEvent_1_OnEquippingUnitSelected__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_LoadoutCharacterSelect_K2Node_ComponentBoundEvent_1_OnEquippingUnitSelected__DelegateSignature_Params
	{
	public:
		struct FST_EquippingUnit                                   EquippingUnitInfo;                                       // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_2_OnAttachmentItemClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_2_OnAttachmentItemClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              AttachingWeapon;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AttachmentData;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_3_OnLoadoutItemDoubleClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_3_OnLoadoutItemDoubleClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_4_OnModifyWeaponButtonClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_4_OnModifyWeaponButtonClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemToModify;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.CloseQuartermaster
	 */
	struct UW_Loadout_C_CloseQuartermaster_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.SelectListItem
	 */
	struct UW_Loadout_C_SelectListItem_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.RedrawWeapon
	 */
	struct UW_Loadout_C_RedrawWeapon_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.SetPreMissionCamera
	 */
	struct UW_Loadout_C_SetPreMissionCamera_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Animation;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      BlendTime;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.Construct
	 */
	struct UW_Loadout_C_Construct_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnLoadoutLoaded
	 */
	struct UW_Loadout_C_OnLoadoutLoaded_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnLoadoutSaved
	 */
	struct UW_Loadout_C_OnLoadoutSaved_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.Tick
	 */
	struct UW_Loadout_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.SetLoadoutWidget
	 */
	struct UW_Loadout_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnSwatCharacterChanged
	 */
	struct UW_Loadout_C_OnSwatCharacterChanged_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.CancelSavePreset
	 */
	struct UW_Loadout_C_CancelSavePreset_Params
	{
	public:
		class UW_StandardModal_C*                                  CallingModal;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.UpdateCurrentItemMap
	 */
	struct UW_Loadout_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.UpdateActiveLoadout
	 */
	struct UW_Loadout_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.Hide
	 */
	struct UW_Loadout_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.Reveal
	 */
	struct UW_Loadout_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnInitialized
	 */
	struct UW_Loadout_C_OnInitialized_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_11_OnInfoPanelAttachmentClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_11_OnInfoPanelAttachmentClicked__DelegateSignature_Params
	{
	public:
		EWeaponAttachmentType                                      Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I7I8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              AttachmentData;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.UpdateCurrentSlot
	 */
	struct UW_Loadout_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_18_OnOverviewItemDoubleClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_18_OnOverviewItemDoubleClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_20_OnQuartermasterWeaponSwapped__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_20_OnQuartermasterWeaponSwapped__DelegateSignature_Params
	{
	public:
		bool                                                       IsPrimary;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_22_OnQuartermasterClosed__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_22_OnQuartermasterClosed__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_23_OnQuartermasterOpened__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_23_OnQuartermasterOpened__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_5_OnArmorEditorOpen__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_5_OnArmorEditorOpen__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.CloseArmorQuartermaster
	 */
	struct UW_Loadout_C_CloseArmorQuartermaster_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_10_OnArmorEditorClosed__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_10_OnArmorEditorClosed__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_9_OnAmmoItemClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_9_OnAmmoItemClicked__DelegateSignature_Params
	{
	public:
		class FName                                                AmmoType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Weapon;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_13_OnArmourMaterialClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_13_OnArmourMaterialClicked__DelegateSignature_Params
	{
	public:
		class UArmourMaterial*                                     ArmourMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_15_OnCleanWeaponClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_15_OnCleanWeaponClicked__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OverviewItemClicked
	 */
	struct UW_Loadout_C_OverviewItemClicked_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.AttachmentSlotClicked
	 */
	struct UW_Loadout_C_AttachmentSlotClicked_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.QuartermasterWeaponClicked
	 */
	struct UW_Loadout_C_QuartermasterWeaponClicked_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.RefreshItemList
	 */
	struct UW_Loadout_C_RefreshItemList_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_HotkeyBar_K2Node_ComponentBoundEvent_6_OnHotkeyClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_HotkeyBar_K2Node_ComponentBoundEvent_6_OnHotkeyClicked__DelegateSignature_Params
	{
	public:
		class FString                                              HotkeyID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.ItemHovered
	 */
	struct UW_Loadout_C_ItemHovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.AttachmentHovered
	 */
	struct UW_Loadout_C_AttachmentHovered_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringAttachment;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.ItemUnhovered
	 */
	struct UW_Loadout_C_ItemUnhovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.DoAttachmentUnhover
	 */
	struct UW_Loadout_C_DoAttachmentUnhover_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.PreConstruct
	 */
	struct UW_Loadout_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.AttachmentUnhovered
	 */
	struct UW_Loadout_C_AttachmentUnhovered_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringAttachment;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_7_OnInfoPanelRemoveAttachmentClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_7_OnInfoPanelRemoveAttachmentClicked__DelegateSignature_Params
	{
	public:
		EWeaponAttachmentType                                      Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_12_OnLoadoutItemClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_12_OnLoadoutItemClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_16_OnAttachmentItemClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_16_OnAttachmentItemClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              AttachingWeapon;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AttachmentData;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_19_OnLoadoutItemDoubleClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_19_OnLoadoutItemDoubleClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_24_OnAmmoItemClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_24_OnAmmoItemClicked__DelegateSignature_Params
	{
	public:
		class FName                                                AmmoType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Weapon;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_26_OnArmourMaterialClicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_26_OnArmourMaterialClicked__DelegateSignature_Params
	{
	public:
		class UArmourMaterial*                                     ArmourMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnLoadoutPresetsLoaded
	 */
	struct UW_Loadout_C_OnLoadoutPresetsLoaded_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_btn_SidebarBack_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature
	 */
	struct UW_Loadout_C_BndEvt__W_Loadout_btn_SidebarBack_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.ExecuteUbergraph_W_Loadout
	 */
	struct UW_Loadout_C_ExecuteUbergraph_W_Loadout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1RSF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnAmmoOptionSelected__DelegateSignature
	 */
	struct UW_Loadout_C_OnAmmoOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                AmmoType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Weapon;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnArmorMaterialEquipped__DelegateSignature
	 */
	struct UW_Loadout_C_OnArmorMaterialEquipped__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnArmorCoverageSaved__DelegateSignature
	 */
	struct UW_Loadout_C_OnArmorCoverageSaved__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnArmorEquipped__DelegateSignature
	 */
	struct UW_Loadout_C_OnArmorEquipped__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnSidearmWeaponEquipped__DelegateSignature
	 */
	struct UW_Loadout_C_OnSidearmWeaponEquipped__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnPrimaryWeaponEquipped__DelegateSignature
	 */
	struct UW_Loadout_C_OnPrimaryWeaponEquipped__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnTacticalCountSaved__DelegateSignature
	 */
	struct UW_Loadout_C_OnTacticalCountSaved__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnGrenadeCountSaved__DelegateSignature
	 */
	struct UW_Loadout_C_OnGrenadeCountSaved__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnSidearmAmmoCountSaved__DelegateSignature
	 */
	struct UW_Loadout_C_OnSidearmAmmoCountSaved__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnPrimaryAmmoCountSaved__DelegateSignature
	 */
	struct UW_Loadout_C_OnPrimaryAmmoCountSaved__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnTacticalEquipped__DelegateSignature
	 */
	struct UW_Loadout_C_OnTacticalEquipped__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnGrenadesEquipped__DelegateSignature
	 */
	struct UW_Loadout_C_OnGrenadesEquipped__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnSidearmAmmoEquipped__DelegateSignature
	 */
	struct UW_Loadout_C_OnSidearmAmmoEquipped__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnPrimaryAmmoEquipped__DelegateSignature
	 */
	struct UW_Loadout_C_OnPrimaryAmmoEquipped__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.OnQuartermasterListHidden__DelegateSignature
	 */
	struct UW_Loadout_C_OnQuartermasterListHidden__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.NewEventDispatcher_0__DelegateSignature
	 */
	struct UW_Loadout_C_NewEventDispatcher_0__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout.W_Loadout_C.UpdateMapMaterial__DelegateSignature
	 */
	struct UW_Loadout_C_UpdateMapMaterial__DelegateSignature_Params
	{
	public:
		class UTexture2D*                                          LayoutTexture;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout.W_Loadout_C.PanMap__DelegateSignature
	 */
	struct UW_Loadout_C_PanMap__DelegateSignature_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AZMS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCoreUObject_FVector2D                              CursorPos;                                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
