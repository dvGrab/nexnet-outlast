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
	 * BlueprintGeneratedClass SJ_ExplodingBulbLamp_01_BP.SJ_ExplodingBulbLamp-01_BP_C
	 * Size -> 0x000C (FullSize[0x0540] - InheritedSize[0x0534])
	 */
	class ASJ_ExplodingBulbLamp01_BP_C : public ASJ_ExplodingBulb01_BP_C
	{
	public:
		unsigned char                                              UnknownData_NZP0[0x4];                                   // 0x0534(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
