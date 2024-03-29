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
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.CanPlayFutterManSong
	 */
	struct AExplosiveTrapBase_BP_C_CanPlayFutterManSong_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.UpdateVisibility
	 */
	struct AExplosiveTrapBase_BP_C_UpdateVisibility_Params
	{	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.SetVisibility
	 */
	struct AExplosiveTrapBase_BP_C_SetVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.UserConstructionScript
	 */
	struct AExplosiveTrapBase_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.Event_Explode
	 */
	struct AExplosiveTrapBase_BP_C_Event_Explode_Params
	{	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.Event_OnResetStage
	 */
	struct AExplosiveTrapBase_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.Event_SnapToState
	 */
	struct AExplosiveTrapBase_BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.Event_ActiveChanged
	 */
	struct AExplosiveTrapBase_BP_C_Event_ActiveChanged_Params
	{	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.PostToggled
	 */
	struct AExplosiveTrapBase_BP_C_PostToggled_Params
	{
	public:
		bool                                                       bToggleEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.ReceiveTick
	 */
	struct AExplosiveTrapBase_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.BndEvt__RBDamageable_K2Node_ComponentBoundEvent_0_OnDamageableDestroyed__DelegateSignature
	 */
	struct AExplosiveTrapBase_BP_C_BndEvt__RBDamageable_K2Node_ComponentBoundEvent_0_OnDamageableDestroyed__DelegateSignature_Params
	{
	public:
		class URBDamageableComponent*                              DamageableComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.Multicast_PlaySoundPart
	 */
	struct AExplosiveTrapBase_BP_C_Multicast_PlaySoundPart_Params
	{	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.PrepareNextSong
	 */
	struct AExplosiveTrapBase_BP_C_PrepareNextSong_Params
	{
	public:
		bool                                                       ForceNow;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.ReceiveBeginPlay
	 */
	struct AExplosiveTrapBase_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.BndEvt__ExplosiveTrapBase_BP_RandomizableHelper_K2Node_ComponentBoundEvent_1_OnRandomStateChangedEvent__DelegateSignature
	 */
	struct AExplosiveTrapBase_BP_C_BndEvt__ExplosiveTrapBase_BP_RandomizableHelper_K2Node_ComponentBoundEvent_1_OnRandomStateChangedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.LightFlash
	 */
	struct AExplosiveTrapBase_BP_C_LightFlash_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.Event_Disable
	 */
	struct AExplosiveTrapBase_BP_C_Event_Disable_Params
	{	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.TestSound
	 */
	struct AExplosiveTrapBase_BP_C_TestSound_Params
	{	};

	/**
	 * Function ExplosiveTrapBase_BP.ExplosiveTrapBase_BP_C.ExecuteUbergraph_ExplosiveTrapBase_BP
	 */
	struct AExplosiveTrapBase_BP_C_ExecuteUbergraph_ExplosiveTrapBase_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
