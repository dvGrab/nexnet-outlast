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
	 * BlueprintGeneratedClass GlassBottle_Weapon_BP.GlassBottle_Weapon_BP_C
	 * Size -> 0x0059 (FullSize[0x0BA1] - InheritedSize[0x0B48])
	 */
	class AGlassBottle_Weapon_BP_C : public ASimpleMesh_ThrowableWeapon_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B48(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                ItemWorldMeshB;                                          // 0x0B50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ForcedVisualMeshIndex;                                   // 0x0B58(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WM18[0x4];                                   // 0x0B5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMesh*>                                 PossibleVisualMeshes;                                    // 0x0B60(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UStaticMesh*>                                 PossibleVisualMeshesB;                                   // 0x0B70(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UStaticMesh*                                         ForcedStaticMesh;                                        // 0x0B80(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         ForcedStaticMeshB;                                       // 0x0B88(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomizedVisualMeshIndex;                               // 0x0B90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HoldOffset;                                              // 0x0B94(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRecycled;                                               // 0x0BA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnRep_ForcedStaticMesh();
		void ForceMeshes(class UStaticMesh* StaticMesh, class UStaticMesh* StaticMeshB, const struct FVector& HoldOffset);
		void RefreshVisual();
		void ReceiveBeginPlay();
		void BP_OnGroundAndPoundCounter();
		void BP_OnInitializeRecycledItem(class ARBPickup* originalItem);
		void BP_OnDropItemToFloor();
		void ExecuteUbergraph_GlassBottle_Weapon_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
