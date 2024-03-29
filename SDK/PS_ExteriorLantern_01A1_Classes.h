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
	 * BlueprintGeneratedClass PS_ExteriorLantern_01A1.PS_ExteriorLantern_01A1_C
	 * Size -> 0x0008 (FullSize[0x0750] - InheritedSize[0x0748])
	 */
	class APS_ExteriorLantern_01A1_C : public AWallLamp07_C
	{
	public:
		class URBVolumetricFogLightComponent*                      RBVolumetricFogLight;                                    // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
