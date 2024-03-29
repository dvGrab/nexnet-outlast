#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
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
	 * Function TrapDart_BP.TrapDart_BP_C.OnRep_bDetached
	 */
	struct ATrapDart_BP_C_OnRep_bDetached_Params
	{	};

	/**
	 * Function TrapDart_BP.TrapDart_BP_C.SimulatePhysics
	 */
	struct ATrapDart_BP_C_SimulatePhysics_Params
	{
	public:
		bool                                                       bAddImpulse;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7K27[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TrapDart_BP.TrapDart_BP_C.ReachEndOfCable
	 */
	struct ATrapDart_BP_C_ReachEndOfCable_Params
	{	};

	/**
	 * Function TrapDart_BP.TrapDart_BP_C.BP_OnLaunchEvent
	 */
	struct ATrapDart_BP_C_BP_OnLaunchEvent_Params
	{	};

	/**
	 * Function TrapDart_BP.TrapDart_BP_C.Electrify
	 */
	struct ATrapDart_BP_C_Electrify_Params
	{	};

	/**
	 * Function TrapDart_BP.TrapDart_BP_C.BP_OnHitPlayer
	 */
	struct ATrapDart_BP_C_BP_OnHitPlayer_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrapDart_BP.TrapDart_BP_C.BP_OnDetachFromPlayer
	 */
	struct ATrapDart_BP_C_BP_OnDetachFromPlayer_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrapDart_BP.TrapDart_BP_C.BP_OnReachedMaxLimitServer
	 */
	struct ATrapDart_BP_C_BP_OnReachedMaxLimitServer_Params
	{	};

	/**
	 * Function TrapDart_BP.TrapDart_BP_C.BP_OnPlayerDamage
	 */
	struct ATrapDart_BP_C_BP_OnPlayerDamage_Params
	{	};

	/**
	 * Function TrapDart_BP.TrapDart_BP_C.BP_OnPlayerPsychosis
	 */
	struct ATrapDart_BP_C_BP_OnPlayerPsychosis_Params
	{	};

	/**
	 * Function TrapDart_BP.TrapDart_BP_C.ExecuteUbergraph_TrapDart_BP
	 */
	struct ATrapDart_BP_C_ExecuteUbergraph_TrapDart_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
