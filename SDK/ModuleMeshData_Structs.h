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
	 * UserDefinedStruct ModuleMeshData.ModuleMeshData
	 * Size -> 0x0020
	 */
	struct FModuleMeshData
	{
	public:
		class UStaticMesh*                                         Mesh_6_6DA698EE4D7D9FAA5C983C9AD3EA5F30;                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FModuleAlternativeMeshData>                  MeshAlteratif_16_F197DA984E508A9BA03884B3FF8F5C03;       // 0x0008(0x0010) Edit, BlueprintVisible
		float                                                      MeshSize_7_F259B0FB42FC3100A87A15A0144A11FC;             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CenterOffset_8_31C03F6741D174323CFBF1889D91A821;         // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
