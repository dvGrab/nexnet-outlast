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
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.GetGoalIconActor
	 */
	struct AElectrocutionDevice_BP_C_GetGoalIconActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.GetGoalTrigger
	 */
	struct AElectrocutionDevice_BP_C_GetGoalTrigger_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ResetLitnFX
	 */
	struct AElectrocutionDevice_BP_C_ResetLitnFX_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Update Execution Looping Sound
	 */
	struct AElectrocutionDevice_BP_C_UpdateExecutionLoopingSound_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.DisableFX
	 */
	struct AElectrocutionDevice_BP_C_DisableFX_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.EnableFX
	 */
	struct AElectrocutionDevice_BP_C_EnableFX_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.SetShouldBeOpened
	 */
	struct AElectrocutionDevice_BP_C_SetShouldBeOpened_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.SetOpenedRatio
	 */
	struct AElectrocutionDevice_BP_C_SetOpenedRatio_Params
	{
	public:
		float                                                      ratio;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.OnRep_ShouldBeOpened
	 */
	struct AElectrocutionDevice_BP_C_OnRep_ShouldBeOpened_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ShouldTick
	 */
	struct AElectrocutionDevice_BP_C_ShouldTick_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.UserConstructionScript
	 */
	struct AElectrocutionDevice_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_0__FinishedFunc
	 */
	struct AElectrocutionDevice_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_0__UpdateFunc
	 */
	struct AElectrocutionDevice_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_1__FinishedFunc
	 */
	struct AElectrocutionDevice_BP_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_1__UpdateFunc
	 */
	struct AElectrocutionDevice_BP_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Timeline_1__Electric__EventFunc
	 */
	struct AElectrocutionDevice_BP_C_Timeline_1__Electric__EventFunc_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.OnWorldFullyLoaded
	 */
	struct AElectrocutionDevice_BP_C_OnWorldFullyLoaded_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ReceiveTick
	 */
	struct AElectrocutionDevice_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnResetStage
	 */
	struct AElectrocutionDevice_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.OpenDoorInternal
	 */
	struct AElectrocutionDevice_BP_C_OpenDoorInternal_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.CloseDoorInternal
	 */
	struct AElectrocutionDevice_BP_C_CloseDoorInternal_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.UpdateDoorState
	 */
	struct AElectrocutionDevice_BP_C_UpdateDoorState_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.BndEvt__ElectrocutionDevice_BP_OpenDoorTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AElectrocutionDevice_BP_C_BndEvt__ElectrocutionDevice_BP_OpenDoorTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LY3Q[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnStartedChanged
	 */
	struct AElectrocutionDevice_BP_C_Event_OnStartedChanged_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnPlayerOverloaded
	 */
	struct AElectrocutionDevice_BP_C_Event_OnPlayerOverloaded_Params
	{
	public:
		class URBElectrocutionSwitchPanelComponent*                panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnCompletedChanged
	 */
	struct AElectrocutionDevice_BP_C_Event_OnCompletedChanged_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.PlayLight
	 */
	struct AElectrocutionDevice_BP_C_PlayLight_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ElectricalShock
	 */
	struct AElectrocutionDevice_BP_C_ElectricalShock_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.bLast
	 */
	struct AElectrocutionDevice_BP_C_bLast_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.BurnSnitch
	 */
	struct AElectrocutionDevice_BP_C_BurnSnitch_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ReceiveBeginPlay
	 */
	struct AElectrocutionDevice_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.Event_OnCurrentVoltageChanged
	 */
	struct AElectrocutionDevice_BP_C_Event_OnCurrentVoltageChanged_Params
	{
	public:
		float                                                      currentVoltage;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.BndEvt__ElectrocutionDevice_BP_CartGoalTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AElectrocutionDevice_BP_C_BndEvt__ElectrocutionDevice_BP_CartGoalTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TGJL[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.OnWorldPopulateFinished
	 */
	struct AElectrocutionDevice_BP_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function ElectrocutionDevice_BP.ElectrocutionDevice_BP_C.ExecuteUbergraph_ElectrocutionDevice_BP
	 */
	struct AElectrocutionDevice_BP_C_ExecuteUbergraph_ElectrocutionDevice_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
