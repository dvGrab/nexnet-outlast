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
	 * Function BP_FX_Trial_03_OPH_01_BloodSprayTrigger.BP_FX_Trial_03_OPH_01_BloodSprayTrigger_C.SetPressure
	 */
	struct ABP_FX_Trial_03_OPH_01_BloodSprayTrigger_C_SetPressure_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FX_Trial_03_OPH_01_BloodSprayTrigger.BP_FX_Trial_03_OPH_01_BloodSprayTrigger_C.SetBloodOnKids
	 */
	struct ABP_FX_Trial_03_OPH_01_BloodSprayTrigger_C_SetBloodOnKids_Params
	{
	public:
		float                                                      IncrementalValue;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FX_Trial_03_OPH_01_BloodSprayTrigger.BP_FX_Trial_03_OPH_01_BloodSprayTrigger_C.UserConstructionScript
	 */
	struct ABP_FX_Trial_03_OPH_01_BloodSprayTrigger_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_FX_Trial_03_OPH_01_BloodSprayTrigger.BP_FX_Trial_03_OPH_01_BloodSprayTrigger_C.BloodRainOn__FinishedFunc
	 */
	struct ABP_FX_Trial_03_OPH_01_BloodSprayTrigger_C_BloodRainOn__FinishedFunc_Params
	{	};

	/**
	 * Function BP_FX_Trial_03_OPH_01_BloodSprayTrigger.BP_FX_Trial_03_OPH_01_BloodSprayTrigger_C.BloodRainOn__UpdateFunc
	 */
	struct ABP_FX_Trial_03_OPH_01_BloodSprayTrigger_C_BloodRainOn__UpdateFunc_Params
	{	};

	/**
	 * Function BP_FX_Trial_03_OPH_01_BloodSprayTrigger.BP_FX_Trial_03_OPH_01_BloodSprayTrigger_C.Event_OnTriggered
	 */
	struct ABP_FX_Trial_03_OPH_01_BloodSprayTrigger_C_Event_OnTriggered_Params
	{	};

	/**
	 * Function BP_FX_Trial_03_OPH_01_BloodSprayTrigger.BP_FX_Trial_03_OPH_01_BloodSprayTrigger_C.Event_OnUntriggered
	 */
	struct ABP_FX_Trial_03_OPH_01_BloodSprayTrigger_C_Event_OnUntriggered_Params
	{	};

	/**
	 * Function BP_FX_Trial_03_OPH_01_BloodSprayTrigger.BP_FX_Trial_03_OPH_01_BloodSprayTrigger_C.Event_OnResetStage
	 */
	struct ABP_FX_Trial_03_OPH_01_BloodSprayTrigger_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function BP_FX_Trial_03_OPH_01_BloodSprayTrigger.BP_FX_Trial_03_OPH_01_BloodSprayTrigger_C.BndEvt__BP_FX_Trial_03_OPH_01_BloodSprayTrigger_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_FX_Trial_03_OPH_01_BloodSprayTrigger_C_BndEvt__BP_FX_Trial_03_OPH_01_BloodSprayTrigger_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8B86[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_FX_Trial_03_OPH_01_BloodSprayTrigger.BP_FX_Trial_03_OPH_01_BloodSprayTrigger_C.BndEvt__BP_FX_Trial_03_OPH_01_BloodSprayTrigger_Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_FX_Trial_03_OPH_01_BloodSprayTrigger_C_BndEvt__BP_FX_Trial_03_OPH_01_BloodSprayTrigger_Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FX_Trial_03_OPH_01_BloodSprayTrigger.BP_FX_Trial_03_OPH_01_BloodSprayTrigger_C.ReceiveBeginPlay
	 */
	struct ABP_FX_Trial_03_OPH_01_BloodSprayTrigger_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FX_Trial_03_OPH_01_BloodSprayTrigger.BP_FX_Trial_03_OPH_01_BloodSprayTrigger_C.ExecuteUbergraph_BP_FX_Trial_03_OPH_01_BloodSprayTrigger
	 */
	struct ABP_FX_Trial_03_OPH_01_BloodSprayTrigger_C_ExecuteUbergraph_BP_FX_Trial_03_OPH_01_BloodSprayTrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
