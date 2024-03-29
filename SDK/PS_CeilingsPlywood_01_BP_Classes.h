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
	 * BlueprintGeneratedClass PS_CeilingsPlywood_01_BP.PS_CeilingsPlywood-01_BP_C
	 * Size -> 0x002B (FullSize[0x043C] - InheritedSize[0x0411])
	 */
	class APS_CeilingsPlywood01_BP_C : public AMeshPopulate_BP_C
	{
	public:
		EGrayBoxMat_ENU                                            FloorMaterials;                                          // 0x0411(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGrayBoxMat_ENU                                            CeilingMaterials;                                        // 0x0412(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseOverwriteMaterials;                                   // 0x0413(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             NewSize;                                                 // 0x0414(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FModuleMeshData02>                           Meshes;                                                  // 0x0420(0x0010) Edit, BlueprintVisible
		struct FVector                                             Offset_1;                                                // 0x0430(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
