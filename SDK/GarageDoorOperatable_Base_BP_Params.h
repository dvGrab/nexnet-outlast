#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.Audio_ResetState
	 */
	struct AGarageDoorOperatableBase_BP_C_Audio_ResetState_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.Audio_StopJackHold
	 */
	struct AGarageDoorOperatableBase_BP_C_Audio_StopJackHold_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.Audio_StartJackHold
	 */
	struct AGarageDoorOperatableBase_BP_C_Audio_StartJackHold_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.Audio_StopJackLift
	 */
	struct AGarageDoorOperatableBase_BP_C_Audio_StopJackLift_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.Audio_StartJackLift
	 */
	struct AGarageDoorOperatableBase_BP_C_Audio_StartJackLift_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.Audio_ReachedDropDown
	 */
	struct AGarageDoorOperatableBase_BP_C_Audio_ReachedDropDown_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.Audio_StartDropDown
	 */
	struct AGarageDoorOperatableBase_BP_C_Audio_StartDropDown_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.Audio_ReachedLiftUp
	 */
	struct AGarageDoorOperatableBase_BP_C_Audio_ReachedLiftUp_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.Audio_StartLiftUp
	 */
	struct AGarageDoorOperatableBase_BP_C_Audio_StartLiftUp_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.RefreshJackVisibility
	 */
	struct AGarageDoorOperatableBase_BP_C_RefreshJackVisibility_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.GetCoopIconOffset
	 */
	struct AGarageDoorOperatableBase_BP_C_GetCoopIconOffset_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.OnRep_HasJack
	 */
	struct AGarageDoorOperatableBase_BP_C_OnRep_HasJack_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.ReceiveBeginPlay
	 */
	struct AGarageDoorOperatableBase_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.UpdateAudio
	 */
	struct AGarageDoorOperatableBase_BP_C_UpdateAudio_Params
	{
	public:
		float                                                      currentProgress;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.Event_OnResetStage
	 */
	struct AGarageDoorOperatableBase_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.Event_OnJackHoldingStart
	 */
	struct AGarageDoorOperatableBase_BP_C_Event_OnJackHoldingStart_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.Event_OnJackHoldingStop
	 */
	struct AGarageDoorOperatableBase_BP_C_Event_OnJackHoldingStop_Params
	{	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.Event_OnOperationProgressChanged
	 */
	struct AGarageDoorOperatableBase_BP_C_Event_OnOperationProgressChanged_Params
	{
	public:
		float                                                      currentProgressRatio;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GarageDoorOperatable-Base_BP.GarageDoorOperatable-Base_BP_C.ExecuteUbergraph_GarageDoorOperatable-Base_BP
	 */
	struct AGarageDoorOperatableBase_BP_C_ExecuteUbergraph_GarageDoorOperatableBase_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
