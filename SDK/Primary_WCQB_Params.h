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
	 * Function Primary_WCQB.Primary_WCQB_C.ReceiveTick
	 */
	struct APrimary_WCQB_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Primary_WCQB.Primary_WCQB_C.ReceiveBeginPlay
	 */
	struct APrimary_WCQB_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Primary_WCQB.Primary_WCQB_C.ExecuteUbergraph_Primary_WCQB
	 */
	struct APrimary_WCQB_C_ExecuteUbergraph_Primary_WCQB_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
