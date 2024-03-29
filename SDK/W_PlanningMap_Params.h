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
	 * Function W_PlanningMap.W_PlanningMap_C.GetDetailPanePosition
	 */
	struct UW_PlanningMap_C_GetDetailPanePosition_Params
	{
	public:
		struct FCoreUObject_FVector2D                              PointScreenPosition;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCoreUObject_FVector2D                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.GetSpawnPointInfo
	 */
	struct UW_PlanningMap_C_GetSpawnPointInfo_Params
	{
	public:
		class UW_PlanningMap_BreachPoint_C*                        BreachPointButton;                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSpawnPoints                                        SpawnPointInfo;                                          // 0x0008(0x0090)  (Parm, OutParm)
		int32_t                                                    Index;                                                   // 0x0098(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JR9P[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.RefreshSpawns
	 */
	struct UW_PlanningMap_C_RefreshSpawns_Params
	{
	public:
		float                                                      ZoomValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.OpenPlanningMarker
	 */
	struct UW_PlanningMap_C_OpenPlanningMarker_Params
	{	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.OnMouseButtonUp
	 */
	struct UW_PlanningMap_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.OnDragDetected
	 */
	struct UW_PlanningMap_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.OnMouseButtonDown
	 */
	struct UW_PlanningMap_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.OnMouseMove
	 */
	struct UW_PlanningMap_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.Construct
	 */
	struct UW_PlanningMap_C_Construct_Params
	{	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.UpdateMap
	 */
	struct UW_PlanningMap_C_UpdateMap_Params
	{
	public:
		int32_t                                                    FloorIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UW_PlanningMap_C_BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.BndEvt__MapInteraction_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UW_PlanningMap_C_BndEvt__MapInteraction_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.OnDragCancelled
	 */
	struct UW_PlanningMap_C_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.UpdateSpawns
	 */
	struct UW_PlanningMap_C_UpdateSpawns_Params
	{
	public:
		TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>             SpawnPointComponents;                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.InitPlanningMap
	 */
	struct UW_PlanningMap_C_InitPlanningMap_Params
	{
	public:
		class ABP_UI_PlanningMap_C*                                PlanningMapActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.ChangeFloor
	 */
	struct UW_PlanningMap_C_ChangeFloor_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.MapFloorUpdated
	 */
	struct UW_PlanningMap_C_MapFloorUpdated_Params
	{
	public:
		int32_t                                                    Floor;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.PointHovered
	 */
	struct UW_PlanningMap_C_PointHovered_Params
	{
	public:
		class UW_PlanningMap_BreachPoint_C*                        HoveredPoint;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.PointClicked
	 */
	struct UW_PlanningMap_C_PointClicked_Params
	{
	public:
		class UW_PlanningMap_BreachPoint_C*                        ClickedPoint;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_3_OnSetSpawnButtonClicked__DelegateSignature
	 */
	struct UW_PlanningMap_C_BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_3_OnSetSpawnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_4_OnDetailPanelHide__DelegateSignature
	 */
	struct UW_PlanningMap_C_BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_4_OnDetailPanelHide__DelegateSignature_Params
	{	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.ExitMap
	 */
	struct UW_PlanningMap_C_ExitMap_Params
	{	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.ExecuteUbergraph_W_PlanningMap
	 */
	struct UW_PlanningMap_C_ExecuteUbergraph_W_PlanningMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MKKF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.NewEventDispatcher_0__DelegateSignature
	 */
	struct UW_PlanningMap_C_NewEventDispatcher_0__DelegateSignature_Params
	{	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.UpdateMapMaterial__DelegateSignature
	 */
	struct UW_PlanningMap_C_UpdateMapMaterial__DelegateSignature_Params
	{
	public:
		class UTexture2D*                                          LayoutTexture;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlanningMap.W_PlanningMap_C.PanMap__DelegateSignature
	 */
	struct UW_PlanningMap_C_PanMap__DelegateSignature_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_STNX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCoreUObject_FVector2D                              CursorPos;                                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
