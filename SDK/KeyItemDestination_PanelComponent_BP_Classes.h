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
	 * BlueprintGeneratedClass KeyItemDestination_PanelComponent_BP.KeyItemDestination_PanelComponent_BP_C
	 * Size -> 0x0000 (FullSize[0x0960] - InheritedSize[0x0960])
	 */
	class UKeyItemDestination_PanelComponent_BP_C : public URBInventoryItemInteractionPanelComponent
	{
	public:
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		class USceneComponent* GetItemDropRef(class ARBPickup* pickup);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
