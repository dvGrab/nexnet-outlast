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
	 * Function DoorBase_BP.DoorBase_BP_C.AddWindowCollision
	 */
	struct ADoorBase_BP_C_AddWindowCollision_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachBase;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.HasDestructibleDoor
	 */
	struct ADoorBase_BP_C_HasDestructibleDoor_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.ApplyDoorCollisionTypeToDoor
	 */
	struct ADoorBase_BP_C_ApplyDoorCollisionTypeToDoor_Params
	{	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.GetTrapTellMaxIndex
	 */
	struct ADoorBase_BP_C_GetTrapTellMaxIndex_Params
	{
	public:
		int32_t                                                    TrapTellMaxIndex;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.ClearAllTrapTells
	 */
	struct ADoorBase_BP_C_ClearAllTrapTells_Params
	{	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.TryAddNewTrapTell
	 */
	struct ADoorBase_BP_C_TryAddNewTrapTell_Params
	{
	public:
		bool                                                       bFromFront;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P7V2[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.GetRandomTrapIndicator
	 */
	struct ADoorBase_BP_C_GetRandomTrapIndicator_Params
	{
	public:
		int32_t                                                    TellIndex;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S5OO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         Mesh;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          RelativeTransform;                                       // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.InitializeSettings
	 */
	struct ADoorBase_BP_C_InitializeSettings_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.SetLockBarsVisibility
	 */
	struct ADoorBase_BP_C_SetLockBarsVisibility_Params
	{	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.DisableDestructibleDoorCollision
	 */
	struct ADoorBase_BP_C_DisableDestructibleDoorCollision_Params
	{	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.UserConstructionScript
	 */
	struct ADoorBase_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.ShakeTimeline__FinishedFunc
	 */
	struct ADoorBase_BP_C_ShakeTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.ShakeTimeline__UpdateFunc
	 */
	struct ADoorBase_BP_C_ShakeTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorBashEvent
	 */
	struct ADoorBase_BP_C_BP_OnDoorBashEvent_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bApplyVisualDoorDamage;                                  // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EBashDoorType                                              bashType;                                                // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.ShakeDoor
	 */
	struct ADoorBase_BP_C_ShakeDoor_Params
	{	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorBarsLockingEvent
	 */
	struct ADoorBase_BP_C_BP_OnDoorBarsLockingEvent_Params
	{
	public:
		bool                                                       bLocking;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorUnhingeEvent
	 */
	struct ADoorBase_BP_C_BP_OnDoorUnhingeEvent_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.Event_PostRegisterAllComponents
	 */
	struct ADoorBase_BP_C_Event_PostRegisterAllComponents_Params
	{	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.BP_OnActorAttachedToDoor
	 */
	struct ADoorBase_BP_C_BP_OnActorAttachedToDoor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorTrappedStateChanged
	 */
	struct ADoorBase_BP_C_BP_OnDoorTrappedStateChanged_Params
	{
	public:
		bool                                                       bTrapped;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromFront;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.Event_OnResetStage
	 */
	struct ADoorBase_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorTrapActivated
	 */
	struct ADoorBase_BP_C_BP_OnDoorTrapActivated_Params
	{	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorTrapDisarmed
	 */
	struct ADoorBase_BP_C_BP_OnDoorTrapDisarmed_Params
	{	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.Event_SnapToState
	 */
	struct ADoorBase_BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.PostToggled
	 */
	struct ADoorBase_BP_C_PostToggled_Params
	{
	public:
		bool                                                       bToggleEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DoorBase_BP.DoorBase_BP_C.ExecuteUbergraph_DoorBase_BP
	 */
	struct ADoorBase_BP_C_ExecuteUbergraph_DoorBase_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
