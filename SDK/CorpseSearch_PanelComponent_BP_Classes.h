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
	 * BlueprintGeneratedClass CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C
	 * Size -> 0x0018 (FullSize[0x0918] - InheritedSize[0x0900])
	 */
	class UCorpseSearch_PanelComponent_BP_C : public URBSimpleHoldPanelComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0900(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAnimSequence*                                       AnchorSequence;                                          // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InteractionEndedTimestamp;                               // 0x0910(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastStimulusTriggeredTimestamp;                          // 0x0914(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool ShouldBPTick();
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		void BP_OnPawnInteractingChanged(class ARBPawn* newPawnInteracting);
		void ReceiveTick(float DeltaSeconds);
		void Event_OnResetStage();
		void ExecuteUbergraph_CorpseSearch_PanelComponent_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
