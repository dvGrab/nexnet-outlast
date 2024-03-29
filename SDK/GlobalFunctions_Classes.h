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
	 * BlueprintGeneratedClass GlobalFunctions.GlobalFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGlobalFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetRandomItem(class AActor* Item, TArray<class AActor*>* ItemList, class UObject* __WorldContext, class AActor** newItem);
		void GetActorsDistance2D(class AActor* Actor1, class AActor* Actor2, class UObject* __WorldContext, float* Distance);
		void GetActorsWithinConeAngle(TArray<class AActor*>* Targets, class AActor* Source, float Angle, class UObject* __WorldContext, TArray<class AActor*>* Actors);
		void GetActorsWithinRadius(TArray<class AActor*>* Targets, class AActor* Source, float Radius, class UObject* __WorldContext, TArray<class AActor*>* Actors);
		void GetClosestActor(class AActor* SourceActor, TArray<class AActor*>* TargetActors, bool bFarthest, class UObject* __WorldContext, class AActor** ClosestActor);
		void GetActorsDistance3D(class AActor* Actor1, class AActor* Actor2, class UObject* __WorldContext, float* Distance);
		void GiveSeparateIntFromTime(int32_t Time, class UObject* __WorldContext, int32_t* Number1, int32_t* Number2, int32_t* Number3, int32_t* Number4);
		void SetInteractiveReferenceMeshMaterials(class UStaticMeshComponent* NewStaticmeshComponent, const struct FTransform& Transform, class UStaticMeshComponent* RefStaticMeshComponent, class UObject* __WorldContext);
		void CanWeaponApplyDamageType(bool bDamageByFists, bool bDamageBySlash, bool bDamageByChop, bool bDamageByLightBlunt, bool bDamageByHeavyBlunt, EWeaponType weaponType, class UObject* __WorldContext, bool* IsValid);
		void GetRandomReward(class UObject* __WorldContext, unsigned char* Reward);
		class FText ConvertIntToTimeFormat(int32_t Int, class UObject* __WorldContext);
		void CreateDynamicMaterials(class UPrimitiveComponent** PrimitiveComponent, TArray<int32_t>* IDs, bool SpecifyIDs, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* DynamicMaterials);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
