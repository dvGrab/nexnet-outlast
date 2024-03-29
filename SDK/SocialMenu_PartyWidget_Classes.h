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
	 * WidgetBlueprintGeneratedClass SocialMenu_PartyWidget.SocialMenu_PartyWidget_C
	 * Size -> 0x0078 (FullSize[0x03C0] - InheritedSize[0x0348])
	 */
	class USocialMenu_PartyWidget_C : public URBSocialMenuPartyWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowContent;                                             // 0x0350(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HideLoading;                                             // 0x0358(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowLoading;                                             // 0x0360(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USocialMenu_PartyOption_C*                           CrossplayOption;                                         // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          Grid;                                                    // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USocialMenu_PartyOption_C*                           IgnoreInviteRequestsOption;                              // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UExperimentBoardActionButton_C*                      LeavePartyBtn;                                           // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULoadingVideoWidget_C*                               LoadingVideoWidget;                                      // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USocialMenu_PartyOption_C*                           PartyMembersCanInviteOption;                             // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USocialMenu_PartyOption_C*                           PrivacyOption;                                           // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Title;                                                   // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                EmptyText;                                               // 0x03A8(0x0018) Edit, BlueprintVisible

	public:
		ESlateVisibility GetLeavePartyBtnVisibility();
		void SlotHasFocus(int32_t column, int32_t row, bool* bHasFocus);
		void SetupInitialFocus();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void SetupPartySettings();
		void Setup_Editor_Preview();
		void UpdateEntry(class UWidget* Entry, int32_t column, int32_t row);
		void Setup();
		void Construct();
		void Event_RemoveEntry(class URBUserWidget* Entry);
		void Event_UpdateEntry(class URBUserWidget* Entry, int32_t column, int32_t row);
		void Event_Clear();
		void PreConstruct(bool IsDesignTime);
		void Event_OnDataPending(bool bIsDataPending);
		void Event_RefreshPartyOptions();
		void BndEvt__PrivacyOption_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature(int32_t Value);
		void BndEvt__PartyMembersCanInviteOption_K2Node_ComponentBoundEvent_1_OnValueUpdated__DelegateSignature(int32_t Value);
		void BndEvt__IgnoreInviteRequestsOption_K2Node_ComponentBoundEvent_2_OnValueUpdated__DelegateSignature(int32_t Value);
		void BndEvt__SocialMenu_PartyWidget_LeavePartyBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void Event_EntriesUpdated();
		void ExecuteUbergraph_SocialMenu_PartyWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
