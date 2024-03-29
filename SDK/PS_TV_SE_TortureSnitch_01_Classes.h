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
	 * BlueprintGeneratedClass PS_TV_SE_TortureSnitch_01.PS_TV_SE_TortureSnitch-01_C
	 * Size -> 0x0010 (FullSize[0x03A0] - InheritedSize[0x0390])
	 */
	class APS_TV_SE_TortureSnitch01_C : public ANarrativeScreenBase_BP_C
	{
	public:
		class UStaticMeshComponent*                                TelevisionMesh;                                          // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Screen01;                                                // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
