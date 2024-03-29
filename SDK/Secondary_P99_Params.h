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
	 * Function Secondary_P99.Secondary_P99_C.ReceiveBeginPlay
	 */
	struct ASecondary_P99_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Secondary_P99.Secondary_P99_C.ReceiveTick
	 */
	struct ASecondary_P99_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Secondary_P99.Secondary_P99_C.ExecuteUbergraph_Secondary_P99
	 */
	struct ASecondary_P99_C_ExecuteUbergraph_Secondary_P99_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
