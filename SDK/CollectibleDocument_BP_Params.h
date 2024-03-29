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
	 * Function CollectibleDocument_BP.CollectibleDocument_BP_C.UserConstructionScript
	 */
	struct ACollectibleDocument_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CollectibleDocument_BP.CollectibleDocument_BP_C.OnPawnSpecialMoveStarted
	 */
	struct ACollectibleDocument_BP_C_OnPawnSpecialMoveStarted_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CollectibleDocument_BP.CollectibleDocument_BP_C.ReceiveEndPlay
	 */
	struct ACollectibleDocument_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CollectibleDocument_BP.CollectibleDocument_BP_C.Event_OnWorldPopulateFinished
	 */
	struct ACollectibleDocument_BP_C_Event_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function CollectibleDocument_BP.CollectibleDocument_BP_C.ExecuteUbergraph_CollectibleDocument_BP
	 */
	struct ACollectibleDocument_BP_C_ExecuteUbergraph_CollectibleDocument_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QQBK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
