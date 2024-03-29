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
	 * BlueprintGeneratedClass PoliceStation_Trial2_QuestItemCoord_BP.PoliceStation_Trial2_QuestItemCoord_BP_C
	 * Size -> 0x0000 (FullSize[0x3110] - InheritedSize[0x3110])
	 */
	class APoliceStation_Trial2_QuestItemCoord_BP_C : public ARBCorpseSearchObjectiveCoordinator
	{
	public:
		struct FSlateBrush GetClueObjectiveIconFromClueName(const class FName& clueName);
		class FText GetClueTextFromClueName(const class FName& clueName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
