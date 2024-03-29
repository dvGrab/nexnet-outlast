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
	 * Function W_MagCheck_MagStatus.W_MagCheck_MagStatus_C.Unhighlight
	 */
	struct UW_MagCheck_MagStatus_C_Unhighlight_Params
	{	};

	/**
	 * Function W_MagCheck_MagStatus.W_MagCheck_MagStatus_C.Highlight
	 */
	struct UW_MagCheck_MagStatus_C_Highlight_Params
	{	};

	/**
	 * Function W_MagCheck_MagStatus.W_MagCheck_MagStatus_C.Construct
	 */
	struct UW_MagCheck_MagStatus_C_Construct_Params
	{	};

	/**
	 * Function W_MagCheck_MagStatus.W_MagCheck_MagStatus_C.Tick
	 */
	struct UW_MagCheck_MagStatus_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MagCheck_MagStatus.W_MagCheck_MagStatus_C.ExecuteUbergraph_W_MagCheck_MagStatus
	 */
	struct UW_MagCheck_MagStatus_C_ExecuteUbergraph_W_MagCheck_MagStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
