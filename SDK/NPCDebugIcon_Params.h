#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
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
	 * Function NPCDebugIcon.NPCDebugIcon_C.ShouldShow
	 */
	struct UNPCDebugIcon_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NPCDebugIcon.NPCDebugIcon_C.Event_Show
	 */
	struct UNPCDebugIcon_C_Event_Show_Params
	{	};

	/**
	 * Function NPCDebugIcon.NPCDebugIcon_C.Event_Hide
	 */
	struct UNPCDebugIcon_C_Event_Hide_Params
	{	};

	/**
	 * Function NPCDebugIcon.NPCDebugIcon_C.Tick
	 */
	struct UNPCDebugIcon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPCDebugIcon.NPCDebugIcon_C.UpdateDisplay
	 */
	struct UNPCDebugIcon_C_UpdateDisplay_Params
	{	};

	/**
	 * Function NPCDebugIcon.NPCDebugIcon_C.ExecuteUbergraph_NPCDebugIcon
	 */
	struct UNPCDebugIcon_C_ExecuteUbergraph_NPCDebugIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
