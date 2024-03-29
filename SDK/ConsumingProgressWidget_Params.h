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
	 * Function ConsumingProgressWidget.ConsumingProgressWidget_C.UpdateTextures
	 */
	struct UConsumingProgressWidget_C_UpdateTextures_Params
	{	};

	/**
	 * Function ConsumingProgressWidget.ConsumingProgressWidget_C.ShouldShow
	 */
	struct UConsumingProgressWidget_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsumingProgressWidget.ConsumingProgressWidget_C.UpdateProgress
	 */
	struct UConsumingProgressWidget_C_UpdateProgress_Params
	{
	public:
		float                                                      progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsumingProgressWidget.ConsumingProgressWidget_C.Construct
	 */
	struct UConsumingProgressWidget_C_Construct_Params
	{	};

	/**
	 * Function ConsumingProgressWidget.ConsumingProgressWidget_C.OnProgressChanged
	 */
	struct UConsumingProgressWidget_C_OnProgressChanged_Params
	{
	public:
		float                                                      newProgress;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsumingProgressWidget.ConsumingProgressWidget_C.Event_Hide
	 */
	struct UConsumingProgressWidget_C_Event_Hide_Params
	{	};

	/**
	 * Function ConsumingProgressWidget.ConsumingProgressWidget_C.OnStatusChanged
	 */
	struct UConsumingProgressWidget_C_OnStatusChanged_Params
	{
	public:
		EPlayerActionStatus                                        status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsumingProgressWidget.ConsumingProgressWidget_C.ExecuteUbergraph_ConsumingProgressWidget
	 */
	struct UConsumingProgressWidget_C_ExecuteUbergraph_ConsumingProgressWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T1FU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
