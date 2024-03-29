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
	 * UserDefinedStruct SimpleDestructiblePhysicalMesh_Stuc.SimpleDestructiblePhysicalMesh_Stuc
	 * Size -> 0x0044
	 */
	struct FSimpleDestructiblePhysicalMesh_Stuc
	{
	public:
		class UStaticMesh*                                         PhysicalMeshes_33_F145667A40528EE611AD4399B1A02425;      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_82BU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MeshesTransForm_29_BE02A85A4D672EC0EE0753BA5DB32250;     // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		float                                                      Mass_36_0F0C7725428A704A95F47BB382745C00;                // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
