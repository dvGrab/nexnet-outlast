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
	 * Function LeaveWithPartyButton.LeaveWithPartyButton_C.SetButtonText
	 */
	struct ULeaveWithPartyButton_C_SetButtonText_Params
	{
	public:
		class FText                                                ButtonText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LeaveWithPartyButton.LeaveWithPartyButton_C.SetEnabled
	 */
	struct ULeaveWithPartyButton_C_SetEnabled_Params
	{
	public:
		bool                                                       bInEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LeaveWithPartyButton.LeaveWithPartyButton_C.SetSelected
	 */
	struct ULeaveWithPartyButton_C_SetSelected_Params
	{
	public:
		bool                                                       bInSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LeaveWithPartyButton.LeaveWithPartyButton_C.UpdateState
	 */
	struct ULeaveWithPartyButton_C_UpdateState_Params
	{	};

	/**
	 * Function LeaveWithPartyButton.LeaveWithPartyButton_C.PreConstruct
	 */
	struct ULeaveWithPartyButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LeaveWithPartyButton.LeaveWithPartyButton_C.OnMouseEnter
	 */
	struct ULeaveWithPartyButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LeaveWithPartyButton.LeaveWithPartyButton_C.OnMouseLeave
	 */
	struct ULeaveWithPartyButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LeaveWithPartyButton.LeaveWithPartyButton_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULeaveWithPartyButton_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LeaveWithPartyButton.LeaveWithPartyButton_C.ExecuteUbergraph_LeaveWithPartyButton
	 */
	struct ULeaveWithPartyButton_C_ExecuteUbergraph_LeaveWithPartyButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LeaveWithPartyButton.LeaveWithPartyButton_C.OnClicked__DelegateSignature
	 */
	struct ULeaveWithPartyButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
