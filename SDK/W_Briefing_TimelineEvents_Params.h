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
	 * Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.Finished_CEF1E049428EE21AB58B96A8441038EA
	 */
	struct UW_Briefing_TimelineEvents_C_Finished_CEF1E049428EE21AB58B96A8441038EA_Params
	{	};

	/**
	 * Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.Initialize
	 */
	struct UW_Briefing_TimelineEvents_C_Initialize_Params
	{
	public:
		TMap<float, struct FTimelineEvent>                         EventEntries;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.AddEvent
	 */
	struct UW_Briefing_TimelineEvents_C_AddEvent_Params
	{
	public:
		float                                                      EventId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.EventClicked
	 */
	struct UW_Briefing_TimelineEvents_C_EventClicked_Params
	{
	public:
		float                                                      EventAudioStart;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      EventAudioDuration;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.ExecuteUbergraph_W_Briefing_TimelineEvents
	 */
	struct UW_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.OnEventClicked__DelegateSignature
	 */
	struct UW_Briefing_TimelineEvents_C_OnEventClicked__DelegateSignature_Params
	{
	public:
		float                                                      EventAudioStart;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      EventAudioDuration;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
