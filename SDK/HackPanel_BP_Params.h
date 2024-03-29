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
	 * Function HackPanel_BP.HackPanel_BP_C.GetPingItemName
	 */
	struct AHackPanel_BP_C_GetPingItemName_Params
	{
	public:
		class FText                                                outName;                                                 // 0x0000(0x0018)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.GetPingEnabled
	 */
	struct AHackPanel_BP_C_GetPingEnabled_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       outIsEnabled;                                            // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0091(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VSXS[0x6];                                   // 0x0092(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.GetPlayerPingData
	 */
	struct AHackPanel_BP_C_GetPlayerPingData_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FPlayerPingData                                     outData;                                                 // 0x0090(0x0028)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CVQY[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.GetPlayerPingWorldLocation
	 */
	struct AHackPanel_BP_C_GetPlayerPingWorldLocation_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             OutLocation;                                             // 0x0090(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x009C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F56P[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.GetTripLeft
	 */
	struct AHackPanel_BP_C_GetTripLeft_Params
	{
	public:
		bool                                                       bUseDefault;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z6M8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.RefreshTripLeft
	 */
	struct AHackPanel_BP_C_RefreshTripLeft_Params
	{
	public:
		bool                                                       bUseDefault;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z4KE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.ResetToDefault
	 */
	struct AHackPanel_BP_C_ResetToDefault_Params
	{	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.GetTripLeftString
	 */
	struct AHackPanel_BP_C_GetTripLeftString_Params
	{
	public:
		bool                                                       bUseDefault;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U5UY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.RefreshStageLeft
	 */
	struct AHackPanel_BP_C_RefreshStageLeft_Params
	{
	public:
		bool                                                       bUseDefault;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.ButtonSound
	 */
	struct AHackPanel_BP_C_ButtonSound_Params
	{
	public:
		class URBPasscodeButtonComponent*                          Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.UserConstructionScript
	 */
	struct AHackPanel_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.Unlocking__FinishedFunc
	 */
	struct AHackPanel_BP_C_Unlocking__FinishedFunc_Params
	{	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.Unlocking__UpdateFunc
	 */
	struct AHackPanel_BP_C_Unlocking__UpdateFunc_Params
	{	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.Unlocking__Unlocked__EventFunc
	 */
	struct AHackPanel_BP_C_Unlocking__Unlocked__EventFunc_Params
	{	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.ReceiveTick
	 */
	struct AHackPanel_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.RefreshQuadrantMaterials
	 */
	struct AHackPanel_BP_C_RefreshQuadrantMaterials_Params
	{	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.ReceiveBeginPlay
	 */
	struct AHackPanel_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_12_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_12_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_14_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_14_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_18_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_18_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_20_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_20_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_22_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_22_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_24_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_24_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_26_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_26_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_28_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_28_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_30_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_30_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_32_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanelComponent_BP_K2Node_ComponentBoundEvent_32_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.Physicalize
	 */
	struct AHackPanel_BP_C_Physicalize_Params
	{
	public:
		struct FVector                                             AdditionalImpulse;                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.Event_OnResetStage
	 */
	struct AHackPanel_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__RBHackPanel_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__RBHackPanel_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanel_BP_RBActiveSkillVision_K2Node_ComponentBoundEvent_3_ActiveSkillChanged__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanel_BP_RBActiveSkillVision_K2Node_ComponentBoundEvent_3_ActiveSkillChanged__DelegateSignature_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_4_OnPanelEvent__DelegateSignature
	 */
	struct AHackPanel_BP_C_BndEvt__HackPanel_BP_RBHackPanel_K2Node_ComponentBoundEvent_4_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HackPanel_BP.HackPanel_BP_C.ExecuteUbergraph_HackPanel_BP
	 */
	struct AHackPanel_BP_C_ExecuteUbergraph_HackPanel_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
