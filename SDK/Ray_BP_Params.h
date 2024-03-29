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
	 * Function Ray_BP.Ray_BP_C.SetDetectionDistance
	 */
	struct ARay_BP_C_SetDetectionDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ray_BP.Ray_BP_C.Get Distace Ray
	 */
	struct ARay_BP_C_Get_Distace_Ray_Params
	{	};

	/**
	 * Function Ray_BP.Ray_BP_C.UserConstructionScript
	 */
	struct ARay_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Ray_BP.Ray_BP_C.ReceiveBeginPlay
	 */
	struct ARay_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Ray_BP.Ray_BP_C.ReceiveTick
	 */
	struct ARay_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ray_BP.Ray_BP_C.RayState
	 */
	struct ARay_BP_C_RayState_Params
	{
	public:
		bool                                                       isDetected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ray_BP.Ray_BP_C.ExecuteUbergraph_Ray_BP
	 */
	struct ARay_BP_C_ExecuteUbergraph_Ray_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
