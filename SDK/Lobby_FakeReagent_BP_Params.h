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
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.GetMainParentSkeletalMesh
	 */
	struct ALobby_FakeReagent_BP_C_GetMainParentSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.GetPlayerCustomizationInfo
	 */
	struct ALobby_FakeReagent_BP_C_GetPlayerCustomizationInfo_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.GetSkeletalMeshComponentForSlot
	 */
	struct ALobby_FakeReagent_BP_C_GetSkeletalMeshComponentForSlot_Params
	{
	public:
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B7Q6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.GetWatchComponent
	 */
	struct ALobby_FakeReagent_BP_C_GetWatchComponent_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.GetStateName
	 */
	struct ALobby_FakeReagent_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.IsStateA
	 */
	struct ALobby_FakeReagent_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.ShouldBeIgnoredForLots
	 */
	struct ALobby_FakeReagent_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.GetFacePoseAsset
	 */
	struct ALobby_FakeReagent_BP_C_GetFacePoseAsset_Params
	{
	public:
		class UPoseAsset*                                          FacePoseAsset;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.GetFaceFXSkeletalMeshComponent
	 */
	struct ALobby_FakeReagent_BP_C_GetFaceFXSkeletalMeshComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.OnRep_PlayerCustomizationInfo
	 */
	struct ALobby_FakeReagent_BP_C_OnRep_PlayerCustomizationInfo_Params
	{	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.OnRep_FullDefinition
	 */
	struct ALobby_FakeReagent_BP_C_OnRep_FullDefinition_Params
	{	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.InitializeMasterComponent
	 */
	struct ALobby_FakeReagent_BP_C_InitializeMasterComponent_Params
	{	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.UserConstructionScript
	 */
	struct ALobby_FakeReagent_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.OnWorldFullyLoaded
	 */
	struct ALobby_FakeReagent_BP_C_OnWorldFullyLoaded_Params
	{	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.OnWorldPopulateFinished
	 */
	struct ALobby_FakeReagent_BP_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.SetState
	 */
	struct ALobby_FakeReagent_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.PrepareState
	 */
	struct ALobby_FakeReagent_BP_C_PrepareState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SVWD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              randomOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.SetShouldBeIgnoredForLots
	 */
	struct ALobby_FakeReagent_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.OnExtraCustomizationMeshesAddedForSlot
	 */
	struct ALobby_FakeReagent_BP_C_OnExtraCustomizationMeshesAddedForSlot_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      addedExtraMeshes;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.Dress
	 */
	struct ALobby_FakeReagent_BP_C_Dress_Params
	{	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.CustomEvent_1
	 */
	struct ALobby_FakeReagent_BP_C_CustomEvent_1_Params
	{
	public:
		class AActor*                                              customizationOwner;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    requestID;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPawnCustomizationRequestType                              requestType;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.SetRandomCustomizationInfo_Server
	 */
	struct ALobby_FakeReagent_BP_C_SetRandomCustomizationInfo_Server_Params
	{	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.BndEvt__Lobby_FakeReagent_BP_RBRandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature
	 */
	struct ALobby_FakeReagent_BP_C_BndEvt__Lobby_FakeReagent_BP_RBRandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.PostToggled
	 */
	struct ALobby_FakeReagent_BP_C_PostToggled_Params
	{
	public:
		bool                                                       bToggleEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C.ExecuteUbergraph_Lobby_FakeReagent_BP
	 */
	struct ALobby_FakeReagent_BP_C_ExecuteUbergraph_Lobby_FakeReagent_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
