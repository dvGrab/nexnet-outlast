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
	 * Function StageEnd_Button_BP.StageEnd_Button_BP_C.SetTrainArrivalTime
	 */
	struct AStageEnd_Button_BP_C_SetTrainArrivalTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StageEnd_Button_BP.StageEnd_Button_BP_C.Update Time
	 */
	struct AStageEnd_Button_BP_C_Update_Time_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StageEnd_Button_BP.StageEnd_Button_BP_C.ReceiveBeginPlay
	 */
	struct AStageEnd_Button_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StageEnd_Button_BP.StageEnd_Button_BP_C.Event_OnResetStage
	 */
	struct AStageEnd_Button_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function StageEnd_Button_BP.StageEnd_Button_BP_C.WakeTimerMeshes
	 */
	struct AStageEnd_Button_BP_C_WakeTimerMeshes_Params
	{	};

	/**
	 * Function StageEnd_Button_BP.StageEnd_Button_BP_C.BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_2_OnInteractionEvent__DelegateSignature
	 */
	struct AStageEnd_Button_BP_C_BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_2_OnInteractionEvent__DelegateSignature_Params
	{
	public:
		class ARBPawn*                                             interactor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URBInteractibleComponent*                            Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StageEnd_Button_BP.StageEnd_Button_BP_C.BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_3_OnEnabledChanged__DelegateSignature
	 */
	struct AStageEnd_Button_BP_C_BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_3_OnEnabledChanged__DelegateSignature_Params
	{
	public:
		class URBInteractionZoneComponent*                         Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StageEnd_Button_BP.StageEnd_Button_BP_C.ExecuteUbergraph_StageEnd_Button_BP
	 */
	struct AStageEnd_Button_BP_C_ExecuteUbergraph_StageEnd_Button_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
