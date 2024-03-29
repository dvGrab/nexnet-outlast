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
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.SetExitCameraLimits
	 */
	struct AHidespot_Locker_Base_BP_C_SetExitCameraLimits_Params
	{
	public:
		class URBHidespotComponent*                                hidespotComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.RandomizeEnabledMeshes
	 */
	struct AHidespot_Locker_Base_BP_C_RandomizeEnabledMeshes_Params
	{
	public:
		class USceneComponent*                                     RandomizationRoot;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RandomSeedOffset;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_81PS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.Editor_RefreshEnabledMeshesVisibility
	 */
	struct AHidespot_Locker_Base_BP_C_Editor_RefreshEnabledMeshesVisibility_Params
	{
	public:
		bool                                                       bShowEnabledVisuals;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.FixUpDoors
	 */
	struct AHidespot_Locker_Base_BP_C_FixUpDoors_Params
	{	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.UpdateEnabledMeshForFlip
	 */
	struct AHidespot_Locker_Base_BP_C_UpdateEnabledMeshForFlip_Params
	{	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.SetAllMeshesToMasterPoseComponent
	 */
	struct AHidespot_Locker_Base_BP_C_SetAllMeshesToMasterPoseComponent_Params
	{	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.OnDisabledChanged
	 */
	struct AHidespot_Locker_Base_BP_C_OnDisabledChanged_Params
	{
	public:
		class USceneComponent*                                     DisabledMeshRoot;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Disabled;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OUOH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMeshComponent*                                LockerDoor;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.Editor_RefreshDisabledMeshesVisibility
	 */
	struct AHidespot_Locker_Base_BP_C_Editor_RefreshDisabledMeshesVisibility_Params
	{
	public:
		bool                                                       bShowDisabledVisuals;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.SetDisabledMeshesState
	 */
	struct AHidespot_Locker_Base_BP_C_SetDisabledMeshesState_Params
	{
	public:
		bool                                                       bDisabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X5PP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     RandomizationRootOverride;                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.ResetLockerHidespot
	 */
	struct AHidespot_Locker_Base_BP_C_ResetLockerHidespot_Params
	{
	public:
		class UStaticMeshComponent*                                LockerDoor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     DisabledMeshesRoot;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.RandomizeDisabledMeshes
	 */
	struct AHidespot_Locker_Base_BP_C_RandomizeDisabledMeshes_Params
	{
	public:
		class USceneComponent*                                     RandomizationRoot;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RandomSeedOffset;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CLHC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.RefreshHidespotSettings
	 */
	struct AHidespot_Locker_Base_BP_C_RefreshHidespotSettings_Params
	{	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.RefreshDoorMeshes
	 */
	struct AHidespot_Locker_Base_BP_C_RefreshDoorMeshes_Params
	{	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.UserConstructionScript
	 */
	struct AHidespot_Locker_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.Event_OnResetStage
	 */
	struct AHidespot_Locker_Base_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot1_K2Node_ComponentBoundEvent_0_OnHidespotDisabledChangedEvent__DelegateSignature
	 */
	struct AHidespot_Locker_Base_BP_C_BndEvt__RBHidespot1_K2Node_ComponentBoundEvent_0_OnHidespotDisabledChangedEvent__DelegateSignature_Params
	{
	public:
		class URBHidespotComponent*                                hidespot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDisabled;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot2_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature
	 */
	struct AHidespot_Locker_Base_BP_C_BndEvt__RBHidespot2_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature_Params
	{
	public:
		class URBHidespotComponent*                                hidespot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDisabled;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot3_K2Node_ComponentBoundEvent_7_OnHidespotDisabledChangedEvent__DelegateSignature
	 */
	struct AHidespot_Locker_Base_BP_C_BndEvt__RBHidespot3_K2Node_ComponentBoundEvent_7_OnHidespotDisabledChangedEvent__DelegateSignature_Params
	{
	public:
		class URBHidespotComponent*                                hidespot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDisabled;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot4_K2Node_ComponentBoundEvent_8_OnHidespotDisabledChangedEvent__DelegateSignature
	 */
	struct AHidespot_Locker_Base_BP_C_BndEvt__RBHidespot4_K2Node_ComponentBoundEvent_8_OnHidespotDisabledChangedEvent__DelegateSignature_Params
	{
	public:
		class URBHidespotComponent*                                hidespot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDisabled;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.BndEvt__RBHidespot5_K2Node_ComponentBoundEvent_9_OnHidespotDisabledChangedEvent__DelegateSignature
	 */
	struct AHidespot_Locker_Base_BP_C_BndEvt__RBHidespot5_K2Node_ComponentBoundEvent_9_OnHidespotDisabledChangedEvent__DelegateSignature_Params
	{
	public:
		class URBHidespotComponent*                                hidespot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDisabled;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.Info
	 */
	struct AHidespot_Locker_Base_BP_C_Info_Params
	{	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.OnEditorPostLoad
	 */
	struct AHidespot_Locker_Base_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.ReceiveBeginPlay
	 */
	struct AHidespot_Locker_Base_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Hidespot_Locker_Base_BP.Hidespot_Locker_Base_BP_C.ExecuteUbergraph_Hidespot_Locker_Base_BP
	 */
	struct AHidespot_Locker_Base_BP_C_ExecuteUbergraph_Hidespot_Locker_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E05Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
