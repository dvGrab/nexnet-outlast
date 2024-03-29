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
	 * BlueprintGeneratedClass Base_PropagandaPoster_InteractionComponent_BP.Base_PropagandaPoster_InteractionComponent_BP_C
	 * Size -> 0x0008 (FullSize[0x0768] - InheritedSize[0x0760])
	 */
	class UBase_PropagandaPoster_InteractionComponent_BP_C : public URBSimpleInteractionComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0760(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		void SnapToState();
		void ExecuteUbergraph_Base_PropagandaPoster_InteractionComponent_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
