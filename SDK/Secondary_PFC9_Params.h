#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * Function Secondary_PFC9.Secondary_PFC9_C.ReceiveBeginPlay
	 */
	struct ASecondary_PFC9_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Secondary_PFC9.Secondary_PFC9_C.ReceiveTick
	 */
	struct ASecondary_PFC9_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Secondary_PFC9.Secondary_PFC9_C.ExecuteUbergraph_Secondary_PFC9
	 */
	struct ASecondary_PFC9_C_ExecuteUbergraph_Secondary_PFC9_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
