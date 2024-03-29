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
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.Set Current Audio Text
	 */
	struct UW_Briefing_Audio_C_Set_Current_Audio_Text_Params
	{
	public:
		float                                                      CurrentTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ST5I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.GetEventEntries
	 */
	struct UW_Briefing_Audio_C_GetEventEntries_Params
	{
	public:
		bool                                                       ForceUpdate;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6IBS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<float, struct FTimelineEvent>                         EventEntries1;                                           // 0x0008(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.SetAudioPlayProgress
	 */
	struct UW_Briefing_Audio_C_SetAudioPlayProgress_Params
	{
	public:
		class USoundWave*                                          PlayingSoundWave;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlaybackPercent;                                         // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.SetLoop
	 */
	struct UW_Briefing_Audio_C_SetLoop_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.Restart
	 */
	struct UW_Briefing_Audio_C_Restart_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.Stop
	 */
	struct UW_Briefing_Audio_C_Stop_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.GetTimerText
	 */
	struct UW_Briefing_Audio_C_GetTimerText_Params
	{
	public:
		float                                                      Time_sec;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TJTB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                TimerText;                                               // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.Play
	 */
	struct UW_Briefing_Audio_C_Play_Params
	{
	public:
		float                                                      StartTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_2_Loop__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_2_Loop__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_4_Rewind__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_4_Rewind__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_5_FastForward__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_5_FastForward__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_6_Restart__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_6_Restart__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.OnAudioFinished
	 */
	struct UW_Briefing_Audio_C_OnAudioFinished_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.Tick
	 */
	struct UW_Briefing_Audio_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.PreConstruct
	 */
	struct UW_Briefing_Audio_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_1_Stop__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_1_Stop__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_0_Play__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_0_Play__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.Initialize
	 */
	struct UW_Briefing_Audio_C_Initialize_Params
	{
	public:
		struct FMissionAudio                                       Audio;                                                   // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FTimelineEvent>                              TimelineEvents;                                          // 0x0058(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature_Params
	{
	public:
		float                                                      ClipStartTime;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_3_Play__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_3_Play__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_8_Stop__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_8_Stop__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_9_Rewind__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_9_Rewind__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_10_Restart__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_10_Restart__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_11_Loop__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_11_Loop__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_12_FastForward__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_12_FastForward__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature_Params
	{
	public:
		float                                                      EventId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature
	 */
	struct UW_Briefing_Audio_C_BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature_Params
	{
	public:
		float                                                      EventAudioStart;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      EventAudioDuration;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.Destruct
	 */
	struct UW_Briefing_Audio_C_Destruct_Params
	{	};

	/**
	 * Function W_Briefing_Audio.W_Briefing_Audio_C.ExecuteUbergraph_W_Briefing_Audio
	 */
	struct UW_Briefing_Audio_C_ExecuteUbergraph_W_Briefing_Audio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
