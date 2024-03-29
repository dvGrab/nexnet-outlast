#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * Function W_Briefing.W_Briefing_C.GetObjectives
	 */
	struct UW_Briefing_C_GetObjectives_Params
	{
	public:
		unsigned char                                              UnknownData_6OCO[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Briefing.W_Briefing_C.GetBriefingAudio
	 */
	struct UW_Briefing_C_GetBriefingAudio_Params
	{
	public:
		TArray<struct FMissionAudio>                               Audio;                                                   // 0x0000(0x0010)  (Parm, OutParm)
		TArray<struct FTimelineEvent>                              TimelineEvents;                                          // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function W_Briefing.W_Briefing_C.Original
	 */
	struct UW_Briefing_C_Original_Params
	{	};

	/**
	 * Function W_Briefing.W_Briefing_C.SetBriefingTaskButtonsActive
	 */
	struct UW_Briefing_C_SetBriefingTaskButtonsActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing.W_Briefing_C.OnMouseButtonDoubleClick
	 */
	struct UW_Briefing_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Briefing.W_Briefing_C.Construct
	 */
	struct UW_Briefing_C_Construct_Params
	{	};

	/**
	 * Function W_Briefing.W_Briefing_C.PreConstruct
	 */
	struct UW_Briefing_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing.W_Briefing_C.Hide
	 */
	struct UW_Briefing_C_Hide_Params
	{	};

	/**
	 * Function W_Briefing.W_Briefing_C.Reveal
	 */
	struct UW_Briefing_C_Reveal_Params
	{	};

	/**
	 * Function W_Briefing.W_Briefing_C.ExecuteUbergraph_W_Briefing
	 */
	struct UW_Briefing_C_ExecuteUbergraph_W_Briefing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MNPN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
