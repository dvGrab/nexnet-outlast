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
	 * BlueprintGeneratedClass Orphanage_LinoleumFloors_01_BP.Orphanage_LinoleumFloors-01_BP_C
	 * Size -> 0x002C (FullSize[0x044C] - InheritedSize[0x0420])
	 */
	class AOrphanage_LinoleumFloors__BP_C : public AFloor_BP_C
	{
	public:
		EGrayBoxMat_ENU                                            FloorMaterials;                                          // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGrayBoxMat_ENU                                            CeilingMaterials;                                        // 0x0421(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseOverwriteMaterials;                                   // 0x0422(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2SQ8[0x1];                                   // 0x0423(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NewSize_1;                                               // 0x0424(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FModuleMeshData>                             Meshes;                                                  // 0x0430(0x0010) Edit, BlueprintVisible
		struct FVector                                             Offset;                                                  // 0x0440(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
