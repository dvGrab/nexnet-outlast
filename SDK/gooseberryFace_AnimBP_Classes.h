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
	 * AnimBlueprintGeneratedClass gooseberryFace_AnimBP.gooseberryFace_AnimBP_C
	 * Size -> 0x1C10 (FullSize[0x1EC8] - InheritedSize[0x02B8])
	 */
	class UgooseberryFace_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_LTNK[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x02C8(0x01D8) ContainsInstancedReference
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x04A0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x05F8(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0620(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0668(0x00A8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x0710(0x0158)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x0868(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x0928(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x09A8(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x09D0(0x00C0)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode_2;                           // 0x0A90(0x00A0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x0B30(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x0BF8(0x0028)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x0C20(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0DD0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0DF0(0x0020)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x0E10(0x01B0)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_2;                     // 0x0FC0(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x0FF8(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x1020(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x10E8(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1110(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x1140(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1168(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x12C0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x12E8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x1368(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x13E8(0x00B8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x14A0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x1520(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x15A0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x1620(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x16A0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1720(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x17A0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1820(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x18A0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x18D0(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1980(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x19A8(0x00C0)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode;                             // 0x1A68(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1B08(0x0028)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive;                       // 0x1B30(0x0038)
		class UPoseAsset*                                          PoseAsset;                                               // 0x1B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LookAtLocation;                                          // 0x1B70(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LookAtAlpha;                                             // 0x1B7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FuttermanSpeaking;                                       // 0x1B80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ATUV[0x7];                                   // 0x1B81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       LipSyncAnim;                                             // 0x1B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsEmoting;                                               // 0x1B90(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KY5U[0x3];                                   // 0x1B91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExpressHowMuch;                                          // 0x1B94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       ExpressionAnim;                                          // 0x1B98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	
	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_gooseberryFace_AnimBP_AnimGraphNode_SequencePlayer_F3ED8D0A452B35B997BDAAA87655FFE5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_gooseberryFace_AnimBP_AnimGraphNode_SequencePlayer_161FC3004A73C7B8FA32C0958C8638A9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_gooseberryFace_AnimBP_AnimGraphNode_SequencePlayer_295E5E1341F214353AC322956A8B4000();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_gooseberryFace_AnimBP_AnimGraphNode_SequencePlayer_9DF51F224A60FC846EE0DEBDED8E25AB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_gooseberryFace_AnimBP_AnimGraphNode_SequencePlayer_25FB64E24FE1BC857BE8BA95383FBF1F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_gooseberryFace_AnimBP_AnimGraphNode_SequencePlayer_E9D0007A4D90DE8BF8D2ABAC7DAA7AB9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_gooseberryFace_AnimBP_AnimGraphNode_SequencePlayer_0806ED15406172FA92C860AF938B7215();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_gooseberryFace_AnimBP_AnimGraphNode_SequencePlayer_949A292045682396E5A6BDA24425F86D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_gooseberryFace_AnimBP_AnimGraphNode_SequencePlayer_327C06784A0E4A0867195F9462F92709();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_gooseberryFace_AnimBP_AnimGraphNode_SequencePlayer_00B9936541F8AE2F97397F85D95F7B89();
		void LipSyncFeed();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void ExecuteUbergraph_gooseberryFace_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
