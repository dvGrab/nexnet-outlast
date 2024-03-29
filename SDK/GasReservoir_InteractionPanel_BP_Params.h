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
	 * Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.RefreshGaugeNeedleAngleRatio
	 */
	struct UGasReservoir_InteractionPanel_BP_C_RefreshGaugeNeedleAngleRatio_Params
	{
	public:
		float                                                      ratio;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.UpdateGaugeValue
	 */
	struct UGasReservoir_InteractionPanel_BP_C_UpdateGaugeValue_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.ShouldBPTick
	 */
	struct UGasReservoir_InteractionPanel_BP_C_ShouldBPTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C4UK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.GetLargeObjectRef
	 */
	struct UGasReservoir_InteractionPanel_BP_C_GetLargeObjectRef_Params
	{
	public:
		class ARBLargePickup*                                      pickup;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.GetInteractionPawnLocation
	 */
	struct UGasReservoir_InteractionPanel_BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EEFB[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3418[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.ReceiveBeginPlay
	 */
	struct UGasReservoir_InteractionPanel_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.Event_OnResetStage
	 */
	struct UGasReservoir_InteractionPanel_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.ReceiveTick
	 */
	struct UGasReservoir_InteractionPanel_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.Event_OnNumberOfCompletedInteractionsChanged
	 */
	struct UGasReservoir_InteractionPanel_BP_C_Event_OnNumberOfCompletedInteractionsChanged_Params
	{	};

	/**
	 * Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.ExecuteUbergraph_GasReservoir_InteractionPanel_BP
	 */
	struct UGasReservoir_InteractionPanel_BP_C_ExecuteUbergraph_GasReservoir_InteractionPanel_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GLIW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.UpdateGasLight__DelegateSignature
	 */
	struct UGasReservoir_InteractionPanel_BP_C_UpdateGasLight__DelegateSignature_Params
	{
	public:
		bool                                                       bLightOn;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.UpdateGaugeNeedle__DelegateSignature
	 */
	struct UGasReservoir_InteractionPanel_BP_C_UpdateGaugeNeedle__DelegateSignature_Params
	{
	public:
		float                                                      needleRatio;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
