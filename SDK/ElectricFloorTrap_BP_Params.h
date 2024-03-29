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
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.GetStateName
	 */
	struct AElectricFloorTrap_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.IsStateA
	 */
	struct AElectricFloorTrap_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.ShouldBeIgnoredForLots
	 */
	struct AElectricFloorTrap_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.ShouldVFXPlay
	 */
	struct AElectricFloorTrap_BP_C_ShouldVFXPlay_Params
	{
	public:
		bool                                                       ShouldPlay;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.GetVFXposition
	 */
	struct AElectricFloorTrap_BP_C_GetVFXposition_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetVisualState
	 */
	struct AElectricFloorTrap_BP_C_SetVisualState_Params
	{
	public:
		EElectricFloorTrapState                                    State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XASK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetElectricVFXAsset
	 */
	struct AElectricFloorTrap_BP_C_SetElectricVFXAsset_Params
	{
	public:
		class UNiagaraSystem*                                      NiagaraAsset;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.PlayElectricVFXAtRandomLocation
	 */
	struct AElectricFloorTrap_BP_C_PlayElectricVFXAtRandomLocation_Params
	{
	public:
		class UAkAudioEvent*                                       AssociatedSound;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.GetRandomLocationOnFloor
	 */
	struct AElectricFloorTrap_BP_C_GetRandomLocationOnFloor_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.GetTrapState
	 */
	struct AElectricFloorTrap_BP_C_GetTrapState_Params
	{
	public:
		EElectricFloorTrapState                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IR5K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnTrapStateChanged
	 */
	struct AElectricFloorTrap_BP_C_OnTrapStateChanged_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.UserConstructionScript
	 */
	struct AElectricFloorTrap_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SppedFlash__FinishedFunc
	 */
	struct AElectricFloorTrap_BP_C_SppedFlash__FinishedFunc_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SppedFlash__UpdateFunc
	 */
	struct AElectricFloorTrap_BP_C_SppedFlash__UpdateFunc_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.Timeline_0__FinishedFunc
	 */
	struct AElectricFloorTrap_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.Timeline_0__UpdateFunc
	 */
	struct AElectricFloorTrap_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.PrepareState
	 */
	struct AElectricFloorTrap_BP_C_PrepareState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MUMF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              randomOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.ReceiveEndPlay
	 */
	struct AElectricFloorTrap_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.Event_OnResetStage
	 */
	struct AElectricFloorTrap_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.BndEvt__RBElectricFloorTrap_K2Node_ComponentBoundEvent_1_OnElectricFloorTrapEvent__DelegateSignature
	 */
	struct AElectricFloorTrap_BP_C_BndEvt__RBElectricFloorTrap_K2Node_ComponentBoundEvent_1_OnElectricFloorTrapEvent__DelegateSignature_Params
	{
	public:
		class URBElectricFloorTrapComponent*                       trap;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStateChange_ActiveOff
	 */
	struct AElectricFloorTrap_BP_C_OnStateChange_ActiveOff_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStateChange_ActiveOn
	 */
	struct AElectricFloorTrap_BP_C_OnStateChange_ActiveOn_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStateChange_Inactive
	 */
	struct AElectricFloorTrap_BP_C_OnStateChange_Inactive_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetState
	 */
	struct AElectricFloorTrap_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetShouldBeIgnoredForLots
	 */
	struct AElectricFloorTrap_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStageChange_ActiveTriggered
	 */
	struct AElectricFloorTrap_BP_C_OnStageChange_ActiveTriggered_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStateChange_Broken
	 */
	struct AElectricFloorTrap_BP_C_OnStateChange_Broken_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.BndEvt__RBDamageable_K2Node_ComponentBoundEvent_2_OnDamageableDestroyed__DelegateSignature
	 */
	struct AElectricFloorTrap_BP_C_BndEvt__RBDamageable_K2Node_ComponentBoundEvent_2_OnDamageableDestroyed__DelegateSignature_Params
	{
	public:
		class URBDamageableComponent*                              DamageableComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.OnStageChange_ActiveWarning
	 */
	struct AElectricFloorTrap_BP_C_OnStageChange_ActiveWarning_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SpeedSlash
	 */
	struct AElectricFloorTrap_BP_C_SpeedSlash_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.LightFlash
	 */
	struct AElectricFloorTrap_BP_C_LightFlash_Params
	{	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.SetBrokenMesh
	 */
	struct AElectricFloorTrap_BP_C_SetBrokenMesh_Params
	{
	public:
		bool                                                       IsBroken;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectricFloorTrap_BP.ElectricFloorTrap_BP_C.ExecuteUbergraph_ElectricFloorTrap_BP
	 */
	struct AElectricFloorTrap_BP_C_ExecuteUbergraph_ElectricFloorTrap_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
