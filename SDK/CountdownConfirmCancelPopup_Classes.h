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
	 * WidgetBlueprintGeneratedClass CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C
	 * Size -> 0x0030 (FullSize[0x0428] - InheritedSize[0x03F8])
	 */
	class UCountdownConfirmCancelPopup_C : public UError_ConfirmCancelPopupWidget_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                DisplayedText;                                           // 0x0400(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    TimeToCountdown;                                         // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CC18[0x4];                                   // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        CountdownTimer;                                          // 0x0420(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void Update_Countdown_Text(int32_t Countdown);
		void OnCountdownEnds();
		void StartCountdown(int32_t Time);
		void Event_InitializePopup(const class FText& TitleText, const class FText& MainText, const class FText& ConfirmText, const class FText& CancelText);
		void Destruct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_CountdownConfirmCancelPopup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
