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
	 * WidgetBlueprintGeneratedClass GroupStatusEntryWidget.GroupStatusEntryWidget_C
	 * Size -> 0x028C (FullSize[0x0544] - InheritedSize[0x02B8])
	 */
	class UGroupStatusEntryWidget_C : public URBGroupStatusEntryWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScaleBox*                                           BackgroundScale;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ClassIcon;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ClassIconSizeBox;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            HealthContainer;                                         // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMateHealthBar_C*                                    MateHealthBar;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ObjectiveItemsBox;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PartyLeaderIcon;                                         // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerName;                                              // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SpeakerIcon;                                             // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              StatusIcon;                                              // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            StatusSize;                                              // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         SpeakingBrush;                                           // 0x0318(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         GloballyMutedBrush;                                      // 0x03A0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MutedBrush;                                              // 0x0428(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         NotSpeakingBrush;                                        // 0x04B0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            iconMaterial;                                            // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNameLength;                                           // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ForceHealthRefresh();
		void UpdateHealthVisibility();
		void UpdateStatusVisibility(ESlateVisibility NewVisibility);
		void SetupMaterial();
		void SetupStatus();
		void SetupCharacterClass();
		void Event_Refresh();
		void Event_MaxDisplayNameLengthUpdated();
		void Construct();
		void Event_PlayerStatusUpdated();
		void PreConstruct(bool IsDesignTime);
		void Event_Refresh_Audio();
		void Event_Refresh_Health(float newHealth, bool skipAnim);
		void Event_Refresh_ObjectiveItemsCount();
		void Event_Refresh_MaxHealth(float newMaxHealth);
		void ExecuteUbergraph_GroupStatusEntryWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
