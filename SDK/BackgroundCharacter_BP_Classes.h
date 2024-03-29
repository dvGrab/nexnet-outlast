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
	 * BlueprintGeneratedClass BackgroundCharacter_BP.BackgroundCharacter_BP_C
	 * Size -> 0x0035 (FullSize[0x0665] - InheritedSize[0x0630])
	 */
	class ABackgroundCharacter_BP_C : public ARBBackgroundCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0630(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBPropOptimizerComponent*                           RBPropOptimizer;                                         // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   VoiceComponent;                                          // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FullBody_Mesh;                                           // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class USkeletalMesh*>                               MeshOptions;                                             // 0x0650(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    RandomizerId;                                            // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUsesProxyMesh;                                          // 0x0664(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetPrecomputedVisSettings();
		class UPoseAsset* GetFacePoseAsset();
		void BuildAppearance();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BackgroundCharacter_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
