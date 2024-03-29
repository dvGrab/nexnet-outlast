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
	 * BlueprintGeneratedClass RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URBSkeletalBodySetupFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void InitializeSkeletalBodySetup3(TArray<class USkeletalMeshComponent*>* Skelmeshes, class USkeletalMeshComponent* MainMesh, class UClass* FullBodyDefinition, class UClass* HeadOverride, class UClass* HairOverride, class UClass* UpperBodyOverride, class UClass* LowerBodyOverride, class UClass* LegsOverride, class UClass* ArmsOverride, bool bHasHair, class UObject* __WorldContext);
		void ApplyDefinitionOverrides3(bool _bHasHair, TArray<class USkeletalMeshComponent*>* _SkelMeshes, class UClass* Head, class UClass* Hair, class UClass* Upper, class UClass* Lower, class UClass* Legs, class UClass* Arms, class UObject* __WorldContext);
		void Apply_Full_Body_Definition(TArray<class USkeletalMeshComponent*>* Skelmeshes, class UClass* FullBodyDefinition, class UObject* __WorldContext);
		void ApplyDefinitionOverrides2(bool _bHasHair, TArray<class USkeletalMeshComponent*>* _SkelMeshes, class URBDeadBodyConfig* Head, class URBDeadBodyConfig* Hair, class URBDeadBodyConfig* Upper, class URBDeadBodyConfig* Lower, class URBDeadBodyConfig* Legs, class URBDeadBodyConfig* Arms, class UObject* __WorldContext);
		void ApplyBodyPart2(class USkeletalMeshComponent* SkelMesh, const struct FDeadBodyConfigPart& Definition, class UObject* __WorldContext);
		void InitializeSkeletalBodySetup2(TArray<class USkeletalMeshComponent*>* Skelmeshes, class USkeletalMeshComponent* MainMesh, class URBDeadBodyConfig* FullBodyDefinition, class URBDeadBodyConfig* HeadOverride, class URBDeadBodyConfig* HairOverride, class URBDeadBodyConfig* UpperBodyOverride, class URBDeadBodyConfig* LowerBodyOverride, class URBDeadBodyConfig* LegsOverride, class URBDeadBodyConfig* ArmsOverride, bool bHasHair, class UObject* __WorldContext);
		void ApplyFullBodyDefinition2(TArray<class USkeletalMeshComponent*>* Skelmeshes, class URBDeadBodyConfig* FullBodyDefinitionBase, class UObject* __WorldContext);
		void LobbyReagent_ApplyFullBodyDefinition(TArray<class USkeletalMeshComponent*>* Skelmeshes, class ULobbyReagent_BodyFullDefinition_C* FullBodyDefinition, class UObject* __WorldContext);
		void ApplyAnimSequence(class USkeletalMeshComponent* MainMesh, const struct FSingleAnimationPlayData& AnimationData, class UObject* __WorldContext);
		void ApplySkinTone(TArray<class USkeletalMeshComponent*>* Skelmeshes, class UObject* __WorldContext);
		void GetSkelMeshBodyPart(const class FString& SearchString, TArray<class USkeletalMeshComponent*>* Skelmeshes, class UObject* __WorldContext, class USkeletalMeshComponent** SkelMeshComp);
		void ApplyDefinitionOverrides(class UBodyHeadDefinition_C* _Head_Override, class UBodyUpperBodyDefinition_C* _UpperBody_Override, class UBodyLowerBodyDefinition_C* _LowerBody_Override, class UBodyLegsDefinition_C* _Legs_Override, class UBodyArmsDefinition_C* _Arms_Override, class UBodyHairDefinition_C* _Hair_Override, bool _bHasHair, TArray<class USkeletalMeshComponent*>* _SkelMeshes, class UObject* __WorldContext);
		void ApplyBodyPart(class USkeletalMeshComponent* SkelMesh, const struct FBodyOutfitElement& Definition, class UObject* __WorldContext);
		void ApplyFullBodyDefinition(TArray<class USkeletalMeshComponent*>* Skelmeshes, class UBodyFullDefinition_C* FullBodyDefinition, class UObject* __WorldContext);
		void ClearMaterialOverrides(TArray<class USkeletalMeshComponent*>* Array, class UObject* __WorldContext);
		void InitializeSkeletalBodySetup(TArray<class USkeletalMeshComponent*>* Skelmeshes, class USkeletalMeshComponent* MainMesh, class UBodyFullDefinition_C* FullBodyDefinition, class UBodyHeadDefinition_C* HeadOverride, class UBodyHairDefinition_C* HairOverride, class UBodyUpperBodyDefinition_C* UpperBodyOverride, class UBodyLowerBodyDefinition_C* LowerBodyOverride, class UBodyLegsDefinition_C* LegsOverride, class UBodyArmsDefinition_C* ArmsOverride, bool bHasHair, class UObject* __WorldContext);
		void SetSafeMasterPose(TArray<class USkeletalMeshComponent*>* SkelMeshComps, class USkeletalMeshComponent* MasterSkelMeshComp, bool ForceUpdate, class UObject* __WorldContext);
		void SetupCollisions(TArray<class USkeletalMeshComponent*>* SkelMeshComps, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
