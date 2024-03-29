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
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.UpdateFifthBarVisibility
	 */
	struct UHealthBar6_Animated_C_UpdateFifthBarVisibility_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AnimateShow;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z8WK[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.InitHealthBars
	 */
	struct UHealthBar6_Animated_C_InitHealthBars_Params
	{
	public:
		bool                                                       AnimateShow;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.ProcessPlayerStatusChange
	 */
	struct UHealthBar6_Animated_C_ProcessPlayerStatusChange_Params
	{
	public:
		EPlayerIndicatorType                                       NewStatus;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.ChainTweens
	 */
	struct UHealthBar6_Animated_C_ChainTweens_Params
	{	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.ProcessHealthEvent
	 */
	struct UHealthBar6_Animated_C_ProcessHealthEvent_Params
	{
	public:
		float                                                      newHealth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Increased;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SkipAnims;                                               // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_92L6[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.ShouldShow
	 */
	struct UHealthBar6_Animated_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X1RU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.Event_Show
	 */
	struct UHealthBar6_Animated_C_Event_Show_Params
	{	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.Event_Hide
	 */
	struct UHealthBar6_Animated_C_Event_Hide_Params
	{	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.PreConstruct
	 */
	struct UHealthBar6_Animated_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.Event_OnWatchedPlayerChanged
	 */
	struct UHealthBar6_Animated_C_Event_OnWatchedPlayerChanged_Params
	{
	public:
		class ARBPlayer*                                           oldPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           NewPlayer;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.OnHealthUpdated
	 */
	struct UHealthBar6_Animated_C_OnHealthUpdated_Params
	{
	public:
		float                                                      newHealth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIncreased;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.OnPlayerIndicatorTypeChanged
	 */
	struct UHealthBar6_Animated_C_OnPlayerIndicatorTypeChanged_Params
	{
	public:
		EPlayerIndicatorType                                       playerIndicatorType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.OnAutoHealthRegenEnded
	 */
	struct UHealthBar6_Animated_C_OnAutoHealthRegenEnded_Params
	{	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.OnMaxHealthChanged
	 */
	struct UHealthBar6_Animated_C_OnMaxHealthChanged_Params
	{
	public:
		float                                                      maxHealth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.Construct
	 */
	struct UHealthBar6_Animated_C_Construct_Params
	{	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.Destruct
	 */
	struct UHealthBar6_Animated_C_Destruct_Params
	{	};

	/**
	 * Function HealthBar6_Animated.HealthBar6_Animated_C.ExecuteUbergraph_HealthBar6_Animated
	 */
	struct UHealthBar6_Animated_C_ExecuteUbergraph_HealthBar6_Animated_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
