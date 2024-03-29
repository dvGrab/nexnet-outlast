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
	 * Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Playing
	 */
	struct UW_Briefing_Timeline_TrackWave_C_Playing_Params
	{
	public:
		float                                                      CurrentPlayTime;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.EventListener
	 */
	struct UW_Briefing_Timeline_TrackWave_C_EventListener_Params
	{	};

	/**
	 * Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Scrubbed
	 */
	struct UW_Briefing_Timeline_TrackWave_C_Scrubbed_Params
	{	};

	/**
	 * Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.paused
	 */
	struct UW_Briefing_Timeline_TrackWave_C_paused_Params
	{	};

	/**
	 * Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Clear
	 */
	struct UW_Briefing_Timeline_TrackWave_C_Clear_Params
	{	};

	/**
	 * Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Restart
	 */
	struct UW_Briefing_Timeline_TrackWave_C_Restart_Params
	{	};

	/**
	 * Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.PreConstruct
	 */
	struct UW_Briefing_Timeline_TrackWave_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Tick
	 */
	struct UW_Briefing_Timeline_TrackWave_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Initialize
	 */
	struct UW_Briefing_Timeline_TrackWave_C_Initialize_Params
	{
	public:
		class USoundWave*                                          SoundWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<float, struct FTimelineEvent>                         EventEntries;                                            // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.DemoMode
	 */
	struct UW_Briefing_Timeline_TrackWave_C_DemoMode_Params
	{	};

	/**
	 * Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.ExecuteUbergraph_W_Briefing_Timeline_TrackWave
	 */
	struct UW_Briefing_Timeline_TrackWave_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWave_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1625[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.TimelineEventEnded__DelegateSignature
	 */
	struct UW_Briefing_Timeline_TrackWave_C_TimelineEventEnded__DelegateSignature_Params
	{
	public:
		float                                                      EventId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.TimelineEventFired__DelegateSignature
	 */
	struct UW_Briefing_Timeline_TrackWave_C_TimelineEventFired__DelegateSignature_Params
	{
	public:
		float                                                      EventId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
