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
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.GetStateName
	 */
	struct ASoundTrap_Base_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.IsStateA
	 */
	struct ASoundTrap_Base_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ShouldBeIgnoredForLots
	 */
	struct ASoundTrap_Base_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BP_GetCollisionCapsule
	 */
	struct ASoundTrap_Base_BP_C_BP_GetCollisionCapsule_Params
	{
	public:
		class UCapsuleComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.Editor_RopeOverlap
	 */
	struct ASoundTrap_Base_BP_C_Editor_RopeOverlap_Params
	{
	public:
		bool                                                       bOverlaps;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZONH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outOverlaps;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BP_MapCheck
	 */
	struct ASoundTrap_Base_BP_C_BP_MapCheck_Params
	{
	public:
		EMapCheckType                                              checkType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5EW7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outErrorMsg;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetAnchor
	 */
	struct ASoundTrap_Base_BP_C_SetAnchor_Params
	{	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.EnableRopePhysics
	 */
	struct ASoundTrap_Base_BP_C_EnableRopePhysics_Params
	{
	public:
		bool                                                       enablePhysics;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ResetRopeToInitial
	 */
	struct ASoundTrap_Base_BP_C_ResetRopeToInitial_Params
	{	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetScale
	 */
	struct ASoundTrap_Base_BP_C_SetScale_Params
	{	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetGizmo
	 */
	struct ASoundTrap_Base_BP_C_SetGizmo_Params
	{	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ConstructSound
	 */
	struct ASoundTrap_Base_BP_C_ConstructSound_Params
	{	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.Initialize
	 */
	struct ASoundTrap_Base_BP_C_Initialize_Params
	{	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.OnBumped
	 */
	struct ASoundTrap_Base_BP_C_OnBumped_Params
	{	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.OnRep_bBumped
	 */
	struct ASoundTrap_Base_BP_C_OnRep_bBumped_Params
	{	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.UserConstructionScript
	 */
	struct ASoundTrap_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.PrepareState
	 */
	struct ASoundTrap_Base_BP_C_PrepareState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XJ58[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              randomOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetState
	 */
	struct ASoundTrap_Base_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ReceiveBeginPlay
	 */
	struct ASoundTrap_Base_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BndEvt__RBRandomizableHelper_K2Node_ComponentBoundEvent_3_OnRandomStateChangedEvent__DelegateSignature
	 */
	struct ASoundTrap_Base_BP_C_BndEvt__RBRandomizableHelper_K2Node_ComponentBoundEvent_3_OnRandomStateChangedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.Server_SoundTrapActivated
	 */
	struct ASoundTrap_Base_BP_C_Server_SoundTrapActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0RS5[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ReceiveTick
	 */
	struct ASoundTrap_Base_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetShouldBeIgnoredForLots
	 */
	struct ASoundTrap_Base_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BP_OnHitByThrowable
	 */
	struct ASoundTrap_Base_BP_C_BP_OnHitByThrowable_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q99Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBThrowableWeapon*                                  throwableWeapon;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ProjectileHitSoundMulticast
	 */
	struct ASoundTrap_Base_BP_C_ProjectileHitSoundMulticast_Params
	{
	public:
		class FString                                              SwitchName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ExecuteUbergraph_SoundTrap_Base_BP
	 */
	struct ASoundTrap_Base_BP_C_ExecuteUbergraph_SoundTrap_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
