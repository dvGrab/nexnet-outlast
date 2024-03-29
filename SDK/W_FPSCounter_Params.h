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
	 * Function W_FPSCounter.W_FPSCounter_C.PreConstruct
	 */
	struct UW_FPSCounter_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_FPSCounter.W_FPSCounter_C.Construct
	 */
	struct UW_FPSCounter_C_Construct_Params
	{	};

	/**
	 * Function W_FPSCounter.W_FPSCounter_C.Check If Enabled
	 */
	struct UW_FPSCounter_C_Check_If_Enabled_Params
	{	};

	/**
	 * Function W_FPSCounter.W_FPSCounter_C.ExecuteUbergraph_W_FPSCounter
	 */
	struct UW_FPSCounter_C_ExecuteUbergraph_W_FPSCounter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
