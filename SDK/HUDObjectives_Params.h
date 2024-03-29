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
	 * Function HUDObjectives.HUDObjectives_C.RefreshObjectivesTexts
	 */
	struct UHUDObjectives_C_RefreshObjectivesTexts_Params
	{	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.OnObjectiveEnded
	 */
	struct UHUDObjectives_C_OnObjectiveEnded_Params
	{	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.ShouldShow
	 */
	struct UHUDObjectives_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_47Z4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.CanDisplayObjective
	 */
	struct UHUDObjectives_C_CanDisplayObjective_Params
	{
	public:
		class ARBBaseObjectiveCoordinator*                         coordinator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       canDisplay;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.OnObjectiveStarted
	 */
	struct UHUDObjectives_C_OnObjectiveStarted_Params
	{
	public:
		class ARBBaseObjectiveCoordinator*                         coordinator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.Construct
	 */
	struct UHUDObjectives_C_Construct_Params
	{	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.StateChanged
	 */
	struct UHUDObjectives_C_StateChanged_Params
	{
	public:
		class ARBBaseObjectiveCoordinator*                         coordinator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EObjectiveCoordinatorState                                 State;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.PreConstruct
	 */
	struct UHUDObjectives_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.OnRequestDisplayObjectiveHUD
	 */
	struct UHUDObjectives_C_OnRequestDisplayObjectiveHUD_Params
	{	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.OnCompletionInProgressChanged
	 */
	struct UHUDObjectives_C_OnCompletionInProgressChanged_Params
	{
	public:
		bool                                                       isProgressionInProgress;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isCompletedByLocalPlayer;                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.OnProgressChanged
	 */
	struct UHUDObjectives_C_OnProgressChanged_Params
	{
	public:
		float                                                      progressRatio;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isPositiveProgress;                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NP9X[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                objectiveText;                                           // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.OnSingleObjectiveCompleted
	 */
	struct UHUDObjectives_C_OnSingleObjectiveCompleted_Params
	{
	public:
		class ARBBaseObjectiveCoordinator*                         coordinator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              objective;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.OnSingleCompletedObjectiveReverted
	 */
	struct UHUDObjectives_C_OnSingleCompletedObjectiveReverted_Params
	{
	public:
		class ARBBaseObjectiveCoordinator*                         coordinator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              objective;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.Event_Show
	 */
	struct UHUDObjectives_C_Event_Show_Params
	{	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.Event_Hide
	 */
	struct UHUDObjectives_C_Event_Hide_Params
	{	};

	/**
	 * Function HUDObjectives.HUDObjectives_C.ExecuteUbergraph_HUDObjectives
	 */
	struct UHUDObjectives_C_ExecuteUbergraph_HUDObjectives_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
