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
	 * BlueprintGeneratedClass TripleMeshPopulate_BP.TripleMeshPopulate_BP_C
	 * Size -> 0x0066 (FullSize[0x0431] - InheritedSize[0x03CB])
	 */
	class ATripleMeshPopulate_BP_C : public AMeshPopulate_Parent_C
	{
	public:
		EMeshPopulateDirection                                     Direction;                                               // 0x03CB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YX1J[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             Body;                                                    // 0x03D0(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             Lower;                                                   // 0x03E0(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             Upper;                                                   // 0x03F0(0x0010) Edit, BlueprintVisible
		struct FVector                                             Offset;                                                  // 0x0400(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseShadowBox;                                            // 0x040C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JFN4[0x3];                                   // 0x040D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ShadowBoxOffset;                                         // 0x0410(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_21JR[0x4];                                   // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStaticmeshArray_Stuc>                       AllStactimeshArray;                                      // 0x0420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       Z_Inverted;                                              // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
