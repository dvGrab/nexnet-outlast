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
	 * Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.BP_OverrideEditorCompTranform
	 */
	struct APlanksDoubleDoor__BP_C_BP_OverrideEditorCompTranform_Params
	{
	public:
		class FName                                                compName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLocked;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENJP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FTransform                                          ReturnValue;                                             // 0x0040(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.OnSetup
	 */
	struct APlanksDoubleDoor__BP_C_OnSetup_Params
	{	};

	/**
	 * Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.BP_PostDoorInitialization
	 */
	struct APlanksDoubleDoor__BP_C_BP_PostDoorInitialization_Params
	{	};

	/**
	 * Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.BndEvt__RBDamageable_K2Node_ComponentBoundEvent_0_OnDamageableDestroyed__DelegateSignature
	 */
	struct APlanksDoubleDoor__BP_C_BndEvt__RBDamageable_K2Node_ComponentBoundEvent_0_OnDamageableDestroyed__DelegateSignature_Params
	{
	public:
		class URBDamageableComponent*                              DamageableComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.ReceiveBeginPlay
	 */
	struct APlanksDoubleDoor__BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.BP_OnUnlock
	 */
	struct APlanksDoubleDoor__BP_C_BP_OnUnlock_Params
	{	};

	/**
	 * Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.ExecuteUbergraph_PlanksDoubleDoor-01_BP
	 */
	struct APlanksDoubleDoor__BP_C_ExecuteUbergraph_PlanksDoubleDoor__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
