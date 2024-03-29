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
	 * Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.TryPlayFacialAnim
	 */
	struct ARBNPC_Gooseberry_C_TryPlayFacialAnim_Params
	{
	public:
		class FString                                              lineId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JZOY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.GetFaceFXSkeletalMeshComponent
	 */
	struct ARBNPC_Gooseberry_C_GetFaceFXSkeletalMeshComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.UserConstructionScript
	 */
	struct ARBNPC_Gooseberry_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ReceiveBeginPlay
	 */
	struct ARBNPC_Gooseberry_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.UpdateTimeToPlayFuttermanIdleBreaker
	 */
	struct ARBNPC_Gooseberry_C_UpdateTimeToPlayFuttermanIdleBreaker_Params
	{	};

	/**
	 * Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ReceiveTick
	 */
	struct ARBNPC_Gooseberry_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ExecuteUbergraph_RBNPC_Gooseberry
	 */
	struct ARBNPC_Gooseberry_C_ExecuteUbergraph_RBNPC_Gooseberry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.PlayFuttermanIdleBreaker__DelegateSignature
	 */
	struct ARBNPC_Gooseberry_C_PlayFuttermanIdleBreaker__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
