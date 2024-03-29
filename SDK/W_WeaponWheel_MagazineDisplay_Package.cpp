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
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.PopulateSlotIndexToMagsMap
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_MagazineDisplay_C::PopulateSlotIndexToMagsMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.PopulateSlotIndexToMagsMap");
		
		UW_WeaponWheel_MagazineDisplay_C_PopulateSlotIndexToMagsMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.GetMaxSlots
	 * 		Flags  -> ()
	 */
	int32_t UW_WeaponWheel_MagazineDisplay_C::GetMaxSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.GetMaxSlots");
		
		UW_WeaponWheel_MagazineDisplay_C_GetMaxSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMagSlot
	 * 		Flags  -> ()
	 */
	class UW_WeaponWheel_MagazineSlot_C* UW_WeaponWheel_MagazineDisplay_C::CreateMagSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMagSlot");
		
		UW_WeaponWheel_MagazineDisplay_C_CreateMagSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.UpdateMagIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MagIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_MagazineDisplay_C::UpdateMagIcon(int32_t MagIndex, float CurrentAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.UpdateMagIcon");
		
		UW_WeaponWheel_MagazineDisplay_C_UpdateMagIcon_Params params {};
		params.MagIndex = MagIndex;
		params.CurrentAmmo = CurrentAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         InMagazineWeapon                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IconSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_MagazineDisplay_C::Initialize(class ABaseMagazineWeapon* InMagazineWeapon, float IconSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.Initialize");
		
		UW_WeaponWheel_MagazineDisplay_C_Initialize_Params params {};
		params.InMagazineWeapon = InMagazineWeapon;
		params.IconSize = IconSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMags
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_MagazineDisplay_C::CreateMags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMags");
		
		UW_WeaponWheel_MagazineDisplay_C_CreateMags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMagOutline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_WeaponWheel_MagazineSlot_C*               MagSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_MagazineDisplay_C::CreateMagOutline(class UW_WeaponWheel_MagazineSlot_C** MagSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMagOutline");
		
		UW_WeaponWheel_MagazineDisplay_C_CreateMagOutline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MagSlot != nullptr)
			*MagSlot = params.MagSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_WeaponWheel_MagazineSlot_C*               MagSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_MagazineDisplay_C::CreateMag(class UW_WeaponWheel_MagazineSlot_C** MagSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMag");
		
		UW_WeaponWheel_MagazineDisplay_C_CreateMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MagSlot != nullptr)
			*MagSlot = params.MagSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_MagazineDisplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.Tick");
		
		UW_WeaponWheel_MagazineDisplay_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_MagazineDisplay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.PreConstruct");
		
		UW_WeaponWheel_MagazineDisplay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.ExecuteUbergraph_W_WeaponWheel_MagazineDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_MagazineDisplay_C::ExecuteUbergraph_W_WeaponWheel_MagazineDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.ExecuteUbergraph_W_WeaponWheel_MagazineDisplay");
		
		UW_WeaponWheel_MagazineDisplay_C_ExecuteUbergraph_W_WeaponWheel_MagazineDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_WeaponWheel_MagazineDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_WeaponWheel_MagazineDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C");
		return ptr;
	}

}


