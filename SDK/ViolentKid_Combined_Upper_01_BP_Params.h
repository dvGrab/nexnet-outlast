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
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetObjectiveTypeIndex
	 */
	struct AViolentKid_Combined_Upper__BP_C_GetObjectiveTypeIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.FixUp
	 */
	struct AViolentKid_Combined_Upper__BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BP_MapCheck
	 */
	struct AViolentKid_Combined_Upper__BP_C_BP_MapCheck_Params
	{
	public:
		EMapCheckType                                              checkType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I0DX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outErrorMsg;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_10TI[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetPropAnimationData
	 */
	struct AViolentKid_Combined_Upper__BP_C_GetPropAnimationData_Params
	{
	public:
		class UViolentKids_MannequinData_BP_C*                     New_Param;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetAnimationData
	 */
	struct AViolentKid_Combined_Upper__BP_C_GetAnimationData_Params
	{
	public:
		class UViolentKids_MannequinData_BP_C*                     Data;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.TryPlayPickupSound
	 */
	struct AViolentKid_Combined_Upper__BP_C_TryPlayPickupSound_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetInteractionActionCollisionCheck
	 */
	struct AViolentKid_Combined_Upper__BP_C_GetInteractionActionCollisionCheck_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_IsGrinded
	 */
	struct AViolentKid_Combined_Upper__BP_C_OnRep_IsGrinded_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_bIsMannequinActive_Server
	 */
	struct AViolentKid_Combined_Upper__BP_C_OnRep_bIsMannequinActive_Server_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.IsChildMannequinActive
	 */
	struct AViolentKid_Combined_Upper__BP_C_IsChildMannequinActive_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_bStillAttached_Server
	 */
	struct AViolentKid_Combined_Upper__BP_C_OnRep_bStillAttached_Server_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateIsOnGround
	 */
	struct AViolentKid_Combined_Upper__BP_C_UpdateIsOnGround_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.SetForcedHidden
	 */
	struct AViolentKid_Combined_Upper__BP_C_SetForcedHidden_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ResetAnims
	 */
	struct AViolentKid_Combined_Upper__BP_C_ResetAnims_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetAllLinkedActors
	 */
	struct AViolentKid_Combined_Upper__BP_C_GetAllLinkedActors_Params
	{
	public:
		TArray<class AActor*>                                      LinkedActors;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ToggleAllLinkedActors
	 */
	struct AViolentKid_Combined_Upper__BP_C_ToggleAllLinkedActors_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RLSD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateForceHidden
	 */
	struct AViolentKid_Combined_Upper__BP_C_UpdateForceHidden_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_ForcedHidden
	 */
	struct AViolentKid_Combined_Upper__BP_C_OnRep_ForcedHidden_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetCustomPickupInteractionText
	 */
	struct AViolentKid_Combined_Upper__BP_C_GetCustomPickupInteractionText_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                out_CustomInteractionText;                               // 0x0008(0x0018)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_IsWaiting
	 */
	struct AViolentKid_Combined_Upper__BP_C_OnRep_IsWaiting_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.InitAnims
	 */
	struct AViolentKid_Combined_Upper__BP_C_InitAnims_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Update Attached Components
	 */
	struct AViolentKid_Combined_Upper__BP_C_Update_Attached_Components_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateIconPosition
	 */
	struct AViolentKid_Combined_Upper__BP_C_UpdateIconPosition_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.SetIsGrinded
	 */
	struct AViolentKid_Combined_Upper__BP_C_SetIsGrinded_Params
	{
	public:
		bool                                                       Grinded;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Set Still Attached
	 */
	struct AViolentKid_Combined_Upper__BP_C_Set_Still_Attached_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.SetAnimBPWaiting
	 */
	struct AViolentKid_Combined_Upper__BP_C_SetAnimBPWaiting_Params
	{
	public:
		bool                                                       Waiting;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.GetInteractionPawnLocation
	 */
	struct AViolentKid_Combined_Upper__BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RTDW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_97YG[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateSex
	 */
	struct AViolentKid_Combined_Upper__BP_C_UpdateSex_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnRep_IsGirl
	 */
	struct AViolentKid_Combined_Upper__BP_C_OnRep_IsGirl_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.StartGrindingAnimation
	 */
	struct AViolentKid_Combined_Upper__BP_C_StartGrindingAnimation_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BP_ShouldPlayAnimAfterAdjustPosition
	 */
	struct AViolentKid_Combined_Upper__BP_C_BP_ShouldPlayAnimAfterAdjustPosition_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Reset Mannequin
	 */
	struct AViolentKid_Combined_Upper__BP_C_Reset_Mannequin_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UserConstructionScript
	 */
	struct AViolentKid_Combined_Upper__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnEditorPostLoad
	 */
	struct AViolentKid_Combined_Upper__BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnPostActorsPasted
	 */
	struct AViolentKid_Combined_Upper__BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostAddedToLevel
	 */
	struct AViolentKid_Combined_Upper__BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostDuplicated
	 */
	struct AViolentKid_Combined_Upper__BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostEditChange
	 */
	struct AViolentKid_Combined_Upper__BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostEditMove
	 */
	struct AViolentKid_Combined_Upper__BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.TickSelected
	 */
	struct AViolentKid_Combined_Upper__BP_C_TickSelected_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BP_PrepareMapCheck
	 */
	struct AViolentKid_Combined_Upper__BP_C_BP_PrepareMapCheck_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Event_OnUsedOnInteractible
	 */
	struct AViolentKid_Combined_Upper__BP_C_Event_OnUsedOnInteractible_Params
	{
	public:
		class ARBPawn*                                             interactor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URBLargeObjectInteractionPanelComponent*             interactible;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Event_OnResetStage
	 */
	struct AViolentKid_Combined_Upper__BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.NotifySpecialMoveCompletedEvent
	 */
	struct AViolentKid_Combined_Upper__BP_C_NotifySpecialMoveCompletedEvent_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInterrupted;                                            // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BP_PlaySequence
	 */
	struct AViolentKid_Combined_Upper__BP_C_BP_PlaySequence_Params
	{
	public:
		class UAnimSequence*                                       Sequence;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.PostToggled
	 */
	struct AViolentKid_Combined_Upper__BP_C_PostToggled_Params
	{
	public:
		bool                                                       bToggleEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.BndEvt__ChildMannequin_Combined_Upper-01_BP_RandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature
	 */
	struct AViolentKid_Combined_Upper__BP_C_BndEvt__ChildMannequin_Combined_Upper__BP_RandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Event_OnIsLockedChanged
	 */
	struct AViolentKid_Combined_Upper__BP_C_Event_OnIsLockedChanged_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.LinkButton
	 */
	struct AViolentKid_Combined_Upper__BP_C_LinkButton_Params
	{
	public:
		class AViolentKids_Button_BP_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnButtonPressed
	 */
	struct AViolentKid_Combined_Upper__BP_C_OnButtonPressed_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.DelayedUpdateInteractionBox
	 */
	struct AViolentKid_Combined_Upper__BP_C_DelayedUpdateInteractionBox_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnWorldPopulateFinished
	 */
	struct AViolentKid_Combined_Upper__BP_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.Multicast_PlayChildVO
	 */
	struct AViolentKid_Combined_Upper__BP_C_Multicast_PlayChildVO_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.UpdateLoopingChildVOs_Server
	 */
	struct AViolentKid_Combined_Upper__BP_C_UpdateLoopingChildVOs_Server_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ResetVOTimer_Server
	 */
	struct AViolentKid_Combined_Upper__BP_C_ResetVOTimer_Server_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnPawnPlaySpecialMoveAnimation
	 */
	struct AViolentKid_Combined_Upper__BP_C_OnPawnPlaySpecialMoveAnimation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.OnWorldFullyLoaded
	 */
	struct AViolentKid_Combined_Upper__BP_C_OnWorldFullyLoaded_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.StartMannequinVOLoop
	 */
	struct AViolentKid_Combined_Upper__BP_C_StartMannequinVOLoop_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.SnapToState
	 */
	struct AViolentKid_Combined_Upper__BP_C_SnapToState_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ValidateGrinded
	 */
	struct AViolentKid_Combined_Upper__BP_C_ValidateGrinded_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ReceiveBeginPlay
	 */
	struct AViolentKid_Combined_Upper__BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ViolentKid_Combined_Upper-01_BP.ViolentKid_Combined_Upper-01_BP_C.ExecuteUbergraph_ViolentKid_Combined_Upper-01_BP
	 */
	struct AViolentKid_Combined_Upper__BP_C_ExecuteUbergraph_ViolentKid_Combined_Upper__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UTTZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
