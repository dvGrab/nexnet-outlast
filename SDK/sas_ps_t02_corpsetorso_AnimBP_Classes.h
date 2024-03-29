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
	 * AnimBlueprintGeneratedClass sas_ps_t02_corpsetorso_AnimBP.sas_ps_t02_corpsetorso_AnimBP_C
	 * Size -> 0x0338 (FullSize[0x05F0] - InheritedSize[0x02B8])
	 */
	class Usas_ps_t02_corpsetorso_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_HJML[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x02F8(0x01D8) ContainsInstancedReference
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x04D0(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0590(0x0048)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x05D8(0x0018)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_sas_ps_t02_corpsetorso_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
