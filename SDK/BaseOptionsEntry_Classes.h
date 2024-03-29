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
	 * WidgetBlueprintGeneratedClass BaseOptionsEntry.BaseOptionsEntry_C
	 * Size -> 0x0068 (FullSize[0x0378] - InheritedSize[0x0310])
	 */
	class UBaseOptionsEntry_C : public URBMenuOptionsEntry
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                EntryName;                                               // 0x0318(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                SubButtonTitle;                                          // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        ArrowHoveredTint;                                        // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ArrowUnhoveredTint;                                      // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUINavigation                                              LastLRNavigation;                                        // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N0I0[0x3];                                   // 0x0369(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastAnalogValue;                                         // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastInitialLRInputTimestamp;                             // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastLRInputPressedTimestamp;                             // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HandleSliderOnInput(bool bLeftPressed);
		void GetArrowBtn(bool Left, class UArrowButton_C** ArrowButton);
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void TrySetupCounter();
		void RefreshCounter();
		void SetupCounter();
		void UpdateEnableStatus();
		void RefreshDisplay();
		void ColorChangedEntries();
		void RefreshEntry();
		void PreConstruct(bool IsDesignTime);
		void Event_UpdateTitle(const class FText& newTitle);
		void Event_RefreshEntry();
		void Event_UpdateSubButtonText(const class FText& NewValue);
		void RefreshValue(bool forceUpdateSlider);
		void ExecuteUbergraph_BaseOptionsEntry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
