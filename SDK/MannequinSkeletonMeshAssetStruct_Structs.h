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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct MannequinSkeletonMeshAssetStruct.MannequinSkeletonMeshAssetStruct
	 * Size -> 0x0058
	 */
	struct FMannequinSkeletonMeshAssetStruct
	{
	public:
		class USkeletalMesh*                                       SkeletalMesh_13_BD5281B64ADA269F0A5CA48453A8C78B;        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class UMaterialInstance*>                Materials_11_C1E140E64BCA01DA84984D93459042E8;           // 0x0008(0x0050) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
