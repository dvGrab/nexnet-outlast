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
	 * BlueprintGeneratedClass HackPanelComponent_BP.HackPanelComponent_BP_C
	 * Size -> 0x0008 (FullSize[0x1358] - InheritedSize[0x1350])
	 */
	class UHackPanelComponent_BP_C : public URBHackPanelComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1350(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void GetLookAtLocation(struct FVector* outLookAtLocation);
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		void SnapToState();
		void ExecuteUbergraph_HackPanelComponent_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
