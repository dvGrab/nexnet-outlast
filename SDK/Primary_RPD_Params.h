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
	 * Function Primary_RPD.Primary_RPD_C.ReceiveTick
	 */
	struct APrimary_RPD_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Primary_RPD.Primary_RPD_C.ReceiveBeginPlay
	 */
	struct APrimary_RPD_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Primary_RPD.Primary_RPD_C.ExecuteUbergraph_Primary_RPD
	 */
	struct APrimary_RPD_C_ExecuteUbergraph_Primary_RPD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
