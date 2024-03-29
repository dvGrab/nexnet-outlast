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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass PlayerLoadoutsTab.PlayerLoadoutsTab_C
	 * Size -> 0x0088 (FullSize[0x0310] - InheritedSize[0x0288])
	 */
	class UPlayerLoadoutsTab_C : public URBCharacterSheetMenuTabWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BottomBorder;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCoreUpgradeList_C*                                  CoreUpgradeList;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCoreUpgradeTierList_C*                              CoreUpgradeTierList;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULoadoutRecap_C*                                     LoadoutRecap;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MainBackground;                                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPerkList_C*                                         PerkList;                                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerLoadoutHoverInfo_C*                           PlayerLoadoutHoverInfo;                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URigList_C*                                          RigList;                                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URigUpgradeList_C*                                   RigUpgradeList;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TopBorder;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ELoadoutElementType                                        CurrentCategory;                                         // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C210[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUserWidget*>                                 ActionButtons;                                           // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             EventRequestTutorial;                                    // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EActiveSkillType                                           SelectedActiveSkillType;                                 // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_THIS[0x3];                                   // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SelectedCoreUpgradeTier;                                 // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool HandleMenuTabRight();
		bool HandleMenuTabLeft();
		void SetCategoryFocus();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OnMenuRightClick();
		void Refresh();
		class FText GetPageSubtitle();
		bool ShouldShowNavigation();
		class FText GetPageTitle();
		bool IsReadyToClose();
		void GetPageSpecificButtons(TArray<class UUserWidget*>* outButtons);
		void SaveLoadout();
		void ChangeCategory(ELoadoutElementType Category);
		void Construct();
		void Event_OnParentPopped();
		void BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_1_OnRigClicked__DelegateSignature(const class FName& ItemId, EActiveSkillType ActiveSkillType);
		void OnBackRequested();
		void BndEvt__PlayerLoadoutsTab_CoreUpgradeTierList_K2Node_ComponentBoundEvent_2_OnTierClicked__DelegateSignature(int32_t tier);
		void BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_0_OnRigButtonClicked__DelegateSignature();
		void BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_3_OnPerkSlotsButtonClicked__DelegateSignature();
		void BndEvt__PlayerLoadoutsTab_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeClicked__DelegateSignature(const class FName& ItemId);
		void BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_5_OnCoreUpgradesButtonClicked__DelegateSignature();
		void BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_6_OnRigHovered__DelegateSignature(const class FName& ItemId, EActiveSkillType ActiveSkillType);
		void Event_OnTabUnselected();
		void ExecuteUbergraph_PlayerLoadoutsTab(int32_t EntryPoint);
		void EventRequestTutorial__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
