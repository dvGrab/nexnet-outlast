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
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetLookAtLocation
	 */
	struct AReviveSyringeSpawner_BP_C_GetLookAtLocation_Params
	{
	public:
		struct FVector                                             outLookAtLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.DisableLightOnServer
	 */
	struct AReviveSyringeSpawner_BP_C_DisableLightOnServer_Params
	{	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ShouldSpawnPill
	 */
	struct AReviveSyringeSpawner_BP_C_ShouldSpawnPill_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2B1O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetPingEnabled
	 */
	struct AReviveSyringeSpawner_BP_C_GetPingEnabled_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       outIsEnabled;                                            // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0091(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetPlayerPingWorldLocation
	 */
	struct AReviveSyringeSpawner_BP_C_GetPlayerPingWorldLocation_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             OutLocation;                                             // 0x0090(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x009C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1ON9[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetPlayerPingData
	 */
	struct AReviveSyringeSpawner_BP_C_GetPlayerPingData_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FPlayerPingData                                     outData;                                                 // 0x0090(0x0028)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.OnRep_IsBroken_Server
	 */
	struct AReviveSyringeSpawner_BP_C_OnRep_IsBroken_Server_Params
	{	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.OnRep_NeedInsideLight
	 */
	struct AReviveSyringeSpawner_BP_C_OnRep_NeedInsideLight_Params
	{	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.UpdateLights
	 */
	struct AReviveSyringeSpawner_BP_C_UpdateLights_Params
	{	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.IsOpen
	 */
	struct AReviveSyringeSpawner_BP_C_IsOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.UpdateBrokenState
	 */
	struct AReviveSyringeSpawner_BP_C_UpdateBrokenState_Params
	{	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.PlaySpecialMoveAnimation
	 */
	struct AReviveSyringeSpawner_BP_C_PlaySpecialMoveAnimation_Params
	{
	public:
		class ARBPawn*                                             interactorPawn;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F71G[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.GetInteractionPawnLocation
	 */
	struct AReviveSyringeSpawner_BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0Z80[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JDOC[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.UserConstructionScript
	 */
	struct AReviveSyringeSpawner_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.OnWorldPopulateFinished
	 */
	struct AReviveSyringeSpawner_BP_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ForceBreak_Server
	 */
	struct AReviveSyringeSpawner_BP_C_ForceBreak_Server_Params
	{	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ReceiveBeginPlay
	 */
	struct AReviveSyringeSpawner_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.Break
	 */
	struct AReviveSyringeSpawner_BP_C_Break_Params
	{
	public:
		class AActor*                                              Damager;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.Event_OnResetStage
	 */
	struct AReviveSyringeSpawner_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.PostToggled
	 */
	struct AReviveSyringeSpawner_BP_C_PostToggled_Params
	{
	public:
		bool                                                       bToggleEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.OnPawnDoSpecialMoveAction
	 */
	struct AReviveSyringeSpawner_BP_C_OnPawnDoSpecialMoveAction_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.Event_ItemPickedUp
	 */
	struct AReviveSyringeSpawner_BP_C_Event_ItemPickedUp_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ValidateBroken
	 */
	struct AReviveSyringeSpawner_BP_C_ValidateBroken_Params
	{	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.BndEvt__ReviveSyringeSpawner_BP_DamageableComponent_K2Node_ComponentBoundEvent_1_OnDamageableEvent__DelegateSignature
	 */
	struct AReviveSyringeSpawner_BP_C_BndEvt__ReviveSyringeSpawner_BP_DamageableComponent_K2Node_ComponentBoundEvent_1_OnDamageableEvent__DelegateSignature_Params
	{
	public:
		class URBDamageableComponent*                              DamageableComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ReviveSyringeSpawner_BP.ReviveSyringeSpawner_BP_C.ExecuteUbergraph_ReviveSyringeSpawner_BP
	 */
	struct AReviveSyringeSpawner_BP_C_ExecuteUbergraph_ReviveSyringeSpawner_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
