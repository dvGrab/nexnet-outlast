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
	 * BlueprintGeneratedClass CH_CeilingsSuspended_01_BP.CH_CeilingsSuspended-01_BP_C
	 * Size -> 0x002B (FullSize[0x0424] - InheritedSize[0x03F9])
	 */
	class ACH_CeilingsSuspended01_BP_C : public ASuspendedCeiling_BP_C
	{
	public:
		EGrayBoxMat_ENU                                            FloorMaterials;                                          // 0x03F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGrayBoxMat_ENU                                            CeilingMaterials;                                        // 0x03FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseOverwriteMaterials;                                   // 0x03FB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             NewSize;                                                 // 0x03FC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FModuleMeshData02>                           Meshes;                                                  // 0x0408(0x0010) Edit, BlueprintVisible
		struct FVector                                             Offset;                                                  // 0x0418(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
