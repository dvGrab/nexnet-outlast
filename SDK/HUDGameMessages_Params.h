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
	 * Function HUDGameMessages.HUDGameMessages_C.InitializeMessage
	 */
	struct UHUDGameMessages_C_InitializeMessage_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EGameMessageCategory                                       messageCategory;                                         // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGameObjectiveType                                         ObjectiveType;                                           // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_149J[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameMessageAudioParams                             audioParams;                                             // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function HUDGameMessages.HUDGameMessages_C.ShouldShow
	 */
	struct UHUDGameMessages_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDGameMessages.HUDGameMessages_C.Finished_1D4430144A0F9FAAAB764FB894A8E54F
	 */
	struct UHUDGameMessages_C_Finished_1D4430144A0F9FAAAB764FB894A8E54F_Params
	{	};

	/**
	 * Function HUDGameMessages.HUDGameMessages_C.Construct
	 */
	struct UHUDGameMessages_C_Construct_Params
	{	};

	/**
	 * Function HUDGameMessages.HUDGameMessages_C.OnShowGameMessage_Event_1
	 */
	struct UHUDGameMessages_C_OnShowGameMessage_Event_1_Params
	{
	public:
		class FText                                                gameMessage;                                             // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EGameMessageCategory                                       messageCategory;                                         // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGameObjectiveType                                         gameObjectiveType;                                       // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZDJH[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameMessageAudioParams                             audioParams;                                             // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function HUDGameMessages.HUDGameMessages_C.OnStageEnded_Event_1
	 */
	struct UHUDGameMessages_C_OnStageEnded_Event_1_Params
	{
	public:
		struct FRBStageID                                          StageID;                                                 // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FRBMissionID                                        MissionID;                                               // 0x0028(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       isFail;                                                  // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDGameMessages.HUDGameMessages_C.Event_Show
	 */
	struct UHUDGameMessages_C_Event_Show_Params
	{	};

	/**
	 * Function HUDGameMessages.HUDGameMessages_C.ShowMessage
	 */
	struct UHUDGameMessages_C_ShowMessage_Params
	{	};

	/**
	 * Function HUDGameMessages.HUDGameMessages_C.Event_OnHudModeChanged
	 */
	struct UHUDGameMessages_C_Event_OnHudModeChanged_Params
	{
	public:
		EHudMode                                                   newHudMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDGameMessages.HUDGameMessages_C.Event_Hide
	 */
	struct UHUDGameMessages_C_Event_Hide_Params
	{	};

	/**
	 * Function HUDGameMessages.HUDGameMessages_C.ExecuteUbergraph_HUDGameMessages
	 */
	struct UHUDGameMessages_C_ExecuteUbergraph_HUDGameMessages_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
