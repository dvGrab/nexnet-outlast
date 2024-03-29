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
	 * BlueprintGeneratedClass Orphanage_Ceilings_01_BP.Orphanage_Ceilings-01_BP_C
	 * Size -> 0x001F (FullSize[0x0430] - InheritedSize[0x0411])
	 */
	class AOrphanage_Ceilings__BP_C : public ACeilingWood_BP_C
	{
	public:
		EGrayBoxMat_ENU                                            FloorMaterials;                                          // 0x0411(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGrayBoxMat_ENU                                            CeilingMaterials;                                        // 0x0412(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseOverwriteMaterials;                                   // 0x0413(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             NewSize;                                                 // 0x0414(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FModuleMeshData>                             Meshes;                                                  // 0x0420(0x0010) Edit, BlueprintVisible

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
