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
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.TryPlayFacialAnim
	 */
	struct ARBNPC_Grunt_C_TryPlayFacialAnim_Params
	{
	public:
		class FString                                              lineId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.GetFacePoseAsset
	 */
	struct ARBNPC_Grunt_C_GetFacePoseAsset_Params
	{
	public:
		class UPoseAsset*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.GetFoleySwitchOverride
	 */
	struct ARBNPC_Grunt_C_GetFoleySwitchOverride_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.OnRep_SelectedCustomizationInfo
	 */
	struct ARBNPC_Grunt_C_OnRep_SelectedCustomizationInfo_Params
	{	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.ApplyGruntCustomization
	 */
	struct ARBNPC_Grunt_C_ApplyGruntCustomization_Params
	{	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.CustomizeCharacter
	 */
	struct ARBNPC_Grunt_C_CustomizeCharacter_Params
	{	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.UpdateMaterialsOnCustomizedMeshFromMap
	 */
	struct ARBNPC_Grunt_C_UpdateMaterialsOnCustomizedMeshFromMap_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<class FString, class UMaterialInstanceConstant*>      MaterialOverrides;                                       // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.UpdateMaterialsOnCustomizedMesh
	 */
	struct ARBNPC_Grunt_C_UpdateMaterialsOnCustomizedMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<class FString, class UMaterialInstanceConstant*>      MaterialOverrides;                                       // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.UpdateComponentFromIndex
	 */
	struct ARBNPC_Grunt_C_UpdateComponentFromIndex_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENPCCustomizationSlot                                      Slot;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GRML[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.GetFaceFXSkeletalMeshComponent
	 */
	struct ARBNPC_Grunt_C_GetFaceFXSkeletalMeshComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.UserConstructionScript
	 */
	struct ARBNPC_Grunt_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.RequestGruntCustomization
	 */
	struct ARBNPC_Grunt_C_RequestGruntCustomization_Params
	{	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.OnCustomizationLoaded
	 */
	struct ARBNPC_Grunt_C_OnCustomizationLoaded_Params
	{
	public:
		class AActor*                                              customizationOwner;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    requestID;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPawnCustomizationRequestType                              requestType;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.ReceiveBeginPlay
	 */
	struct ARBNPC_Grunt_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.Event_OnWeaponVisible
	 */
	struct ARBNPC_Grunt_C_Event_OnWeaponVisible_Params
	{
	public:
		ENPCWeapon                                                 weaponType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J75H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBNPCWeapon*                                        weaponActor;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Grunt.RBNPC_Grunt_C.ExecuteUbergraph_RBNPC_Grunt
	 */
	struct ARBNPC_Grunt_C_ExecuteUbergraph_RBNPC_Grunt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
