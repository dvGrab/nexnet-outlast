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
	 * Function OPP_Persistent.OPP_Persistent_C.bpiBlurEntity
	 */
	struct AOPP_Persistent_C_bpiBlurEntity_Params
	{	};

	/**
	 * Function OPP_Persistent.OPP_Persistent_C.StartDrugSpray
	 */
	struct AOPP_Persistent_C_StartDrugSpray_Params
	{	};

	/**
	 * Function OPP_Persistent.OPP_Persistent_C.StopDrugSpray
	 */
	struct AOPP_Persistent_C_StopDrugSpray_Params
	{	};

	/**
	 * Function OPP_Persistent.OPP_Persistent_C.CloseLight
	 */
	struct AOPP_Persistent_C_CloseLight_Params
	{	};

	/**
	 * Function OPP_Persistent.OPP_Persistent_C.ReceiveBeginPlay
	 */
	struct AOPP_Persistent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function OPP_Persistent.OPP_Persistent_C.OnRBStreamingLoaded
	 */
	struct AOPP_Persistent_C_OnRBStreamingLoaded_Params
	{
	public:
		class ARBStreaming*                                        RBStreaming;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OPP_Persistent.OPP_Persistent_C.InitDrugSequences
	 */
	struct AOPP_Persistent_C_InitDrugSequences_Params
	{	};

	/**
	 * Function OPP_Persistent.OPP_Persistent_C.ExecuteUbergraph_OPP_Persistent
	 */
	struct AOPP_Persistent_C_ExecuteUbergraph_OPP_Persistent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6FSK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
