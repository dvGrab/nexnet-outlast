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
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.Event_DrawHudUpdate
	 */
	struct UObjectiveInWorld_C_Event_DrawHudUpdate_Params
	{
	public:
		struct FRBWorldIconUpdateContext                           updateContext;                                           // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.ShouldShow
	 */
	struct UObjectiveInWorld_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.ProcessOpacity
	 */
	struct UObjectiveInWorld_C_ProcessOpacity_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TargetOpacity;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateIconImage
	 */
	struct UObjectiveInWorld_C_UpdateIconImage_Params
	{	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.SetupRipple
	 */
	struct UObjectiveInWorld_C_SetupRipple_Params
	{	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateRippleDisplay
	 */
	struct UObjectiveInWorld_C_UpdateRippleDisplay_Params
	{
	public:
		bool                                                       A;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateIcon
	 */
	struct UObjectiveInWorld_C_UpdateIcon_Params
	{	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.UpdateDistanceEffects
	 */
	struct UObjectiveInWorld_C_UpdateDistanceEffects_Params
	{
	public:
		struct FRBWorldIconUpdateContext                           updateContext;                                           // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.PreConstruct
	 */
	struct UObjectiveInWorld_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.Construct
	 */
	struct UObjectiveInWorld_C_Construct_Params
	{	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.Event_Show
	 */
	struct UObjectiveInWorld_C_Event_Show_Params
	{	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.Event_Hide
	 */
	struct UObjectiveInWorld_C_Event_Hide_Params
	{	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.Event_OnWatchedPlayerChanged
	 */
	struct UObjectiveInWorld_C_Event_OnWatchedPlayerChanged_Params
	{
	public:
		class ARBPlayer*                                           oldPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           NewPlayer;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.OnCompletingObjectiveChanged
	 */
	struct UObjectiveInWorld_C_OnCompletingObjectiveChanged_Params
	{
	public:
		bool                                                       isCompletingObjective;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ObjectiveInWorld.ObjectiveInWorld_C.ExecuteUbergraph_ObjectiveInWorld
	 */
	struct UObjectiveInWorld_C_ExecuteUbergraph_ObjectiveInWorld_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
