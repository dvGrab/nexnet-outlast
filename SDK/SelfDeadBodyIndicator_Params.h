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
	 * Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.ShouldShow
	 */
	struct USelfDeadBodyIndicator_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.UpdateDisplay
	 */
	struct USelfDeadBodyIndicator_C_UpdateDisplay_Params
	{	};

	/**
	 * Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.Event_Hide
	 */
	struct USelfDeadBodyIndicator_C_Event_Hide_Params
	{	};

	/**
	 * Function SelfDeadBodyIndicator.SelfDeadBodyIndicator_C.ExecuteUbergraph_SelfDeadBodyIndicator
	 */
	struct USelfDeadBodyIndicator_C_ExecuteUbergraph_SelfDeadBodyIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
