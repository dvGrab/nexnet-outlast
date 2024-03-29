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
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.Setup
	 */
	struct UExperimentBoardActionButton_C_Setup_Params
	{	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.OnButtonClicked
	 */
	struct UExperimentBoardActionButton_C_OnButtonClicked_Params
	{	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.GamepadNav_MenuConfirm_Release
	 */
	struct UExperimentBoardActionButton_C_GamepadNav_MenuConfirm_Release_Params
	{	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.GamepadNav_MenuConfirm
	 */
	struct UExperimentBoardActionButton_C_GamepadNav_MenuConfirm_Params
	{	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.SetHovered
	 */
	struct UExperimentBoardActionButton_C_SetHovered_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.OnFocusLost
	 */
	struct UExperimentBoardActionButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.OnFocusReceived
	 */
	struct UExperimentBoardActionButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.SetButtonText
	 */
	struct UExperimentBoardActionButton_C_SetButtonText_Params
	{
	public:
		class FText                                                ButtonText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.SetEnabled
	 */
	struct UExperimentBoardActionButton_C_SetEnabled_Params
	{
	public:
		bool                                                       bInEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.UpdateState
	 */
	struct UExperimentBoardActionButton_C_UpdateState_Params
	{	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.PreConstruct
	 */
	struct UExperimentBoardActionButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.OnMouseEnter
	 */
	struct UExperimentBoardActionButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.OnMouseLeave
	 */
	struct UExperimentBoardActionButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UExperimentBoardActionButton_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.Construct
	 */
	struct UExperimentBoardActionButton_C_Construct_Params
	{	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.ExecuteUbergraph_ExperimentBoardActionButton
	 */
	struct UExperimentBoardActionButton_C_ExecuteUbergraph_ExperimentBoardActionButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExperimentBoardActionButton.ExperimentBoardActionButton_C.OnClicked__DelegateSignature
	 */
	struct UExperimentBoardActionButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
