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
	 * Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.NewFunction_1
	 */
	struct ANPC_Weapon_Shotgun_C_NewFunction_1_Params
	{	};

	/**
	 * Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.Timeline_0__FinishedFunc
	 */
	struct ANPC_Weapon_Shotgun_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.Timeline_0__UpdateFunc
	 */
	struct ANPC_Weapon_Shotgun_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.Special Move Notify
	 */
	struct ANPC_Weapon_Shotgun_C_Special_Move_Notify_Params
	{
	public:
		ESpecialMoveNotifyType                                     Notify;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.ReceiveBeginPlay
	 */
	struct ANPC_Weapon_Shotgun_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.EquippedBy
	 */
	struct ANPC_Weapon_Shotgun_C_EquippedBy_Params
	{
	public:
		class ARBNPC*                                              NPC;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.PlayWeaponAnimation
	 */
	struct ANPC_Weapon_Shotgun_C_PlayWeaponAnimation_Params
	{
	public:
		class UAnimSequence*                                       AnimSequence;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.OnSpecialMoveNotify
	 */
	struct ANPC_Weapon_Shotgun_C_OnSpecialMoveNotify_Params
	{
	public:
		class USkeletalMeshComponent*                              meshComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URBAnimNotify_SpecialMove*                           AnimNotify;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.ExecuteUbergraph_NPC_Weapon_Shotgun
	 */
	struct ANPC_Weapon_Shotgun_C_ExecuteUbergraph_NPC_Weapon_Shotgun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
