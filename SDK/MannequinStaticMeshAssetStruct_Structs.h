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
	 * UserDefinedStruct MannequinStaticMeshAssetStruct.MannequinStaticMeshAssetStruct
	 * Size -> 0x0060
	 */
	struct FMannequinStaticMeshAssetStruct
	{
	public:
		class FName                                                SocketName_6_8A82A5E441EBFD58CB5E6CB9EF488125;           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         StaticMesh_5_BD5281B64ADA269F0A5CA48453A8C78B;           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class UMaterialInstance*>                Materials_11_C1E140E64BCA01DA84984D93459042E8;           // 0x0010(0x0050) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
