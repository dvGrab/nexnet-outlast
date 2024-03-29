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
	 * AnimBlueprintGeneratedClass Cont_Utility_ToolBox_GhostAnimBP.Cont-Utility-ToolBox_GhostAnimBP_C
	 * Size -> 0x09ED (FullSize[0x0CD5] - InheritedSize[0x02E8])
	 */
	class UCont_Utility_ToolBox_GhostAnimBP_C : public URBGhostAnimInstance
	{
	public:
		unsigned char                                              UnknownData_ZRML[0x8];                                   // 0x02E8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02F8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0328(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0350(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x0378(0x00A8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x0420(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x04C8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0548(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x05C8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x0648(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x06F0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0770(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x07A0(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0888(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0908(0x00A8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x09B0(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0A98(0x00A8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0B40(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0B70(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0BF0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0C20(0x00B0)
		float                                                      InteractHeight;                                          // 0x0CD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFirstPerson;                                           // 0x0CD4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Cont_Utility_ToolBox_GhostAnimBP_AnimGraphNode_BlendListByBool_8819851D42E8D98E3DA8C8B91EEC6D0D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Cont_Utility_ToolBox_GhostAnimBP_AnimGraphNode_BlendListByBool_2ED9ECC145655373C9D199ACC6508E74();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Cont_Utility_ToolBox_GhostAnimBP_AnimGraphNode_BlendListByBool_A61515FC4454D067468B69ADB37E9FF0();
		void BlueprintInitializeAnimation();
		void AnimNotify_ToolDone();
		void ExecuteUbergraph_Cont_Utility_ToolBox_GhostAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
