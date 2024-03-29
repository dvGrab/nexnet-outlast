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
	 * Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.UpdateRTPC
	 */
	struct UAcidBath_InteractionPanel_BP_C_UpdateRTPC_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.GetAmountOfBottlesAndHeadsUsed
	 */
	struct UAcidBath_InteractionPanel_BP_C_GetAmountOfBottlesAndHeadsUsed_Params
	{
	public:
		int32_t                                                    BottleUsed;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HeadsUsed;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.InitializeLinkedObject
	 */
	struct UAcidBath_InteractionPanel_BP_C_InitializeLinkedObject_Params
	{	};

	/**
	 * Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.ShouldBPTick
	 */
	struct UAcidBath_InteractionPanel_BP_C_ShouldBPTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JV1B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.GetLargeObjectRef
	 */
	struct UAcidBath_InteractionPanel_BP_C_GetLargeObjectRef_Params
	{
	public:
		class ARBLargePickup*                                      pickup;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.GetSpecialMoveAnimation
	 */
	struct UAcidBath_InteractionPanel_BP_C_GetSpecialMoveAnimation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsFirstPerson;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1XMU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.GetInteractionPawnLocation
	 */
	struct UAcidBath_InteractionPanel_BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H5ZD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5MGQ[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.Event_OnLargeObjectDoAction
	 */
	struct UAcidBath_InteractionPanel_BP_C_Event_OnLargeObjectDoAction_Params
	{
	public:
		class ARBLargePickup*                                      largeObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             interactor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.Event_OnResetStage
	 */
	struct UAcidBath_InteractionPanel_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.ReceiveBeginPlay
	 */
	struct UAcidBath_InteractionPanel_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.Event_OnTossIntoFinished
	 */
	struct UAcidBath_InteractionPanel_BP_C_Event_OnTossIntoFinished_Params
	{
	public:
		class ARBLargePickup*                                      largeObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.ReceiveTick
	 */
	struct UAcidBath_InteractionPanel_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.ExecuteUbergraph_AcidBath_InteractionPanel_BP
	 */
	struct UAcidBath_InteractionPanel_BP_C_ExecuteUbergraph_AcidBath_InteractionPanel_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XGYD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
