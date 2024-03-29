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
	 * AnimBlueprintGeneratedClass GarageDoor_GhostAnimBP.GarageDoor_GhostAnimBP_C
	 * Size -> 0x0625 (FullSize[0x0915] - InheritedSize[0x02F0])
	 */
	class UGarageDoor_GhostAnimBP_C : public URBGhostAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02F8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0328(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0350(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0378(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x03A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x03C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x03F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0418(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0440(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0490(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x04C0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0540(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x0570(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0658(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0688(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0708(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0738(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0820(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0850(0x00B0)
		class URBHackPanelComponent*                               HackPanel;                                               // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBGarageDoor*                                       GarageDoor;                                              // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DebugHeight;                                             // 0x0910(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Released;                                                // 0x0914(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		bool FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason);
		void GetCurrentGarageDoorHeightRatio(float* HeightRatio);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_D40F81CF4CF87C842BB5FCBC27E67962();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E9620A0540FA1E73238AF8A84A884782();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_SequenceEvaluator_5AAA0EDA49095AF564260C9435CEF136();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_GhostAnimBP_AnimGraphNode_TransitionResult_A5EE02094A5E17E6834EB185ADA9BE5D();
		void BP_InitializeGhost();
		void AnimNotify_ActionDone();
		void AnimNotify_StepInDone();
		void ExecuteUbergraph_GarageDoor_GhostAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
