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
	 * BlueprintGeneratedClass SP_Health_TempHeal_Surface_BP.SP-Health-TempHeal-Surface_BP_C
	 * Size -> 0x0040 (FullSize[0x03A0] - InheritedSize[0x0360])
	 */
	class ASPHealthTempHealSurface_BP_C : public ABase_OpenSpaceContainer_BP_C
	{
	public:
		class UStaticMesh*                                         InteractionStaticMesh_1;                                 // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KIP6[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform_1;                                         // 0x0370(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
