#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * BlueprintGeneratedClass SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C
	 * Size -> 0x001D (FullSize[0x0D9D] - InheritedSize[0x0D80])
	 */
	class USwitchesMatchPanelComponent_BP_C : public URBSwitchMatchPanelComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D80(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UStaticMeshComponent*>                        InteractionCountDiodes;                                  // 0x0D88(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      CompletedTimestamp;                                      // 0x0D98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFlipSwitchTurnedOff;                                    // 0x0D9C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void TurnOnFlipSwitches();
		void TurnOffFlipSwitches();
		bool ShouldBPTick();
		void GetInteractionDiodeColor(int32_t DiodeIndex, struct FLinearColor* DiodeColor);
		void RefreshInteractionDiodesState(bool bForceColor, const struct FLinearColor& ForcedColor);
		void AppendInteractionCountDiode(const class FName& Name);
		void OnGeneratorInteractibleStateChange();
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		void Event_OnPanelSuccessStateChanged();
		void ReceiveBeginPlay();
		void Event_OnNumbersOfInteractionChanged();
		void Event_OnCurrentPuzzleChanged();
		void ReceiveTick(float DeltaSeconds);
		void Event_OnResetStage();
		void Event_OnCurrentPuzzleReset();
		void ExecuteUbergraph_SwitchesMatchPanelComponent_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
