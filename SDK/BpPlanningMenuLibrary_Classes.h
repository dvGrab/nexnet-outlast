#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * BlueprintGeneratedClass BpPlanningMenuLibrary.BpPlanningMenuLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBpPlanningMenuLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void FindIconFromItemClass(class APlayerController* Player_Controller, class UClass* ItemClass, class UObject* __WorldContext, class UTexture2D** Return_Value);
		void IsFactorySkin(class UClass* SkinClass, class UObject* __WorldContext, bool* Return_Value);
		void GetCharacterDataFromHandle(const class FName& Handle, class UObject* __WorldContext, struct FCharacterData* Data);
		void PlayerStatusToText(EPlayerStatus Status, class APlayerCharacter* PlayerState, class UObject* __WorldContext, class FText* StatusText);
		void GetAmmoDescriptionForWeaponAndAmmo(class UClass* Weapon, unsigned char AmmoType, class UObject* __WorldContext, class FText* Text);
		void GetAmmoTypeNameForWeaponAndAmmo(class UClass* WeaponClass, unsigned char AmmoType, class UObject* __WorldContext, class FText* Text);
		void GetNonDefaultLoadouts(class UObject* __WorldContext, TArray<class FString>* Loadouts);
		void CanCustomizeWeaponData(const struct FWeaponData& WeaponClass, class UObject* __WorldContext, bool* CanCustomize);
		void CanCustomizeWeaponClass(class UClass* WeaponClass, class UObject* __WorldContext, bool* CanCustomize);
		void GetArmorCoverageText(EArmourCoverage Coverage, unsigned char Level, class UObject* __WorldContext, class FText* Text);
		void GetAttachmentTextData(class UClass* Attachment, class UObject* __WorldContext, ESlateVisibility* Visibility, class FText* Text);
		void ConstructEquipmentOverviewAmmoString(unsigned char AmmoType, int32_t MagazineCount, class UObject* __WorldContext, class FText* Text);
		void ItemWeightToText(float Weight, bool Fractional, class UObject* __WorldContext, class FText* Text);
		void MuzzleVelocityToText(float MuzzleVelocity, class UObject* __WorldContext, class FText* Text);
		void GetCaliberFromBlueprint(class UObject* __WorldContext, class FText* CaliberText);
		void GetWeaponTypeLocalizedName(EWeaponType WeaponType, class UObject* __WorldContext, class FText* LocalizedName);
		void GetFirstWeaponType(TArray<EWeaponType>* WeaponTypes, class UObject* __WorldContext, EWeaponType* WeaponType);
		void FormatSpawnPoint(const class FText& SpawnPointFormat, const struct FSpawnPoints& Spawn, bool DoubleCost, class UObject* __WorldContext, class FText* Text);
		void GetActiveDeployablesText(class UObject* __WorldContext, class FText* Text);
		void CreateOverviewDeployableListText(TArray<int32_t>* Deployables, class UObject* __WorldContext, class FText* Text);
		void GetActivePersonnelText(class UObject* __WorldContext, class FText* Text);
		void CreateOverviewPersonnelListText(TArray<int32_t>* PersonnelList, class UObject* __WorldContext, class FText* Text);
		void GetSpawnForEntryNum(unsigned char Spawn_Num, class UObject* __WorldContext, struct FSpawnPoints* Out_Spawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
