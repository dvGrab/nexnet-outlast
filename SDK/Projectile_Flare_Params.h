#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Projectile_Flare.Projectile_Flare_C.ReceiveBeginPlay
	 */
	struct AProjectile_Flare_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_Flare.Projectile_Flare_C.SpawnLensFlare
	 */
	struct AProjectile_Flare_C_SpawnLensFlare_Params
	{	};

	/**
	 * Function Projectile_Flare.Projectile_Flare_C.ReceiveDestroyed
	 */
	struct AProjectile_Flare_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Projectile_Flare.Projectile_Flare_C.ExecuteUbergraph_Projectile_Flare
	 */
	struct AProjectile_Flare_C_ExecuteUbergraph_Projectile_Flare_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZN9Z[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
