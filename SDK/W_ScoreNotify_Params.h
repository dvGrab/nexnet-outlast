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
	 * Function W_ScoreNotify.W_ScoreNotify_C.DestroyWidget
	 */
	struct UW_ScoreNotify_C_DestroyWidget_Params
	{	};

	/**
	 * Function W_ScoreNotify.W_ScoreNotify_C.OnInitialized
	 */
	struct UW_ScoreNotify_C_OnInitialized_Params
	{	};

	/**
	 * Function W_ScoreNotify.W_ScoreNotify_C.PlayRewardAnim
	 */
	struct UW_ScoreNotify_C_PlayRewardAnim_Params
	{	};

	/**
	 * Function W_ScoreNotify.W_ScoreNotify_C.PreConstruct
	 */
	struct UW_ScoreNotify_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ScoreNotify.W_ScoreNotify_C.InitScoreData
	 */
	struct UW_ScoreNotify_C_InitScoreData_Params
	{
	public:
		class FText                                                InScoreText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    InScore;                                                 // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bGive;                                                   // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ScoreNotify.W_ScoreNotify_C.Tick
	 */
	struct UW_ScoreNotify_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ScoreNotify.W_ScoreNotify_C.Construct
	 */
	struct UW_ScoreNotify_C_Construct_Params
	{	};

	/**
	 * Function W_ScoreNotify.W_ScoreNotify_C.Destruct
	 */
	struct UW_ScoreNotify_C_Destruct_Params
	{	};

	/**
	 * Function W_ScoreNotify.W_ScoreNotify_C.ExecuteUbergraph_W_ScoreNotify
	 */
	struct UW_ScoreNotify_C_ExecuteUbergraph_W_ScoreNotify_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_24MO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
