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
	 * WidgetBlueprintGeneratedClass ControlSchemeEntry.ControlSchemeEntry_C
	 * Size -> 0x0030 (FullSize[0x03A8] - InheritedSize[0x0378])
	 */
	class UControlSchemeEntry_C : public UBaseOptionsEntry_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0378(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCommonTextBlock*                                    OptionValue;                                             // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UValueCounter_C*                                     ValueCounter;                                            // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ValueSelectionArrows;                                    // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UArrowButton_C*                                      VS_LeftArrowBtn;                                         // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UArrowButton_C*                                      VS_RightArrowBtn;                                        // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetArrowBtn(bool Left, class UArrowButton_C** ArrowButton);
		void SetupCounter();
		void RefreshCounter();
		void PreConstruct(bool IsDesignTime);
		void Event_UpdateTextValue(const class FText& NewValue);
		void BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
		void BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
		void BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature();
		void BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature();
		void BndEvt__ControlSchemeEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void BndEvt__ControlSchemeEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
		void ExecuteUbergraph_ControlSchemeEntry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
