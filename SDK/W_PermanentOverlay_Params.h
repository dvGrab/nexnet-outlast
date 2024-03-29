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
	 * Function W_PermanentOverlay.W_PermanentOverlay_C.Construct
	 */
	struct UW_PermanentOverlay_C_Construct_Params
	{	};

	/**
	 * Function W_PermanentOverlay.W_PermanentOverlay_C.CustomEvent_1
	 */
	struct UW_PermanentOverlay_C_CustomEvent_1_Params
	{	};

	/**
	 * Function W_PermanentOverlay.W_PermanentOverlay_C.OnStatsStarted_Event_1
	 */
	struct UW_PermanentOverlay_C_OnStatsStarted_Event_1_Params
	{	};

	/**
	 * Function W_PermanentOverlay.W_PermanentOverlay_C.OnStatsSaved_Event_1
	 */
	struct UW_PermanentOverlay_C_OnStatsSaved_Event_1_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T9VU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              StatsName;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PermanentOverlay.W_PermanentOverlay_C.OnStatsUploadProgress_Event_1
	 */
	struct UW_PermanentOverlay_C_OnStatsUploadProgress_Event_1_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Percentage;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PermanentOverlay.W_PermanentOverlay_C.CustomEvent_2
	 */
	struct UW_PermanentOverlay_C_CustomEvent_2_Params
	{	};

	/**
	 * Function W_PermanentOverlay.W_PermanentOverlay_C.ExecuteUbergraph_W_PermanentOverlay
	 */
	struct UW_PermanentOverlay_C_ExecuteUbergraph_W_PermanentOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SAHT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
