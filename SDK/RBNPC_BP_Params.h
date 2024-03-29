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
	 * Function RBNPC_BP.RBNPC_BP_C.SpawnVariatorEffects
	 */
	struct ARBNPC_BP_C_SpawnVariatorEffects_Params
	{	};

	/**
	 * Function RBNPC_BP.RBNPC_BP_C.SetNormalMeshVisibility
	 */
	struct ARBNPC_BP_C_SetNormalMeshVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBNPC_BP.RBNPC_BP_C.UserConstructionScript
	 */
	struct ARBNPC_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RBNPC_BP.RBNPC_BP_C.Event_PlayHitReactionEffects
	 */
	struct ARBNPC_BP_C_Event_PlayHitReactionEffects_Params
	{
	public:
		struct FVector                                             attackLoc;                                               // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            effectRotation;                                          // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBNPC_BP.RBNPC_BP_C.Event_OnFootstep
	 */
	struct ARBNPC_BP_C_Event_OnFootstep_Params
	{
	public:
		struct FFootstepData                                       FootstepData;                                            // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function RBNPC_BP.RBNPC_BP_C.Event_OnDealtWeaponDamage
	 */
	struct ARBNPC_BP_C_Event_OnDealtWeaponDamage_Params
	{
	public:
		class ARBPawn*                                             otherPawn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             DamageLocation;                                          // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_BP.RBNPC_BP_C.Event_OnDealtUnarmedDamage
	 */
	struct ARBNPC_BP_C_Event_OnDealtUnarmedDamage_Params
	{
	public:
		class ARBPawn*                                             otherPawn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                damageSourceBone;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_BP.RBNPC_BP_C.ReceiveBeginPlay
	 */
	struct ARBNPC_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RBNPC_BP.RBNPC_BP_C.TestFakeBlurHead
	 */
	struct ARBNPC_BP_C_TestFakeBlurHead_Params
	{	};

	/**
	 * Function RBNPC_BP.RBNPC_BP_C.TestFakeBlurComplete
	 */
	struct ARBNPC_BP_C_TestFakeBlurComplete_Params
	{	};

	/**
	 * Function RBNPC_BP.RBNPC_BP_C.ExecuteUbergraph_RBNPC_BP
	 */
	struct ARBNPC_BP_C_ExecuteUbergraph_RBNPC_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_BP.RBNPC_BP_C.BroadcastWeaponAnimation__DelegateSignature
	 */
	struct ARBNPC_BP_C_BroadcastWeaponAnimation__DelegateSignature_Params
	{
	public:
		class UAnimSequence*                                       Sequence;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
