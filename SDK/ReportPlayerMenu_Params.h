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
	 * Function ReportPlayerMenu.ReportPlayerMenu_C.OnFocusReceived
	 */
	struct UReportPlayerMenu_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ReportPlayerMenu.ReportPlayerMenu_C.Event_Refresh
	 */
	struct UReportPlayerMenu_C_Event_Refresh_Params
	{	};

	/**
	 * Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_GroupFinderStartBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UReportPlayerMenu_C_BndEvt__ReportPlayerMenu_GroupFinderStartBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UReportPlayerMenu_C_BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ReportPlayerMenu.ReportPlayerMenu_C.OnFocusLost
	 */
	struct UReportPlayerMenu_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ReportPlayerMenu.ReportPlayerMenu_C.Event_MenuCancel_Pressed
	 */
	struct UReportPlayerMenu_C_Event_MenuCancel_Pressed_Params
	{	};

	/**
	 * Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ReportPlayerMenu.ReportPlayerMenu_C.ExecuteUbergraph_ReportPlayerMenu
	 */
	struct UReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MNEU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
