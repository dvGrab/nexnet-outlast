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
	 * BlueprintGeneratedClass Orphanage_FirstFloorWalls_01_BP.Orphanage_FirstFloorWalls-01_BP_C
	 * Size -> 0x0018 (FullSize[0x05A8] - InheritedSize[0x0590])
	 */
	class AOrphanage_FirstFloorWalls__BP_C : public AWall__BP_C
	{
	public:
		EGrayBoxMat_ENU                                            Materials;                                               // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseOverwriteMaterials;                                   // 0x0591(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseAlternativeBottomMoldings;                            // 0x0592(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_14B3[0x5];                                   // 0x0593(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             AlternativeMoldings;                                     // 0x0598(0x0010) Edit, BlueprintVisible

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
