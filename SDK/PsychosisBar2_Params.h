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
	 * Function PsychosisBar2.PsychosisBar2_C.SequenceEvent__ENTRYPOINTPsychosisBar2_1
	 */
	struct UPsychosisBar2_C_SequenceEvent__ENTRYPOINTPsychosisBar2_1_Params
	{	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.HandlePlayerStatusChanged
	 */
	struct UPsychosisBar2_C_HandlePlayerStatusChanged_Params
	{
	public:
		EPlayerIndicatorType                                       NewStatus;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.UpdateIcon
	 */
	struct UPsychosisBar2_C_UpdateIcon_Params
	{	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.ProcessPsychosisEvent
	 */
	struct UPsychosisBar2_C_ProcessPsychosisEvent_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SkipAnims;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J8XM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.ChainTweens
	 */
	struct UPsychosisBar2_C_ChainTweens_Params
	{	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.ShouldShow
	 */
	struct UPsychosisBar2_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F0OY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.IconMorphCompleted
	 */
	struct UPsychosisBar2_C_IconMorphCompleted_Params
	{	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.PreConstruct
	 */
	struct UPsychosisBar2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.Event_Show
	 */
	struct UPsychosisBar2_C_Event_Show_Params
	{	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.Event_Hide
	 */
	struct UPsychosisBar2_C_Event_Hide_Params
	{	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.Event_OnWatchedPlayerChanged
	 */
	struct UPsychosisBar2_C_Event_OnWatchedPlayerChanged_Params
	{
	public:
		class ARBPlayer*                                           oldPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           NewPlayer;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.OnPsychosisChanged
	 */
	struct UPsychosisBar2_C_OnPsychosisChanged_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.OnPlayerStatusChanged
	 */
	struct UPsychosisBar2_C_OnPlayerStatusChanged_Params
	{
	public:
		EPlayerIndicatorType                                       playerIndicatorType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.OnBarHidden
	 */
	struct UPsychosisBar2_C_OnBarHidden_Params
	{	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.Construct
	 */
	struct UPsychosisBar2_C_Construct_Params
	{	};

	/**
	 * Function PsychosisBar2.PsychosisBar2_C.ExecuteUbergraph_PsychosisBar2
	 */
	struct UPsychosisBar2_C_ExecuteUbergraph_PsychosisBar2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
