/**
 * Name: READYORNOT
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.FindIconFromItemClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player_Controller                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBpPlanningMenuLibrary_C::FindIconFromItemClass(class APlayerController* Player_Controller, class UClass* ItemClass, class UObject* __WorldContext, class UTexture2D** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.FindIconFromItemClass");
		
		UBpPlanningMenuLibrary_C_FindIconFromItemClass_Params params {};
		params.Player_Controller = Player_Controller;
		params.ItemClass = ItemClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.IsFactorySkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      SkinClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBpPlanningMenuLibrary_C::IsFactorySkin(class UClass* SkinClass, class UObject* __WorldContext, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.IsFactorySkin");
		
		UBpPlanningMenuLibrary_C_IsFactorySkin_Params params {};
		params.SkinClass = SkinClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetCharacterDataFromHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Handle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterData                              Data                                                       (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::GetCharacterDataFromHandle(const class FName& Handle, class UObject* __WorldContext, struct FCharacterData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetCharacterDataFromHandle");
		
		UBpPlanningMenuLibrary_C_GetCharacterDataFromHandle_Params params {};
		params.Handle = Handle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.PlayerStatusToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerStatus                                      Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatusText                                                 (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::PlayerStatusToText(EPlayerStatus Status, class APlayerCharacter* PlayerState, class UObject* __WorldContext, class FText* StatusText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.PlayerStatusToText");
		
		UBpPlanningMenuLibrary_C_PlayerStatusToText_Params params {};
		params.Status = Status;
		params.PlayerState = PlayerState;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatusText != nullptr)
			*StatusText = params.StatusText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAmmoDescriptionForWeaponAndAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::GetAmmoDescriptionForWeaponAndAmmo(class UClass* Weapon, unsigned char AmmoType, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAmmoDescriptionForWeaponAndAmmo");
		
		UBpPlanningMenuLibrary_C_GetAmmoDescriptionForWeaponAndAmmo_Params params {};
		params.Weapon = Weapon;
		params.AmmoType = AmmoType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAmmoTypeNameForWeaponAndAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      WeaponClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::GetAmmoTypeNameForWeaponAndAmmo(class UClass* WeaponClass, unsigned char AmmoType, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAmmoTypeNameForWeaponAndAmmo");
		
		UBpPlanningMenuLibrary_C_GetAmmoTypeNameForWeaponAndAmmo_Params params {};
		params.WeaponClass = WeaponClass;
		params.AmmoType = AmmoType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetNonDefaultLoadouts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              Loadouts                                                   (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::GetNonDefaultLoadouts(class UObject* __WorldContext, TArray<class FString>* Loadouts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetNonDefaultLoadouts");
		
		UBpPlanningMenuLibrary_C_GetNonDefaultLoadouts_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loadouts != nullptr)
			*Loadouts = params.Loadouts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CanCustomizeWeaponData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWeaponData                                 WeaponClass                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanCustomize                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBpPlanningMenuLibrary_C::CanCustomizeWeaponData(const struct FWeaponData& WeaponClass, class UObject* __WorldContext, bool* CanCustomize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CanCustomizeWeaponData");
		
		UBpPlanningMenuLibrary_C_CanCustomizeWeaponData_Params params {};
		params.WeaponClass = WeaponClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanCustomize != nullptr)
			*CanCustomize = params.CanCustomize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CanCustomizeWeaponClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      WeaponClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanCustomize                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBpPlanningMenuLibrary_C::CanCustomizeWeaponClass(class UClass* WeaponClass, class UObject* __WorldContext, bool* CanCustomize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CanCustomizeWeaponClass");
		
		UBpPlanningMenuLibrary_C_CanCustomizeWeaponClass_Params params {};
		params.WeaponClass = WeaponClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanCustomize != nullptr)
			*CanCustomize = params.CanCustomize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetArmorCoverageText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EArmourCoverage                                    Coverage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::GetArmorCoverageText(EArmourCoverage Coverage, unsigned char Level, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetArmorCoverageText");
		
		UBpPlanningMenuLibrary_C_GetArmorCoverageText_Params params {};
		params.Coverage = Coverage;
		params.Level = Level;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAttachmentTextData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Attachment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::GetAttachmentTextData(class UClass* Attachment, class UObject* __WorldContext, ESlateVisibility* Visibility, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAttachmentTextData");
		
		UBpPlanningMenuLibrary_C_GetAttachmentTextData_Params params {};
		params.Attachment = Attachment;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.ConstructEquipmentOverviewAmmoString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MagazineCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::ConstructEquipmentOverviewAmmoString(unsigned char AmmoType, int32_t MagazineCount, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.ConstructEquipmentOverviewAmmoString");
		
		UBpPlanningMenuLibrary_C_ConstructEquipmentOverviewAmmoString_Params params {};
		params.AmmoType = AmmoType;
		params.MagazineCount = MagazineCount;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.ItemWeightToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Weight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Fractional                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::ItemWeightToText(float Weight, bool Fractional, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.ItemWeightToText");
		
		UBpPlanningMenuLibrary_C_ItemWeightToText_Params params {};
		params.Weight = Weight;
		params.Fractional = Fractional;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.MuzzleVelocityToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MuzzleVelocity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::MuzzleVelocityToText(float MuzzleVelocity, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.MuzzleVelocityToText");
		
		UBpPlanningMenuLibrary_C_MuzzleVelocityToText_Params params {};
		params.MuzzleVelocity = MuzzleVelocity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetCaliberFromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CaliberText                                                (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::GetCaliberFromBlueprint(class UObject* __WorldContext, class FText* CaliberText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetCaliberFromBlueprint");
		
		UBpPlanningMenuLibrary_C_GetCaliberFromBlueprint_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CaliberText != nullptr)
			*CaliberText = params.CaliberText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetWeaponTypeLocalizedName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponType                                        WeaponType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        LocalizedName                                              (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::GetWeaponTypeLocalizedName(EWeaponType WeaponType, class UObject* __WorldContext, class FText* LocalizedName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetWeaponTypeLocalizedName");
		
		UBpPlanningMenuLibrary_C_GetWeaponTypeLocalizedName_Params params {};
		params.WeaponType = WeaponType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalizedName != nullptr)
			*LocalizedName = params.LocalizedName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetFirstWeaponType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EWeaponType>                                WeaponTypes                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EWeaponType                                        WeaponType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBpPlanningMenuLibrary_C::GetFirstWeaponType(TArray<EWeaponType>* WeaponTypes, class UObject* __WorldContext, EWeaponType* WeaponType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetFirstWeaponType");
		
		UBpPlanningMenuLibrary_C_GetFirstWeaponType_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponTypes != nullptr)
			*WeaponTypes = params.WeaponTypes;
		if (WeaponType != nullptr)
			*WeaponType = params.WeaponType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.FormatSpawnPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        SpawnPointFormat                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSpawnPoints                                Spawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               DoubleCost                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::FormatSpawnPoint(const class FText& SpawnPointFormat, const struct FSpawnPoints& Spawn, bool DoubleCost, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.FormatSpawnPoint");
		
		UBpPlanningMenuLibrary_C_FormatSpawnPoint_Params params {};
		params.SpawnPointFormat = SpawnPointFormat;
		params.Spawn = Spawn;
		params.DoubleCost = DoubleCost;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetActiveDeployablesText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::GetActiveDeployablesText(class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetActiveDeployablesText");
		
		UBpPlanningMenuLibrary_C_GetActiveDeployablesText_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CreateOverviewDeployableListText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    Deployables                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::CreateOverviewDeployableListText(TArray<int32_t>* Deployables, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CreateOverviewDeployableListText");
		
		UBpPlanningMenuLibrary_C_CreateOverviewDeployableListText_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Deployables != nullptr)
			*Deployables = params.Deployables;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetActivePersonnelText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::GetActivePersonnelText(class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetActivePersonnelText");
		
		UBpPlanningMenuLibrary_C_GetActivePersonnelText_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CreateOverviewPersonnelListText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    PersonnelList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::CreateOverviewPersonnelListText(TArray<int32_t>* PersonnelList, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CreateOverviewPersonnelListText");
		
		UBpPlanningMenuLibrary_C_CreateOverviewPersonnelListText_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PersonnelList != nullptr)
			*PersonnelList = params.PersonnelList;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetSpawnForEntryNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Spawn_Num                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSpawnPoints                                Out_Spawn                                                  (Parm, OutParm)
	 */
	void UBpPlanningMenuLibrary_C::GetSpawnForEntryNum(unsigned char Spawn_Num, class UObject* __WorldContext, struct FSpawnPoints* Out_Spawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetSpawnForEntryNum");
		
		UBpPlanningMenuLibrary_C_GetSpawnForEntryNum_Params params {};
		params.Spawn_Num = Spawn_Num;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out_Spawn != nullptr)
			*Out_Spawn = params.Out_Spawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBpPlanningMenuLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBpPlanningMenuLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BpPlanningMenuLibrary.BpPlanningMenuLibrary_C");
		return ptr;
	}

}


