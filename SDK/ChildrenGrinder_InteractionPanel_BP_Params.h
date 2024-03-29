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
	 * Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.IsInteractionPossible
	 */
	struct UChildrenGrinder_InteractionPanel_BP_C_IsInteractionPossible_Params
	{
	public:
		class ARBPawn*                                             interactorPawn;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.GetLargeObjectRef
	 */
	struct UChildrenGrinder_InteractionPanel_BP_C_GetLargeObjectRef_Params
	{
	public:
		class ARBLargePickup*                                      pickup;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.GetSpecialMoveAnimation
	 */
	struct UChildrenGrinder_InteractionPanel_BP_C_GetSpecialMoveAnimation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsFirstPerson;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A1O6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.GetInteractionPawnLocation
	 */
	struct UChildrenGrinder_InteractionPanel_BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HD3U[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XO33[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.Event_OnLargeObjectDoAction
	 */
	struct UChildrenGrinder_InteractionPanel_BP_C_Event_OnLargeObjectDoAction_Params
	{
	public:
		class ARBLargePickup*                                      largeObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             interactor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.Event_OnResetStage
	 */
	struct UChildrenGrinder_InteractionPanel_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.ReceiveBeginPlay
	 */
	struct UChildrenGrinder_InteractionPanel_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.Event_OnTossIntoFinished
	 */
	struct UChildrenGrinder_InteractionPanel_BP_C_Event_OnTossIntoFinished_Params
	{
	public:
		class ARBLargePickup*                                      largeObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.ExecuteUbergraph_ChildrenGrinder_InteractionPanel_BP
	 */
	struct UChildrenGrinder_InteractionPanel_BP_C_ExecuteUbergraph_ChildrenGrinder_InteractionPanel_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D0X4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
