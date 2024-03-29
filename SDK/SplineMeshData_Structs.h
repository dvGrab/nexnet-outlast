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
	 * UserDefinedStruct SplineMeshData.SplineMeshData
	 * Size -> 0x0018
	 */
	struct FSplineMeshData
	{
	public:
		class UStaticMesh*                                         Mesh_6_6DA698EE4D7D9FAA5C983C9AD3EA5F30;                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FModuleAlternativeMeshData>                  MeshAlteratif_16_F197DA984E508A9BA03884B3FF8F5C03;       // 0x0008(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
