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
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.HandleSliderOnInput
	 */
	struct UBaseOptionsEntry_C_HandleSliderOnInput_Params
	{
	public:
		bool                                                       bLeftPressed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.GetArrowBtn
	 */
	struct UBaseOptionsEntry_C_GetArrowBtn_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8RIW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UArrowButton_C*                                      ArrowButton;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.OnAnalogValueChanged
	 */
	struct UBaseOptionsEntry_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.OnKeyUp
	 */
	struct UBaseOptionsEntry_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.OnKeyDown
	 */
	struct UBaseOptionsEntry_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.TrySetupCounter
	 */
	struct UBaseOptionsEntry_C_TrySetupCounter_Params
	{	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.RefreshCounter
	 */
	struct UBaseOptionsEntry_C_RefreshCounter_Params
	{	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.SetupCounter
	 */
	struct UBaseOptionsEntry_C_SetupCounter_Params
	{	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.UpdateEnableStatus
	 */
	struct UBaseOptionsEntry_C_UpdateEnableStatus_Params
	{	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.RefreshDisplay
	 */
	struct UBaseOptionsEntry_C_RefreshDisplay_Params
	{	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.ColorChangedEntries
	 */
	struct UBaseOptionsEntry_C_ColorChangedEntries_Params
	{	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.RefreshEntry
	 */
	struct UBaseOptionsEntry_C_RefreshEntry_Params
	{	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.PreConstruct
	 */
	struct UBaseOptionsEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.Event_UpdateTitle
	 */
	struct UBaseOptionsEntry_C_Event_UpdateTitle_Params
	{
	public:
		class FText                                                newTitle;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.Event_RefreshEntry
	 */
	struct UBaseOptionsEntry_C_Event_RefreshEntry_Params
	{	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.Event_UpdateSubButtonText
	 */
	struct UBaseOptionsEntry_C_Event_UpdateSubButtonText_Params
	{
	public:
		class FText                                                NewValue;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.RefreshValue
	 */
	struct UBaseOptionsEntry_C_RefreshValue_Params
	{
	public:
		bool                                                       forceUpdateSlider;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseOptionsEntry.BaseOptionsEntry_C.ExecuteUbergraph_BaseOptionsEntry
	 */
	struct UBaseOptionsEntry_C_ExecuteUbergraph_BaseOptionsEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
