#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * Function ExecutionConsole_Lever_AnimBP.ExecutionConsole_Lever_AnimBP_C.AnimGraph
	 */
	struct UExecutionConsole_Lever_AnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ExecutionConsole_Lever_AnimBP.ExecutionConsole_Lever_AnimBP_C.BlueprintUpdateAnimation
	 */
	struct UExecutionConsole_Lever_AnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExecutionConsole_Lever_AnimBP.ExecutionConsole_Lever_AnimBP_C.BlueprintBeginPlay
	 */
	struct UExecutionConsole_Lever_AnimBP_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function ExecutionConsole_Lever_AnimBP.ExecutionConsole_Lever_AnimBP_C.ExecuteUbergraph_ExecutionConsole_Lever_AnimBP
	 */
	struct UExecutionConsole_Lever_AnimBP_C_ExecuteUbergraph_ExecutionConsole_Lever_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7WXF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
