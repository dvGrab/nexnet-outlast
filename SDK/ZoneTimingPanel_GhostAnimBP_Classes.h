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
	 * AnimBlueprintGeneratedClass ZoneTimingPanel_GhostAnimBP.ZoneTimingPanel_GhostAnimBP_C
	 * Size -> 0x09C0 (FullSize[0x0CB0] - InheritedSize[0x02F0])
	 */
	class UZoneTimingPanel_GhostAnimBP_C : public URBGhostAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02F8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x0328(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x0350(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x0378(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x03A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x03C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x03F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0418(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0440(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0468(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0490(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x04B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x04E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0508(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0530(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0558(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0580(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x05A8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x05D0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0650(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0680(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0700(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0730(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x07B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x07E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0860(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0890(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0910(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0940(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x09C0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x09F0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0A70(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0AA0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0B20(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0B50(0x00B0)
		class URBAnimInstancePlayer*                               PlayerAnimBP;                                            // 0x0C00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RelativeHeight;                                          // 0x0C08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P4EY[0x4];                                   // 0x0C0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DeviceActor;                                             // 0x0C10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TableHeightPercentage;                                   // 0x0C18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSucceeded;                                             // 0x0C1C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ResultsIn;                                               // 0x0C1D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PSIY[0x2];                                   // 0x0C1E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UZoneTimingPanelComponent_BP_C*                      ZoneTimingPanel;                                         // 0x0C20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimingInputResultType                                     TimingResult;                                            // 0x0C28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YA9Y[0x7];                                   // 0x0C29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             EntryComplete;                                           // 0x0C30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             FinishedComplete;                                        // 0x0C40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsExiting;                                               // 0x0C50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C63L[0x7];                                   // 0x0C51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGasGenerator_Handle_Skeleton_AnimBlueprint_C*       Handle;                                                  // 0x0C58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<ETimingInputResultType, class UAnimSequence*>         HandleAnims;                                             // 0x0C60(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void PlayHandleAnimation(bool IsWin, ETimingInputResultType Result);
		bool FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason);
		void IsGameplayCompleted(bool* completed);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_55BAD8D248767A509558DDBD1732AD8B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_0C5102BF4E32A86A96A556A054CEB926();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_2D1A56E5492C202037EF1DB46AAA8918();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_E2DA909E4F537B41E4E99194BBBF9C77();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_DB7D910542FD83701E37EC96BEC0952D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_421E4A2E427270F6B0A212B101BA0F6C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP_AnimGraphNode_TransitionResult_3B5BB8DF40BE74EFC561B3A3985BC47C();
		void BP_InitializeGhost();
		void AnimNotify_TurnStart();
		void AnimNotify_EntryDone();
		void AnimNotify_Finished();
		void BP_ClearGhost();
		void AnimNotify_EnterHold();
		void CustomEvent_1();
		void MinigameResult(class URBZoneTimingPanelComponent* panel, class ARBPlayer* Player, int32_t targetIndex, float Timestamp, ETimingInputResultType Result);
		void AnimNotify_Leave();
		void AnimNotify_Win();
		void ExecuteUbergraph_ZoneTimingPanel_GhostAnimBP(int32_t EntryPoint);
		void FinishedComplete__DelegateSignature();
		void EntryComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
