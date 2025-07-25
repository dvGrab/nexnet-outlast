﻿#pragma once

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
	 * Function SJ_FallingObject_Base_BP.SJ_FallingObject_Base_BP_C.HitGround
	 */
	struct ASJ_FallingObject_Base_BP_C_HitGround_Params
	{	};

	/**
	 * Function SJ_FallingObject_Base_BP.SJ_FallingObject_Base_BP_C.Event_OnTriggered
	 */
	struct ASJ_FallingObject_Base_BP_C_Event_OnTriggered_Params
	{	};

	/**
	 * Function SJ_FallingObject_Base_BP.SJ_FallingObject_Base_BP_C.Event_OnUntriggered
	 */
	struct ASJ_FallingObject_Base_BP_C_Event_OnUntriggered_Params
	{	};

	/**
	 * Function SJ_FallingObject_Base_BP.SJ_FallingObject_Base_BP_C.BndEvt__FallingMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ASJ_FallingObject_Base_BP_C_BndEvt__FallingMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function SJ_FallingObject_Base_BP.SJ_FallingObject_Base_BP_C.ReceiveBeginPlay
	 */
	struct ASJ_FallingObject_Base_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SJ_FallingObject_Base_BP.SJ_FallingObject_Base_BP_C.Event_OnResetStage
	 */
	struct ASJ_FallingObject_Base_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function SJ_FallingObject_Base_BP.SJ_FallingObject_Base_BP_C.ExecuteUbergraph_SJ_FallingObject_Base_BP
	 */
	struct ASJ_FallingObject_Base_BP_C_ExecuteUbergraph_SJ_FallingObject_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
