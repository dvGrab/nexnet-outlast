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
	 * AnimBlueprintGeneratedClass DoorTrap_GhostAnimBP.DoorTrap_GhostAnimBP_C
	 * Size -> 0x0641 (FullSize[0x0929] - InheritedSize[0x02E8])
	 */
	class UDoorTrap_GhostAnimBP_C : public URBGhostAnimInstance
	{
	public:
		unsigned char                                              UnknownData_13SC[0x8];                                   // 0x02E8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02F8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0328(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0350(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0378(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x03A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x03C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x03F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0418(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0440(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x04C0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x04F0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0570(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x05A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0620(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0650(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x06D0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0700(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0780(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x07B0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0830(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0860(0x00B0)
		class URBHackPanelComponent*                               HackPanel;                                               // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSuccess;                                               // 0x0918(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDone;                                                  // 0x0919(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4Z04[0x6];                                   // 0x091A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATriggerTrap_BatteryPowered_Right_BP_C*              ElectricTrapContainer;                                   // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       IsInterrupted;                                           // 0x0928(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		bool FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_9F1093994A9181A8611176AC74423FB2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_577D8F8D41BB1F9DD0D661A410CCD875();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_9CD9F7154AA6629B65EA898BF8FAAF4B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_DAD92257416CBE228F3739A9F16B6B0B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DoorTrap_GhostAnimBP_AnimGraphNode_TransitionResult_BB6F6C3A4C989E1ADEF73A98D2E8978C();
		void BP_InitializeGhost();
		void AnimNotify_Finish();
		void AnimNotify_SuccessDone();
		void AnimNotify_EntryDone();
		void ExecuteUbergraph_DoorTrap_GhostAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
