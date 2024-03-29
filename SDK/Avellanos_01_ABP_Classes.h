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
	 * AnimBlueprintGeneratedClass Avellanos_01_ABP.Avellanos-01_ABP_C
	 * Size -> 0x06D2 (FullSize[0x098A] - InheritedSize[0x02B8])
	 */
	class UAvellanos__ABP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_BFAQ[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0398(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x03C0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0440(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0470(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x04F0(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x0570(0x00B8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0628(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x06A8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x06D8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0758(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0788(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0808(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0838(0x00B0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x08E8(0x00A0)
		EAvellanosPointing                                         AvellanosPointing;                                       // 0x0988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAvellanosPointing                                         PreviousAvellanosPointing;                               // 0x0989(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void SetAvellanosPointing(EAvellanosPointing AvellanosPointing);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Avellanos__ABP_AnimGraphNode_TransitionResult_C6BE90A84210F83F60447EAAF137BDD3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Avellanos__ABP_AnimGraphNode_TransitionResult_8211F0FC4E1B13348F65A384249886A5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Avellanos__ABP_AnimGraphNode_TransitionResult_B3D859B24551D34AA4521EA92E7D8726();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Avellanos__ABP_AnimGraphNode_TransitionResult_5745248F4D0C6AB3A43FF592581F1B56();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Avellanos__ABP_AnimGraphNode_TransitionResult_22AC208E408EBF656C8A9D9A099C5BC7();
		void ExecuteUbergraph_Avellanos__ABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
