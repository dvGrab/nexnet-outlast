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
	 * Function BP_BaseController.BP_BaseController_C.GetJoystickDirection
	 */
	struct ABP_BaseController_C_GetJoystickDirection_Params
	{
	public:
		EJoystickTypes                                             Stick;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_75MT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCoreUObject_FVector2D                              StickInput;                                              // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.HideEscapeMenu
	 */
	struct ABP_BaseController_C_HideEscapeMenu_Params
	{	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.InpActEvt_Slash_K2Node_InputKeyEvent_3
	 */
	struct ABP_BaseController_C_InpActEvt_Slash_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.InpActEvt_End_K2Node_InputKeyEvent_2
	 */
	struct ABP_BaseController_C_InpActEvt_End_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.InpActEvt_Equals_K2Node_InputKeyEvent_1
	 */
	struct ABP_BaseController_C_InpActEvt_Equals_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.OnFailure_E5236F624136A216FC80949690426E05
	 */
	struct ABP_BaseController_C_OnFailure_E5236F624136A216FC80949690426E05_Params
	{	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.OnSuccess_E5236F624136A216FC80949690426E05
	 */
	struct ABP_BaseController_C_OnSuccess_E5236F624136A216FC80949690426E05_Params
	{	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.InpActEvt_ViewScoreboard_K2Node_InputActionEvent_4
	 */
	struct ABP_BaseController_C_InpActEvt_ViewScoreboard_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.InpActEvt_ViewScoreboard_K2Node_InputActionEvent_3
	 */
	struct ABP_BaseController_C_InpActEvt_ViewScoreboard_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.InpActEvt_VoteYes_K2Node_InputActionEvent_2
	 */
	struct ABP_BaseController_C_InpActEvt_VoteYes_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.InpActEvt_VoteNo_K2Node_InputActionEvent_1
	 */
	struct ABP_BaseController_C_InpActEvt_VoteNo_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.Server_FreeCamera
	 */
	struct ABP_BaseController_C_Server_FreeCamera_Params
	{	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.SpawnEscapeMenu
	 */
	struct ABP_BaseController_C_SpawnEscapeMenu_Params
	{	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.BP_ClientWasKicked
	 */
	struct ABP_BaseController_C_BP_ClientWasKicked_Params
	{
	public:
		class FText                                                KickReason;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.ServerPossesPawn
	 */
	struct ABP_BaseController_C_ServerPossesPawn_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.CloseDeployMenu
	 */
	struct ABP_BaseController_C_CloseDeployMenu_Params
	{	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.ShowCoopScoreChangeWidget
	 */
	struct ABP_BaseController_C_ShowCoopScoreChangeWidget_Params
	{
	public:
		float                                                      ScoreChangeValue;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.RequestVoteInput
	 */
	struct ABP_BaseController_C_RequestVoteInput_Params
	{
	public:
		struct FVoteData                                           CurrentVoteData;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.SetUpVoteWidget
	 */
	struct ABP_BaseController_C_SetUpVoteWidget_Params
	{
	public:
		class UW_VotePopUp_C*                                      Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.StopVoteInput
	 */
	struct ABP_BaseController_C_StopVoteInput_Params
	{	};

	/**
	 * Function BP_BaseController.BP_BaseController_C.ExecuteUbergraph_BP_BaseController
	 */
	struct ABP_BaseController_C_ExecuteUbergraph_BP_BaseController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
