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
	 * Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.AnimGraph
	 */
	struct ULockPick_Skm_AnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.UpdatePlayerAnimInstance
	 */
	struct ULockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance_Params
	{
	public:
		class ARBPlayer*                                           PlayerOwner;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.BlueprintUpdateAnimation
	 */
	struct ULockPick_Skm_AnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.BlueprintBeginPlay
	 */
	struct ULockPick_Skm_AnimBP_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.OnPlayerOwnerChanged
	 */
	struct ULockPick_Skm_AnimBP_C_OnPlayerOwnerChanged_Params
	{
	public:
		class ARBPickup*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.ExecuteUbergraph_LockPick_Skm_AnimBP
	 */
	struct ULockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
