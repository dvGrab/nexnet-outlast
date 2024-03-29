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
	 * Function NPCMenu.NPCMenu_C.PlayPurchasedVoice
	 */
	struct UNPCMenu_C_PlayPurchasedVoice_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.TryStartNextMenuTutorial
	 */
	struct UNPCMenu_C_TryStartNextMenuTutorial_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.SetCategoryFocus
	 */
	struct UNPCMenu_C_SetCategoryFocus_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.OnFocusReceived
	 */
	struct UNPCMenu_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function NPCMenu.NPCMenu_C.Refresh
	 */
	struct UNPCMenu_C_Refresh_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.OnMenuBackRequested
	 */
	struct UNPCMenu_C_OnMenuBackRequested_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.OnCoreUpgradeTierClicked
	 */
	struct UNPCMenu_C_OnCoreUpgradeTierClicked_Params
	{
	public:
		int32_t                                                    SelectedCoreUpgradeTier;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPCMenu.NPCMenu_C.OnRigClicked
	 */
	struct UNPCMenu_C_OnRigClicked_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActiveSkillType                                           ActiveSkillType;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XJHF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NPCMenu.NPCMenu_C.ChangeCategory
	 */
	struct UNPCMenu_C_ChangeCategory_Params
	{
	public:
		ELoadoutElementType                                        Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPCMenu.NPCMenu_C.PlayExitVoiceline
	 */
	struct UNPCMenu_C_PlayExitVoiceline_Params
	{
	public:
		bool                                                       IsRudeExit;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5GP4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NPCMenu.NPCMenu_C.PlayGreetingVoiceline
	 */
	struct UNPCMenu_C_PlayGreetingVoiceline_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.Initialize
	 */
	struct UNPCMenu_C_Initialize_Params
	{
	public:
		class AActor*                                              NPCActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMetaNPCType                                               NPCType;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bActivateCamera;                                         // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NPCMenu.NPCMenu_C.Setup
	 */
	struct UNPCMenu_C_Setup_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.Construct
	 */
	struct UNPCMenu_C_Construct_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.Event_OnPop
	 */
	struct UNPCMenu_C_Event_OnPop_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UNPCMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPCMenu.NPCMenu_C.Event_OnFocusMenu
	 */
	struct UNPCMenu_C_Event_OnFocusMenu_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_RigList_K2Node_ComponentBoundEvent_0_OnRigClicked__DelegateSignature
	 */
	struct UNPCMenu_C_BndEvt__NPCMenu_RigList_K2Node_ComponentBoundEvent_0_OnRigClicked__DelegateSignature_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActiveSkillType                                           ActiveSkillType;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_RigList_K2Node_ComponentBoundEvent_1_OnUpgradeAcquired__DelegateSignature
	 */
	struct UNPCMenu_C_BndEvt__NPCMenu_RigList_K2Node_ComponentBoundEvent_1_OnUpgradeAcquired__DelegateSignature_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_RigUpgradeList_K2Node_ComponentBoundEvent_3_OnUpgradeAcquired__DelegateSignature
	 */
	struct UNPCMenu_C_BndEvt__NPCMenu_RigUpgradeList_K2Node_ComponentBoundEvent_3_OnUpgradeAcquired__DelegateSignature_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeAcquired__DelegateSignature
	 */
	struct UNPCMenu_C_BndEvt__NPCMenu_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeAcquired__DelegateSignature_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_CoreUpgradeList_K2Node_ComponentBoundEvent_5_OnUpgradeAcquired__DelegateSignature
	 */
	struct UNPCMenu_C_BndEvt__NPCMenu_CoreUpgradeList_K2Node_ComponentBoundEvent_5_OnUpgradeAcquired__DelegateSignature_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_CoreUpgradeTierList_K2Node_ComponentBoundEvent_6_OnTierClicked__DelegateSignature
	 */
	struct UNPCMenu_C_BndEvt__NPCMenu_CoreUpgradeTierList_K2Node_ComponentBoundEvent_6_OnTierClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPCMenu.NPCMenu_C.Event_OnMenuTutorialSeen
	 */
	struct UNPCMenu_C_Event_OnMenuTutorialSeen_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.Tick
	 */
	struct UNPCMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPCMenu.NPCMenu_C.Event_MenuCancel_Pressed
	 */
	struct UNPCMenu_C_Event_MenuCancel_Pressed_Params
	{	};

	/**
	 * Function NPCMenu.NPCMenu_C.ExecuteUbergraph_NPCMenu
	 */
	struct UNPCMenu_C_ExecuteUbergraph_NPCMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SG2Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
