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
	 * BlueprintGeneratedClass Carpet_Linear_01_BP.Carpet_Linear-01-BP_C
	 * Size -> 0x0027 (FullSize[0x03F2] - InheritedSize[0x03CB])
	 */
	class ACarpet_Linear_BP_C : public AMeshPopulate_Parent_C
	{
	public:
		unsigned char                                              UnknownData_32SS[0x5];                                   // 0x03CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             CarpetMeshes;                                            // 0x03D0(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             CarpetEndMeshes;                                         // 0x03E0(0x0010) Edit, BlueprintVisible
		bool                                                       UseCarpetEnd;                                            // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EMeshPopulateDirection                                     Direction;                                               // 0x03F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
