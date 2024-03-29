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
	 * WidgetBlueprintGeneratedClass FriendInviteHudWidget.FriendInviteHudWidget_C
	 * Size -> 0x0028 (FullSize[0x0300] - InheritedSize[0x02D8])
	 */
	class UFriendInviteHudWidget_C : public URBFriendInviteNotificationUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    HideAnim;                                                // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowAnim;                                                // 0x02E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCommonNotificationWidget_C*                         CommonNotificationWidget;                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      CurrentTime;                                             // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalTime;                                               // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Finished_26B0BE55452502A8206556BB17217B15();
		void Event_Show();
		void Event_UpdateDisplayTime(float DisplayTime, float totalDisplayTime);
		void Event_Hide();
		void Event_Accepted();
		void Event_Refused();
		void Event_Blocked();
		void BndEvt__FriendInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_0_OnBlockButtonClicked__DelegateSignature();
		void BndEvt__FriendInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_1_OnAcceptedButtonClicked__DelegateSignature();
		void BndEvt__FriendInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_2_OnDeclinedButtonClicked__DelegateSignature();
		void ExecuteUbergraph_FriendInviteHudWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
