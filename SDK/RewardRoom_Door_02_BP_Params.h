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
	 * Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.UserConstructionScript
	 */
	struct ARewardRoom_Door__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.LockPanelHinge__FinishedFunc
	 */
	struct ARewardRoom_Door__BP_C_LockPanelHinge__FinishedFunc_Params
	{	};

	/**
	 * Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.LockPanelHinge__UpdateFunc
	 */
	struct ARewardRoom_Door__BP_C_LockPanelHinge__UpdateFunc_Params
	{	};

	/**
	 * Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.BP_OnNumberOfRewardUnlockActiveChanged
	 */
	struct ARewardRoom_Door__BP_C_BP_OnNumberOfRewardUnlockActiveChanged_Params
	{
	public:
		int32_t                                                    numberOfRewardUnlockActive;                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.BP_OnRewardDoorInitialization
	 */
	struct ARewardRoom_Door__BP_C_BP_OnRewardDoorInitialization_Params
	{	};

	/**
	 * Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.Event_OnResetStage
	 */
	struct ARewardRoom_Door__BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.BndEvt__RewardRoom_Door-02_BP_StingerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ARewardRoom_Door__BP_C_BndEvt__RewardRoom_Door__BP_StingerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8HAL[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.BndEvt__RewardRoom_Door-02_BP_RBSinglePlayerHelper_K2Node_ComponentBoundEvent_1_OnSinglePlayerChangedEvent__DelegateSignature
	 */
	struct ARewardRoom_Door__BP_C_BndEvt__RewardRoom_Door__BP_RBSinglePlayerHelper_K2Node_ComponentBoundEvent_1_OnSinglePlayerChangedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.ExecuteUbergraph_RewardRoom_Door-02_BP
	 */
	struct ARewardRoom_Door__BP_C_ExecuteUbergraph_RewardRoom_Door__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.DoorInteracted__DelegateSignature
	 */
	struct ARewardRoom_Door__BP_C_DoorInteracted__DelegateSignature_Params
	{
	public:
		bool                                                       bOpen;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
