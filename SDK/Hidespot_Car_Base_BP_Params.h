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
	 * Function Hidespot_Car_Base_BP.Hidespot_Car_Base_BP_C.SetAllMeshesToMasterPoseComponent
	 */
	struct AHidespot_Car_Base_BP_C_SetAllMeshesToMasterPoseComponent_Params
	{	};

	/**
	 * Function Hidespot_Car_Base_BP.Hidespot_Car_Base_BP_C.Editor_RefreshDisabledMeshesVisibility
	 */
	struct AHidespot_Car_Base_BP_C_Editor_RefreshDisabledMeshesVisibility_Params
	{
	public:
		bool                                                       bShowDisabledVisuals;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Car_Base_BP.Hidespot_Car_Base_BP_C.SetDisabledMeshesState
	 */
	struct AHidespot_Car_Base_BP_C_SetDisabledMeshesState_Params
	{
	public:
		bool                                                       bDisabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MSRW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     RandomizationRootOverride;                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Car_Base_BP.Hidespot_Car_Base_BP_C.UserConstructionScript
	 */
	struct AHidespot_Car_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Hidespot_Car_Base_BP.Hidespot_Car_Base_BP_C.BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature
	 */
	struct AHidespot_Car_Base_BP_C_BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature_Params
	{
	public:
		class URBHidespotComponent*                                hidespot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDisabled;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Car_Base_BP.Hidespot_Car_Base_BP_C.ExecuteUbergraph_Hidespot_Car_Base_BP
	 */
	struct AHidespot_Car_Base_BP_C_ExecuteUbergraph_Hidespot_Car_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UHU3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
