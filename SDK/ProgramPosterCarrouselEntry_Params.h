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
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.UpdateGroupLeaderDisclaimerVisibility
	 */
	struct UProgramPosterCarrouselEntry_C_UpdateGroupLeaderDisclaimerVisibility_Params
	{	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.UpdateTooltip
	 */
	struct UProgramPosterCarrouselEntry_C_UpdateTooltip_Params
	{	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.GetToolTipWidget
	 */
	struct UProgramPosterCarrouselEntry_C_GetToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.SetSelected
	 */
	struct UProgramPosterCarrouselEntry_C_SetSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.Refresh
	 */
	struct UProgramPosterCarrouselEntry_C_Refresh_Params
	{	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.GamepadNav_MenuConfirm_Release
	 */
	struct UProgramPosterCarrouselEntry_C_GamepadNav_MenuConfirm_Release_Params
	{	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnFocusLost
	 */
	struct UProgramPosterCarrouselEntry_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnFocusReceived
	 */
	struct UProgramPosterCarrouselEntry_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.Setup
	 */
	struct UProgramPosterCarrouselEntry_C_Setup_Params
	{
	public:
		struct FRBProgramInfoRow                                   programInfo;                                             // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bLocked;                                                 // 0x0108(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UProgramPosterCarrouselEntry_C_BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UProgramPosterCarrouselEntry_C_BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.BndEvt__TrialPosterCarrouselEntry_V2_HoveringDetector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UProgramPosterCarrouselEntry_C_BndEvt__TrialPosterCarrouselEntry_V2_HoveringDetector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.On Hovered
	 */
	struct UProgramPosterCarrouselEntry_C_On_Hovered_Params
	{	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.On Unhovered
	 */
	struct UProgramPosterCarrouselEntry_C_On_Unhovered_Params
	{	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.On Clicked
	 */
	struct UProgramPosterCarrouselEntry_C_On_Clicked_Params
	{	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.PreConstruct
	 */
	struct UProgramPosterCarrouselEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.ExecuteUbergraph_ProgramPosterCarrouselEntry
	 */
	struct UProgramPosterCarrouselEntry_C_ExecuteUbergraph_ProgramPosterCarrouselEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BID4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnProgramUnhovered__DelegateSignature
	 */
	struct UProgramPosterCarrouselEntry_C_OnProgramUnhovered__DelegateSignature_Params
	{
	public:
		class FName                                                TrialId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnProgramHovered__DelegateSignature
	 */
	struct UProgramPosterCarrouselEntry_C_OnProgramHovered__DelegateSignature_Params
	{
	public:
		class FName                                                TrialId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnProgramClicked__DelegateSignature
	 */
	struct UProgramPosterCarrouselEntry_C_OnProgramClicked__DelegateSignature_Params
	{
	public:
		class FName                                                TrialId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
