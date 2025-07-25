﻿#pragma once

/**
 * Name: READYORNOT
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
	 * AnimBlueprintGeneratedClass ANIMBP_C2_Charge.ANIMBP_C2_Charge_C
	 * Size -> 0x0100 (FullSize[0x0580] - InheritedSize[0x0480])
	 */
	class UANIMBP_C2_Charge_C : public UReadyOrNotAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0488(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x04B8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0500(0x0080)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ANIMBP_C2_Charge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
