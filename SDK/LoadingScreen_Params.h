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
	 * Function LoadingScreen.LoadingScreen_C.Event_StartLoadingScreen
	 */
	struct ULoadingScreen_C_Event_StartLoadingScreen_Params
	{
	public:
		bool                                                       skipIntro;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoadingScreen.LoadingScreen_C.Event_StopLoadingScreen
	 */
	struct ULoadingScreen_C_Event_StopLoadingScreen_Params
	{
	public:
		bool                                                       skipOutro;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoadingScreen.LoadingScreen_C.FadeOutCompleted
	 */
	struct ULoadingScreen_C_FadeOutCompleted_Params
	{	};

	/**
	 * Function LoadingScreen.LoadingScreen_C.Construct
	 */
	struct ULoadingScreen_C_Construct_Params
	{	};

	/**
	 * Function LoadingScreen.LoadingScreen_C.OnHintFadeOutCompleted
	 */
	struct ULoadingScreen_C_OnHintFadeOutCompleted_Params
	{	};

	/**
	 * Function LoadingScreen.LoadingScreen_C.OnHintFadeInCompleted
	 */
	struct ULoadingScreen_C_OnHintFadeInCompleted_Params
	{	};

	/**
	 * Function LoadingScreen.LoadingScreen_C.ExecuteUbergraph_LoadingScreen
	 */
	struct ULoadingScreen_C_ExecuteUbergraph_LoadingScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
