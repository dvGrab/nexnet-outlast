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
	 * Function Cauldron_InteractionPanel_BP.Cauldron_InteractionPanel_BP_C.GetAmountOfBottlesAndHeadsUsed
	 */
	struct UCauldron_InteractionPanel_BP_C_GetAmountOfBottlesAndHeadsUsed_Params
	{
	public:
		int32_t                                                    BottleUsed;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HeadsUsed;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cauldron_InteractionPanel_BP.Cauldron_InteractionPanel_BP_C.InitializeLinkedObject
	 */
	struct UCauldron_InteractionPanel_BP_C_InitializeLinkedObject_Params
	{	};

	/**
	 * Function Cauldron_InteractionPanel_BP.Cauldron_InteractionPanel_BP_C.ShouldBPTick
	 */
	struct UCauldron_InteractionPanel_BP_C_ShouldBPTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5H0P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Cauldron_InteractionPanel_BP.Cauldron_InteractionPanel_BP_C.GetLargeObjectRef
	 */
	struct UCauldron_InteractionPanel_BP_C_GetLargeObjectRef_Params
	{
	public:
		class ARBLargePickup*                                      pickup;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cauldron_InteractionPanel_BP.Cauldron_InteractionPanel_BP_C.GetSpecialMoveAnimation
	 */
	struct UCauldron_InteractionPanel_BP_C_GetSpecialMoveAnimation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsFirstPerson;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HAGG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cauldron_InteractionPanel_BP.Cauldron_InteractionPanel_BP_C.GetInteractionPawnLocation
	 */
	struct UCauldron_InteractionPanel_BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_36R1[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XHCS[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Cauldron_InteractionPanel_BP.Cauldron_InteractionPanel_BP_C.Event_OnLargeObjectDoAction
	 */
	struct UCauldron_InteractionPanel_BP_C_Event_OnLargeObjectDoAction_Params
	{
	public:
		class ARBLargePickup*                                      largeObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             interactor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cauldron_InteractionPanel_BP.Cauldron_InteractionPanel_BP_C.Event_OnResetStage
	 */
	struct UCauldron_InteractionPanel_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Cauldron_InteractionPanel_BP.Cauldron_InteractionPanel_BP_C.ReceiveBeginPlay
	 */
	struct UCauldron_InteractionPanel_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Cauldron_InteractionPanel_BP.Cauldron_InteractionPanel_BP_C.Event_OnTossIntoFinished
	 */
	struct UCauldron_InteractionPanel_BP_C_Event_OnTossIntoFinished_Params
	{
	public:
		class ARBLargePickup*                                      largeObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cauldron_InteractionPanel_BP.Cauldron_InteractionPanel_BP_C.ExecuteUbergraph_Cauldron_InteractionPanel_BP
	 */
	struct UCauldron_InteractionPanel_BP_C_ExecuteUbergraph_Cauldron_InteractionPanel_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BHYR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
