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
	 * Function Gore_Throwable_BP.Gore_Throwable_BP_C.BP_TickItem
	 */
	struct AGore_Throwable_BP_C_BP_TickItem_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gore_Throwable_BP.Gore_Throwable_BP_C.OnRep_bSinking
	 */
	struct AGore_Throwable_BP_C_OnRep_bSinking_Params
	{	};

	/**
	 * Function Gore_Throwable_BP.Gore_Throwable_BP_C.OnRep_bFloating
	 */
	struct AGore_Throwable_BP_C_OnRep_bFloating_Params
	{	};

	/**
	 * Function Gore_Throwable_BP.Gore_Throwable_BP_C.OnRep_VisualIndex
	 */
	struct AGore_Throwable_BP_C_OnRep_VisualIndex_Params
	{	};

	/**
	 * Function Gore_Throwable_BP.Gore_Throwable_BP_C.ReceiveBeginPlay
	 */
	struct AGore_Throwable_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Gore_Throwable_BP.Gore_Throwable_BP_C.BP_OnGroundAndPoundCounter
	 */
	struct AGore_Throwable_BP_C_BP_OnGroundAndPoundCounter_Params
	{	};

	/**
	 * Function Gore_Throwable_BP.Gore_Throwable_BP_C.Event_OnContainerChanged
	 */
	struct AGore_Throwable_BP_C_Event_OnContainerChanged_Params
	{	};

	/**
	 * Function Gore_Throwable_BP.Gore_Throwable_BP_C.Event_OnPickedUp
	 */
	struct AGore_Throwable_BP_C_Event_OnPickedUp_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gore_Throwable_BP.Gore_Throwable_BP_C.ExecuteUbergraph_Gore_Throwable_BP
	 */
	struct AGore_Throwable_BP_C_ExecuteUbergraph_Gore_Throwable_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
