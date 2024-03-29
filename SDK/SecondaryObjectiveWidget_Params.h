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
	 * Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.ShouldShow
	 */
	struct USecondaryObjectiveWidget_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.SetCompleted
	 */
	struct USecondaryObjectiveWidget_C_SetCompleted_Params
	{	};

	/**
	 * Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.GetFadeInAnimation
	 */
	struct USecondaryObjectiveWidget_C_GetFadeInAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    FadeInAnimation;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.Event_ProgressChanged
	 */
	struct USecondaryObjectiveWidget_C_Event_ProgressChanged_Params
	{
	public:
		float                                                      progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isPositiveProgress;                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1ENQ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                objectiveText;                                           // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.ExecuteUbergraph_SecondaryObjectiveWidget
	 */
	struct USecondaryObjectiveWidget_C_ExecuteUbergraph_SecondaryObjectiveWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
