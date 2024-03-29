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
	 * Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.GetPingItemName
	 */
	struct AParent_DestructibleDoor_BP_C_GetPingItemName_Params
	{
	public:
		class FText                                                outName;                                                 // 0x0000(0x0018)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.GetPingEnabled
	 */
	struct AParent_DestructibleDoor_BP_C_GetPingEnabled_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       outIsEnabled;                                            // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0091(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F2NW[0x6];                                   // 0x0092(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.GetPlayerPingData
	 */
	struct AParent_DestructibleDoor_BP_C_GetPlayerPingData_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FPlayerPingData                                     outData;                                                 // 0x0090(0x0028)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VRGT[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.GetPlayerPingWorldLocation
	 */
	struct AParent_DestructibleDoor_BP_C_GetPlayerPingWorldLocation_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             OutLocation;                                             // 0x0090(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x009C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_25CX[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.EnableDamageSectionsShadow
	 */
	struct AParent_DestructibleDoor_BP_C_EnableDamageSectionsShadow_Params
	{
	public:
		bool                                                       CastShadow;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LSPK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.PostWindowBreakAkEvent
	 */
	struct AParent_DestructibleDoor_BP_C_PostWindowBreakAkEvent_Params
	{	};

	/**
	 * Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.SetParticleRotation
	 */
	struct AParent_DestructibleDoor_BP_C_SetParticleRotation_Params
	{
	public:
		class ARBPawn*                                             Front;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.SetMovementTransforms
	 */
	struct AParent_DestructibleDoor_BP_C_SetMovementTransforms_Params
	{	};

	/**
	 * Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.UserConstructionScript
	 */
	struct AParent_DestructibleDoor_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.Event On Bash
	 */
	struct AParent_DestructibleDoor_BP_C_Event_On_Bash_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bApplyDamageVisual;                                      // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EBashDoorType                                              bashType;                                                // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.Event_OnResetStage
	 */
	struct AParent_DestructibleDoor_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.ReceiveBeginPlay
	 */
	struct AParent_DestructibleDoor_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.ExecuteUbergraph_Parent_DestructibleDoor_BP
	 */
	struct AParent_DestructibleDoor_BP_C_ExecuteUbergraph_Parent_DestructibleDoor_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
