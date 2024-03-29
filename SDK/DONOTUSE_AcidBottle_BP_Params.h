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
	 * Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.GetObjectiveTypeIndex
	 */
	struct ADONOTUSE_AcidBottle_BP_C_GetObjectiveTypeIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ShouldBPTick
	 */
	struct ADONOTUSE_AcidBottle_BP_C_ShouldBPTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LRQC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.DamagePlayersInRadius
	 */
	struct ADONOTUSE_AcidBottle_BP_C_DamagePlayersInRadius_Params
	{
	public:
		EAcidBottleDamageType                                      DamageType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R7BA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBPlayer*                                           Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.OnHoldingPlayerChangedEvent_Event_1
	 */
	struct ADONOTUSE_AcidBottle_BP_C_OnHoldingPlayerChangedEvent_Event_1_Params
	{
	public:
		class ARBPawn*                                             holdingPlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBLargePickup*                                      largePickup;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ReceiveBeginPlay
	 */
	struct ADONOTUSE_AcidBottle_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.OnPlayerLanded
	 */
	struct ADONOTUSE_AcidBottle_BP_C_OnPlayerLanded_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      landingHeight;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.OnPlayerTraversal
	 */
	struct ADONOTUSE_AcidBottle_BP_C_OnPlayerTraversal_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      landingHeight;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ReceiveEndPlay
	 */
	struct ADONOTUSE_AcidBottle_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ReceiveTick
	 */
	struct ADONOTUSE_AcidBottle_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.OnDamagePlayer
	 */
	struct ADONOTUSE_AcidBottle_BP_C_OnDamagePlayer_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ExecuteUbergraph_DONOTUSE_AcidBottle_BP
	 */
	struct ADONOTUSE_AcidBottle_BP_C_ExecuteUbergraph_DONOTUSE_AcidBottle_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZY02[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
