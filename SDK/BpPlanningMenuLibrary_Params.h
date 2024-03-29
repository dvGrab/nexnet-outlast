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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.FindIconFromItemClass
	 */
	struct UBpPlanningMenuLibrary_C_FindIconFromItemClass_Params
	{
	public:
		class APlayerController*                                   Player_Controller;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ItemClass;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Return_Value;                                            // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.IsFactorySkin
	 */
	struct UBpPlanningMenuLibrary_C_IsFactorySkin_Params
	{
	public:
		class UClass*                                              SkinClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetCharacterDataFromHandle
	 */
	struct UBpPlanningMenuLibrary_C_GetCharacterDataFromHandle_Params
	{
	public:
		class FName                                                Handle;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterData                                      Data;                                                    // 0x0010(0x0090)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.PlayerStatusToText
	 */
	struct UBpPlanningMenuLibrary_C_PlayerStatusToText_Params
	{
	public:
		EPlayerStatus                                              Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LOV0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerCharacter*                                    PlayerState;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                StatusText;                                              // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAmmoDescriptionForWeaponAndAmmo
	 */
	struct UBpPlanningMenuLibrary_C_GetAmmoDescriptionForWeaponAndAmmo_Params
	{
	public:
		class UClass*                                              Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              AmmoType;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5F3J[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAmmoTypeNameForWeaponAndAmmo
	 */
	struct UBpPlanningMenuLibrary_C_GetAmmoTypeNameForWeaponAndAmmo_Params
	{
	public:
		class UClass*                                              WeaponClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              AmmoType;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LYUH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetNonDefaultLoadouts
	 */
	struct UBpPlanningMenuLibrary_C_GetNonDefaultLoadouts_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      Loadouts;                                                // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CanCustomizeWeaponData
	 */
	struct UBpPlanningMenuLibrary_C_CanCustomizeWeaponData_Params
	{
	public:
		struct FWeaponData                                         WeaponClass;                                             // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x00B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanCustomize;                                            // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J7M0[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CanCustomizeWeaponClass
	 */
	struct UBpPlanningMenuLibrary_C_CanCustomizeWeaponClass_Params
	{
	public:
		class UClass*                                              WeaponClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanCustomize;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6QMY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetArmorCoverageText
	 */
	struct UBpPlanningMenuLibrary_C_GetArmorCoverageText_Params
	{
	public:
		EArmourCoverage                                            Coverage;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              Level;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AORK[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAttachmentTextData
	 */
	struct UBpPlanningMenuLibrary_C_GetAttachmentTextData_Params
	{
	public:
		class UClass*                                              Attachment;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Visibility;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HHY2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.ConstructEquipmentOverviewAmmoString
	 */
	struct UBpPlanningMenuLibrary_C_ConstructEquipmentOverviewAmmoString_Params
	{
	public:
		unsigned char                                              AmmoType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I5JH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MagazineCount;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.ItemWeightToText
	 */
	struct UBpPlanningMenuLibrary_C_ItemWeightToText_Params
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Fractional;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GAOY[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.MuzzleVelocityToText
	 */
	struct UBpPlanningMenuLibrary_C_MuzzleVelocityToText_Params
	{
	public:
		float                                                      MuzzleVelocity;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_880M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetCaliberFromBlueprint
	 */
	struct UBpPlanningMenuLibrary_C_GetCaliberFromBlueprint_Params
	{
	public:
		unsigned char                                              UnknownData_C95Z[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                CaliberText;                                             // 0x0030(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetWeaponTypeLocalizedName
	 */
	struct UBpPlanningMenuLibrary_C_GetWeaponTypeLocalizedName_Params
	{
	public:
		EWeaponType                                                WeaponType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JSEQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                LocalizedName;                                           // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetFirstWeaponType
	 */
	struct UBpPlanningMenuLibrary_C_GetFirstWeaponType_Params
	{
	public:
		TArray<EWeaponType>                                        WeaponTypes;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EWeaponType                                                WeaponType;                                              // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.FormatSpawnPoint
	 */
	struct UBpPlanningMenuLibrary_C_FormatSpawnPoint_Params
	{
	public:
		class FText                                                SpawnPointFormat;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSpawnPoints                                        Spawn;                                                   // 0x0018(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       DoubleCost;                                              // 0x00A8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BURJ[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x00B8(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetActiveDeployablesText
	 */
	struct UBpPlanningMenuLibrary_C_GetActiveDeployablesText_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CreateOverviewDeployableListText
	 */
	struct UBpPlanningMenuLibrary_C_CreateOverviewDeployableListText_Params
	{
	public:
		TArray<int32_t>                                            Deployables;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetActivePersonnelText
	 */
	struct UBpPlanningMenuLibrary_C_GetActivePersonnelText_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CreateOverviewPersonnelListText
	 */
	struct UBpPlanningMenuLibrary_C_CreateOverviewPersonnelListText_Params
	{
	public:
		TArray<int32_t>                                            PersonnelList;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetSpawnForEntryNum
	 */
	struct UBpPlanningMenuLibrary_C_GetSpawnForEntryNum_Params
	{
	public:
		unsigned char                                              Spawn_Num;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_70V7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSpawnPoints                                        Out_Spawn;                                               // 0x0010(0x0090)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
