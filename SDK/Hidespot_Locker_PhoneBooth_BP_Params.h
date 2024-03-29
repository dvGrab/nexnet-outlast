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
	 * Function Hidespot_Locker-PhoneBooth_BP.Hidespot_Locker-PhoneBooth_BP_C.FixUpDoor
	 */
	struct AHidespot_Locker_PhoneBooth_BP_C_FixUpDoor_Params
	{	};

	/**
	 * Function Hidespot_Locker-PhoneBooth_BP.Hidespot_Locker-PhoneBooth_BP_C.Editor_RefreshDisabledMeshesVisibility
	 */
	struct AHidespot_Locker_PhoneBooth_BP_C_Editor_RefreshDisabledMeshesVisibility_Params
	{
	public:
		bool                                                       bShowDisabledVisuals;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Locker-PhoneBooth_BP.Hidespot_Locker-PhoneBooth_BP_C.SetDisabledMeshesState
	 */
	struct AHidespot_Locker_PhoneBooth_BP_C_SetDisabledMeshesState_Params
	{
	public:
		bool                                                       bDisabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J4MQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     RandomizationRootOverride;                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Locker-PhoneBooth_BP.Hidespot_Locker-PhoneBooth_BP_C.UserConstructionScript
	 */
	struct AHidespot_Locker_PhoneBooth_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Hidespot_Locker-PhoneBooth_BP.Hidespot_Locker-PhoneBooth_BP_C.BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature
	 */
	struct AHidespot_Locker_PhoneBooth_BP_C_BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature_Params
	{
	public:
		class URBHidespotComponent*                                hidespot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDisabled;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Locker-PhoneBooth_BP.Hidespot_Locker-PhoneBooth_BP_C.OnEditorPostLoad
	 */
	struct AHidespot_Locker_PhoneBooth_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function Hidespot_Locker-PhoneBooth_BP.Hidespot_Locker-PhoneBooth_BP_C.ReceiveBeginPlay
	 */
	struct AHidespot_Locker_PhoneBooth_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Hidespot_Locker-PhoneBooth_BP.Hidespot_Locker-PhoneBooth_BP_C.ExecuteUbergraph_Hidespot_Locker-PhoneBooth_BP
	 */
	struct AHidespot_Locker_PhoneBooth_BP_C_ExecuteUbergraph_Hidespot_Locker_PhoneBooth_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G0SZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
