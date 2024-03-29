#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.1
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
	 * AnimBlueprintGeneratedClass VertexPaintAnimBP.VertexPaintAnimBP_C
	 * Size -> 0x00E0 (FullSize[0x0398] - InheritedSize[0x02B8])
	 */
	class UVertexPaintAnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_UY8D[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x02F8(0x0080)
		class FScriptMulticastDelegate                             Decal;                                                   // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             RightFootDecal;                                          // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AnimNotify_Step();
		void AnimNotify_RightStep();
		void ExecuteUbergraph_VertexPaintAnimBP(int32_t EntryPoint);
		void RightFootDecal__DelegateSignature();
		void Decal__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
