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
	 * Function HudTutorialMessages.HUDTutorialMessages_C.UpdateInputDecorator
	 */
	struct UHUDTutorialMessages_C_UpdateInputDecorator_Params
	{	};

	/**
	 * Function HudTutorialMessages.HUDTutorialMessages_C.UpdateTextSize
	 */
	struct UHUDTutorialMessages_C_UpdateTextSize_Params
	{
	public:
		EUIFontSize                                                Size;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5T10[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HudTutorialMessages.HUDTutorialMessages_C.ShouldShow
	 */
	struct UHUDTutorialMessages_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HudTutorialMessages.HUDTutorialMessages_C.SetMessage
	 */
	struct UHUDTutorialMessages_C_SetMessage_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HudTutorialMessages.HUDTutorialMessages_C.PreConstruct
	 */
	struct UHUDTutorialMessages_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HudTutorialMessages.HUDTutorialMessages_C.Construct
	 */
	struct UHUDTutorialMessages_C_Construct_Params
	{	};

	/**
	 * Function HudTutorialMessages.HUDTutorialMessages_C.Event_Show
	 */
	struct UHUDTutorialMessages_C_Event_Show_Params
	{	};

	/**
	 * Function HudTutorialMessages.HUDTutorialMessages_C.Event_Hide
	 */
	struct UHUDTutorialMessages_C_Event_Hide_Params
	{	};

	/**
	 * Function HudTutorialMessages.HUDTutorialMessages_C.CustomEvent_1
	 */
	struct UHUDTutorialMessages_C_CustomEvent_1_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HudTutorialMessages.HUDTutorialMessages_C.OnHideTutorialMessage_Event_1
	 */
	struct UHUDTutorialMessages_C_OnHideTutorialMessage_Event_1_Params
	{	};

	/**
	 * Function HudTutorialMessages.HUDTutorialMessages_C.OnTutorialSizeChangedEvent
	 */
	struct UHUDTutorialMessages_C_OnTutorialSizeChangedEvent_Params
	{	};

	/**
	 * Function HudTutorialMessages.HUDTutorialMessages_C.ExecuteUbergraph_HUDTutorialMessages
	 */
	struct UHUDTutorialMessages_C_ExecuteUbergraph_HUDTutorialMessages_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T0XQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
