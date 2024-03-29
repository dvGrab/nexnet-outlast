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
	 * BlueprintGeneratedClass OR_BottomMolding_01_BP.OR_BottomMolding-01_BP_C
	 * Size -> 0x0002 (FullSize[0x0433] - InheritedSize[0x0431])
	 */
	class AOR_BottomMolding__BP_C : public ATripleMeshPopulate_BP_C
	{
	public:
		EGrayBoxMat_ENU                                            Materials;                                               // 0x0431(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseOverwriteMaterials;                                   // 0x0432(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
