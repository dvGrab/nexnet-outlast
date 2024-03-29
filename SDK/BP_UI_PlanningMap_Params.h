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
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.FillLevelDataFromTable
	 */
	struct ABP_UI_PlanningMap_C_FillLevelDataFromTable_Params
	{	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.SpawnMapMarker
	 */
	struct ABP_UI_PlanningMap_C_SpawnMapMarker_Params
	{
	public:
		struct FCoreUObject_FVector                                Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_39BW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBP_UI_PlanningMap_Marker_C*                         OutputPin;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.SetMapMaterial
	 */
	struct ABP_UI_PlanningMap_C_SetMapMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.GetCurrentMapMaterial
	 */
	struct ABP_UI_PlanningMap_C_GetCurrentMapMaterial_Params
	{
	public:
		class UMaterialInterface*                                  CurrentMaterial;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.GetMapMaterial
	 */
	struct ABP_UI_PlanningMap_C_GetMapMaterial_Params
	{
	public:
		bool                                                       ForceUpdate;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KQWM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceDynamic*                            MapDynMat;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AbsolutePan
	 */
	struct ABP_UI_PlanningMap_C_AbsolutePan_Params
	{
	public:
		struct FCoreUObject_FVector2D                              Delta;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AdditivePan
	 */
	struct ABP_UI_PlanningMap_C_AdditivePan_Params
	{	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.UpdateZoom
	 */
	struct ABP_UI_PlanningMap_C_UpdateZoom_Params
	{	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.UserConstructionScript
	 */
	struct ABP_UI_PlanningMap_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2
	 */
	struct ABP_UI_PlanningMap_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1
	 */
	struct ABP_UI_PlanningMap_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnLoaded_6AC405FF4BFE790347C0B19681EDEBD5
	 */
	struct ABP_UI_PlanningMap_C_OnLoaded_6AC405FF4BFE790347C0B19681EDEBD5_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ChangeFloors
	 */
	struct ABP_UI_PlanningMap_C_ChangeFloors_Params
	{
	public:
		int32_t                                                    Floor;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.PanCamera
	 */
	struct ABP_UI_PlanningMap_C_PanCamera_Params
	{
	public:
		bool                                                       Panning;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I1FG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCoreUObject_FVector2D                              CursorPos;                                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.DeactivateCamera
	 */
	struct ABP_UI_PlanningMap_C_DeactivateCamera_Params
	{	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ReceiveTick
	 */
	struct ABP_UI_PlanningMap_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ReceiveBeginPlay
	 */
	struct ABP_UI_PlanningMap_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.InitializeFloor
	 */
	struct ABP_UI_PlanningMap_C_InitializeFloor_Params
	{	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AnimateShow
	 */
	struct ABP_UI_PlanningMap_C_AnimateShow_Params
	{	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AnimateHide
	 */
	struct ABP_UI_PlanningMap_C_AnimateHide_Params
	{
	public:
		bool                                                       Silent;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ActivateMapCamera
	 */
	struct ABP_UI_PlanningMap_C_ActivateMapCamera_Params
	{	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.RollOutMap
	 */
	struct ABP_UI_PlanningMap_C_RollOutMap_Params
	{	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ExecuteUbergraph_BP_UI_PlanningMap
	 */
	struct ABP_UI_PlanningMap_C_ExecuteUbergraph_BP_UI_PlanningMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZNPN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnFloorMaterialUpdated__DelegateSignature
	 */
	struct ABP_UI_PlanningMap_C_OnFloorMaterialUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnChangeFloors__DelegateSignature
	 */
	struct ABP_UI_PlanningMap_C_OnChangeFloors__DelegateSignature_Params
	{
	public:
		int32_t                                                    Floor;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnZoomUpdated__DelegateSignature
	 */
	struct ABP_UI_PlanningMap_C_OnZoomUpdated__DelegateSignature_Params
	{
	public:
		float                                                      ZoomValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
