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
	 * BlueprintGeneratedClass LauncherProjectile_Base.LauncherProjectile_Base_C
	 * Size -> 0x0008 (FullSize[0x03C8] - InheritedSize[0x03C0])
	 */
	class ALauncherProjectile_Base_C : public AGrenadeProjectile
	{
	public:
		class UParticleSystemComponent*                            ExplodeParticleEffect;                                   // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
