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
	 * Function NDAOverlay.NDAOverlay_C.UpdateRegionAndPing
	 */
	struct UNDAOverlay_C_UpdateRegionAndPing_Params
	{	};

	/**
	 * Function NDAOverlay.NDAOverlay_C.PreConstruct
	 */
	struct UNDAOverlay_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NDAOverlay.NDAOverlay_C.Construct
	 */
	struct UNDAOverlay_C_Construct_Params
	{	};

	/**
	 * Function NDAOverlay.NDAOverlay_C.Event_Setup
	 */
	struct UNDAOverlay_C_Event_Setup_Params
	{	};

	/**
	 * Function NDAOverlay.NDAOverlay_C.ExecuteUbergraph_NDAOverlay
	 */
	struct UNDAOverlay_C_ExecuteUbergraph_NDAOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3HBR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
