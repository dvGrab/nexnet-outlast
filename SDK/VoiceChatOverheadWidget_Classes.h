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
	 * WidgetBlueprintGeneratedClass VoiceChatOverheadWidget.VoiceChatOverheadWidget_C
	 * Size -> 0x0230 (FullSize[0x04C0] - InheritedSize[0x0290])
	 */
	class UVoiceChatOverheadWidget_C : public URBOverheadVoiceChatWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              SpeakerIcon;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         SpeakingBrush;                                           // 0x02A0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         GloballyMutedBrush;                                      // 0x0328(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MutedBrush;                                              // 0x03B0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         NotSpeakingBrush;                                        // 0x0438(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Event_Refresh();
		void ExecuteUbergraph_VoiceChatOverheadWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
