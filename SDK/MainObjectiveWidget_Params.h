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
	 * Function MainObjectiveWidget.MainObjectiveWidget_C.UpdateIntermediateObjectives
	 */
	struct UMainObjectiveWidget_C_UpdateIntermediateObjectives_Params
	{	};

	/**
	 * Function MainObjectiveWidget.MainObjectiveWidget_C.Initialize
	 */
	struct UMainObjectiveWidget_C_Initialize_Params
	{
	public:
		class ARBBaseObjectiveCoordinator*                         coordinator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainObjectiveWidget.MainObjectiveWidget_C.SetProgressRatio
	 */
	struct UMainObjectiveWidget_C_SetProgressRatio_Params
	{
	public:
		float                                                      ratio;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainObjectiveWidget.MainObjectiveWidget_C.SetIsMakingPositiveProgress
	 */
	struct UMainObjectiveWidget_C_SetIsMakingPositiveProgress_Params
	{
	public:
		bool                                                       isMakingPositiveProgress;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainObjectiveWidget.MainObjectiveWidget_C.GetFadeInAnimation
	 */
	struct UMainObjectiveWidget_C_GetFadeInAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    FadeInAnimation;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainObjectiveWidget.MainObjectiveWidget_C.Finished_8A3EC16D4EBA343192A93F85CA6E35E3
	 */
	struct UMainObjectiveWidget_C_Finished_8A3EC16D4EBA343192A93F85CA6E35E3_Params
	{	};

	/**
	 * Function MainObjectiveWidget.MainObjectiveWidget_C.Construct
	 */
	struct UMainObjectiveWidget_C_Construct_Params
	{	};

	/**
	 * Function MainObjectiveWidget.MainObjectiveWidget_C.PreConstruct
	 */
	struct UMainObjectiveWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainObjectiveWidget.MainObjectiveWidget_C.Event_IsMakingPositiveProgress
	 */
	struct UMainObjectiveWidget_C_Event_IsMakingPositiveProgress_Params
	{
	public:
		bool                                                       isMakingPositiveProgress;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainObjectiveWidget.MainObjectiveWidget_C.Tick
	 */
	struct UMainObjectiveWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainObjectiveWidget.MainObjectiveWidget_C.Event_Completed
	 */
	struct UMainObjectiveWidget_C_Event_Completed_Params
	{	};

	/**
	 * Function MainObjectiveWidget.MainObjectiveWidget_C.Event_ProgressChanged
	 */
	struct UMainObjectiveWidget_C_Event_ProgressChanged_Params
	{
	public:
		float                                                      progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isPositiveProgress;                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LSVD[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                objectiveText;                                           // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MainObjectiveWidget.MainObjectiveWidget_C.ExecuteUbergraph_MainObjectiveWidget
	 */
	struct UMainObjectiveWidget_C_ExecuteUbergraph_MainObjectiveWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
