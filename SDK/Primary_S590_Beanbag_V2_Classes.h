﻿#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * BlueprintGeneratedClass Primary_S590_Beanbag_V2.Primary_S590_Beanbag_V2_C
	 * Size -> 0x0018 (FullSize[0x1318] - InheritedSize[0x1300])
	 */
	class APrimary_S590_Beanbag_V2_C : public AShotgun
	{
	public:
		class UPointLightComponent*                                PointLight;                                              // 0x1300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 PointLight1;                                             // 0x1308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        LightToggle1P;                                           // 0x1310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
