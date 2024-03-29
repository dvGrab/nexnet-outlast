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
	 * Function RBNPC_NightHunter.RBNPC_NightHunter_C.GetFacePoseAsset
	 */
	struct ARBNPC_NightHunter_C_GetFacePoseAsset_Params
	{
	public:
		class UPoseAsset*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_NightHunter.RBNPC_NightHunter_C.GetFaceFXSkeletalMeshComponent
	 */
	struct ARBNPC_NightHunter_C_GetFaceFXSkeletalMeshComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_NightHunter.RBNPC_NightHunter_C.DetectionFeedback
	 */
	struct ARBNPC_NightHunter_C_DetectionFeedback_Params
	{
	public:
		float                                                      ArcWidth;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ArcRate;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_NightHunter.RBNPC_NightHunter_C.UserConstructionScript
	 */
	struct ARBNPC_NightHunter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RBNPC_NightHunter.RBNPC_NightHunter_C.Timeline_0__FinishedFunc
	 */
	struct ARBNPC_NightHunter_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function RBNPC_NightHunter.RBNPC_NightHunter_C.Timeline_0__UpdateFunc
	 */
	struct ARBNPC_NightHunter_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function RBNPC_NightHunter.RBNPC_NightHunter_C.ReceiveBeginPlay
	 */
	struct ARBNPC_NightHunter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RBNPC_NightHunter.RBNPC_NightHunter_C.ExecuteUbergraph_RBNPC_NightHunter
	 */
	struct ARBNPC_NightHunter_C_ExecuteUbergraph_RBNPC_NightHunter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
