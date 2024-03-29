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
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Update Window Shutters
	 */
	struct AWindow_Breakable_Base_BP_C_Update_Window_Shutters_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UpdateLedgeMarkerIgnoreActors
	 */
	struct AWindow_Breakable_Base_BP_C_UpdateLedgeMarkerIgnoreActors_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UpdateLedgeMarkers
	 */
	struct AWindow_Breakable_Base_BP_C_UpdateLedgeMarkers_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.ClearSpawnedPhysicalMeshes
	 */
	struct AWindow_Breakable_Base_BP_C_ClearSpawnedPhysicalMeshes_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.OnBreakWindow
	 */
	struct AWindow_Breakable_Base_BP_C_OnBreakWindow_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       forceAtFinalPosition;                                    // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UpdateWindowMeshes
	 */
	struct AWindow_Breakable_Base_BP_C_UpdateWindowMeshes_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.SetupLedgeMarkers
	 */
	struct AWindow_Breakable_Base_BP_C_SetupLedgeMarkers_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UpdateSoundConnectors
	 */
	struct AWindow_Breakable_Base_BP_C_UpdateSoundConnectors_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.UserConstructionScript
	 */
	struct AWindow_Breakable_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Timeline_0__FinishedFunc
	 */
	struct AWindow_Breakable_Base_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Timeline_0__UpdateFunc
	 */
	struct AWindow_Breakable_Base_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.ReceiveBeginPlay
	 */
	struct AWindow_Breakable_Base_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnResetStage
	 */
	struct AWindow_Breakable_Base_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.PostToggled
	 */
	struct AWindow_Breakable_Base_BP_C_PostToggled_Params
	{
	public:
		bool                                                       bToggleEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnBreakObject
	 */
	struct AWindow_Breakable_Base_BP_C_Event_OnBreakObject_Params
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnStateChanged
	 */
	struct AWindow_Breakable_Base_BP_C_Event_OnStateChanged_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_SnapToState
	 */
	struct AWindow_Breakable_Base_BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_PostInitializeComponents
	 */
	struct AWindow_Breakable_Base_BP_C_Event_PostInitializeComponents_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.DeleteGlassPieces
	 */
	struct AWindow_Breakable_Base_BP_C_DeleteGlassPieces_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnBlockableStateChanged
	 */
	struct AWindow_Breakable_Base_BP_C_Event_OnBlockableStateChanged_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.CloseShutters
	 */
	struct AWindow_Breakable_Base_BP_C_CloseShutters_Params
	{
	public:
		bool                                                       bPlaySound;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.OpenShutters
	 */
	struct AWindow_Breakable_Base_BP_C_OpenShutters_Params
	{
	public:
		bool                                                       bPlaySound;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.Event_OnShutterStateChanged
	 */
	struct AWindow_Breakable_Base_BP_C_Event_OnShutterStateChanged_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.RefreshBlockedMeshState
	 */
	struct AWindow_Breakable_Base_BP_C_RefreshBlockedMeshState_Params
	{	};

	/**
	 * Function Window_Breakable_Base_BP.Window_Breakable_Base_BP_C.ExecuteUbergraph_Window_Breakable_Base_BP
	 */
	struct AWindow_Breakable_Base_BP_C_ExecuteUbergraph_Window_Breakable_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
