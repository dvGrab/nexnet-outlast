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
	 * Function MainMenuTransition.MainMenuTransition_C.UpdateFade
	 */
	struct UMainMenuTransition_C_UpdateFade_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenuTransition.MainMenuTransition_C.Event_TransitionIn
	 */
	struct UMainMenuTransition_C_Event_TransitionIn_Params
	{	};

	/**
	 * Function MainMenuTransition.MainMenuTransition_C.Event_TransitionOut
	 */
	struct UMainMenuTransition_C_Event_TransitionOut_Params
	{	};

	/**
	 * Function MainMenuTransition.MainMenuTransition_C.Tick
	 */
	struct UMainMenuTransition_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenuTransition.MainMenuTransition_C.Play
	 */
	struct UMainMenuTransition_C_Play_Params
	{
	public:
		float                                                      Fade;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      fadeSpeed;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenuTransition.MainMenuTransition_C.Construct
	 */
	struct UMainMenuTransition_C_Construct_Params
	{	};

	/**
	 * Function MainMenuTransition.MainMenuTransition_C.ExecuteUbergraph_MainMenuTransition
	 */
	struct UMainMenuTransition_C_ExecuteUbergraph_MainMenuTransition_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
