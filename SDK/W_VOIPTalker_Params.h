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
	 * Function W_VOIPTalker.W_VOIPTalker_C.Refresh Player States If Not Exists
	 */
	struct UW_VOIPTalker_C_Refresh_Player_States_If_Not_Exists_Params
	{	};

	/**
	 * Function W_VOIPTalker.W_VOIPTalker_C.Construct
	 */
	struct UW_VOIPTalker_C_Construct_Params
	{	};

	/**
	 * Function W_VOIPTalker.W_VOIPTalker_C.Tick
	 */
	struct UW_VOIPTalker_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_VOIPTalker.W_VOIPTalker_C.OnPreClientTravel_Event_1
	 */
	struct UW_VOIPTalker_C_OnPreClientTravel_Event_1_Params
	{	};

	/**
	 * Function W_VOIPTalker.W_VOIPTalker_C.CustomEvent_1
	 */
	struct UW_VOIPTalker_C_CustomEvent_1_Params
	{	};

	/**
	 * Function W_VOIPTalker.W_VOIPTalker_C.ExecuteUbergraph_W_VOIPTalker
	 */
	struct UW_VOIPTalker_C_ExecuteUbergraph_W_VOIPTalker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
