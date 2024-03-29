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
	 * BlueprintGeneratedClass FrequencyMatchPanelComponent_BP.FrequencyMatchPanelComponent_BP_C
	 * Size -> 0x0000 (FullSize[0x0800] - InheritedSize[0x0800])
	 */
	class UFrequencyMatchPanelComponent_BP_C : public URBFrequencyMatchPanelComponent
	{
	public:
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
