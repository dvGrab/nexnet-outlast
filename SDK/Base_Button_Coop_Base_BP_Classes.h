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
	 * BlueprintGeneratedClass Base_Button_Coop_Base_BP.Base_Button-Coop_Base_BP_C
	 * Size -> 0x0070 (FullSize[0x02B8] - InheritedSize[0x0248])
	 */
	class ABase_ButtonCoop_Base_BP_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBRandomizableHelperComponent*                      RBRandomizableHelper;                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              InteractableOwnerClearanceBoxComponent_BP[0x8];          // 0x0258(0x0008) UNKNOWN PROPERTY: ObjectProperty
		class URBSoundComponent*                                   RBSound;                                                 // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCoopButton_OperatableComponent_BP_C*                OperatableComponent;                                     // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBOutlineComponent*                                 RBOutline;                                               // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     Decal;                                                   // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ButtonMesh;                                              // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WallMount;                                               // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      ButtonTimeline_ButtonPressedRatio_0569E786458F1E93E4810C999A409D7E; // 0x0298(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ButtonTimeline__Direction_0569E786458F1E93E4810C999A409D7E; // 0x029C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EKG7[0x3];                                   // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ButtonTimeline;                                          // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABase_ButtonCoop_Base_BP_C*                          LinkedCoopButton;                                        // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialButtonDepth;                                      // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PressedButtonDepth;                                      // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool GetStateName(class FString* stateA, class FString* stateB);
		bool IsStateA();
		bool ShouldBeIgnoredForLots();
		bool FixUp();
		float GetProgressionRatio();
		ETriggerableActionBehavior GetTriggerActionBehavior();
		void UserConstructionScript();
		void ButtonTimeline__FinishedFunc();
		void ButtonTimeline__UpdateFunc();
		void PrepareState(bool bStateA, class AActor* randomOwner);
		void OnEditorPostLoad();
		void OnPostActorsPasted(TArray<class AActor*> pastedActors);
		void PostAddedToLevel();
		void PostDuplicated(class AActor* duplicationParent);
		void PostEditChange(const class FName& PropertyName);
		void PostEditMove(bool bFinished);
		void TickSelected();
		void OnTriggerableActivated(class ARBTriggerable* triggerable);
		void OnTriggerableDeactivated(class ARBTriggerable* triggerable);
		void BndEvt__Base_ButtonCoop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnCoopOperatableEvent__DelegateSignature(class URBCoopOperatableComponent* Component);
		void BndEvt__Base_ButtonCoop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component);
		void ChangeButtonState();
		void SetState(bool bStateA);
		void SetShouldBeIgnoredForLots(bool bValue);
		void ExecuteUbergraph_Base_ButtonCoop_Base_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
