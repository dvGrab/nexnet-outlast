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
	 * WidgetBlueprintGeneratedClass MatchStartCountdownWidget.MatchStartCountdownWidget_C
	 * Size -> 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
	 */
	class UMatchStartCountdownWidget_C : public URBHUDElementWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCommonHudCountdown_C*                               CommonHudCountdown;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      MatchStartServerTime;                                    // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MatchCountdownActive;                                    // 0x02FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsStartingSoon;                                          // 0x02FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EBJL[0x2];                                   // 0x02FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MatchCountdownStartServerTime;                           // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReadyToTravelToMatch;                                    // 0x0304(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       FindPartyActive;                                         // 0x0305(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EFindPartyTicketState                                      findPartyTicketState;                                    // 0x0306(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsRelease;                                              // 0x0307(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                Program_Id;                                              // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Trial_Id;                                                // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FText GetFindPartySearchingText();
		void UpdateCountdownText();
		void OnFindPartyTicketStateUpdated(EFindPartyTicketState findPartyTicketState);
		void OnFindPartyStateUpdated(const struct FFindPartyState& FindPartyState);
		void UpdateText();
		void OnMatchStateUpdated(const struct FMatchState& MatchState);
		void SetIsRightAligned(bool isRightAligned);
		bool ShouldShow();
		void CancelMatchCountdown();
		void StartMatchCountdown(float MatchCancelationGracePeriodServerTime, float MatchStartServerTime, bool bReadyToTravelToMatch);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Destruct();
		void OnMatchStateUpdatedEvent(class ARBLobbyPlayerState* RBLobbyPlayerState, const struct FMatchState& MatchState);
		void OnFindPartyStateUpdatedEvent(class ARBLobbyPlayerState* RBLobbyPlayerState, const struct FFindPartyState& FindPartyState);
		void OnFindPartyTicketStateUpdatedEvent(EFindPartyTicketState findPartyTicketState);
		void ExecuteUbergraph_MatchStartCountdownWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
