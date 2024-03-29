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
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.FixUp
	 */
	struct ABase_Movable_Button_BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.IsLocked
	 */
	struct ABase_Movable_Button_BP_C_IsLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnRep_bLocked
	 */
	struct ABase_Movable_Button_BP_C_OnRep_bLocked_Params
	{	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.UpdateButtonPosition
	 */
	struct ABase_Movable_Button_BP_C_UpdateButtonPosition_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.UserConstructionScript
	 */
	struct ABase_Movable_Button_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.ButtonLiftTimeline__FinishedFunc
	 */
	struct ABase_Movable_Button_BP_C_ButtonLiftTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.ButtonLiftTimeline__UpdateFunc
	 */
	struct ABase_Movable_Button_BP_C_ButtonLiftTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnPostActorsPasted
	 */
	struct ABase_Movable_Button_BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.PostAddedToLevel
	 */
	struct ABase_Movable_Button_BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.PostDuplicated
	 */
	struct ABase_Movable_Button_BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.PostEditChange
	 */
	struct ABase_Movable_Button_BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.PostEditMove
	 */
	struct ABase_Movable_Button_BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.TickSelected
	 */
	struct ABase_Movable_Button_BP_C_TickSelected_Params
	{	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.EnableVisual
	 */
	struct ABase_Movable_Button_BP_C_EnableVisual_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.Event_OnResetStage
	 */
	struct ABase_Movable_Button_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnUnlocked
	 */
	struct ABase_Movable_Button_BP_C_OnUnlocked_Params
	{	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnLocked
	 */
	struct ABase_Movable_Button_BP_C_OnLocked_Params
	{	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.Lock
	 */
	struct ABase_Movable_Button_BP_C_Lock_Params
	{	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.Unlock
	 */
	struct ABase_Movable_Button_BP_C_Unlock_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.OnEditorPostLoad
	 */
	struct ABase_Movable_Button_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function Base_Movable_Button_BP.Base_Movable_Button_BP_C.ExecuteUbergraph_Base_Movable_Button_BP
	 */
	struct ABase_Movable_Button_BP_C_ExecuteUbergraph_Base_Movable_Button_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_33Z3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
