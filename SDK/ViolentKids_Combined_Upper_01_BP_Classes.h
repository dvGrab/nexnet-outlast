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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass ViolentKids_Combined_Upper_01_BP.ViolentKids_Combined_Upper-01_BP_C
	 * Size -> 0x00E5 (FullSize[0x0A45] - InheritedSize[0x0960])
	 */
	class AViolentKids_Combined_Upper01_BP_C : public ARBUnlockableLargePickup
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0960(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                LeftHand;                                                // 0x0968(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   RBSound;                                                 // 0x0970(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   VoiceComponent;                                          // 0x0978(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Handmesh;                                                // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              InteractableOwnerClearanceBoxComponent_BP[0x8];          // 0x0988(0x0008) UNKNOWN PROPERTY: ObjectProperty
		class URBWaterRippleEmitter*                               RBWaterRippleEmitter;                                    // 0x0990(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AnimationAnchor;                                         // 0x0998(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BrokenTorso;                                             // 0x09A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Torso;                                                   // 0x09A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FUniqueNetIdRepl>                            PlayersInteracted;                                       // 0x09B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bStillAttached;                                          // 0x09C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsGirl;                                                  // 0x09C1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_6758[0x6];                                   // 0x09C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AViolentKids_Combined_Legs_01_BP_C*                  MannequinLegs;                                           // 0x09C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsGrinded;                                               // 0x09D0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       IsGrinded_Local;                                         // 0x09D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N4GG[0x2];                                   // 0x09D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AttachInteractionOffset;                                 // 0x09D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DetachedInteractionOffset;                               // 0x09E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMannequinActive_Server;                               // 0x09EC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bIsPlayingChildVO;                                       // 0x09ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SD0D[0x2];                                   // 0x09EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ARBTriggerable*>                              ToTriggerOnUnlock;                                       // 0x09F0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		class UViolentKids_MannequinData_BP_C*                     animData;                                                // 0x0A00(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AViolentKids_Base_Slave_BP_C*>                SlaveAnimatedLoopToWaitActors;                           // 0x0A08(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		class AViolentKids_Button_BP_C*                            LinkedButton;                                            // 0x0A18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsWaiting;                                               // 0x0A20(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       ForcedHidden_Server;                                     // 0x0A21(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       ForcedHiddenLocally;                                     // 0x0A22(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bStillAttached_Server;                                   // 0x0A23(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		struct FVector                                             TorsoIconOffset;                                         // 0x0A24(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsWorldFullyLoaded;                                      // 0x0A30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5YDJ[0x7];                                   // 0x0A31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       GrindingAnimation;                                       // 0x0A38(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SectionIndex;                                            // 0x0A40(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasntBeenPickedUpYet;                                   // 0x0A44(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		int32_t GetObjectiveTypeIndex();
		bool FixUp();
		bool BP_MapCheck(EMapCheckType checkType, class FString* outErrorMsg);
		void GetPropAnimationData(class UViolentKids_MannequinData_BP_C** NewParam);
		void GetAnimationData(class UViolentKids_MannequinData_BP_C** Data);
		bool GetInteractionActionCollisionCheck();
		void OnRep_IsGrinded();
		void OnRep_bIsMannequinActive_Server();
		void IsChildMannequinActive(bool* Value);
		void OnRep_bStillAttached_Server();
		void UpdateIsOnGround();
		void SetForcedHidden(bool Value);
		void ResetAnims();
		void GetAllLinkedActors(TArray<class AActor*>* LinkedActors);
		void ToggleAllLinkedActors(bool Enabled);
		void UpdateForceHidden();
		void OnRep_ForcedHidden();
		bool GetCustomPickupInteractionText(class ARBPlayer* Player, class FText* out_CustomInteractionText);
		void OnRep_IsWaiting();
		void InitAnims();
		void UpdateAttachedComponents();
		void UpdateIconPosition();
		void SetIsGrinded(bool Grinded);
		void SetStillAttached(bool Value);
		void SetAnimBPWaiting(bool Waiting);
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		void UpdateSex();
		void OnRep_IsGirl();
		void StartGrindingAnimation();
		bool BP_ShouldPlayAnimAfterAdjustPosition(class ARBPawn* Pawn);
		void ResetMannequin();
		void UserConstructionScript();
		void OnEditorPostLoad();
		void OnPostActorsPasted(TArray<class AActor*> pastedActors);
		void PostAddedToLevel();
		void PostDuplicated(class AActor* duplicationParent);
		void PostEditChange(const class FName& PropertyName);
		void PostEditMove(bool bFinished);
		void TickSelected();
		void BP_PrepareMapCheck();
		void Event_OnUsedOnInteractible(class ARBPawn* interactor, class URBLargeObjectInteractionPanelComponent* interactible);
		void Event_OnResetStage();
		void NotifySpecialMoveCompletedEvent(class ARBPawn* Pawn, ESpecialMove specialMove, bool bInterrupted);
		void BP_PlaySequence(class UAnimSequence* Sequence);
		void PostToggled(bool bToggleEnabled);
		void BndEvt__ChildMannequin_Combined_Upper01_BP_RandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature();
		void Event_OnIsLockedChanged(bool bValue);
		void LinkButton(class AViolentKids_Button_BP_C* Button);
		void OnButtonPressed(bool bPressed);
		void DelayedUpdateInteractionBox(float Time);
		void OnWorldPopulateFinished();
		void Multicast_PlayChildVO();
		void UpdateLoopingChildVOs_Server();
		void ResetVOTimer_Server();
		void OnPawnPlaySpecialMoveAnimation(class ARBPawn* Pawn, ESpecialMove specialMove);
		void OnWorldFullyLoaded();
		void StartMannequinVOLoop();
		void SnapToState();
		void ValidateGrinded();
		void ReceiveBeginPlay();
		void NotifySpecialMoveStartedEvent(class ARBPawn* Pawn, ESpecialMove specialMove);
		void ExecuteUbergraph_ViolentKids_Combined_Upper01_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
