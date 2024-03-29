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
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.RandomizeCustomization
	 */
	struct ARBNPC_Big_BP_C_RandomizeCustomization_Params
	{	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.UpdateVoiceType_Server
	 */
	struct ARBNPC_Big_BP_C_UpdateVoiceType_Server_Params
	{	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.OnRep_CustomizationNetSeed
	 */
	struct ARBNPC_Big_BP_C_OnRep_CustomizationNetSeed_Params
	{	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.CleanMeshes
	 */
	struct ARBNPC_Big_BP_C_CleanMeshes_Params
	{	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.AddExtraBodyMesh
	 */
	struct ARBNPC_Big_BP_C_AddExtraBodyMesh_Params
	{
	public:
		class USkeletalMesh*                                       NewMesh;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_12I4[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.GetRessourcesToLoad
	 */
	struct ARBNPC_Big_BP_C_GetRessourcesToLoad_Params
	{
	public:
		TArray<struct FSoftObjectPath>                             ressources;                                              // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.GetFacePoseAsset
	 */
	struct ARBNPC_Big_BP_C_GetFacePoseAsset_Params
	{
	public:
		class UPoseAsset*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.GetFaceFXSkeletalMeshComponent
	 */
	struct ARBNPC_Big_BP_C_GetFaceFXSkeletalMeshComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.OnRep_RandomMesh
	 */
	struct ARBNPC_Big_BP_C_OnRep_RandomMesh_Params
	{	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.UserConstructionScript
	 */
	struct ARBNPC_Big_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.ReceiveBeginPlay
	 */
	struct ARBNPC_Big_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.RequestSkinRessources
	 */
	struct ARBNPC_Big_BP_C_RequestSkinRessources_Params
	{	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.Event_OnWeaponVisible
	 */
	struct ARBNPC_Big_BP_C_Event_OnWeaponVisible_Params
	{
	public:
		ENPCWeapon                                                 weaponType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B958[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBNPCWeapon*                                        weaponActor;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.ApplySkinMeshes
	 */
	struct ARBNPC_Big_BP_C_ApplySkinMeshes_Params
	{	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.OnRessourcesLoaded
	 */
	struct ARBNPC_Big_BP_C_OnRessourcesLoaded_Params
	{
	public:
		class AActor*                                              customizationOwner;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    requestID;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPawnCustomizationRequestType                              requestType;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Big_BP.RBNPC_Big_BP_C.ExecuteUbergraph_RBNPC_Big_BP
	 */
	struct ARBNPC_Big_BP_C_ExecuteUbergraph_RBNPC_Big_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
