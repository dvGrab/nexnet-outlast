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
	 * Function TalkWheel_V2.TalkWheel_V2_C.RefreshSlices
	 */
	struct UTalkWheel_V2_C_RefreshSlices_Params
	{	};

	/**
	 * Function TalkWheel_V2.TalkWheel_V2_C.Highlight
	 */
	struct UTalkWheel_V2_C_Highlight_Params
	{
	public:
		int32_t                                                    SliceIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IRSP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TalkWheel_V2.TalkWheel_V2_C.ShouldShow
	 */
	struct UTalkWheel_V2_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TalkWheel_V2.TalkWheel_V2_C.PreConstruct
	 */
	struct UTalkWheel_V2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TalkWheel_V2.TalkWheel_V2_C.Event_Show
	 */
	struct UTalkWheel_V2_C_Event_Show_Params
	{	};

	/**
	 * Function TalkWheel_V2.TalkWheel_V2_C.Event_Hide
	 */
	struct UTalkWheel_V2_C_Event_Hide_Params
	{	};

	/**
	 * Function TalkWheel_V2.TalkWheel_V2_C.Event_HighlightWheel
	 */
	struct UTalkWheel_V2_C_Event_HighlightWheel_Params
	{
	public:
		int32_t                                                    wheelIndexValue;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TalkWheel_V2.TalkWheel_V2_C.Event_RefreshSlices
	 */
	struct UTalkWheel_V2_C_Event_RefreshSlices_Params
	{	};

	/**
	 * Function TalkWheel_V2.TalkWheel_V2_C.ExecuteUbergraph_TalkWheel_V2
	 */
	struct UTalkWheel_V2_C_ExecuteUbergraph_TalkWheel_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
