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
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.FixUp
	 */
	struct ARewardCrate_Container_BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.GetPickupInteractionLocation
	 */
	struct ARewardCrate_Container_BP_C_GetPickupInteractionLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URBContainerSpawnLocationComponent*                  spawnComponent;                                          // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             out_location;                                            // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             out_direction;                                           // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TU08[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.UserConstructionScript
	 */
	struct ARewardCrate_Container_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.Timeline_0__FinishedFunc
	 */
	struct ARewardCrate_Container_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.Timeline_0__UpdateFunc
	 */
	struct ARewardCrate_Container_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.OnPostActorsPasted
	 */
	struct ARewardCrate_Container_BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.PostAddedToLevel
	 */
	struct ARewardCrate_Container_BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.PostDuplicated
	 */
	struct ARewardCrate_Container_BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.PostEditChange
	 */
	struct ARewardCrate_Container_BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.PostEditMove
	 */
	struct ARewardCrate_Container_BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.TickSelected
	 */
	struct ARewardCrate_Container_BP_C_TickSelected_Params
	{	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.OnEditorPostLoad
	 */
	struct ARewardCrate_Container_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.CloseLight
	 */
	struct ARewardCrate_Container_BP_C_CloseLight_Params
	{	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.Event_ItemPickedUp
	 */
	struct ARewardCrate_Container_BP_C_Event_ItemPickedUp_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RewardCrate_Container_BP.RewardCrate_Container_BP_C.ExecuteUbergraph_RewardCrate_Container_BP
	 */
	struct ARewardCrate_Container_BP_C_ExecuteUbergraph_RewardCrate_Container_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0E1N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
