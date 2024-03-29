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
	 * UserDefinedStruct ModuleMeshData_02.ModuleMeshData-02
	 * Size -> 0x0018
	 */
	struct FModuleMeshData
	{
	public:
		TArray<struct FModuleMeshData>                             Mesh_15_6DA698EE4D7D9FAA5C983C9AD3EA5F30;                // 0x0000(0x0010) Edit, BlueprintVisible
		float                                                      GroupMeshWidth_14_F259B0FB42FC3100A87A15A0144A11FC;      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SecondCenterOffset_19_BCB740FB4410BCFAB5466F944E4EED46;  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
