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
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.FixUp
	 */
	struct AGoreDispenser_Container_BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.GetStateName
	 */
	struct AGoreDispenser_Container_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.IsStateA
	 */
	struct AGoreDispenser_Container_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ShouldBeIgnoredForLots
	 */
	struct AGoreDispenser_Container_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetAllItemsEnabledBySpawnLocation
	 */
	struct AGoreDispenser_Container_BP_C_SetAllItemsEnabledBySpawnLocation_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2HNK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetItemEnabledBySpawnLocation
	 */
	struct AGoreDispenser_Container_BP_C_SetItemEnabledBySpawnLocation_Params
	{
	public:
		class URBContainerSpawnLocationComponent*                  spawnLocationComponent;                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEnabled;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IHHY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ReinitSpawnLocationZ
	 */
	struct AGoreDispenser_Container_BP_C_ReinitSpawnLocationZ_Params
	{
	public:
		class URBContainerSpawnLocationComponent*                  SpawnLocation;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SpawnLocationIndex;                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ReinitAllSpawnLocationZ
	 */
	struct AGoreDispenser_Container_BP_C_ReinitAllSpawnLocationZ_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnDesiredSpawnLocationZChanged
	 */
	struct AGoreDispenser_Container_BP_C_OnDesiredSpawnLocationZChanged_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.TickFloating
	 */
	struct AGoreDispenser_Container_BP_C_TickFloating_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDone;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DW5K[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnRep_DesiredSpawnLocationZ
	 */
	struct AGoreDispenser_Container_BP_C_OnRep_DesiredSpawnLocationZ_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetSpawnLocationRelativeZ
	 */
	struct AGoreDispenser_Container_BP_C_SetSpawnLocationRelativeZ_Params
	{
	public:
		class URBContainerSpawnLocationComponent*                  SpawnLocation;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Z;                                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.UserConstructionScript
	 */
	struct AGoreDispenser_Container_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.DrainTimeline__FinishedFunc
	 */
	struct AGoreDispenser_Container_BP_C_DrainTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.DrainTimeline__UpdateFunc
	 */
	struct AGoreDispenser_Container_BP_C_DrainTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnEditorPostLoad
	 */
	struct AGoreDispenser_Container_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnPostActorsPasted
	 */
	struct AGoreDispenser_Container_BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostAddedToLevel
	 */
	struct AGoreDispenser_Container_BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostDuplicated
	 */
	struct AGoreDispenser_Container_BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostEditChange
	 */
	struct AGoreDispenser_Container_BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostEditMove
	 */
	struct AGoreDispenser_Container_BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.TickSelected
	 */
	struct AGoreDispenser_Container_BP_C_TickSelected_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Event_OnResetStage
	 */
	struct AGoreDispenser_Container_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetState
	 */
	struct AGoreDispenser_Container_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetShouldBeIgnoredForLots
	 */
	struct AGoreDispenser_Container_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Drain
	 */
	struct AGoreDispenser_Container_BP_C_Drain_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Fill
	 */
	struct AGoreDispenser_Container_BP_C_Fill_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Event_ItemRemoved
	 */
	struct AGoreDispenser_Container_BP_C_Event_ItemRemoved_Params
	{
	public:
		class ARBPickup*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_78HF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URBContainerSpawnLocationComponent*                  Location;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ReceiveTick
	 */
	struct AGoreDispenser_Container_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Event_ItemAdded
	 */
	struct AGoreDispenser_Container_BP_C_Event_ItemAdded_Params
	{
	public:
		class ARBPickup*                                           Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F20S[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URBContainerSpawnLocationComponent*                  Location;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Event_OnAutoRespawnItemsEnabledChanged
	 */
	struct AGoreDispenser_Container_BP_C_Event_OnAutoRespawnItemsEnabledChanged_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.TestFill
	 */
	struct AGoreDispenser_Container_BP_C_TestFill_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnSpawnedItemInfosChanged
	 */
	struct AGoreDispenser_Container_BP_C_OnSpawnedItemInfosChanged_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostToggled
	 */
	struct AGoreDispenser_Container_BP_C_PostToggled_Params
	{
	public:
		bool                                                       bToggleEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation02_K2Node_ComponentBoundEvent_0_OnContainerPickupInteractionEvent__DelegateSignature
	 */
	struct AGoreDispenser_Container_BP_C_BndEvt__GoreDispenser_Container_BP_SpawnLocation02_K2Node_ComponentBoundEvent_0_OnContainerPickupInteractionEvent__DelegateSignature_Params
	{
	public:
		class URBContainerSpawnLocationComponent*                  Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             interactor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           pickup;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation03_K2Node_ComponentBoundEvent_1_OnContainerPickupInteractionEvent__DelegateSignature
	 */
	struct AGoreDispenser_Container_BP_C_BndEvt__GoreDispenser_Container_BP_SpawnLocation03_K2Node_ComponentBoundEvent_1_OnContainerPickupInteractionEvent__DelegateSignature_Params
	{
	public:
		class URBContainerSpawnLocationComponent*                  Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             interactor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           pickup;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation04_K2Node_ComponentBoundEvent_2_OnContainerPickupInteractionEvent__DelegateSignature
	 */
	struct AGoreDispenser_Container_BP_C_BndEvt__GoreDispenser_Container_BP_SpawnLocation04_K2Node_ComponentBoundEvent_2_OnContainerPickupInteractionEvent__DelegateSignature_Params
	{
	public:
		class URBContainerSpawnLocationComponent*                  Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             interactor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           pickup;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation05_K2Node_ComponentBoundEvent_3_OnContainerPickupInteractionEvent__DelegateSignature
	 */
	struct AGoreDispenser_Container_BP_C_BndEvt__GoreDispenser_Container_BP_SpawnLocation05_K2Node_ComponentBoundEvent_3_OnContainerPickupInteractionEvent__DelegateSignature_Params
	{
	public:
		class URBContainerSpawnLocationComponent*                  Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             interactor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           pickup;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation06_K2Node_ComponentBoundEvent_4_OnContainerPickupInteractionEvent__DelegateSignature
	 */
	struct AGoreDispenser_Container_BP_C_BndEvt__GoreDispenser_Container_BP_SpawnLocation06_K2Node_ComponentBoundEvent_4_OnContainerPickupInteractionEvent__DelegateSignature_Params
	{
	public:
		class URBContainerSpawnLocationComponent*                  Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             interactor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           pickup;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation01_K2Node_ComponentBoundEvent_5_OnContainerPickupInteractionEvent__DelegateSignature
	 */
	struct AGoreDispenser_Container_BP_C_BndEvt__GoreDispenser_Container_BP_SpawnLocation01_K2Node_ComponentBoundEvent_5_OnContainerPickupInteractionEvent__DelegateSignature_Params
	{
	public:
		class URBContainerSpawnLocationComponent*                  Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             interactor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           pickup;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ReceiveBeginPlay
	 */
	struct AGoreDispenser_Container_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ExecuteUbergraph_GoreDispenser_Container_BP
	 */
	struct AGoreDispenser_Container_BP_C_ExecuteUbergraph_GoreDispenser_Container_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
