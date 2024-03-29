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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass W_Loadout_Overview.W_Loadout_Overview_C
	 * Size -> 0x0D20 (FullSize[0x0F80] - InheritedSize[0x0260])
	 */
	class UW_Loadout_Overview_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    animFadeArmorQuartermaster;                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    animFadeQuartermaster;                                   // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    animFadeOverview;                                        // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_Header_C*                                         ArmorHeader;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                    AttachingWeaponSlot;                                     // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                    BodyArmor;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                    BodyArmorMaterial;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                         btn_CleanWeapon;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                         btn_ClearPresetWarning;                                  // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                         btn_ModifiedPreset;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                         btn_Quartermaster_Primary;                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                         btn_Quartermaster_Sidearm;                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                         DeployablesHeader;                                       // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class Uw_Dropdown_C*                                       drop_ArmorCoverage;                                      // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class Uw_Dropdown_C*                                       drop_LoadoutPresets;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                    Grenades;                                                // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HB_PresetModified;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                    Headwear;                                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                         HeadwearHeader;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_46;                                                // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                    LongTactical;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                    Primary;                                                 // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_Overview;                                      // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                    Sidearm;                                                 // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                    Tactical;                                                // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_AttachmentList;                                       // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_Deployables;                                          // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_Gear;                                                 // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_LoadoutOverview;                                      // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_Overview;                                             // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_WeaponQuartermaster;                                  // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_Weapons;                                              // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Loadout_MunitionSlots_C*                          W_Loadout_MunitionSlots;                                 // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class Uw_Dropdown_C*                                       WeaponPresets;                                           // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                         WeaponsHeader;                                           // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_1;                                        // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0388(0x0178) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UWidget*>                                     Overview_Widgets;                                        // 0x0500(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnOverviewItemHovered;                                   // 0x0510(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOverviewItemUnhovered;                                 // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOverviewItemClicked;                                   // 0x0530(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOverviewItemDoubleClicked;                             // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCleanWeaponClicked;                                    // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EItemCategory, class UClass*>                         CurrentItems;                                            // 0x0568(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    AvailableMunitionSlots;                                  // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalMunitionSlots;                                      // 0x05BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PrimaryAmmoSlots;                                        // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SidearmAmmoSlots;                                        // 0x05C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GrenadeAmmoSlots;                                        // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TacticalAmmoSlots;                                       // 0x05CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnQuartermasterWeaponSwapped;                            // 0x05D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       QuartermasterOpen;                                       // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5LVX[0x7];                                   // 0x05E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAttachmentSlotClicked;                                 // 0x05E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnAttachmentSlotHovered;                                 // 0x05F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsCustomizingPrimary;                                    // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZL9I[0x7];                                   // 0x0609(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PrimaryAttachmentData;                                   // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, struct FWeaponPreset>                  CurrentWeaponPresets;                                    // 0x0618(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              CurrentlySelectedPreset;                                 // 0x0668(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		EWeaponAttachmentType                                      AutoSelectAttachmentSlot;                                // 0x0678(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GFNU[0x7];                                   // 0x0679(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAttachmentSlotUnhovered;                               // 0x0680(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnQuartermasterOpened;                                   // 0x0690(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      QuartermasterRevealOffset;                               // 0x06A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VDDB[0x4];                                   // 0x06A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RevealDelay;                                             // 0x06B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bQuarterMasterListHidden;                                // 0x06B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_81TH[0x3];                                   // 0x06B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverviewRevealOffset;                                    // 0x06B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AXIJ[0x4];                                   // 0x06BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnQuartermasterClosed;                                   // 0x06C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOverviewWidgetsHidden;                                 // 0x06D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              QuartermasterItem;                                       // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverviewOpen;                                            // 0x06E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ArmorEditOpen;                                           // 0x06E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OpeningOverview;                                         // 0x06EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OpeningArmorEdit;                                        // 0x06EB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OpeningQuartermaster;                                    // 0x06EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YJKJ[0x3];                                   // 0x06ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnOverviewOpen;                                          // 0x06F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnArmorEditorOpen;                                       // 0x0700(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnArmorEditorClosed;                                     // 0x0710(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TMap<class FString, EArmourCoverage>                       ArmorCoverageOptions;                                    // 0x0720(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       RemotePlayer;                                            // 0x0770(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ORIE[0x7];                                   // 0x0771(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TEMP_ForceLoadTableHack;                                 // 0x0778(0x0018) Edit, BlueprintVisible
		TMap<EArmourCoverage, class FText>                         ArmorCoverageText;                                       // 0x0790(0x0050) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnQuartermasterWeaponClicked;                            // 0x07E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FItemLookupTable                                    QuartermasterLookupTable;                                // 0x07F0(0x05A0) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       PresetOverview;                                          // 0x0D90(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_I2XX[0x7];                                   // 0x0D91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FText>                           LoadoutPresetOptions;                                    // 0x0D98(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSavedLoadout                                       PreviewLoadout;                                          // 0x0DE8(0x0178) Edit, BlueprintVisible, DisableEditOnInstance
		struct FST_DropdownOptions                                 drop_LoadoutPreset_DeleteFooter;                         // 0x0F60(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void ShowPresetModified(bool Modified);
		void InitializeOverviewPreview(const struct FSavedLoadout& PreviewLoadout);
		void GetLoadoutInfo(struct FSavedLoadout* Active_Loadout);
		void InitializeLoadoutPresets();
		void GetAttachmentSlotByType(EWeaponAttachmentType AttachmentSlot, class UW_LoadoutSlot_Attachment_C** AttachmentSlotRef);
		void InitializeArmorSettings(class UClass* ItemData);
		void SelectTactical(class UClass* ItemData);
		void SelectGrenade(class UClass* ItemData);
		void ApplyWeaponPreset(class UClass* Weapon, bool IsPrimary, const struct FWeaponPreset& WeaponPreset);
		void DeselectCurrentWeaponPreset();
		void SelectWeaponPreset(const class FString& PresetID);
		void AttachmentSlotAutoSelect(EWeaponAttachmentType AutoSelectAttachmentSlot);
		void InitializeWeaponPresetOptions(class UClass* Weapon);
		void CreateQuartermasterAttachment(EWeaponAttachmentType AttachmentType, float RevealDelay);
		void OpenWeaponQuartermaster(class UClass* ItemToModify, const struct FItemLookupTable& ItemLookupTable);
		void SetupBindings();
		void SetActiveQuatermasterWeaponButton(bool IsPrimary);
		void InitializeOverviewList(bool RemotePlayer);
		void Finished_607C2935489AA67033764DA335DA7382();
		void Finished_340D92A941109D40A716A09F93EFD3B1();
		void Finished_1C1140E544F6D72CBF82B4B0A003F591();
		void Finished_42BB49A3444AA78D7A547F8D1ED2AB88();
		void Reveal(float Delay);
		void Hide(float Delay, bool Collapse);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ClearQuartermasterList();
		void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
		void OverviewItemDoubleClick(class UW_LoadoutSlot_C* TriggeringSlot);
		void OverviewItemClicked(class UW_LoadoutSlot_C* TriggeringSlot);
		void OverviewItemHover(class UW_LoadoutSlot_C* TriggeringSlot);
		void OverviewItemUnhover(class UW_LoadoutSlot_C* TriggeringSlot);
		void BndEvt__W_Loadout_Overview_btn_CleanWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
		void OpenQuartermaster(class UClass* ItemToModify, const struct FItemLookupTable& ItemLookupTable);
		void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
		void UpdateCurrentItemMap(TMap<EItemCategory, class UClass*> ItemCategory);
		void SwapQuartermasterWeapon(bool IsPrimary);
		void BndEvt__W_Loadout_Overview_btn_Quartermaster_Primary_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_Loadout_Overview_btn_Quartermaster_Sidearm_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button);
		void AttachmentSlotClicked(class UW_LoadoutSlot_Attachment_C* TriggeringAttachmentSlot);
		void AttachmentSlotHovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachmentSlot);
		void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
		void RefreshQuartermasterList(class UClass* ItemToModify, const struct FItemLookupTable& ItemLookupTable);
		void CloseQuartermasterList();
		void HideOverviewWidgets(float AnimationOffset);
		void BndEvt__W_Loadout_Overview_WeaponPresets_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature(const class FString& OptionID);
		void OpenArmorEditor();
		void FadeOverviewToQuartermaster();
		void FadeOverviewToArmorEditor();
		void CloseArmorQuartermaster();
		void NewArmorEquipped();
		void BndEvt__W_Loadout_Overview_Dropdown_ArmorCoverage_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature(const class FString& OptionID);
		void NewArmourMaterialEquipped();
		void BndEvt__W_Loadout_Overview_AttachingWeaponSlot_K2Node_ComponentBoundEvent_5_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void AttachmentSlotUnhovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachmentSlot);
		void BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_6_OnOptionHovered__DelegateSignature(const class FString& OptionID);
		void BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_7_OnOptionSelected__DelegateSignature(const class FString& OptionID);
		void BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_8_OnFooterOptionSelected__DelegateSignature(const class FString& OptionID);
		void BndEvt__W_Loadout_Overview_btn_ModifiedPreset_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_Loadout_Overview_btn_ClearPresetWarning_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(class UW_Button_C* Button);
		void ExecuteUbergraph_W_Loadout_Overview(int32_t EntryPoint);
		void OnAttachmentSlotUnhovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment);
		void OnQuartermasterWeaponClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void OnArmorEditorClosed__DelegateSignature();
		void OnArmorEditorOpen__DelegateSignature();
		void OnOverviewOpen__DelegateSignature();
		void OnOverviewWidgetsHidden__DelegateSignature();
		void OnQuartermasterClosed__DelegateSignature();
		void OnQuartermasterOpened__DelegateSignature();
		void OnAttachmentSlotHovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment);
		void OnAttachmentSlotClicked__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment);
		void OnQuartermasterWeaponSwapped__DelegateSignature(bool IsPrimary);
		void OnCleanWeaponClicked__DelegateSignature();
		void OnOverviewItemDoubleClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void OnOverviewItemClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void OnOverviewItemUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void OnOverviewItemHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
