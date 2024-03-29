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
	 * Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.OnRep_ForcedStaticMesh
	 */
	struct AGlassBottle_Weapon_BP_C_OnRep_ForcedStaticMesh_Params
	{	};

	/**
	 * Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.ForceMeshes
	 */
	struct AGlassBottle_Weapon_BP_C_ForceMeshes_Params
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         StaticMeshB;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HoldOffset;                                              // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.RefreshVisual
	 */
	struct AGlassBottle_Weapon_BP_C_RefreshVisual_Params
	{	};

	/**
	 * Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.ReceiveBeginPlay
	 */
	struct AGlassBottle_Weapon_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.BP_OnGroundAndPoundCounter
	 */
	struct AGlassBottle_Weapon_BP_C_BP_OnGroundAndPoundCounter_Params
	{	};

	/**
	 * Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.BP_OnInitializeRecycledItem
	 */
	struct AGlassBottle_Weapon_BP_C_BP_OnInitializeRecycledItem_Params
	{
	public:
		class ARBPickup*                                           originalItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.BP_OnDropItemToFloor
	 */
	struct AGlassBottle_Weapon_BP_C_BP_OnDropItemToFloor_Params
	{	};

	/**
	 * Function GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C.ExecuteUbergraph_GlassBottle_Weapon_BP
	 */
	struct AGlassBottle_Weapon_BP_C_ExecuteUbergraph_GlassBottle_Weapon_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
