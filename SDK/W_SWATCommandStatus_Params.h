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
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.Grow
	 */
	struct UW_SWATCommandStatus_C_Grow_Params
	{
	public:
		bool                                                       bInstant;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.Shrink
	 */
	struct UW_SWATCommandStatus_C_Shrink_Params
	{
	public:
		bool                                                       bInstant;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.HideCommandInfo
	 */
	struct UW_SWATCommandStatus_C_HideCommandInfo_Params
	{	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.ShowCommandSubText
	 */
	struct UW_SWATCommandStatus_C_ShowCommandSubText_Params
	{	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetQueueCommandSubText_Rich
	 */
	struct UW_SWATCommandStatus_C_SetQueueCommandSubText_Rich_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetQueueCommandSubText
	 */
	struct UW_SWATCommandStatus_C_SetQueueCommandSubText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetCommandNameColorFromTeam
	 */
	struct UW_SWATCommandStatus_C_SetCommandNameColorFromTeam_Params
	{
	public:
		ETeamType                                                  InTeam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetCommandSubText
	 */
	struct UW_SWATCommandStatus_C_SetCommandSubText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.Set Command Sub Text
	 */
	struct UW_SWATCommandStatus_C_Set_Command_Sub_Text_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.PlayCommandCompleteQueuedAnim
	 */
	struct UW_SWATCommandStatus_C_PlayCommandCompleteQueuedAnim_Params
	{	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.PlayCommandIssuedAnim
	 */
	struct UW_SWATCommandStatus_C_PlayCommandIssuedAnim_Params
	{	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.PlayCommandCompleteAnim
	 */
	struct UW_SWATCommandStatus_C_PlayCommandCompleteAnim_Params
	{	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.HideCommandStatus
	 */
	struct UW_SWATCommandStatus_C_HideCommandStatus_Params
	{
	public:
		bool                                                       bShrinkHeight;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetPlayerHealthStatus
	 */
	struct UW_SWATCommandStatus_C_SetPlayerHealthStatus_Params
	{
	public:
		EPlayerHealthStatus                                        InPlayerHealthStatus;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetPlayerName
	 */
	struct UW_SWATCommandStatus_C_SetPlayerName_Params
	{
	public:
		class FText                                                InPlayerName;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetCurrentCommand
	 */
	struct UW_SWATCommandStatus_C_SetCurrentCommand_Params
	{
	public:
		class FString                                              InActivityName;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                InCommandText;                                           // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InProgressText;                                          // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bWaiting;                                                // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsProgress;                                             // 0x0041(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G4AI[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.UpdateSquadData
	 */
	struct UW_SWATCommandStatus_C_UpdateSquadData_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.Refresh
	 */
	struct UW_SWATCommandStatus_C_Refresh_Params
	{
	public:
		ESquadPosition                                             InSquadPosition;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.PreConstruct
	 */
	struct UW_SWATCommandStatus_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.Construct
	 */
	struct UW_SWATCommandStatus_C_Construct_Params
	{	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.StartHeightChange
	 */
	struct UW_SWATCommandStatus_C_StartHeightChange_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.UpdateDesiredHeight
	 */
	struct UW_SWATCommandStatus_C_UpdateDesiredHeight_Params
	{	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.CustomEvent_2
	 */
	struct UW_SWATCommandStatus_C_CustomEvent_2_Params
	{	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.StartHealthWidthChange
	 */
	struct UW_SWATCommandStatus_C_StartHealthWidthChange_Params
	{
	public:
		float                                                      NewWidth;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.UpdateDesiredWidth
	 */
	struct UW_SWATCommandStatus_C_UpdateDesiredWidth_Params
	{	};

	/**
	 * Function W_SWATCommandStatus.W_SWATCommandStatus_C.ExecuteUbergraph_W_SWATCommandStatus
	 */
	struct UW_SWATCommandStatus_C_ExecuteUbergraph_W_SWATCommandStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
