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
	 * Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.TickTimer
	 */
	struct AValveUnlockingButton_BP_C_TickTimer_Params
	{	};

	/**
	 * Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.RefreshTimerDiodesVisual
	 */
	struct AValveUnlockingButton_BP_C_RefreshTimerDiodesVisual_Params
	{	};

	/**
	 * Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.ShouldTick
	 */
	struct AValveUnlockingButton_BP_C_ShouldTick_Params
	{
	public:
		bool                                                       bShouldTick;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.UserConstructionScript
	 */
	struct AValveUnlockingButton_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.ReceiveTick
	 */
	struct AValveUnlockingButton_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.BndEvt__ValveUnlocking-Button_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnCoopOperatableEvent__DelegateSignature
	 */
	struct AValveUnlockingButton_BP_C_BndEvt__ValveUnlockingButton_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnCoopOperatableEvent__DelegateSignature_Params
	{
	public:
		class URBCoopOperatableComponent*                          Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.BndEvt__ValveUnlocking-Button_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature
	 */
	struct AValveUnlockingButton_BP_C_BndEvt__ValveUnlockingButton_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature_Params
	{
	public:
		class URBInteractionZoneComponent*                         Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ValveUnlocking-Button_BP.ValveUnlocking-Button_BP_C.ExecuteUbergraph_ValveUnlocking-Button_BP
	 */
	struct AValveUnlockingButton_BP_C_ExecuteUbergraph_ValveUnlockingButton_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
