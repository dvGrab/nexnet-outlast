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
	 * Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.ShouldShow
	 */
	struct UMinigame_Progress_Widget_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Construct
	 */
	struct UMinigame_Progress_Widget_C_Construct_Params
	{	};

	/**
	 * Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Tick
	 */
	struct UMinigame_Progress_Widget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.OnMinigameOwnerChanged
	 */
	struct UMinigame_Progress_Widget_C_OnMinigameOwnerChanged_Params
	{
	public:
		class AActor*                                              progressOwner;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Event_Hide
	 */
	struct UMinigame_Progress_Widget_C_Event_Hide_Params
	{	};

	/**
	 * Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Event_Show
	 */
	struct UMinigame_Progress_Widget_C_Event_Show_Params
	{	};

	/**
	 * Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.ExecuteUbergraph_Minigame_Progress_Widget
	 */
	struct UMinigame_Progress_Widget_C_ExecuteUbergraph_Minigame_Progress_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
