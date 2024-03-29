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
	 * BlueprintGeneratedClass Plywood_01_BP.Plywood-01_BP_C
	 * Size -> 0x0035 (FullSize[0x0400] - InheritedSize[0x03CB])
	 */
	class APlywood__BP_C : public AMeshPopulate_Parent_C
	{
	public:
		unsigned char                                              UnknownData_OWAH[0x5];                                   // 0x03CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             PlywoodMeshes2Sided;                                     // 0x03D0(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             PlywoodMeshes1Sided;                                     // 0x03E0(0x0010) Edit, BlueprintVisible
		bool                                                       Use2sided;                                               // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseShadowMesh;                                           // 0x03F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       FlipMeshes;                                              // 0x03F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I2V0[0x1];                                   // 0x03F3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Offset;                                                  // 0x03F4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
