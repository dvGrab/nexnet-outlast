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
	 * WidgetBlueprintGeneratedClass PartyInviteHudWidget.PartyInviteHudWidget_C
	 * Size -> 0x0070 (FullSize[0x0348] - InheritedSize[0x02D8])
	 */
	class UPartyInviteHudWidget_C : public URBPartyInviteNotificationUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    HideAnim;                                                // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowAnim;                                                // 0x02E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCommonNotificationWidget_C*                         CommonNotificationWidget;                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      CurrentTime;                                             // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalTime;                                               // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AcceptedColor;                                           // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        RefusedColor;                                            // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                TestPlayerName;                                          // 0x0320(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UTexture2D*                                          HardcoreIconTexture;                                     // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          RegularIconTexture;                                      // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Finished_1B7ED78D47D24A29ECB5FF94734C6C40();
		void Event_Show();
		void Event_UpdateDisplayTime(float DisplayTime, float totalDisplayTime);
		void Event_Hide();
		void Event_Accepted();
		void Event_Refused();
		void PreConstruct(bool IsDesignTime);
		void Event_InputSourceChanged(bool bIsGamepad);
		void BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_0_OnAcceptedButtonClicked__DelegateSignature();
		void BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_1_OnDeclinedButtonClicked__DelegateSignature();
		void Event_Blocked();
		void BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_2_OnBlockButtonClicked__DelegateSignature();
		void ExecuteUbergraph_PartyInviteHudWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
