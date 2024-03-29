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
	 * BlueprintGeneratedClass FXLibrary.FXLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFXLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetScapegoatLockedBulbData(float FlashRatio, class UObject* __WorldContext, struct FLinearColor* MeshMaterialData, struct FLinearColor* LightColor, float* Intensity);
		void GetScapegoatBulbData(float FlashRatio, class UObject* __WorldContext, struct FLinearColor* MeshMaterialColor, struct FLinearColor* LightColor, float* LightIntensity);
		void TrySpawnBloodSplatterDecal(bool TraceForSurface, const struct FVector& OriginLocation, const struct FVector& Direction, class UMaterialInstanceConstant* Decal, float DecalSize, float RandomOffset, class UObject* __WorldContext, bool* bSpawned, struct FVector* DecalLocation, struct FVector* DecalNormal);
		void Get_Scapegoat_Bulb_Flash_Ratio(float Value, bool ProgressLock, class UObject* __WorldContext, float* OutFlashRatio);
		void RefreshScapegoatLights(float progressRatio, int32_t CurrentLevel, bool bProgressLocked, TArray<class UStaticMeshComponent*>* Meshes, TArray<class ULightComponent*>* Lights, class UObject* __WorldContext);
		void GetPPFXManager(class UObject* __WorldContext, class APPManager_BP_C** Manager);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
