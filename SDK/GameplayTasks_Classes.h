﻿#pragma once

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
	 * Class GameplayTasks.GameplayTask
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UGameplayTask : public UObject
	{
	public:
		unsigned char                                              UnknownData_4GP6[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                InstanceName;                                            // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BLKR[0x2];                                   // 0x0038(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ETaskResourceOverlapPolicy                                 ResourceOverlapPolicy;                                   // 0x003A(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SE3K[0x25];                                  // 0x003B(0x0025) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayTask*                                       ChildTask;                                               // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ReadyForActivation();
		void GenericGameplayTaskDelegate__DelegateSignature();
		void EndTask();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTask_ClaimResource
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UGameplayTask_ClaimResource : public UGameplayTask
	{
	public:
		class UGameplayTask_ClaimResource* ClaimResources(TArray<class UClass*> ResourceClasses, unsigned char Priority, const class FName& TaskInstanceName);
		class UGameplayTask_ClaimResource* ClaimResource(class UClass* ResourceClass, unsigned char Priority, const class FName& TaskInstanceName);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTask_SpawnActor
	 * Size -> 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
	 */
	class UGameplayTask_SpawnActor : public UGameplayTask
	{
	public:
		class FScriptMulticastDelegate                             Success;                                                 // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             DidNotSpawn;                                             // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJQR[0x18];                                  // 0x0088(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ClassToSpawn;                                            // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UGameplayTask_SpawnActor* SpawnActor(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
		void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
		bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTask_TimeLimitedExecution
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	class UGameplayTask_TimeLimitedExecution : public UGameplayTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinished;                                              // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTimeExpired;                                           // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1ZQ[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTask_WaitDelay
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	class UGameplayTask_WaitDelay : public UGameplayTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPG9[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		class UGameplayTask_WaitDelay* TaskWaitDelay(float Time, unsigned char Priority);
		void TaskDelayDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTaskOwnerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayTaskOwnerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTaskResource
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGameplayTaskResource : public UObject
	{
	public:
		int32_t                                                    ManualResourceID;                                        // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int8_t                                                     AutoResourceID;                                          // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OLRV[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bManuallySetID : 1;                                      // 0x0030(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7AF9[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTasksComponent
	 * Size -> 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
	 */
	class UGameplayTasksComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_PL0X[0xC];                                   // 0x00B8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UnknownData_P9UW : 1;                                    // 0x00C4(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bIsNetDirty : 1;                                         // 0x00C4(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXEE[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGameplayTask*>                               SimulatedTasks;                                          // 0x00C8(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		TArray<class UGameplayTask*>                               TaskPriorityQueue;                                       // 0x00D8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1RP3[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGameplayTask*>                               TickingTasks;                                            // 0x00F8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UGameplayTask*>                               KnownTasks;                                              // 0x0108(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnClaimedResourcesChange;                                // 0x0118(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic

	public:
		void OnRep_SimulatedTasks();
		EGameplayTaskRunResult K2_RunGameplayTask(class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
