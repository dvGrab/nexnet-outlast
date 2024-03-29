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
	 * WidgetBlueprintGeneratedClass OverheadInfo.OverheadInfo_C
	 * Size -> 0x0051 (FullSize[0x03A9] - InheritedSize[0x0358])
	 */
	class UOverheadInfo_C : public URBHUDOverheadInfo
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ClassIcon;                                               // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ClassIconSizeBox;                                        // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            HealthBox;                                               // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMateHealthBar_C*                                    MateHealthBar;                                           // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MateName;                                                // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      NameHBox;                                                // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ObjectiveItemsBox;                                       // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TradeItem;                                               // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVoiceChatOverheadWidget_C*                          VoiceChatOverheadWidget;                                 // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsFadingOut_1;                                          // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Event_InventoryUpdated(EInventoryUpdateEventType InventoryEventType);
		void Event_PlayerHealthChanged(float newHealth);
		void Event_ImposterUpdated();
		void Event_PlayerStateUpdated();
		void Event_PlayerIndicatorTypeChanged(EPlayerIndicatorType playerIndicatorType);
		void Event_PlayerMaxHealthChanged(float newMaxHealth);
		void Event_CurrentLoadoutChanged();
		void Event_PlayerPartyStateUpdated();
		void Event_HUDSettingsUpdated();
		void UpdateDisplay_old_DEPRECATED_NOT_USED();
		void UpdateDistanceEffects_DEPRECATED_NOT_USED();
		void UpdateActiveSkillType();
		void UpdateElementVisibility();
		void UpdatePartyState();
		void InithHealthBarVisibility();
		void SetImposterName(const class FString& CopiedName);
		void UpdateTradeItem();
		void Construct();
		void Event_Show();
		void Event_Hide();
		void ExecuteUbergraph_OverheadInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
