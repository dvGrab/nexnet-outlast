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
	 * AnimBlueprintGeneratedClass enemyFace_AnimBlueprint.enemyFace_AnimBlueprint_C
	 * Size -> 0x18D0 (FullSize[0x1C40] - InheritedSize[0x0370])
	 */
	class UenemyFace_AnimBlueprint_C : public URBFaceAnimInstanceNPC
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x0378(0x01D8) ContainsInstancedReference
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode_2;                           // 0x0550(0x00A0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x05F0(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x06B0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x0808(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x0830(0x0080)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode;                             // 0x08B0(0x00A0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x0950(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0A18(0x0048)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0A60(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x0A90(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x0AB8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0B38(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x0BB8(0x00B8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x0C70(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0CF0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0D70(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0DF0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0E70(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0EF0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0F70(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0FF0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1070(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x10A0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1150(0x0158)
		unsigned char                                              UnknownData_JENW[0x8];                                   // 0x12A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x12B0(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1460(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1480(0x0020)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x14A0(0x01B0)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_2;                     // 0x1650(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x1688(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x16B0(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1778(0x0028)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive;                       // 0x17A0(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x17D8(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1800(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x18C0(0x0028)
		class UPoseAsset*                                          PoseAsset;                                               // 0x18E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LookAtLocation;                                          // 0x18F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LookAtAlpha;                                             // 0x18FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       LipSyncAnim;                                             // 0x1900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasPoses;                                                // 0x1908(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEmoting;                                               // 0x1909(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NX68[0x2];                                   // 0x190A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExpressHowMuch;                                          // 0x190C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       ExpressionAnim;                                          // 0x1910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	
	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_enemyFace_AnimBlueprint_AnimGraphNode_SequencePlayer_681284D14E5F7267689B6CAE46B40DE1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_enemyFace_AnimBlueprint_AnimGraphNode_SequencePlayer_4003859D4D24948F25B9518E6CDB1790();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_enemyFace_AnimBlueprint_AnimGraphNode_SequencePlayer_E3DBC80A429E43446C41E39C7FCA59D4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_enemyFace_AnimBlueprint_AnimGraphNode_SequencePlayer_7864CBA44BB0742BD0940596B8A9C321();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_enemyFace_AnimBlueprint_AnimGraphNode_SequencePlayer_3F69592140A5CCB92AB624BD06C5DC95();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_enemyFace_AnimBlueprint_AnimGraphNode_SequencePlayer_240BDEAC4A921AB7B8BF64ADE31CCE18();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_enemyFace_AnimBlueprint_AnimGraphNode_SequencePlayer_76D0BDB64D19FCEFDDC1D39FAF6C666C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_enemyFace_AnimBlueprint_AnimGraphNode_SequencePlayer_01F6FB624A1A25671D48BAABF1B697C1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_enemyFace_AnimBlueprint_AnimGraphNode_SequencePlayer_D329ECF64947A06FB9719ABB5DD75DB9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_enemyFace_AnimBlueprint_AnimGraphNode_SequencePlayer_3C08EC914CC48D279176A5B181D6F8B3();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void PlayFace();
		void LipSyncFeed();
		void BlueprintBeginPlay();
		void ExecuteUbergraph_enemyFace_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
