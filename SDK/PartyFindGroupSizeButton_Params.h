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
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.SetEnabled
	 */
	struct UPartyFindGroupSizeButton_C_SetEnabled_Params
	{
	public:
		bool                                                       bInEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.GamepadNav_MenuConfirm_Release
	 */
	struct UPartyFindGroupSizeButton_C_GamepadNav_MenuConfirm_Release_Params
	{	};

	/**
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.OnFocusLost
	 */
	struct UPartyFindGroupSizeButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.OnFocusReceived
	 */
	struct UPartyFindGroupSizeButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.SetHovered
	 */
	struct UPartyFindGroupSizeButton_C_SetHovered_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CHM4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.SetButtonText
	 */
	struct UPartyFindGroupSizeButton_C_SetButtonText_Params
	{
	public:
		class FText                                                ButtonText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.SetSelected
	 */
	struct UPartyFindGroupSizeButton_C_SetSelected_Params
	{
	public:
		bool                                                       bInSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.UpdateState
	 */
	struct UPartyFindGroupSizeButton_C_UpdateState_Params
	{	};

	/**
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.PreConstruct
	 */
	struct UPartyFindGroupSizeButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.OnMouseEnter
	 */
	struct UPartyFindGroupSizeButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.OnMouseLeave
	 */
	struct UPartyFindGroupSizeButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPartyFindGroupSizeButton_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.ExecuteUbergraph_PartyFindGroupSizeButton
	 */
	struct UPartyFindGroupSizeButton_C_ExecuteUbergraph_PartyFindGroupSizeButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyFindGroupSizeButton.PartyFindGroupSizeButton_C.OnClicked__DelegateSignature
	 */
	struct UPartyFindGroupSizeButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
