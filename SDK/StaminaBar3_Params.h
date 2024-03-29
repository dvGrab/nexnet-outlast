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
	 * Function StaminaBar3.StaminaBar3_C.GetStaminaBoosterValue
	 */
	struct UStaminaBar3_C_GetStaminaBoosterValue_Params
	{
	public:
		float                                                      StaminaBoosterValue;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaminaBar3.StaminaBar3_C.ShouldShow
	 */
	struct UStaminaBar3_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EO87[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StaminaBar3.StaminaBar3_C.HandleMaxStaminaChanged
	 */
	struct UStaminaBar3_C_HandleMaxStaminaChanged_Params
	{
	public:
		float                                                      NewMaxStamina;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IEFD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StaminaBar3.StaminaBar3_C.HandleStaminaChanged
	 */
	struct UStaminaBar3_C_HandleStaminaChanged_Params
	{
	public:
		float                                                      newStamina;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaminaBar3.StaminaBar3_C.PreConstruct
	 */
	struct UStaminaBar3_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaminaBar3.StaminaBar3_C.Event_Show
	 */
	struct UStaminaBar3_C_Event_Show_Params
	{	};

	/**
	 * Function StaminaBar3.StaminaBar3_C.Event_Hide
	 */
	struct UStaminaBar3_C_Event_Hide_Params
	{	};

	/**
	 * Function StaminaBar3.StaminaBar3_C.Event_OnWatchedPlayerChanged
	 */
	struct UStaminaBar3_C_Event_OnWatchedPlayerChanged_Params
	{
	public:
		class ARBPlayer*                                           oldPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           NewPlayer;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaminaBar3.StaminaBar3_C.Destruct
	 */
	struct UStaminaBar3_C_Destruct_Params
	{	};

	/**
	 * Function StaminaBar3.StaminaBar3_C.OnStaminaChanged
	 */
	struct UStaminaBar3_C_OnStaminaChanged_Params
	{
	public:
		float                                                      newStamina;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsExhausted;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaminaBar3.StaminaBar3_C.OnMaxStaminaChanged
	 */
	struct UStaminaBar3_C_OnMaxStaminaChanged_Params
	{
	public:
		float                                                      maxStamina;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaminaBar3.StaminaBar3_C.ExecuteUbergraph_StaminaBar3
	 */
	struct UStaminaBar3_C_ExecuteUbergraph_StaminaBar3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FO0S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
