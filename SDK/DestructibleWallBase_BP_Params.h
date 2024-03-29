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
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.ResetLigthingSettings
	 */
	struct ADestructibleWallBase_BP_C_ResetLigthingSettings_Params
	{	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.UserConstructionScript
	 */
	struct ADestructibleWallBase_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Timeline_0__FinishedFunc
	 */
	struct ADestructibleWallBase_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Timeline_0__UpdateFunc
	 */
	struct ADestructibleWallBase_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Shake
	 */
	struct ADestructibleWallBase_BP_C_Shake_Params
	{	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.FirsHit
	 */
	struct ADestructibleWallBase_BP_C_FirsHit_Params
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.SecondHit
	 */
	struct ADestructibleWallBase_BP_C_SecondHit_Params
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.ThirdHit
	 */
	struct ADestructibleWallBase_BP_C_ThirdHit_Params
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.FourthHit
	 */
	struct ADestructibleWallBase_BP_C_FourthHit_Params
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.forceBreak
	 */
	struct ADestructibleWallBase_BP_C_forceBreak_Params
	{	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_3_OnDamageableDamaged__DelegateSignature
	 */
	struct ADestructibleWallBase_BP_C_BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_3_OnDamageableDamaged__DelegateSignature_Params
	{
	public:
		class URBDamageableComponent*                              DamageableComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDestroyed;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Event_SnapToState
	 */
	struct ADestructibleWallBase_BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.UpdateDuratility
	 */
	struct ADestructibleWallBase_BP_C_UpdateDuratility_Params
	{	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Event_OnResetStage
	 */
	struct ADestructibleWallBase_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Event_OnBreakObject
	 */
	struct ADestructibleWallBase_BP_C_Event_OnBreakObject_Params
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.ReceiveBeginPlay
	 */
	struct ADestructibleWallBase_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.plankHit
	 */
	struct ADestructibleWallBase_BP_C_plankHit_Params
	{
	public:
		TArray<class FName>                                        PlankToMove;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FName>                                        PlanksToBreak;                                           // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             A;                                                       // 0x0020(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.ExecuteUbergraph_DestructibleWallBase_BP
	 */
	struct ADestructibleWallBase_BP_C_ExecuteUbergraph_DestructibleWallBase_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Broken__DelegateSignature
	 */
	struct ADestructibleWallBase_BP_C_Broken__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
