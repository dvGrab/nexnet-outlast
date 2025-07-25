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
	 * Class ApexDestruction.DestructibleActor
	 * Size -> 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
	 */
	class ADestructibleActor : public AActor
	{
	public:
		class UDestructibleComponent*                              DestructibleComponent;                                   // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnActorFracture;                                         // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ApexDestruction.DestructibleComponent
	 * Size -> 0x00E0 (FullSize[0x07D0] - InheritedSize[0x06F0])
	 */
	class UDestructibleComponent : public USkinnedMeshComponent
	{
	public:
		unsigned char                                              UnknownData_MQ1I[0x8];                                   // 0x06F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bFractureEffectOverride : 1;                             // 0x06F8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2SZ5[0x7];                                   // 0x06F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFractureEffect>                             FractureEffects;                                         // 0x0700(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableHardSleeping;                                     // 0x0710(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9I1J[0x3];                                   // 0x0711(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LargeChunkThreshold;                                     // 0x0714(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6UZM[0x10];                                  // 0x0718(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnComponentFracture;                                     // 0x0728(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AT0K[0x98];                                  // 0x0738(0x0098) MISSED OFFSET (PADDING)

	public:
		void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
		class UDestructibleMesh* GetDestructibleMesh();
		void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
		void ApplyDamage(float damageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
		static UClass* StaticClass();
	};

	/**
	 * Class ApexDestruction.DestructibleFractureSettings
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UDestructibleFractureSettings : public UObject
	{
	public:
		int32_t                                                    CellSiteCount;                                           // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFractureMaterial                                   FractureMaterialDesc;                                    // 0x002C(0x0024) Edit, Transient, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    RandomSeed;                                              // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RL64[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     VoronoiSites;                                            // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    OriginalSubmeshCount;                                    // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5RL[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDestructibleChunkParameters>                ChunkParameters;                                         // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FP6V[0x28];                                  // 0x0090(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ApexDestruction.DestructibleMesh
	 * Size -> 0x00A0 (FullSize[0x0460] - InheritedSize[0x03C0])
	 */
	class UDestructibleMesh : public USkeletalMesh
	{
	public:
		struct FDestructibleParameters                             DefaultDestructibleParameters;                           // 0x03C0(0x0088) Edit, NativeAccessSpecifierPublic
		TArray<struct FFractureEffect>                             FractureEffects;                                         // 0x0448(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T44V[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
