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
	 * WidgetBlueprintGeneratedClass BaseConfirmCancelPopupWidget.BaseConfirmCancelPopupWidget_C
	 * Size -> 0x00C0 (FullSize[0x03F8] - InheritedSize[0x0338])
	 */
	class UBaseConfirmCancelPopupWidget_C : public URBPopUpConfirmCancelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0338(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Background;                                              // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URBMenuButton_C*                                     CancelMenuButton;                                        // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URBMenuButton_C*                                     ConfirmMenuButton;                                       // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Line;                                                    // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Line_2;                                                  // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PopUpIconImage;                                          // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PopupText;                                               // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TitleTxt;                                                // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         PopUpTint;                                               // 0x0380(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class UTexture2D*                                          PopUpIcon;                                               // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                DefaultTitle;                                            // 0x03B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                DefaultConfirmTxt;                                       // 0x03C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                DefaultCancelTxt;                                        // 0x03E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetCancelSound(class UAkAudioEvent* Sound);
		void SetConfrmSound(class UAkAudioEvent* Sound);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Event_InitializePopup(const class FText& TitleText, const class FText& MainText, const class FText& ConfirmText, const class FText& CancelText);
		void BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
		void BndEvt__CancelMenuButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
		void Destruct();
		void OninputChanged();
		void ExecuteUbergraph_BaseConfirmCancelPopupWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
