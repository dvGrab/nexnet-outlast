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
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.IsSWATDead
	 */
	struct UW_SWATTeamStatus_C_IsSWATDead_Params
	{
	public:
		ESquadPosition                                             InSquadPosition;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LDEN[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.IsSWATWaiting
	 */
	struct UW_SWATTeamStatus_C_IsSWATWaiting_Params
	{
	public:
		class UBaseActivity*                                       InActivity;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.HideDuplicateCommandStatus
	 */
	struct UW_SWATTeamStatus_C_HideDuplicateCommandStatus_Params
	{
	public:
		class UBaseActivity*                                       InActivityA;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseActivity*                                       InActivityB;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_SWATCommandStatus_C*                              StatusWidgetToHide;                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.SetCommandStatusInfo
	 */
	struct UW_SWATTeamStatus_C_SetCommandStatusInfo_Params
	{
	public:
		class UBaseActivity*                                       InActivity;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_SWATCommandStatus_C*                              CommandStatusWidget;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.OnActivitySoftComplete
	 */
	struct UW_SWATTeamStatus_C_OnActivitySoftComplete_Params
	{
	public:
		class UBaseActivity*                                       Activity;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ACyberneticController*                               Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.OnQueuedActivitySoftComplete
	 */
	struct UW_SWATTeamStatus_C_OnQueuedActivitySoftComplete_Params
	{
	public:
		class UBaseActivity*                                       Activity;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ACyberneticController*                               Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusAllPlayerHealth
	 */
	struct UW_SWATTeamStatus_C_UpdateSWATStatusAllPlayerHealth_Params
	{	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatus
	 */
	struct UW_SWATTeamStatus_C_UpdateSWATStatus_Params
	{	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.InitializeSWATStatus
	 */
	struct UW_SWATTeamStatus_C_InitializeSWATStatus_Params
	{	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusPlayerHealth
	 */
	struct UW_SWATTeamStatus_C_UpdateSWATStatusPlayerHealth_Params
	{
	public:
		class UW_SWATCommandStatus_C*                              InSWATCommandStatus;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESquadPosition                                             InSquadPosition;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ROV6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusCommands
	 */
	struct UW_SWATTeamStatus_C_UpdateSWATStatusCommands_Params
	{	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusCommandName
	 */
	struct UW_SWATTeamStatus_C_UpdateSWATStatusCommandName_Params
	{
	public:
		class UW_SWATCommandStatus_C*                              InSWATCommandWidget;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseActivity*                                       SquadActivity;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESquadPosition                                             InSquadPosition;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ETDQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusPlayerNameFromSquadPosition
	 */
	struct UW_SWATTeamStatus_C_UpdateSWATStatusPlayerNameFromSquadPosition_Params
	{
	public:
		class UW_SWATCommandStatus_C*                              InSWATCommandWidget;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESquadPosition                                             InSquadPosition;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_POU9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.Construct
	 */
	struct UW_SWATTeamStatus_C_Construct_Params
	{	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.OnDefaultCommandIssued
	 */
	struct UW_SWATTeamStatus_C_OnDefaultCommandIssued_Params
	{
	public:
		class APlayerCharacter*                                    Issuer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESwatCommand                                               CommandIssued;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateStatus
	 */
	struct UW_SWATTeamStatus_C_UpdateStatus_Params
	{	};

	/**
	 * Function W_SWATTeamStatus.W_SWATTeamStatus_C.ExecuteUbergraph_W_SWATTeamStatus
	 */
	struct UW_SWATTeamStatus_C_ExecuteUbergraph_W_SWATTeamStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
