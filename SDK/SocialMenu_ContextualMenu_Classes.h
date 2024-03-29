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
	 * WidgetBlueprintGeneratedClass SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C
	 * Size -> 0x0050 (FullSize[0x02C0] - InheritedSize[0x0270])
	 */
	class USocialMenu_ContextualMenu_C : public URBSocialMenuEntryContextualMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    WaitingAnimation;                                        // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UVerticalBox*                                        action_container;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_1;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USocialMenu_ContextualMenu_Action_C*                 SocialMenuEntryContextualMenuActionV2;                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USocialMenu_ContextualMenu_Action_C*                 SocialMenuEntryContextualMenuActionV2_2;                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USocialMenu_ContextualMenu_Action_C*                 SocialMenuEntryContextualMenuActionV2_3;                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USocialMenu_ContextualMenu_Action_C*                 SocialMenuEntryContextualMenuActionV2_4;                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USocialMenu_ContextualMenu_Action_C*                 SocialMenuEntryContextualMenuActionV2_5;                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USocialMenu_Slider_C*                                VoiceChatVolumeSlider;                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		class UWidget* DoCustomNavigation_1(EUINavigation Navigation);
		class FText GetActionText(ERBSocialMenuEntryAction Enumerator);
		void Event_Refresh();
		void OnActionTriggered(ERBSocialMenuEntryAction action);
		void BndEvt__SocialMenu_ContextualMenu_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature(float Value);
		void ExecuteUbergraph_SocialMenu_ContextualMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
