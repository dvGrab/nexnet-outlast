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
	 * Function W_ObjectiveMarker.W_ObjectiveMarker_C.OnMarkerVisibilityDisabled
	 */
	struct UW_ObjectiveMarker_C_OnMarkerVisibilityDisabled_Params
	{	};

	/**
	 * Function W_ObjectiveMarker.W_ObjectiveMarker_C.CustomEvent_1
	 */
	struct UW_ObjectiveMarker_C_CustomEvent_1_Params
	{	};

	/**
	 * Function W_ObjectiveMarker.W_ObjectiveMarker_C.OnMarkerVisibilityEnabled
	 */
	struct UW_ObjectiveMarker_C_OnMarkerVisibilityEnabled_Params
	{	};

	/**
	 * Function W_ObjectiveMarker.W_ObjectiveMarker_C.Tick
	 */
	struct UW_ObjectiveMarker_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ObjectiveMarker.W_ObjectiveMarker_C.ExecuteUbergraph_W_ObjectiveMarker
	 */
	struct UW_ObjectiveMarker_C_ExecuteUbergraph_W_ObjectiveMarker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
