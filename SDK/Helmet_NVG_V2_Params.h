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
	 * Function Helmet_NVG_V2.Helmet_NVG_V2_C.OnNightvisionDeactivated
	 */
	struct AHelmet_NVG_V2_C_OnNightvisionDeactivated_Params
	{	};

	/**
	 * Function Helmet_NVG_V2.Helmet_NVG_V2_C.ReceiveTick
	 */
	struct AHelmet_NVG_V2_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Helmet_NVG_V2.Helmet_NVG_V2_C.OnNightvisionActivated
	 */
	struct AHelmet_NVG_V2_C_OnNightvisionActivated_Params
	{	};

	/**
	 * Function Helmet_NVG_V2.Helmet_NVG_V2_C.ExecuteUbergraph_Helmet_NVG_V2
	 */
	struct AHelmet_NVG_V2_C_ExecuteUbergraph_Helmet_NVG_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
