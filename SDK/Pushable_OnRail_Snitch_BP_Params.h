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
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.SetHasBarsInFront
	 */
	struct APushable_OnRail_Snitch_BP_C_SetHasBarsInFront_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.OnRep_HasBarsInFront
	 */
	struct APushable_OnRail_Snitch_BP_C_OnRep_HasBarsInFront_Params
	{	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.GetHitDirection
	 */
	struct APushable_OnRail_Snitch_BP_C_GetHitDirection_Params
	{
	public:
		struct FVector                                             ImpactDirection;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBasicDirection                                            Direction;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W1X1[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.ConstructWheelMeshesList
	 */
	struct APushable_OnRail_Snitch_BP_C_ConstructWheelMeshesList_Params
	{	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.OnRep_RTPC_Snitch_Breath_Intensity
	 */
	struct APushable_OnRail_Snitch_BP_C_OnRep_RTPC_Snitch_Breath_Intensity_Params
	{	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.Set Snitch Breath
	 */
	struct APushable_OnRail_Snitch_BP_C_SetSnitchBreath_Params
	{
	public:
		float                                                      BreathIntensity;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.SetAgitationLevel
	 */
	struct APushable_OnRail_Snitch_BP_C_SetAgitationLevel_Params
	{
	public:
		ESnitchAgitation                                           Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.PlayAnimationOnSnitch
	 */
	struct APushable_OnRail_Snitch_BP_C_PlayAnimationOnSnitch_Params
	{
	public:
		class UAnimSequence*                                       Animation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.DetachFromScriptedEvent
	 */
	struct APushable_OnRail_Snitch_BP_C_DetachFromScriptedEvent_Params
	{	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.AttachToScriptedEvent
	 */
	struct APushable_OnRail_Snitch_BP_C_AttachToScriptedEvent_Params
	{
	public:
		class ASE_T02_Torturing_BP_C*                              ScriptedEvent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.UserConstructionScript
	 */
	struct APushable_OnRail_Snitch_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.BndEvt__Pushable_OnRail_Snitch_BP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APushable_OnRail_Snitch_BP_C_BndEvt__Pushable_OnRail_Snitch_BP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WLM2[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.BndEvt__Pushable_OnRail_Snitch_BP_CoyleSensor_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct APushable_OnRail_Snitch_BP_C_BndEvt__Pushable_OnRail_Snitch_BP_CoyleSensor_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.ReceiveBeginPlay
	 */
	struct APushable_OnRail_Snitch_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.fryed
	 */
	struct APushable_OnRail_Snitch_BP_C_fryed_Params
	{
	public:
		float                                                      FryedLevel;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.PlayNextVOBreaker
	 */
	struct APushable_OnRail_Snitch_BP_C_PlayNextVOBreaker_Params
	{	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.BndEvt__Pushable_OnRail_Snitch_BP_RBDamageable_K2Node_ComponentBoundEvent_1_OnDamageableReset__DelegateSignature
	 */
	struct APushable_OnRail_Snitch_BP_C_BndEvt__Pushable_OnRail_Snitch_BP_RBDamageable_K2Node_ComponentBoundEvent_1_OnDamageableReset__DelegateSignature_Params
	{
	public:
		class URBDamageableComponent*                              DamageableComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.Event_OnCanBePushedChanged
	 */
	struct APushable_OnRail_Snitch_BP_C_Event_OnCanBePushedChanged_Params
	{
	public:
		bool                                                       canBePushed;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.Multicast_HitReaction
	 */
	struct APushable_OnRail_Snitch_BP_C_Multicast_HitReaction_Params
	{
	public:
		EBasicDirection                                            Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.ExecuteUbergraph_Pushable_OnRail_Snitch_BP
	 */
	struct APushable_OnRail_Snitch_BP_C_ExecuteUbergraph_Pushable_OnRail_Snitch_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.OnHitByProjectile__DelegateSignature
	 */
	struct APushable_OnRail_Snitch_BP_C_OnHitByProjectile__DelegateSignature_Params
	{
	public:
		EBasicDirection                                            Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
