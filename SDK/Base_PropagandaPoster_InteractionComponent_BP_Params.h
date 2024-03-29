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
	 * Function Base_PropagandaPoster_InteractionComponent_BP.Base_PropagandaPoster_InteractionComponent_BP_C.GetInteractionPawnLocation
	 */
	struct UBase_PropagandaPoster_InteractionComponent_BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B9YX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EQ0A[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_PropagandaPoster_InteractionComponent_BP.Base_PropagandaPoster_InteractionComponent_BP_C.SnapToState
	 */
	struct UBase_PropagandaPoster_InteractionComponent_BP_C_SnapToState_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_InteractionComponent_BP.Base_PropagandaPoster_InteractionComponent_BP_C.ExecuteUbergraph_Base_PropagandaPoster_InteractionComponent_BP
	 */
	struct UBase_PropagandaPoster_InteractionComponent_BP_C_ExecuteUbergraph_Base_PropagandaPoster_InteractionComponent_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CMIJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
