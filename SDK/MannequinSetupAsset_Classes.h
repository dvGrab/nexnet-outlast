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
	 * BlueprintGeneratedClass MannequinSetupAsset.MannequinSetupAsset_C
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UMannequinSetupAsset_C : public UPrimaryDataAsset
	{
	public:
		TArray<struct FMannequinSkeletonMeshAssetStruct>           Skeletal_Meshes;                                         // 0x0030(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FMannequinStaticMeshAssetStruct>             Static_Meshes;                                           // 0x0040(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
