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
	 * Function W_ReplayControls.W_ReplayControls_C.Get_TimeDilationSlider_Value_1
	 */
	struct UW_ReplayControls_C_Get_TimeDilationSlider_Value_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.Get_PauseButtonTxt_Text_1
	 */
	struct UW_ReplayControls_C_Get_PauseButtonTxt_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.Get_ReplayTimeSet_Value_1
	 */
	struct UW_ReplayControls_C_Get_ReplayTimeSet_Value_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q3YA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.Get_MaxTime_Text_1
	 */
	struct UW_ReplayControls_C_Get_MaxTime_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.Get_CurrentTime_Text_1
	 */
	struct UW_ReplayControls_C_Get_CurrentTime_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.OnKeyDown
	 */
	struct UW_ReplayControls_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_Button_0_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_ReplayControls_C_BndEvt__W_ReplayControls_Button_0_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_CloseMenuButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_ReplayControls_C_BndEvt__W_ReplayControls_CloseMenuButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_SkipBackwardButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_ReplayControls_C_BndEvt__W_ReplayControls_SkipBackwardButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_SkipAheadButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_ReplayControls_C_BndEvt__W_ReplayControls_SkipAheadButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_IncreasePlaybackSpeedButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_ReplayControls_C_BndEvt__W_ReplayControls_IncreasePlaybackSpeedButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_DecreasePlaybackSpeedButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_ReplayControls_C_BndEvt__W_ReplayControls_DecreasePlaybackSpeedButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.Tick
	 */
	struct UW_ReplayControls_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.BndEvt__ReplayTimeSet_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UW_ReplayControls_C_BndEvt__ReplayTimeSet_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_ReplayControls_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.Construct
	 */
	struct UW_ReplayControls_C_Construct_Params
	{	};

	/**
	 * Function W_ReplayControls.W_ReplayControls_C.ExecuteUbergraph_W_ReplayControls
	 */
	struct UW_ReplayControls_C_ExecuteUbergraph_W_ReplayControls_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_88M6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
