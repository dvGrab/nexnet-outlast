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
	 * Function Projectile_Base.Projectile_Base_C.UserConstructionScript
	 */
	struct AProjectile_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_Base.Projectile_Base_C.ReceiveBeginPlay
	 */
	struct AProjectile_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_Base.Projectile_Base_C.OnDeflect
	 */
	struct AProjectile_Base_C_OnDeflect_Params
	{
	public:
		struct FHitResult                                          DeflectionHit;                                           // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_Base.Projectile_Base_C.ExecuteUbergraph_Projectile_Base
	 */
	struct AProjectile_Base_C_ExecuteUbergraph_Projectile_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WOS0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
