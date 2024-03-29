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
	 * Function W_MissionEnd_NextMap_Timer.W_MissionEnd_NextMap_Timer_C.Tick
	 */
	struct UW_MissionEnd_NextMap_Timer_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MissionEnd_NextMap_Timer.W_MissionEnd_NextMap_Timer_C.UpdateTimer
	 */
	struct UW_MissionEnd_NextMap_Timer_C_UpdateTimer_Params
	{
	public:
		float                                                      Time_in_Seconds;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MissionEnd_NextMap_Timer.W_MissionEnd_NextMap_Timer_C.ExecuteUbergraph_W_MissionEnd_NextMap_Timer
	 */
	struct UW_MissionEnd_NextMap_Timer_C_ExecuteUbergraph_W_MissionEnd_NextMap_Timer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
