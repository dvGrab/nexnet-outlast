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
	 * Function Subtitles.Subtitles_C.AddStringToMessage
	 */
	struct USubtitles_C_AddStringToMessage_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              string;                                                  // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Subtitles.Subtitles_C.IsCJKLanguage
	 */
	struct USubtitles_C_IsCJKLanguage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X0N3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Subtitles.Subtitles_C.GetMaxCharactersPerLine
	 */
	struct USubtitles_C_GetMaxCharactersPerLine_Params
	{
	public:
		int32_t                                                    MaxCharactersPerLine;                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Subtitles.Subtitles_C.UpdateTextSize
	 */
	struct USubtitles_C_UpdateTextSize_Params
	{
	public:
		EUIFontSize                                                Size;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RPN5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Subtitles.Subtitles_C.SetSubtitleText
	 */
	struct USubtitles_C_SetSubtitleText_Params
	{
	public:
		class FString                                              subTitleText;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Subtitles.Subtitles_C.Construct
	 */
	struct USubtitles_C_Construct_Params
	{	};

	/**
	 * Function Subtitles.Subtitles_C.OnCurrentSubtitleUpdated
	 */
	struct USubtitles_C_OnCurrentSubtitleUpdated_Params
	{
	public:
		class FString                                              CurrentSubtitle;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Subtitles.Subtitles_C.OnSubtitleConfigChanged
	 */
	struct USubtitles_C_OnSubtitleConfigChanged_Params
	{	};

	/**
	 * Function Subtitles.Subtitles_C.ExecuteUbergraph_Subtitles
	 */
	struct USubtitles_C_ExecuteUbergraph_Subtitles_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J3LR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
