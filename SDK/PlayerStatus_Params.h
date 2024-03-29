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
	 * Function PlayerStatus.PlayerStatus_C.GetStatusIconTexture
	 */
	struct UPlayerStatus_C_GetStatusIconTexture_Params
	{
	public:
		EPlayerIndicatorType                                       playerIndicatorType;                                     // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsObjective;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KSWZ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerStatus.PlayerStatus_C.UpdateStatusIcon
	 */
	struct UPlayerStatus_C_UpdateStatusIcon_Params
	{	};

	/**
	 * Function PlayerStatus.PlayerStatus_C.OnCompletingObjectiveChanged
	 */
	struct UPlayerStatus_C_OnCompletingObjectiveChanged_Params
	{
	public:
		bool                                                       isCompletingObjective;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerStatus.PlayerStatus_C.OnPlayerStatusChanged
	 */
	struct UPlayerStatus_C_OnPlayerStatusChanged_Params
	{
	public:
		EPlayerIndicatorType                                       newPlayerStatus;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JA1R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerStatus.PlayerStatus_C.UpdateProgress
	 */
	struct UPlayerStatus_C_UpdateProgress_Params
	{	};

	/**
	 * Function PlayerStatus.PlayerStatus_C.Construct
	 */
	struct UPlayerStatus_C_Construct_Params
	{	};

	/**
	 * Function PlayerStatus.PlayerStatus_C.Tick
	 */
	struct UPlayerStatus_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerStatus.PlayerStatus_C.ExecuteUbergraph_PlayerStatus
	 */
	struct UPlayerStatus_C_ExecuteUbergraph_PlayerStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
