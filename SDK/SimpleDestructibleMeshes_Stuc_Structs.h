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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct SimpleDestructibleMeshes_Stuc.SimpleDestructibleMeshes_Stuc
	 * Size -> 0x0040
	 */
	struct FSimpleDestructibleMeshes_Stuc
	{
	public:
		class UStaticMesh*                                         Meshes_30_F145667A40528EE611AD4399B1A02425;              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   Material_36_55DF3787400A225E6D181597C6E43BB4;            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          MeshesTransForm_29_BE02A85A4D672EC0EE0753BA5DB32250;     // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
