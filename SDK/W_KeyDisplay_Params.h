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
	 * Function W_KeyDisplay.W_KeyDisplay_C.PreConstruct
	 */
	struct UW_KeyDisplay_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_KeyDisplay.W_KeyDisplay_C.Construct
	 */
	struct UW_KeyDisplay_C_Construct_Params
	{	};

	/**
	 * Function W_KeyDisplay.W_KeyDisplay_C.Tick
	 */
	struct UW_KeyDisplay_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_KeyDisplay.W_KeyDisplay_C.CustomEvent_1
	 */
	struct UW_KeyDisplay_C_CustomEvent_1_Params
	{	};

	/**
	 * Function W_KeyDisplay.W_KeyDisplay_C.Reconstruct
	 */
	struct UW_KeyDisplay_C_Reconstruct_Params
	{	};

	/**
	 * Function W_KeyDisplay.W_KeyDisplay_C.ExecuteUbergraph_W_KeyDisplay
	 */
	struct UW_KeyDisplay_C_ExecuteUbergraph_W_KeyDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
