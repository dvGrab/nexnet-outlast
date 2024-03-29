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
	 * AnimBlueprintGeneratedClass ViolentKids_Mannequin_Base_AnimBP.ViolentKids_Mannequin_Base_AnimBP_C
	 * Size -> 0x04B0 (FullSize[0x0768] - InheritedSize[0x02B8])
	 */
	class UViolentKids_Mannequin_Base_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_GS2N[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x03C0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x03E8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0468(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0498(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0518(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0548(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x05C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x05F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0678(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x06A8(0x00B0)
		bool                                                       Waiting;                                                 // 0x0758(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsInit;                                                  // 0x0759(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QT36[0x6];                                   // 0x075A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UViolentKids_MannequinData_BP_C*                     animData;                                                // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void Reset();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ViolentKids_Mannequin_Base_AnimBP_AnimGraphNode_SequencePlayer_89CF84F14AC4205E48BFF085D9809275();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ViolentKids_Mannequin_Base_AnimBP_AnimGraphNode_SequencePlayer_72831DA84A1A09B669F925A2C8037386();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ViolentKids_Mannequin_Base_AnimBP_AnimGraphNode_SequencePlayer_1F79C62646144ACBBD46088AE3A2A834();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ViolentKids_Mannequin_Base_AnimBP_AnimGraphNode_SequencePlayer_7A429EAD4DB7F24131B40A92FA104F65();
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_ViolentKids_Mannequin_Base_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
