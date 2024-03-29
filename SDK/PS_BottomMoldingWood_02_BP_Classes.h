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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PS_BottomMoldingWood_02_BP.PS_BottomMoldingWood-02_BP_C
	 * Size -> 0x0002 (FullSize[0x0433] - InheritedSize[0x0431])
	 */
	class APS_BottomMoldingWood02_BP_C : public ATripleMeshPopulate_BP_C
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
