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
	 * Function BP_RoNBloodPool.BP_RoNBloodPool_C.ReceiveBeginPlay
	 */
	struct ABP_RoNBloodPool_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RoNBloodPool.BP_RoNBloodPool_C.ReceiveTick
	 */
	struct ABP_RoNBloodPool_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoNBloodPool.BP_RoNBloodPool_C.ExecuteUbergraph_BP_RoNBloodPool
	 */
	struct ABP_RoNBloodPool_C_ExecuteUbergraph_BP_RoNBloodPool_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
