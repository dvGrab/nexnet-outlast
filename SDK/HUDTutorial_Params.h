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
	 * Function HUDTutorial.HUDTutorial_C.ShouldShow
	 */
	struct UHUDTutorial_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDTutorial.HUDTutorial_C.Construct
	 */
	struct UHUDTutorial_C_Construct_Params
	{	};

	/**
	 * Function HUDTutorial.HUDTutorial_C.OnShowHUDTutorial_Event_1
	 */
	struct UHUDTutorial_C_OnShowHUDTutorial_Event_1_Params
	{
	public:
		struct FHUDTutorialTextData                                tutorialData;                                            // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUDTutorial.HUDTutorial_C.OnHideHUDTutorial_Event_1
	 */
	struct UHUDTutorial_C_OnHideHUDTutorial_Event_1_Params
	{	};

	/**
	 * Function HUDTutorial.HUDTutorial_C.Event_Show
	 */
	struct UHUDTutorial_C_Event_Show_Params
	{	};

	/**
	 * Function HUDTutorial.HUDTutorial_C.Event_Hide
	 */
	struct UHUDTutorial_C_Event_Hide_Params
	{	};

	/**
	 * Function HUDTutorial.HUDTutorial_C.ExecuteUbergraph_HUDTutorial
	 */
	struct UHUDTutorial_C_ExecuteUbergraph_HUDTutorial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
