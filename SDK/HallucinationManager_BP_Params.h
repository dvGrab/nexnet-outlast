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
	 * Function HallucinationManager_BP.HallucinationManager_BP_C.Event_HallucinationStarted
	 */
	struct AHallucinationManager_BP_C_Event_HallucinationStarted_Params
	{
	public:
		struct FHallucinationData                                  halluData;                                               // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function HallucinationManager_BP.HallucinationManager_BP_C.Event_HallucinationStopped
	 */
	struct AHallucinationManager_BP_C_Event_HallucinationStopped_Params
	{
	public:
		struct FHallucinationData                                  halluData;                                               // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function HallucinationManager_BP.HallucinationManager_BP_C.ReceiveBeginPlay
	 */
	struct AHallucinationManager_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function HallucinationManager_BP.HallucinationManager_BP_C.ExecuteUbergraph_HallucinationManager_BP
	 */
	struct AHallucinationManager_BP_C_ExecuteUbergraph_HallucinationManager_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CZX1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
