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
	 * WidgetBlueprintGeneratedClass BrightnessCalibrationMenu.BrightnessCalibrationMenu_C
	 * Size -> 0x0040 (FullSize[0x0368] - InheritedSize[0x0328])
	 */
	class UBrightnessCalibrationMenu_C : public URBMenuBrightnessCalibration
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOptionsEntry_C*                                     BrightnessEntry;                                         // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CalibrationTitleText;                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      DescriptionText;                                         // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URBMenuButton_C*                                     ExitBtn;                                                 // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionsEntry_C*                                     HDRPaperwhiteEntry;                                      // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionsEntry_C*                                     HDRUserInterfaceEntry;                                   // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URBMenuButton_C*                                     ResetDefaultsBtn;                                        // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void RefreshSliders();
		void Construct();
		void BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
		void Event_OnPush();
		void Event_OnPop();
		void BndEvt__BrightnessCalibrationMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
		void Event_SetToDefaults();
		void BndEvt__BrightnessCalibrationMenu_HDRPaperwhiteEntry_K2Node_ComponentBoundEvent_4_OnOptionValueChanged__DelegateSignature(class URBMenuOptionsEntry* OptionEntry);
		void BndEvt__BrightnessCalibrationMenu_HDRUserInterfaceEntry_K2Node_ComponentBoundEvent_6_OnOptionValueChanged__DelegateSignature(class URBMenuOptionsEntry* OptionEntry);
		void BndEvt__BrightnessCalibrationMenu_BrightnessEntry_K2Node_ComponentBoundEvent_7_OnOptionValueChanged__DelegateSignature(class URBMenuOptionsEntry* OptionEntry);
		void ExecuteUbergraph_BrightnessCalibrationMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
