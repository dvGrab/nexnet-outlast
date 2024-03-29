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
	 * Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.ResetPill
	 */
	struct ARespawn_Consumable_BP_C_ResetPill_Params
	{	};

	/**
	 * Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.SwapHand
	 */
	struct ARespawn_Consumable_BP_C_SwapHand_Params
	{	};

	/**
	 * Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.UserConstructionScript
	 */
	struct ARespawn_Consumable_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.OnPawnSpecialMoveCompleted
	 */
	struct ARespawn_Consumable_BP_C_OnPawnSpecialMoveCompleted_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInterrupted;                                            // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.OnPawnDoSpecialMoveAction
	 */
	struct ARespawn_Consumable_BP_C_OnPawnDoSpecialMoveAction_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.BP_OnConsumeItemAnimNotify
	 */
	struct ARespawn_Consumable_BP_C_BP_OnConsumeItemAnimNotify_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Respawn-Consumable_BP.Respawn-Consumable_BP_C.ExecuteUbergraph_Respawn-Consumable_BP
	 */
	struct ARespawn_Consumable_BP_C_ExecuteUbergraph_Respawn_Consumable_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_350E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
