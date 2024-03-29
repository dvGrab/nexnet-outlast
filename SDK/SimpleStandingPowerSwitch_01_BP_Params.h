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
	 * Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.ReceiveBeginPlay
	 */
	struct ASimpleStandingPowerSwitch__BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.Event_OnInteract
	 */
	struct ASimpleStandingPowerSwitch__BP_C_Event_OnInteract_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.NotifySpecialMoveStartedEvent
	 */
	struct ASimpleStandingPowerSwitch__BP_C_NotifySpecialMoveStartedEvent_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.Event_SnapToState
	 */
	struct ASimpleStandingPowerSwitch__BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.Event_OnResetStage
	 */
	struct ASimpleStandingPowerSwitch__BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.ExecuteUbergraph_SimpleStandingPowerSwitch-01_BP
	 */
	struct ASimpleStandingPowerSwitch__BP_C_ExecuteUbergraph_SimpleStandingPowerSwitch__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7HWJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
