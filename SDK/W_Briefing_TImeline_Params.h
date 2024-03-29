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
	 * Function W_Briefing_TImeline.W_Briefing_TImeline_C.Playing
	 */
	struct UW_Briefing_TImeline_C_Playing_Params
	{
	public:
		float                                                      CurrentPlayTime;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_TImeline.W_Briefing_TImeline_C.SetPlayState
	 */
	struct UW_Briefing_TImeline_C_SetPlayState_Params
	{
	public:
		E_Briefing_Audio_PlayStates                                AudioPlayState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioPlay
	 */
	struct UW_Briefing_TImeline_C_AudioPlay_Params
	{
	public:
		float                                                      Start;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioRestart
	 */
	struct UW_Briefing_TImeline_C_AudioRestart_Params
	{	};

	/**
	 * Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioPause
	 */
	struct UW_Briefing_TImeline_C_AudioPause_Params
	{	};

	/**
	 * Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioScrub
	 */
	struct UW_Briefing_TImeline_C_AudioScrub_Params
	{	};

	/**
	 * Function W_Briefing_TImeline.W_Briefing_TImeline_C.PreConstruct
	 */
	struct UW_Briefing_TImeline_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_TImeline.W_Briefing_TImeline_C.Initialize
	 */
	struct UW_Briefing_TImeline_C_Initialize_Params
	{
	public:
		TArray<struct FTimelineEvent>                              Events;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class USoundWave*                                          AudioWaveAsset;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_TImeline.W_Briefing_TImeline_C.DemoMode
	 */
	struct UW_Briefing_TImeline_C_DemoMode_Params
	{	};

	/**
	 * Function W_Briefing_TImeline.W_Briefing_TImeline_C.BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature
	 */
	struct UW_Briefing_TImeline_C_BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature_Params
	{
	public:
		float                                                      EventId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_TImeline.W_Briefing_TImeline_C.ExecuteUbergraph_W_Briefing_TImeline
	 */
	struct UW_Briefing_TImeline_C_ExecuteUbergraph_W_Briefing_TImeline_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
