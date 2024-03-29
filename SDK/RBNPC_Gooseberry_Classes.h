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
	 * BlueprintGeneratedClass RBNPC_Gooseberry.RBNPC_Gooseberry_C
	 * Size -> 0x0040 (FullSize[0x56A8] - InheritedSize[0x5668])
	 */
	class ARBNPC_Gooseberry_C : public ARBNPC_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x5668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Futterman;                                               // 0x5670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Gooseberry_Skirt;                                        // 0x5678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Head;                                                    // 0x5680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FullBodyMesh;                                            // 0x5688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToPlayNextIdleBreaker;                               // 0x5690(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3N4C[0x4];                                   // 0x5694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             PlayFuttermanIdleBreaker;                                // 0x5698(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		bool TryPlayFacialAnim(const class FString& lineId);
		class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void UpdateTimeToPlayFuttermanIdleBreaker();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_RBNPC_Gooseberry(int32_t EntryPoint);
		void PlayFuttermanIdleBreaker__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
