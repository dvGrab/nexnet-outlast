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
	 * BlueprintGeneratedClass Orphanage_CarpetFloors_01_BP.Orphanage_CarpetFloors-01_BP_C
	 * Size -> 0x0031 (FullSize[0x03FC] - InheritedSize[0x03CB])
	 */
	class AOrphanage_CarpetFloors__BP_C : public AMeshPopulate_Parent_C
	{
	public:
		EGrayBoxMat_ENU                                            FloorMaterials;                                          // 0x03CB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGrayBoxMat_ENU                                            CeilingMaterials;                                        // 0x03CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseOverwriteMaterials;                                   // 0x03CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IC9M[0x2];                                   // 0x03CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NewSize;                                                 // 0x03D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VVLB[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             Meshes;                                                  // 0x03E0(0x0010) Edit, BlueprintVisible
		struct FVector                                             Offset;                                                  // 0x03F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
