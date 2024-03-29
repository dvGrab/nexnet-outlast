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
	 * Function NumberRoll-01_BP.NumberRoll-01_BP_C.UpdateActualNumber
	 */
	struct ANumberRoll__BP_C_UpdateActualNumber_Params
	{
	public:
		float                                                      ActualNumber;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TargetNumber;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewActualNumber;                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NumberRoll-01_BP.NumberRoll-01_BP_C.UserConstructionScript
	 */
	struct ANumberRoll__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function NumberRoll-01_BP.NumberRoll-01_BP_C.ReceiveBeginPlay
	 */
	struct ANumberRoll__BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function NumberRoll-01_BP.NumberRoll-01_BP_C.ReceiveTick
	 */
	struct ANumberRoll__BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NumberRoll-01_BP.NumberRoll-01_BP_C.PushNumberRoll
	 */
	struct ANumberRoll__BP_C_PushNumberRoll_Params
	{
	public:
		int32_t                                                    TargetNumber;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NumberRoll-01_BP.NumberRoll-01_BP_C.SetLit
	 */
	struct ANumberRoll__BP_C_SetLit_Params
	{
	public:
		bool                                                       lit;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NumberRoll-01_BP.NumberRoll-01_BP_C.SetColor
	 */
	struct ANumberRoll__BP_C_SetColor_Params
	{
	public:
		bool                                                       ChangeColor;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NumberRoll-01_BP.NumberRoll-01_BP_C.ExecuteUbergraph_NumberRoll-01_BP
	 */
	struct ANumberRoll__BP_C_ExecuteUbergraph_NumberRoll__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
