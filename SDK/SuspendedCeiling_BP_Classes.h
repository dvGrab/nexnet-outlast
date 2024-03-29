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
	 * BlueprintGeneratedClass SuspendedCeiling_BP.SuspendedCeiling_BP_C
	 * Size -> 0x002E (FullSize[0x03F9] - InheritedSize[0x03CB])
	 */
	class ASuspendedCeiling_BP_C : public AMeshPopulate_Parent_C
	{
	public:
		unsigned char                                              UnknownData_ZOD2[0x5];                                   // 0x03CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             TileGroup;                                               // 0x03D0(0x0010) Edit, BlueprintVisible
		bool                                                       UseRoof;                                                 // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MME2[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             TileBackGroup;                                           // 0x03E8(0x0010) Edit, BlueprintVisible
		bool                                                       UseShadowMesh;                                           // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
