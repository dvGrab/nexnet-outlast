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
	 * Function SASTube-02_BP.SASTube-02_BP_C.UpdatePostProcess
	 */
	struct ASASTube__BP_C_UpdatePostProcess_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.UpdateShadowVisual
	 */
	struct ASASTube__BP_C_UpdateShadowVisual_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.IsPlayingDoorSequence
	 */
	struct ASASTube__BP_C_IsPlayingDoorSequence_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.UpdateOpenedState
	 */
	struct ASASTube__BP_C_UpdateOpenedState_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.ForceLightDisabled
	 */
	struct ASASTube__BP_C_ForceLightDisabled_Params
	{
	public:
		bool                                                       Disabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.UpdateTubeLighting
	 */
	struct ASASTube__BP_C_UpdateTubeLighting_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.OnActivationChanged
	 */
	struct ASASTube__BP_C_OnActivationChanged_Params
	{
	public:
		bool                                                       LightsEnabled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.SetFrontLightsEnabled
	 */
	struct ASASTube__BP_C_SetFrontLightsEnabled_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.SetPlayerInTubeZone
	 */
	struct ASASTube__BP_C_SetPlayerInTubeZone_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.ApplyLightChannel
	 */
	struct ASASTube__BP_C_ApplyLightChannel_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.ShouldBeIgnoredForLots
	 */
	struct ASASTube__BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.IsStateA
	 */
	struct ASASTube__BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.GetStateName
	 */
	struct ASASTube__BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.ValidateTubeActivation
	 */
	struct ASASTube__BP_C_ValidateTubeActivation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LYJB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.UpdateColor
	 */
	struct ASASTube__BP_C_UpdateColor_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.Initialize
	 */
	struct ASASTube__BP_C_Initialize_Params
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMeshComponent*                                Red_Light;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMeshComponent*                                Green_Light;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FogIntensity;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.UserConstructionScript
	 */
	struct ASASTube__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.BackwardTimeline__FinishedFunc
	 */
	struct ASASTube__BP_C_BackwardTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.BackwardTimeline__UpdateFunc
	 */
	struct ASASTube__BP_C_BackwardTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.ForwardTimeline__FinishedFunc
	 */
	struct ASASTube__BP_C_ForwardTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.ForwardTimeline__UpdateFunc
	 */
	struct ASASTube__BP_C_ForwardTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.LightOff__FinishedFunc
	 */
	struct ASASTube__BP_C_LightOff__FinishedFunc_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.LightOff__UpdateFunc
	 */
	struct ASASTube__BP_C_LightOff__UpdateFunc_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.LightOn__FinishedFunc
	 */
	struct ASASTube__BP_C_LightOn__FinishedFunc_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.LightOn__UpdateFunc
	 */
	struct ASASTube__BP_C_LightOn__UpdateFunc_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.Event_OnDoorStateChanged
	 */
	struct ASASTube__BP_C_Event_OnDoorStateChanged_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.ReceiveBeginPlay
	 */
	struct ASASTube__BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.CloseBackwardDoor
	 */
	struct ASASTube__BP_C_CloseBackwardDoor_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.OpenBackwardDoor
	 */
	struct ASASTube__BP_C_OpenBackwardDoor_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.CloseForwardDoor
	 */
	struct ASASTube__BP_C_CloseForwardDoor_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.OpenForwardDoor
	 */
	struct ASASTube__BP_C_OpenForwardDoor_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.StartClosingSequence
	 */
	struct ASASTube__BP_C_StartClosingSequence_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.StartOpeningSequence
	 */
	struct ASASTube__BP_C_StartOpeningSequence_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.OnDoorSequenceFinished
	 */
	struct ASASTube__BP_C_OnDoorSequenceFinished_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.Event_OnTubeFacingForwardChanged
	 */
	struct ASASTube__BP_C_Event_OnTubeFacingForwardChanged_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 */
	struct ASASTube__BP_C_BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_1_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 */
	struct ASASTube__BP_C_BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_1_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.BP_OnClose
	 */
	struct ASASTube__BP_C_BP_OnClose_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.BP_OnOpen
	 */
	struct ASASTube__BP_C_BP_OnOpen_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.TurnOnLights
	 */
	struct ASASTube__BP_C_TurnOnLights_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.TurnOffLights
	 */
	struct ASASTube__BP_C_TurnOffLights_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.SetLight
	 */
	struct ASASTube__BP_C_SetLight_Params
	{
	public:
		float                                                      SpotLightIntensity;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PointLightIntensity;                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FogLight;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MeshLight;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.BP_OnPlayersInsideChanged
	 */
	struct ASASTube__BP_C_BP_OnPlayersInsideChanged_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.ExecuteUbergraph_SASTube-02_BP
	 */
	struct ASASTube__BP_C_ExecuteUbergraph_SASTube__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.OnOpenedStageChanged__DelegateSignature
	 */
	struct ASASTube__BP_C_OnOpenedStageChanged__DelegateSignature_Params
	{
	public:
		class ASASTube__BP_C*                                      SASTube;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.AnimationCompletedBackward__DelegateSignature
	 */
	struct ASASTube__BP_C_AnimationCompletedBackward__DelegateSignature_Params
	{	};

	/**
	 * Function SASTube-02_BP.SASTube-02_BP_C.AnimationCompletedForward__DelegateSignature
	 */
	struct ASASTube__BP_C_AnimationCompletedForward__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
