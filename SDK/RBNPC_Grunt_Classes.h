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
	 * BlueprintGeneratedClass RBNPC_Grunt.RBNPC_Grunt_C
	 * Size -> 0x0240 (FullSize[0x58A8] - InheritedSize[0x5668])
	 */
	class ARBNPC_Grunt_C : public ARBNPC_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x5668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Head_Mesh_EDITOR;                                        // 0x5670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              LowerBody_Mesh_EDITOR;                                   // 0x5678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              UpperBody_Mesh_EDITOR;                                   // 0x5680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Hair_Mesh;                                               // 0x5688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Head_Mesh;                                               // 0x5690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              LowerBody_Mesh;                                          // 0x5698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              UpperBody_Mesh;                                          // 0x56A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class UMaterialInstanceConstant*>      LoadedHeadMaterials;                                     // 0x56A8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class USkeletalMeshComponent*>                      AdditionalBodyMeshes;                                    // 0x56F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FSelectedGruntCustomizationMeshesInfo               SelectedCustomizationInfo;                               // 0x5708(0x0014) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor
		unsigned char                                              UnknownData_1SWI[0x4];                                   // 0x571C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGruntCustomizationMeshesConfig                     CustomizationConfig;                                     // 0x5720(0x0180) Edit, BlueprintVisible, DisableEditOnInstance
		class UPoseAsset*                                          FacePoseAsset;                                           // 0x58A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool TryPlayFacialAnim(const class FString& lineId);
		class UPoseAsset* GetFacePoseAsset();
		class FName GetFoleySwitchOverride();
		void OnRep_SelectedCustomizationInfo();
		void ApplyGruntCustomization();
		void CustomizeCharacter();
		void UpdateMaterialsOnCustomizedMeshFromMap(class USkeletalMeshComponent** SkeletalMeshComponent, TMap<class FString, class UMaterialInstanceConstant*>* MaterialOverrides);
		void UpdateMaterialsOnCustomizedMesh(class USkeletalMeshComponent** SkeletalMeshComponent, TMap<class FString, class UMaterialInstanceConstant*>* MaterialOverrides);
		void UpdateComponentFromIndex(class USkeletalMeshComponent** MeshComponent, ENPCCustomizationSlot Slot);
		class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent();
		void UserConstructionScript();
		void RequestGruntCustomization();
		void OnCustomizationLoaded(class AActor* customizationOwner, int32_t requestID, EPawnCustomizationRequestType requestType);
		void ReceiveBeginPlay();
		void Event_OnWeaponVisible(ENPCWeapon weaponType, class ARBNPCWeapon* weaponActor);
		void ExecuteUbergraph_RBNPC_Grunt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
