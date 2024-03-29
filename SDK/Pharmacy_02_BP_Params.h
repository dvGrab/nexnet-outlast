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
	 * Function Pharmacy-02_BP.Pharmacy-02_BP_C.GetLookAtLocation
	 */
	struct APharmacy__BP_C_GetLookAtLocation_Params
	{
	public:
		struct FVector                                             outLookAtLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pharmacy-02_BP.Pharmacy-02_BP_C.GetInteractionPawnLocation
	 */
	struct APharmacy__BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_19PO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NMJN[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pharmacy-02_BP.Pharmacy-02_BP_C.PlaySpecialMoveAnimation
	 */
	struct APharmacy__BP_C_PlaySpecialMoveAnimation_Params
	{
	public:
		class ARBPawn*                                             interactorPawn;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_24CJ[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pharmacy-02_BP.Pharmacy-02_BP_C.UserConstructionScript
	 */
	struct APharmacy__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Pharmacy-02_BP.Pharmacy-02_BP_C.ReceiveBeginPlay
	 */
	struct APharmacy__BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Pharmacy-02_BP.Pharmacy-02_BP_C.Set Open
	 */
	struct APharmacy__BP_C_Set_Open_Params
	{
	public:
		bool                                                       FullAnim;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pharmacy-02_BP.Pharmacy-02_BP_C.Set Closed
	 */
	struct APharmacy__BP_C_Set_Closed_Params
	{	};

	/**
	 * Function Pharmacy-02_BP.Pharmacy-02_BP_C.Event_SnapToState
	 */
	struct APharmacy__BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function Pharmacy-02_BP.Pharmacy-02_BP_C.Event_OnIsOpenedChanged
	 */
	struct APharmacy__BP_C_Event_OnIsOpenedChanged_Params
	{	};

	/**
	 * Function Pharmacy-02_BP.Pharmacy-02_BP_C.OnPawnPlaySpecialMoveAnimation
	 */
	struct APharmacy__BP_C_OnPawnPlaySpecialMoveAnimation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pharmacy-02_BP.Pharmacy-02_BP_C.Event_OnResetStage
	 */
	struct APharmacy__BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Pharmacy-02_BP.Pharmacy-02_BP_C.ExecuteUbergraph_Pharmacy-02_BP
	 */
	struct APharmacy__BP_C_ExecuteUbergraph_Pharmacy__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pharmacy-02_BP.Pharmacy-02_BP_C.NewEventDispatcher_0__DelegateSignature
	 */
	struct APharmacy__BP_C_NewEventDispatcher_0__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
