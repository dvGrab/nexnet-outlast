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
	 * BlueprintGeneratedClass Base_ButtonPress_InteractionComponent_BP.Base_ButtonPress_InteractionComponent_BP_C
	 * Size -> 0x0000 (FullSize[0x0760] - InheritedSize[0x0760])
	 */
	class UBase_ButtonPress_InteractionComponent_BP_C : public URBSimpleInteractionComponent
	{
	public:
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
