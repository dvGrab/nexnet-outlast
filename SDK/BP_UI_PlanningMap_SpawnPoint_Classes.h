#pragma once

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
	 * BlueprintGeneratedClass BP_UI_PlanningMap_SpawnPoint.BP_UI_PlanningMap_SpawnPoint_C
	 * Size -> 0x0098 (FullSize[0x0290] - InheritedSize[0x01F8])
	 */
	class UBP_UI_PlanningMap_SpawnPoint_C : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_PBJ4[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		struct FSpawnPoints                                        SpawnPointInfo;                                          // 0x0200(0x0090) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
