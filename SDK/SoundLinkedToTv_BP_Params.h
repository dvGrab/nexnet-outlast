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
	 * Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.GetElapsedAnimTime
	 */
	struct ASoundLinkedToTv_BP_C_GetElapsedAnimTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y69M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.Loop
	 */
	struct ASoundLinkedToTv_BP_C_Loop_Params
	{	};

	/**
	 * Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.Event_OnTriggered
	 */
	struct ASoundLinkedToTv_BP_C_Event_OnTriggered_Params
	{	};

	/**
	 * Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.Event_OnUntriggered
	 */
	struct ASoundLinkedToTv_BP_C_Event_OnUntriggered_Params
	{	};

	/**
	 * Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.ExecuteUbergraph_SoundLinkedToTv_BP
	 */
	struct ASoundLinkedToTv_BP_C_ExecuteUbergraph_SoundLinkedToTv_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
