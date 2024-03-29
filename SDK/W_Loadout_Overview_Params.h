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
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.ShowPresetModified
	 */
	struct UW_Loadout_Overview_C_ShowPresetModified_Params
	{
	public:
		bool                                                       Modified;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeOverviewPreview
	 */
	struct UW_Loadout_Overview_C_InitializeOverviewPreview_Params
	{
	public:
		struct FSavedLoadout                                       PreviewLoadout;                                          // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.GetLoadoutInfo
	 */
	struct UW_Loadout_Overview_C_GetLoadoutInfo_Params
	{
	public:
		struct FSavedLoadout                                       Active_Loadout;                                          // 0x0000(0x0178)  (Parm, OutParm)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeLoadoutPresets
	 */
	struct UW_Loadout_Overview_C_InitializeLoadoutPresets_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.GetAttachmentSlotByType
	 */
	struct UW_Loadout_Overview_C_GetAttachmentSlotByType_Params
	{
	public:
		EWeaponAttachmentType                                      AttachmentSlot;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EXD7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_LoadoutSlot_Attachment_C*                         AttachmentSlotRef;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeArmorSettings
	 */
	struct UW_Loadout_Overview_C_InitializeArmorSettings_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.SelectTactical
	 */
	struct UW_Loadout_Overview_C_SelectTactical_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.SelectGrenade
	 */
	struct UW_Loadout_Overview_C_SelectGrenade_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.ApplyWeaponPreset
	 */
	struct UW_Loadout_Overview_C_ApplyWeaponPreset_Params
	{
	public:
		class UClass*                                              Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPrimary;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8W5L[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWeaponPreset                                       WeaponPreset;                                            // 0x0010(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.DeselectCurrentWeaponPreset
	 */
	struct UW_Loadout_Overview_C_DeselectCurrentWeaponPreset_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.SelectWeaponPreset
	 */
	struct UW_Loadout_Overview_C_SelectWeaponPreset_Params
	{
	public:
		class FString                                              PresetID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotAutoSelect
	 */
	struct UW_Loadout_Overview_C_AttachmentSlotAutoSelect_Params
	{
	public:
		EWeaponAttachmentType                                      AutoSelectAttachmentSlot;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeWeaponPresetOptions
	 */
	struct UW_Loadout_Overview_C_InitializeWeaponPresetOptions_Params
	{
	public:
		class UClass*                                              Weapon;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.CreateQuartermasterAttachment
	 */
	struct UW_Loadout_Overview_C_CreateQuartermasterAttachment_Params
	{
	public:
		EWeaponAttachmentType                                      AttachmentType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q3IY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RevealDelay;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OpenWeaponQuartermaster
	 */
	struct UW_Loadout_Overview_C_OpenWeaponQuartermaster_Params
	{
	public:
		class UClass*                                              ItemToModify;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2CL9[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FItemLookupTable                                    ItemLookupTable;                                         // 0x0010(0x05A0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.SetupBindings
	 */
	struct UW_Loadout_Overview_C_SetupBindings_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.SetActiveQuatermasterWeaponButton
	 */
	struct UW_Loadout_Overview_C_SetActiveQuatermasterWeaponButton_Params
	{
	public:
		bool                                                       IsPrimary;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeOverviewList
	 */
	struct UW_Loadout_Overview_C_InitializeOverviewList_Params
	{
	public:
		bool                                                       RemotePlayer;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A333[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.Finished_607C2935489AA67033764DA335DA7382
	 */
	struct UW_Loadout_Overview_C_Finished_607C2935489AA67033764DA335DA7382_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.Finished_340D92A941109D40A716A09F93EFD3B1
	 */
	struct UW_Loadout_Overview_C_Finished_340D92A941109D40A716A09F93EFD3B1_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.Finished_1C1140E544F6D72CBF82B4B0A003F591
	 */
	struct UW_Loadout_Overview_C_Finished_1C1140E544F6D72CBF82B4B0A003F591_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.Finished_42BB49A3444AA78D7A547F8D1ED2AB88
	 */
	struct UW_Loadout_Overview_C_Finished_42BB49A3444AA78D7A547F8D1ED2AB88_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.Reveal
	 */
	struct UW_Loadout_Overview_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.Hide
	 */
	struct UW_Loadout_Overview_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.PreConstruct
	 */
	struct UW_Loadout_Overview_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.Construct
	 */
	struct UW_Loadout_Overview_C_Construct_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.ClearQuartermasterList
	 */
	struct UW_Loadout_Overview_C_ClearQuartermasterList_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.UpdateActiveLoadout
	 */
	struct UW_Loadout_Overview_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemDoubleClick
	 */
	struct UW_Loadout_Overview_C_OverviewItemDoubleClick_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemClicked
	 */
	struct UW_Loadout_Overview_C_OverviewItemClicked_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemHover
	 */
	struct UW_Loadout_Overview_C_OverviewItemHover_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemUnhover
	 */
	struct UW_Loadout_Overview_C_OverviewItemUnhover_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_CleanWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_CleanWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OpenQuartermaster
	 */
	struct UW_Loadout_Overview_C_OpenQuartermaster_Params
	{
	public:
		class UClass*                                              ItemToModify;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3CPL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FItemLookupTable                                    ItemLookupTable;                                         // 0x0010(0x05A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.UpdateCurrentSlot
	 */
	struct UW_Loadout_Overview_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.UpdateCurrentItemMap
	 */
	struct UW_Loadout_Overview_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.SwapQuartermasterWeapon
	 */
	struct UW_Loadout_Overview_C_SwapQuartermasterWeapon_Params
	{
	public:
		bool                                                       IsPrimary;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_Quartermaster_Primary_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_Quartermaster_Primary_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_Quartermaster_Sidearm_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_Quartermaster_Sidearm_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotClicked
	 */
	struct UW_Loadout_Overview_C_AttachmentSlotClicked_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringAttachmentSlot;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotHovered
	 */
	struct UW_Loadout_Overview_C_AttachmentSlotHovered_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringAttachmentSlot;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.SetLoadoutWidget
	 */
	struct UW_Loadout_Overview_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.RefreshQuartermasterList
	 */
	struct UW_Loadout_Overview_C_RefreshQuartermasterList_Params
	{
	public:
		class UClass*                                              ItemToModify;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JGTZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FItemLookupTable                                    ItemLookupTable;                                         // 0x0010(0x05A0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.CloseQuartermasterList
	 */
	struct UW_Loadout_Overview_C_CloseQuartermasterList_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.HideOverviewWidgets
	 */
	struct UW_Loadout_Overview_C_HideOverviewWidgets_Params
	{
	public:
		float                                                      AnimationOffset;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_WeaponPresets_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_WeaponPresets_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OpenArmorEditor
	 */
	struct UW_Loadout_Overview_C_OpenArmorEditor_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.FadeOverviewToQuartermaster
	 */
	struct UW_Loadout_Overview_C_FadeOverviewToQuartermaster_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.FadeOverviewToArmorEditor
	 */
	struct UW_Loadout_Overview_C_FadeOverviewToArmorEditor_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.CloseArmorQuartermaster
	 */
	struct UW_Loadout_Overview_C_CloseArmorQuartermaster_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.NewArmorEquipped
	 */
	struct UW_Loadout_Overview_C_NewArmorEquipped_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_Dropdown_ArmorCoverage_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_Dropdown_ArmorCoverage_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.NewArmourMaterialEquipped
	 */
	struct UW_Loadout_Overview_C_NewArmourMaterialEquipped_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_AttachingWeaponSlot_K2Node_ComponentBoundEvent_5_OnSlotClicked__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_AttachingWeaponSlot_K2Node_ComponentBoundEvent_5_OnSlotClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotUnhovered
	 */
	struct UW_Loadout_Overview_C_AttachmentSlotUnhovered_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringAttachmentSlot;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_6_OnOptionHovered__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_6_OnOptionHovered__DelegateSignature_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_7_OnOptionSelected__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_7_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_8_OnFooterOptionSelected__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_8_OnFooterOptionSelected__DelegateSignature_Params
	{
	public:
		class FString                                              OptionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_ModifiedPreset_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_ModifiedPreset_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_ClearPresetWarning_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_ClearPresetWarning_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.ExecuteUbergraph_W_Loadout_Overview
	 */
	struct UW_Loadout_Overview_C_ExecuteUbergraph_W_Loadout_Overview_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnAttachmentSlotUnhovered__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnAttachmentSlotUnhovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringAttachment;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnQuartermasterWeaponClicked__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnQuartermasterWeaponClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnArmorEditorClosed__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnArmorEditorClosed__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnArmorEditorOpen__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnArmorEditorOpen__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewOpen__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnOverviewOpen__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewWidgetsHidden__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnOverviewWidgetsHidden__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnQuartermasterClosed__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnQuartermasterClosed__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnQuartermasterOpened__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnQuartermasterOpened__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnAttachmentSlotHovered__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnAttachmentSlotHovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringAttachment;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnAttachmentSlotClicked__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnAttachmentSlotClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_Attachment_C*                         TriggeringAttachment;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnQuartermasterWeaponSwapped__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnQuartermasterWeaponSwapped__DelegateSignature_Params
	{
	public:
		bool                                                       IsPrimary;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnCleanWeaponClicked__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnCleanWeaponClicked__DelegateSignature_Params
	{	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemDoubleClicked__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnOverviewItemDoubleClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemClicked__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnOverviewItemClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemUnhovered__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnOverviewItemUnhovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemHovered__DelegateSignature
	 */
	struct UW_Loadout_Overview_C_OnOverviewItemHovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
