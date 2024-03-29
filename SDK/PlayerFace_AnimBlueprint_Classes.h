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
	 * AnimBlueprintGeneratedClass PlayerFace_AnimBlueprint.PlayerFace_AnimBlueprint_C
	 * Size -> 0x1AC1 (FullSize[0x1E41] - InheritedSize[0x0380])
	 */
	class UPlayerFace_AnimBlueprint_C : public URBFaceAnimInstancePlayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0388(0x0030)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x03B8(0x01D8) ContainsInstancedReference
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0590(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x06E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0710(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0738(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0760(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0788(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x07B0(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x07D8(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x0898(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x08C0(0x0080)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode_5;                           // 0x0940(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x09E0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x0A10(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0A90(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x0AD8(0x0028)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive;                       // 0x0B00(0x0038)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x0B38(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x0BF8(0x0028)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode_4;                           // 0x0C20(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0CC0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x0D40(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x0DC0(0x00B8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x0E78(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0EF8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x0F78(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0FF8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x1078(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x10F8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x1178(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x11F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1278(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x12A8(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1358(0x0028)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode_3;                           // 0x1380(0x00A0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x1420(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x14E8(0x00C0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x15A8(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x15D8(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1698(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x16C0(0x0080)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode_2;                           // 0x1740(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x17E0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1810(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1890(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1950(0x0028)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode;                             // 0x1978(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1A18(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1A48(0x00B0)
		class UPoseAsset*                                          Poses;                                                   // 0x1AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       LipSyncAnim;                                             // 0x1B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasPoses;                                                // 0x1B08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEmoting;                                               // 0x1B09(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YS3C[0x2];                                   // 0x1B0A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExpressHowMuch;                                          // 0x1B0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       WhichExpressionAnim;                                     // 0x1B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	
	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_SequencePlayer_404532924029A937F0512CA92E79DA4B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_SequencePlayer_623BE6EA45C39828D44B40A3F6D82178();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_SequencePlayer_29ACEFB549CB7E12EF6F48A02556AF56();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_SequencePlayer_F5B438C841B7FE2C0A1ADA8962CC6408();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_SequencePlayer_680C5CDC47448BEB166EBEBEC1213F88();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_SequencePlayer_483D3E6542B6ADC5B00DD7818C2A4770();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_SequencePlayer_332555954DF116E745C621B435B42CD1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_SequencePlayer_4022A97E451BED0320E5D0928A5A7AD8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_SequencePlayer_DAD76DC142B93727221CF0A5CCA51AF1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_SequencePlayer_E28027A440B7311358E200B5388709A4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_50F1F86C468D09FE8EA9C184C3541823();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_136AC66C4A8A31FE4BA347BFBD036A74();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_906E9C5C4AE767841E8623BAFD40A08F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_97923E4F415468C899C8A59523741E7C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_37DA42E7450E6B51C2A43EB963CB4A22();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_DABDC9EF4637AF13A004E48636383B91();
		void BlueprintBeginPlay();
		void Update_Face_Poses(class ARBPlayer* RBPlayer);
		void LipSyncFeed();
		void ExecuteUbergraph_PlayerFace_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
