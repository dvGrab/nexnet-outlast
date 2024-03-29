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
	 * WidgetBlueprintGeneratedClass ActiveEffectsHudWidget.ActiveEffectsHudWidget_C
	 * Size -> 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
	 */
	class UActiveEffectsHudWidget_C : public URBHUDElementWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UActiveEffectEntryWidget_C*                          ActiveEffectEntryWidget;                                 // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UActiveEffectEntryWidget_C*                          ActiveEffectEntryWidget_30;                              // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        EffectList;                                              // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ARBPlayer*                                           CurrentPlayer;                                           // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Refresh(TArray<struct FActiveEffectTrackingData>* activeEffectTrackingDataEntries);
		void RemoveActiveEffect(const class FName& EffectId);
		void UpdateActiveEffect(const struct FActiveEffectTrackingData& activeEffectTrackingDataEntry);
		void AddActiveEffect(const struct FActiveEffectTrackingData& activeEffectTrackingDataEntry);
		void PreConstruct(bool IsDesignTime);
		void Event_OnWatchedPlayerChanged(class ARBPlayer* oldPlayer, class ARBPlayer* NewPlayer);
		void ExecuteUbergraph_ActiveEffectsHudWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
