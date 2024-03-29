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
	 * Function RBImposter_BP.RBImposter_BP_C.GetMainParentSkeletalMesh
	 */
	struct ARBImposter_BP_C_GetMainParentSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBImposter_BP.RBImposter_BP_C.GetWatchComponent
	 */
	struct ARBImposter_BP_C_GetWatchComponent_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBImposter_BP.RBImposter_BP_C.GetPlayerCustomizationInfo
	 */
	struct ARBImposter_BP_C_GetPlayerCustomizationInfo_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function RBImposter_BP.RBImposter_BP_C.GetSkeletalMeshComponentForSlot
	 */
	struct ARBImposter_BP_C_GetSkeletalMeshComponentForSlot_Params
	{
	public:
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XD6T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBImposter_BP.RBImposter_BP_C.GetFacePoseAsset
	 */
	struct ARBImposter_BP_C_GetFacePoseAsset_Params
	{
	public:
		class UPoseAsset*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBImposter_BP.RBImposter_BP_C.UpdateESOPBatteryType
	 */
	struct ARBImposter_BP_C_UpdateESOPBatteryType_Params
	{	};

	/**
	 * Function RBImposter_BP.RBImposter_BP_C.DressCharacter
	 */
	struct ARBImposter_BP_C_DressCharacter_Params
	{	};

	/**
	 * Function RBImposter_BP.RBImposter_BP_C.UserConstructionScript
	 */
	struct ARBImposter_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RBImposter_BP.RBImposter_BP_C.Event_OnTakeDamage
	 */
	struct ARBImposter_BP_C_Event_OnTakeDamage_Params
	{
	public:
		struct FDamageInfo                                         Info;                                                    // 0x0000(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function RBImposter_BP.RBImposter_BP_C.Event_SetCustomization
	 */
	struct ARBImposter_BP_C_Event_SetCustomization_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          newCustomization;                                        // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RBImposter_BP.RBImposter_BP_C.OnExtraCustomizationMeshesAddedForSlot
	 */
	struct ARBImposter_BP_C_OnExtraCustomizationMeshesAddedForSlot_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      addedExtraMeshes;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBImposter_BP.RBImposter_BP_C.Event_OnStartRagePaintState
	 */
	struct ARBImposter_BP_C_Event_OnStartRagePaintState_Params
	{	};

	/**
	 * Function RBImposter_BP.RBImposter_BP_C.Event_OnEndRagePaintState
	 */
	struct ARBImposter_BP_C_Event_OnEndRagePaintState_Params
	{	};

	/**
	 * Function RBImposter_BP.RBImposter_BP_C.ExecuteUbergraph_RBImposter_BP
	 */
	struct ARBImposter_BP_C_ExecuteUbergraph_RBImposter_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
