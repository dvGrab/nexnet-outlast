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
	 * Function Projectile_Taser.Projectile_Taser_C.UserConstructionScript
	 */
	struct AProjectile_Taser_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_Taser.Projectile_Taser_C.ReceiveBeginPlay
	 */
	struct AProjectile_Taser_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_Taser.Projectile_Taser_C.OnDeflect
	 */
	struct AProjectile_Taser_C_OnDeflect_Params
	{
	public:
		struct FHitResult                                          DeflectionHit;                                           // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_Taser.Projectile_Taser_C.ExecuteUbergraph_Projectile_Taser
	 */
	struct AProjectile_Taser_C_ExecuteUbergraph_Projectile_Taser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
