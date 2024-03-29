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
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetMainParentSkeletalMesh
	 */
	struct ARBNPC_Imposter_BP_C_GetMainParentSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetWatchComponent
	 */
	struct ARBNPC_Imposter_BP_C_GetWatchComponent_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetPlayerCustomizationInfo
	 */
	struct ARBNPC_Imposter_BP_C_GetPlayerCustomizationInfo_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetSkeletalMeshComponentForSlot
	 */
	struct ARBNPC_Imposter_BP_C_GetSkeletalMeshComponentForSlot_Params
	{
	public:
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UI9X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetFaceFXSkeletalMeshComponent
	 */
	struct ARBNPC_Imposter_BP_C_GetFaceFXSkeletalMeshComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetFacePoseAsset
	 */
	struct ARBNPC_Imposter_BP_C_GetFacePoseAsset_Params
	{
	public:
		class UPoseAsset*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.UpdateESOPBatteryType
	 */
	struct ARBNPC_Imposter_BP_C_UpdateESOPBatteryType_Params
	{	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.DressCharacter
	 */
	struct ARBNPC_Imposter_BP_C_DressCharacter_Params
	{	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.UserConstructionScript
	 */
	struct ARBNPC_Imposter_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_OnTakeDamage
	 */
	struct ARBNPC_Imposter_BP_C_Event_OnTakeDamage_Params
	{
	public:
		struct FDamageInfo                                         Info;                                                    // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_SetCustomization
	 */
	struct ARBNPC_Imposter_BP_C_Event_SetCustomization_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          newCustomization;                                        // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.OnExtraCustomizationMeshesAddedForSlot
	 */
	struct ARBNPC_Imposter_BP_C_OnExtraCustomizationMeshesAddedForSlot_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      addedExtraMeshes;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_OnStartRagePaintState
	 */
	struct ARBNPC_Imposter_BP_C_Event_OnStartRagePaintState_Params
	{	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_OnEndRagePaintState
	 */
	struct ARBNPC_Imposter_BP_C_Event_OnEndRagePaintState_Params
	{	};

	/**
	 * Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.ExecuteUbergraph_RBNPC_Imposter_BP
	 */
	struct ARBNPC_Imposter_BP_C_ExecuteUbergraph_RBNPC_Imposter_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
