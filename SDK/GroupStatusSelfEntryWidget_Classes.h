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
	 * WidgetBlueprintGeneratedClass GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C
	 * Size -> 0x0274 (FullSize[0x052C] - InheritedSize[0x02B8])
	 */
	class UGroupStatusSelfEntryWidget_C : public URBGroupStatusEntryWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScaleBox*                                           BackgroundScale;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ClassIcon;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      LoadoutRecap;                                            // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UActionIconWidget_C*                                 LoadoutShortcut;                                         // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PartyLeaderIcon;                                         // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPerksDisplay_C*                                     PerksDisplay;                                            // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerName;                                              // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SpeakerIcon;                                             // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SpeakerSizeBox;                                          // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         SpeakingBrush;                                           // 0x0308(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         GloballyMutedBrush;                                      // 0x0390(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MutedBrush;                                              // 0x0418(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         NotSpeakingBrush;                                        // 0x04A0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    MaxNameLength;                                           // 0x0528(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupStatus();
		void SetupCharacterClass();
		void Event_Refresh();
		void PreConstruct(bool IsDesignTime);
		void Event_OnPlayerSASChanged(class ARBPlayerState* RBPlayerState, class ARBSAS* currentSAS);
		void Event_Refresh_Audio();
		void ExecuteUbergraph_GroupStatusSelfEntryWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
