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
	 * Function GS_COOP.GS_COOP_C.ReceiveTick
	 */
	struct AGS_COOP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GS_COOP.GS_COOP_C.ReceiveBeginPlay
	 */
	struct AGS_COOP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GS_COOP.GS_COOP_C.ExecuteUbergraph_GS_COOP
	 */
	struct AGS_COOP_C_ExecuteUbergraph_GS_COOP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
