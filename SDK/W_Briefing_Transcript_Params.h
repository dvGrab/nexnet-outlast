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
	 * Function W_Briefing_Transcript.W_Briefing_Transcript_C.HighlightEntry
	 */
	struct UW_Briefing_Transcript_C_HighlightEntry_Params
	{
	public:
		float                                                      EntryID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Transcript.W_Briefing_Transcript_C.Playing
	 */
	struct UW_Briefing_Transcript_C_Playing_Params
	{
	public:
		float                                                      CurrentPlayTime;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Transcript.W_Briefing_Transcript_C.Construct
	 */
	struct UW_Briefing_Transcript_C_Construct_Params
	{	};

	/**
	 * Function W_Briefing_Transcript.W_Briefing_Transcript_C.Initialize
	 */
	struct UW_Briefing_Transcript_C_Initialize_Params
	{
	public:
		TArray<struct FTranscript>                                 TranscriptEvents;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Briefing_Transcript.W_Briefing_Transcript_C.OnTranscriptEntryClicked
	 */
	struct UW_Briefing_Transcript_C_OnTranscriptEntryClicked_Params
	{
	public:
		float                                                      EntryID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Transcript.W_Briefing_Transcript_C.ExecuteUbergraph_W_Briefing_Transcript
	 */
	struct UW_Briefing_Transcript_C_ExecuteUbergraph_W_Briefing_Transcript_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Transcript.W_Briefing_Transcript_C.TranscriptClicked__DelegateSignature
	 */
	struct UW_Briefing_Transcript_C_TranscriptClicked__DelegateSignature_Params
	{
	public:
		float                                                      ClipStartTime;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
