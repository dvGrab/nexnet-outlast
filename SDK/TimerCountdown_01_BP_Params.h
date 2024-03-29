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
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetTimerFrozen
	 */
	struct ATimerCountdown__BP_C_SetTimerFrozen_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetTimerEnabled
	 */
	struct ATimerCountdown__BP_C_SetTimerEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.TrySetTriggered
	 */
	struct ATimerCountdown__BP_C_TrySetTriggered_Params
	{
	public:
		bool                                                       triggered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetLinkedTriggerable
	 */
	struct ATimerCountdown__BP_C_SetLinkedTriggerable_Params
	{
	public:
		class ARBTriggerable*                                      Trigerable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.OnCurrentTimeChanged_Server
	 */
	struct ATimerCountdown__BP_C_OnCurrentTimeChanged_Server_Params
	{	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.OnRep_LightsON
	 */
	struct ATimerCountdown__BP_C_OnRep_LightsON_Params
	{	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.OnRep_CurrentDisplayTime
	 */
	struct ATimerCountdown__BP_C_OnRep_CurrentDisplayTime_Params
	{	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.UpdateTick
	 */
	struct ATimerCountdown__BP_C_UpdateTick_Params
	{	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetTickEnabled
	 */
	struct ATimerCountdown__BP_C_SetTickEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetCountdownTimer
	 */
	struct ATimerCountdown__BP_C_SetCountdownTimer_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.Set Lights On
	 */
	struct ATimerCountdown__BP_C_Set_Lights_On_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.DisplayTime
	 */
	struct ATimerCountdown__BP_C_DisplayTime_Params
	{
	public:
		float                                                      TimeSeconds;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.UserConstructionScript
	 */
	struct ATimerCountdown__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.Event_OnUntriggered
	 */
	struct ATimerCountdown__BP_C_Event_OnUntriggered_Params
	{	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.Event_OnTriggered
	 */
	struct ATimerCountdown__BP_C_Event_OnTriggered_Params
	{	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.ReceiveTick
	 */
	struct ATimerCountdown__BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.Event_OnResetStage
	 */
	struct ATimerCountdown__BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.ReceiveBeginPlay
	 */
	struct ATimerCountdown__BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetupLinkedTriggerable
	 */
	struct ATimerCountdown__BP_C_SetupLinkedTriggerable_Params
	{	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.TriggerChanged
	 */
	struct ATimerCountdown__BP_C_TriggerChanged_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RMFP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBTriggerable*                                      triggerable;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.ExecuteUbergraph_TimerCountdown-01_BP
	 */
	struct ATimerCountdown__BP_C_ExecuteUbergraph_TimerCountdown__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.TimerReachedZero__DelegateSignature
	 */
	struct ATimerCountdown__BP_C_TimerReachedZero__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
