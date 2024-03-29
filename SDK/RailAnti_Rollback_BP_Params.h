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
	 * Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.UpdateBlockingCollision
	 */
	struct ARailAntiRollback_BP_C_UpdateBlockingCollision_Params
	{	};

	/**
	 * Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Timeline_0__FinishedFunc
	 */
	struct ARailAntiRollback_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Timeline_0__UpdateFunc
	 */
	struct ARailAntiRollback_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.ReceiveBeginPlay
	 */
	struct ARailAntiRollback_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Event_SnapToState
	 */
	struct ARailAntiRollback_BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Event_OnResetStage
	 */
	struct ARailAntiRollback_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Event_OnTriggerSequenceStarted
	 */
	struct ARailAntiRollback_BP_C_Event_OnTriggerSequenceStarted_Params
	{	};

	/**
	 * Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.BndEvt__RailAnti-Rollback_BP_CartDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ARailAntiRollback_BP_C_BndEvt__RailAntiRollback_BP_CartDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HY7Z[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.ExecuteUbergraph_RailAnti-Rollback_BP
	 */
	struct ARailAntiRollback_BP_C_ExecuteUbergraph_RailAntiRollback_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
