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
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.OnStageReady
	 */
	struct AORS_MT01_B00_C_OnStageReady_Params
	{
	public:
		struct FRBStageID                                          StageID;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FRBMissionID                                        MissionID;                                               // 0x0028(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.Event_OnResetStage
	 */
	struct AORS_MT01_B00_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.BasementRandomGates
	 */
	struct AORS_MT01_B00_C_BasementRandomGates_Params
	{	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 */
	struct AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params
	{
	public:
		class URBPlayerTriggerComponent*                           Trigger;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume2_3_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 */
	struct AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume2_3_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params
	{
	public:
		class URBPlayerTriggerComponent*                           Trigger;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.SoupeReady
	 */
	struct AORS_MT01_B00_C_SoupeReady_Params
	{	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.Avellanos1_Neutre
	 */
	struct AORS_MT01_B00_C_Avellanos1_Neutre_Params
	{	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume3_6_K2Node_ActorBoundEvent_3_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 */
	struct AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume3_6_K2Node_ActorBoundEvent_3_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params
	{
	public:
		class URBPlayerTriggerComponent*                           Trigger;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.Avellanos1_Exit
	 */
	struct AORS_MT01_B00_C_Avellanos1_Exit_Params
	{	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B01_Simple_ObjCoord_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorCompleted__DelegateSignature
	 */
	struct AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_ORS_MT01_B01_Simple_ObjCoord_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorCompleted__DelegateSignature_Params
	{
	public:
		bool                                                       bIsJIP;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B02_GatherAndDeliver_Bleach_K2Node_ActorBoundEvent_4_OnSingleObjectiveCompleted__DelegateSignature
	 */
	struct AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_ORS_MT01_B02_GatherAndDeliver_Bleach_K2Node_ActorBoundEvent_4_OnSingleObjectiveCompleted__DelegateSignature_Params
	{
	public:
		class ARBBaseObjectiveCoordinator*                         coordinator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              objective;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_5_OnObjectiveCoordinatorStarted__DelegateSignature
	 */
	struct AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_5_OnObjectiveCoordinatorStarted__DelegateSignature_Params
	{	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_6_OnObjectiveCoordinatorCompleted__DelegateSignature
	 */
	struct AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_6_OnObjectiveCoordinatorCompleted__DelegateSignature_Params
	{
	public:
		bool                                                       bIsJIP;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B03_Delay_ObjCoord_K2Node_ActorBoundEvent_7_OnObjectiveCoordinatorStarted__DelegateSignature
	 */
	struct AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_ORS_MT01_B03_Delay_ObjCoord_K2Node_ActorBoundEvent_7_OnObjectiveCoordinatorStarted__DelegateSignature_Params
	{	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B03_ExitStage_K2Node_ActorBoundEvent_8_OnObjectiveCoordinatorStarted__DelegateSignature
	 */
	struct AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_ORS_MT01_B03_ExitStage_K2Node_ActorBoundEvent_8_OnObjectiveCoordinatorStarted__DelegateSignature_Params
	{	};

	/**
	 * Function ORS_MT01_B00.ORS_MT01_B00_C.ExecuteUbergraph_ORS_MT01_B00
	 */
	struct AORS_MT01_B00_C_ExecuteUbergraph_ORS_MT01_B00_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
