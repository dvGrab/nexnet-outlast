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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Lobby_FakeReagent_BP.Lobby_FakeReagent_BP_C
	 * Size -> 0x00FB (FullSize[0x0343] - InheritedSize[0x0248])
	 */
	class ALobby_FakeReagent_BP_C : public ARBLobbyFakeReagent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCapsuleComponent*                                   Capsule;                                                 // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Watch;                                                   // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ESOP_Battery;                                            // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ESOP;                                                    // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Straps;                                                  // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Glove;                                                   // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              NVGoggles;                                               // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBPropOptimizerComponent*                           RBPropOptimizer;                                         // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBRandomizableHelperComponent*                      RBRandomizableHelper;                                    // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   VoiceComponent;                                          // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Anchor_Prop;                                             // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Hand_R_Prop;                                             // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Hand_L_Prop;                                             // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Hair;                                                    // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Lower;                                                   // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Upper;                                                   // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Head;                                                    // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class USkeletalMeshComponent*>                      ExtraCustomizationMeshes;                                // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FRBPlayerCustomizationInfo                          PlayerCustomizationInfo;                                 // 0x02F8(0x0038) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
		bool                                                       bRandomSex;                                              // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsFemale;                                               // 0x0331(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T6WH[0x6];                                   // 0x0332(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPoseAsset*                                          FacePoseAsset;                                           // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFace_ExpressionList_Enum                                  FaceExpression;                                          // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FaceState;                                               // 0x0341(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EPlayer_Face_States                                        WhichFaceState;                                          // 0x0342(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class USkeletalMeshComponent* GetMainParentSkeletalMesh();
		struct FRBPlayerCustomizationInfo GetPlayerCustomizationInfo();
		class USkeletalMeshComponent* GetSkeletalMeshComponentForSlot(EPlayerCustomizationSlot Slot);
		class UStaticMeshComponent* GetWatchComponent();
		bool GetStateName(class FString* stateA, class FString* stateB);
		bool IsStateA();
		bool ShouldBeIgnoredForLots();
		void GetFacePoseAsset(class UPoseAsset** FacePoseAsset);
		class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent();
		void OnRep_PlayerCustomizationInfo();
		void OnRep_FullDefinition();
		void InitializeMasterComponent();
		void UserConstructionScript();
		void OnWorldFullyLoaded();
		void OnWorldPopulateFinished();
		void SetState(bool bStateA);
		void PrepareState(bool bStateA, class AActor* randomOwner);
		void SetShouldBeIgnoredForLots(bool bValue);
		void OnExtraCustomizationMeshesAddedForSlot(TArray<class USkeletalMeshComponent*> addedExtraMeshes, EPlayerCustomizationSlot Slot);
		void Dress();
		void CustomEvent_1(class AActor* customizationOwner, int32_t requestID, EPawnCustomizationRequestType requestType);
		void SetRandomCustomizationInfo_Server();
		void BndEvt__Lobby_FakeReagent_BP_RBRandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature();
		void PostToggled(bool bToggleEnabled);
		void ExecuteUbergraph_Lobby_FakeReagent_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
