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
	 * BlueprintGeneratedClass SP_Utility_All_Surface_BP.SP-Utility-All-Surface_BP_C
	 * Size -> 0x0040 (FullSize[0x03B0] - InheritedSize[0x0370])
	 */
	class ASP_Utility_All_Surface_BP_C : public ABase_OpenSpaceContainer_BP_C
	{
	public:
		class UStaticMesh*                                         InteractionStaticMesh_1;                                 // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8GGY[0x8];                                   // 0x0378(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform_1;                                         // 0x0380(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
