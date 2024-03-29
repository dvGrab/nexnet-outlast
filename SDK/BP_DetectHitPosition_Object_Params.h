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
	 * Function BP_DetectHitPosition_Object.BP_DetectHitPosition_Object_C.ReceiveTick
	 */
	struct ABP_DetectHitPosition_Object_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DetectHitPosition_Object.BP_DetectHitPosition_Object_C.ReceiveBeginPlay
	 */
	struct ABP_DetectHitPosition_Object_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DetectHitPosition_Object.BP_DetectHitPosition_Object_C.DoHit
	 */
	struct ABP_DetectHitPosition_Object_C_DoHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_DetectHitPosition_Object.BP_DetectHitPosition_Object_C.ExecuteUbergraph_BP_DetectHitPosition_Object
	 */
	struct ABP_DetectHitPosition_Object_C_ExecuteUbergraph_BP_DetectHitPosition_Object_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
