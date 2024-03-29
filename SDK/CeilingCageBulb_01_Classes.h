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
	 * BlueprintGeneratedClass CeilingCageBulb_01.CeilingCageBulb-01_C
	 * Size -> 0x0008 (FullSize[0x0758] - InheritedSize[0x0750])
	 */
	class ACeilingCageBulb01_C : public ACeilingLightBulbBase_C
	{
	public:
		class URBVolumetricFogLightComponent*                      RBVolumetricFogLight_1;                                  // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
