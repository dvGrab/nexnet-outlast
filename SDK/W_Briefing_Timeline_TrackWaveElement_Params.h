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
	 * Function W_Briefing_Timeline_TrackWaveElement.W_Briefing_Timeline_TrackWaveElement_C.SetStyle
	 */
	struct UW_Briefing_Timeline_TrackWaveElement_C_SetStyle_Params
	{
	public:
		bool                                                       IsTimelineEvent;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_Timeline_TrackWaveElement.W_Briefing_Timeline_TrackWaveElement_C.SetWaveLength
	 */
	struct UW_Briefing_Timeline_TrackWaveElement_C_SetWaveLength_Params
	{
	public:
		float                                                      Length;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Timeline_TrackWaveElement.W_Briefing_Timeline_TrackWaveElement_C.PreConstruct
	 */
	struct UW_Briefing_Timeline_TrackWaveElement_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_Timeline_TrackWaveElement.W_Briefing_Timeline_TrackWaveElement_C.Construct
	 */
	struct UW_Briefing_Timeline_TrackWaveElement_C_Construct_Params
	{	};

	/**
	 * Function W_Briefing_Timeline_TrackWaveElement.W_Briefing_Timeline_TrackWaveElement_C.ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement
	 */
	struct UW_Briefing_Timeline_TrackWaveElement_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WDA3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
