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
	 * AnimBlueprintGeneratedClass SE_MansionTheatre_Ghost_AnimBP.SE_MansionTheatre_Ghost_AnimBP_C
	 * Size -> 0x0278 (FullSize[0x0560] - InheritedSize[0x02E8])
	 */
	class USE_MansionTheatre_Ghost_AnimBP_C : public URBGhostAnimInstance
	{
	public:
		unsigned char                                              UnknownData_5L0G[0x8];                                   // 0x02E8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02F8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0328(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0350(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x03D0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0400(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0480(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x04B0(0x00B0)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AnimNotify_Finished();
		void AnimNotify_SwapHand();
		void ExecuteUbergraph_SE_MansionTheatre_Ghost_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
