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
	 * Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.ShouldPerformAction
	 */
	struct UAIAction_SeekPlayer_C_ShouldPerformAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q9WF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.BeginAction_Blueprint
	 */
	struct UAIAction_SeekPlayer_C_BeginAction_Blueprint_Params
	{	};

	/**
	 * Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.OnCreate_Blueprint
	 */
	struct UAIAction_SeekPlayer_C_OnCreate_Blueprint_Params
	{
	public:
		class ACyberneticController*                               Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.ExecuteUbergraph_AIAction_SeekPlayer
	 */
	struct UAIAction_SeekPlayer_C_ExecuteUbergraph_AIAction_SeekPlayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OSOY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
