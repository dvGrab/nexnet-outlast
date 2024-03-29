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
	 * Function MateHealthBar.MateHealthBar_C.TryConstructBracketsArray
	 */
	struct UMateHealthBar_C_TryConstructBracketsArray_Params
	{	};

	/**
	 * Function MateHealthBar.MateHealthBar_C.UpdateFifthBarVisibility
	 */
	struct UMateHealthBar_C_UpdateFifthBarVisibility_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MateHealthBar.MateHealthBar_C.ChainTweens
	 */
	struct UMateHealthBar_C_ChainTweens_Params
	{	};

	/**
	 * Function MateHealthBar.MateHealthBar_C.ProcessHealthEvent
	 */
	struct UMateHealthBar_C_ProcessHealthEvent_Params
	{
	public:
		float                                                      newHealth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SkipAnims;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F5G2[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MateHealthBar.MateHealthBar_C.PreConstruct
	 */
	struct UMateHealthBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MateHealthBar.MateHealthBar_C.ExecuteUbergraph_MateHealthBar
	 */
	struct UMateHealthBar_C_ExecuteUbergraph_MateHealthBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
