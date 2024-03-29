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
	 * BlueprintGeneratedClass Scientist_BP.Scientist_BP_C
	 * Size -> 0x00B1 (FullSize[0x06E1] - InheritedSize[0x0630])
	 */
	class AScientist_BP_C : public ARBBackgroundCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0630(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBPropOptimizerComponent*                           RBPropOptimizer;                                         // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Head;                                                    // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              LowerBody;                                               // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              UpperBody;                                               // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PenMesh;                                                 // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ClipboardMesh;                                           // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Male_Heads[0x10];                                        // 0x0668(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Male_UpperBodies[0x10];                                  // 0x0678(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Male_LowerBodies[0x10];                                  // 0x0688(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       UseCollisions;                                           // 0x0698(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XDV1[0x7];                                   // 0x0699(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Female_LowerBodies[0x10];                                // 0x06A0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Female_UpperBodies[0x10];                                // 0x06B0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Female_Heads[0x10];                                      // 0x06C0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       IsFemale;                                                // 0x06D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2C89[0x3];                                   // 0x06D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HeadMeshIndex;                                           // 0x06D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    UpperBodyMeshIndex;                                      // 0x06D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LowerBodyMeshIndex;                                      // 0x06DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseRandomMesh;                                           // 0x06E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void RandomizeMeshes();
		void CanBeFemale(bool* Result);
		void UserConstructionScript();
		void OnLoaded_5B190DD74C9C1BA5309F1B83ACAC3AEA(class UObject* Loaded);
		void ApplyMesh(class USkeletalMeshComponent* Component, int32_t MeshIndex);
		void ReceiveBeginPlay();
		void ApplyAllMeshes();
		void ExecuteUbergraph_Scientist_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
