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
	 * BlueprintGeneratedClass RBNPC_Big_BP.RBNPC_Big_BP_C
	 * Size -> 0x01B4 (FullSize[0x581C] - InheritedSize[0x5668])
	 */
	class ARBNPC_Big_BP_C : public ARBNPC_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x5668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Head_Mesh_EDITOR;                                        // 0x5670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FullBody_Mesh_EDITOR;                                    // 0x5678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HairMesh;                                                // 0x5680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Head_Mesh;                                               // 0x5688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   ThrowablesExtraCollision;                                // 0x5690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FullBody_Mesh;                                           // 0x5698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<ENPCWeapon, struct FVector>                           LargeWeaponScales;                                       // 0x56A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              SelectedVoice;                                           // 0x56F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FNPCSkinData>                                MaleSkins;                                               // 0x5700(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UPoseAsset*                                          PoseAsset;                                               // 0x5710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USkeletalMeshComponent*>                      extraMeshes;                                             // 0x5718(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FNPCSkinData>                                FemaleSkins;                                             // 0x5728(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      MaleVoices;                                              // 0x5738(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      FemaleVoices;                                            // 0x5748(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsFemale;                                                // 0x5758(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JQ07[0x7];                                   // 0x5759(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNPCSkinData                                        SelectedSkin;                                            // 0x5760(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    CustomizationNetSeed;                                    // 0x5818(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		void RandomizeCustomization();
		void UpdateVoiceType_Server();
		void OnRep_CustomizationNetSeed();
		void CleanMeshes();
		void AddExtraBodyMesh(class USkeletalMesh* NewMesh);
		void GetRessourcesToLoad(TArray<struct FSoftObjectPath>* ressources);
		class UPoseAsset* GetFacePoseAsset();
		class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent();
		void OnRep_RandomMesh();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void RequestSkinRessources();
		void Event_OnWeaponVisible(ENPCWeapon weaponType, class ARBNPCWeapon* weaponActor);
		void ApplySkinMeshes();
		void OnRessourcesLoaded(class AActor* customizationOwner, int32_t requestID, EPawnCustomizationRequestType requestType);
		void ExecuteUbergraph_RBNPC_Big_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
