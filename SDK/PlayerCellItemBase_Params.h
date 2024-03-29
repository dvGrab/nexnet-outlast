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
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.GetCameraFocusWorldLocation
	 */
	struct APlayerCellItemBase_C_GetCameraFocusWorldLocation_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LPXH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyMaterial
	 */
	struct APlayerCellItemBase_C_ApplyMaterial_Params
	{
	public:
		class URBPlayerCellItemDefinition*                         PlayerCellDefinition;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyStaticMesh
	 */
	struct APlayerCellItemBase_C_ApplyStaticMesh_Params
	{
	public:
		class URBPlayerCellItemDefinition*                         CellItemDefinition;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.Reset
	 */
	struct APlayerCellItemBase_C_Reset_Params
	{	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.PreviewBlueprintClass_Editor
	 */
	struct APlayerCellItemBase_C_PreviewBlueprintClass_Editor_Params
	{
	public:
		unsigned char                                              UnknownData_ICJ5[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URBPlayerCellItemDefinition*                         CellItemDefinition;                                      // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.GetSpawnTransform
	 */
	struct APlayerCellItemBase_C_GetSpawnTransform_Params
	{
	public:
		struct FTransform                                          WorldLocation;                                           // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.OnPreviewDone
	 */
	struct APlayerCellItemBase_C_OnPreviewDone_Params
	{	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyTransformToConfig
	 */
	struct APlayerCellItemBase_C_ApplyTransformToConfig_Params
	{	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.TryDestroyPreviousProp
	 */
	struct APlayerCellItemBase_C_TryDestroyPreviousProp_Params
	{	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.ChangeMaterialOnStaticmesh
	 */
	struct APlayerCellItemBase_C_ChangeMaterialOnStaticmesh_Params
	{
	public:
		class UPrimitiveComponent*                                 Comp;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Material;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.GetDebugTransform
	 */
	struct APlayerCellItemBase_C_GetDebugTransform_Params
	{	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.Refresh
	 */
	struct APlayerCellItemBase_C_Refresh_Params
	{	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.PreviewCellItemDefinition_Editor
	 */
	struct APlayerCellItemBase_C_PreviewCellItemDefinition_Editor_Params
	{
	public:
		class URBPlayerCellItemDefinition*                         CellItemDefinition;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.UserConstructionScript
	 */
	struct APlayerCellItemBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_979288504F90989FEEAAD0BBDC449001
	 */
	struct APlayerCellItemBase_C_OnLoaded_979288504F90989FEEAAD0BBDC449001_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_4E18DE394F253951F2F6CCB149B0597D
	 */
	struct APlayerCellItemBase_C_OnLoaded_4E18DE394F253951F2F6CCB149B0597D_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_2A9FE965428939AA3930E497B1EEF09B
	 */
	struct APlayerCellItemBase_C_OnLoaded_2A9FE965428939AA3930E497B1EEF09B_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_7C1E3CB34C287AB4FE7F69A712E41A69
	 */
	struct APlayerCellItemBase_C_OnLoaded_7C1E3CB34C287AB4FE7F69A712E41A69_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.Event_AssignItem
	 */
	struct APlayerCellItemBase_C_Event_AssignItem_Params
	{
	public:
		class URBPlayerCellItemDefinition*                         ItemDefinition;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.PreviewItem
	 */
	struct APlayerCellItemBase_C_PreviewItem_Params
	{
	public:
		class URBPlayerCellItemDefinition*                         Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyNewMaterial
	 */
	struct APlayerCellItemBase_C_ApplyNewMaterial_Params
	{
	public:
		class URBPlayerCellItemDefinition*                         ItemDefinition;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyNewStaticmesh
	 */
	struct APlayerCellItemBase_C_ApplyNewStaticmesh_Params
	{
	public:
		class URBPlayerCellItemDefinition*                         ItemDefinition;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyBlueprintClass
	 */
	struct APlayerCellItemBase_C_ApplyBlueprintClass_Params
	{
	public:
		class URBPlayerCellItemDefinition*                         ItemDefinition;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.Event_ClearItem
	 */
	struct APlayerCellItemBase_C_Event_ClearItem_Params
	{	};

	/**
	 * Function PlayerCellItemBase.PlayerCellItemBase_C.ExecuteUbergraph_PlayerCellItemBase
	 */
	struct APlayerCellItemBase_C_ExecuteUbergraph_PlayerCellItemBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
