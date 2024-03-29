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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializePreviewSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               PreviewLoadout                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Loadout_MunitionSlots_C::InitializePreviewSummary(const struct FSavedLoadout& PreviewLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializePreviewSummary");
		
		UW_Loadout_MunitionSlots_C_InitializePreviewSummary_Params params {};
		params.PreviewLoadout = PreviewLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GroupAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmmoCount1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AmmoType2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmmoCount2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                GroupedAmmo                                                (Parm, OutParm)
	 */
	void UW_Loadout_MunitionSlots_C::GroupAmmo(const class FName& AmmoType1, int32_t AmmoCount1, const class FName& AmmoType2, int32_t AmmoCount2, TArray<class FName>* GroupedAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GroupAmmo");
		
		UW_Loadout_MunitionSlots_C_GroupAmmo_Params params {};
		params.AmmoType1 = AmmoType1;
		params.AmmoCount1 = AmmoCount1;
		params.AmmoType2 = AmmoType2;
		params.AmmoCount2 = AmmoCount2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GroupedAmmo != nullptr)
			*GroupedAmmo = params.GroupedAmmo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplaceSidearmAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CurrentAmmoType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewAmmoType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::ReplaceSidearmAmmo(const class FName& CurrentAmmoType, const class FName& NewAmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplaceSidearmAmmo");
		
		UW_Loadout_MunitionSlots_C_ReplaceSidearmAmmo_Params params {};
		params.CurrentAmmoType = CurrentAmmoType;
		params.NewAmmoType = NewAmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplacePrimaryAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CurrentAmmoType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewAmmoType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::ReplacePrimaryAmmo(const class FName& CurrentAmmoType, const class FName& NewAmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplacePrimaryAmmo");
		
		UW_Loadout_MunitionSlots_C_ReplacePrimaryAmmo_Params params {};
		params.CurrentAmmoType = CurrentAmmoType;
		params.NewAmmoType = NewAmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.RevealSlotEditorChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::RevealSlotEditorChildren(float* Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.RevealSlotEditorChildren");
		
		UW_Loadout_MunitionSlots_C_RevealSlotEditorChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delay != nullptr)
			*Delay = params.Delay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HideSlotEditorChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::HideSlotEditorChildren(float* Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HideSlotEditorChildren");
		
		UW_Loadout_MunitionSlots_C_HideSlotEditorChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delay != nullptr)
			*Delay = params.Delay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SwapWeaponAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Sidearm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_MunitionSlots_C::SwapWeaponAmmo(bool Sidearm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SwapWeaponAmmo");
		
		UW_Loadout_MunitionSlots_C_SwapWeaponAmmo_Params params {};
		params.Sidearm = Sidearm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetTacticalAddButtonVis
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::SetTacticalAddButtonVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetTacticalAddButtonVis");
		
		UW_Loadout_MunitionSlots_C_SetTacticalAddButtonVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.FreeUpTacticalSlot
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::FreeUpTacticalSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.FreeUpTacticalSlot");
		
		UW_Loadout_MunitionSlots_C_FreeUpTacticalSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.AddTacticalType
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::AddTacticalType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.AddTacticalType");
		
		UW_Loadout_MunitionSlots_C_AddTacticalType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetGrenadeAddButtonVis
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::SetGrenadeAddButtonVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetGrenadeAddButtonVis");
		
		UW_Loadout_MunitionSlots_C_SetGrenadeAddButtonVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetAllGrenadeTypes
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::GetAllGrenadeTypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetAllGrenadeTypes");
		
		UW_Loadout_MunitionSlots_C_GetAllGrenadeTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::GetLoadoutWidget(class UW_Loadout_C** LoadoutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetLoadoutWidget");
		
		UW_Loadout_MunitionSlots_C_GetLoadoutWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoadoutWidget != nullptr)
			*LoadoutWidget = params.LoadoutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.FreeUpGrenadeSlot
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::FreeUpGrenadeSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.FreeUpGrenadeSlot");
		
		UW_Loadout_MunitionSlots_C_FreeUpGrenadeSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateGrenadeSlots
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdateGrenadeSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateGrenadeSlots");
		
		UW_Loadout_MunitionSlots_C_UpdateGrenadeSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.AddGrenadeType
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::AddGrenadeType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.AddGrenadeType");
		
		UW_Loadout_MunitionSlots_C_AddGrenadeType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTacticalSummary
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdateTacticalSummary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTacticalSummary");
		
		UW_Loadout_MunitionSlots_C_UpdateTacticalSummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateGrenadeSummary
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdateGrenadeSummary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateGrenadeSummary");
		
		UW_Loadout_MunitionSlots_C_UpdateGrenadeSummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateSidearmSummary
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdateSidearmSummary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateSidearmSummary");
		
		UW_Loadout_MunitionSlots_C_UpdateSidearmSummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdatePrimarySummary
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdatePrimarySummary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdatePrimarySummary");
		
		UW_Loadout_MunitionSlots_C_UpdatePrimarySummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateItemSummaryEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Loadout_Munition_SummaryEntry_C*          EntryWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::CreateItemSummaryEntry(class UClass* ItemData, int32_t Count, class UW_Loadout_Munition_SummaryEntry_C** EntryWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateItemSummaryEntry");
		
		UW_Loadout_MunitionSlots_C_CreateItemSummaryEntry_Params params {};
		params.ItemData = ItemData;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntryWidget != nullptr)
			*EntryWidget = params.EntryWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateAmmoSummaryEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Loadout_Munition_SummaryEntry_C*          EntryWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::CreateAmmoSummaryEntry(class UClass* Weapon, const class FName& AmmoType, int32_t Count, class UW_Loadout_Munition_SummaryEntry_C** EntryWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateAmmoSummaryEntry");
		
		UW_Loadout_MunitionSlots_C_CreateAmmoSummaryEntry_Params params {};
		params.Weapon = Weapon;
		params.AmmoType = AmmoType;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntryWidget != nullptr)
			*EntryWidget = params.EntryWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateSummary
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdateSummary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateSummary");
		
		UW_Loadout_MunitionSlots_C_UpdateSummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               Active_Loadout                                             (Parm, OutParm)
	 */
	void UW_Loadout_MunitionSlots_C::GetActiveLoadout(struct FSavedLoadout* Active_Loadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetActiveLoadout");
		
		UW_Loadout_MunitionSlots_C_GetActiveLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active_Loadout != nullptr)
			*Active_Loadout = params.Active_Loadout;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetSidearmDefaultAmmoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SingleAmmoType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_MunitionSlots_C::GetSidearmDefaultAmmoType(class FName* Output, bool* SingleAmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetSidearmDefaultAmmoType");
		
		UW_Loadout_MunitionSlots_C_GetSidearmDefaultAmmoType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
		if (SingleAmmoType != nullptr)
			*SingleAmmoType = params.SingleAmmoType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetPrimaryDefaultAmmoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SingleAmmoType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_MunitionSlots_C::GetPrimaryDefaultAmmoType(class FName* Output, bool* SingleAmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetPrimaryDefaultAmmoType");
		
		UW_Loadout_MunitionSlots_C_GetPrimaryDefaultAmmoType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
		if (SingleAmmoType != nullptr)
			*SingleAmmoType = params.SingleAmmoType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HandleRemainderSidearmAmmo
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::HandleRemainderSidearmAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HandleRemainderSidearmAmmo");
		
		UW_Loadout_MunitionSlots_C_HandleRemainderSidearmAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HandleRemainderPrimaryAmmo
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::HandleRemainderPrimaryAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HandleRemainderPrimaryAmmo");
		
		UW_Loadout_MunitionSlots_C_HandleRemainderPrimaryAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateMunitionSlotEditor
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdateMunitionSlotEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateMunitionSlotEditor");
		
		UW_Loadout_MunitionSlots_C_UpdateMunitionSlotEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateMunitionEditorTotalSlotCount
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdateMunitionEditorTotalSlotCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateMunitionEditorTotalSlotCount");
		
		UW_Loadout_MunitionSlots_C_UpdateMunitionEditorTotalSlotCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeMunitionSlotEditor
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::InitializeMunitionSlotEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeMunitionSlotEditor");
		
		UW_Loadout_MunitionSlots_C_InitializeMunitionSlotEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalSidearmSlotCount
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdateTotalSidearmSlotCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalSidearmSlotCount");
		
		UW_Loadout_MunitionSlots_C_UpdateTotalSidearmSlotCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalPrimarySlotCount
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdateTotalPrimarySlotCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalPrimarySlotCount");
		
		UW_Loadout_MunitionSlots_C_UpdateTotalPrimarySlotCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalTacticalSlotCount
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdateTotalTacticalSlotCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalTacticalSlotCount");
		
		UW_Loadout_MunitionSlots_C_UpdateTotalTacticalSlotCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalGrenadeCount
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdateTotalGrenadeCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalGrenadeCount");
		
		UW_Loadout_MunitionSlots_C_UpdateTotalGrenadeCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplaceTactical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      CurrentTactical                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      NewTactical                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::ReplaceTactical(class UClass* CurrentTactical, class UClass* NewTactical)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplaceTactical");
		
		UW_Loadout_MunitionSlots_C_ReplaceTactical_Params params {};
		params.CurrentTactical = CurrentTactical;
		params.NewTactical = NewTactical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.EquipTactical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::EquipTactical(class UClass* ItemData, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.EquipTactical");
		
		UW_Loadout_MunitionSlots_C_EquipTactical_Params params {};
		params.ItemData = ItemData;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SelectTacticalType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::SelectTacticalType(class UClass* ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SelectTacticalType");
		
		UW_Loadout_MunitionSlots_C_SelectTacticalType_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplaceGrenades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      CurrentGrenade                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      NewGrenade                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::ReplaceGrenades(class UClass* CurrentGrenade, class UClass* NewGrenade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplaceGrenades");
		
		UW_Loadout_MunitionSlots_C_ReplaceGrenades_Params params {};
		params.CurrentGrenade = CurrentGrenade;
		params.NewGrenade = NewGrenade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.EquipGrenades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::EquipGrenades(class UClass* ItemData, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.EquipGrenades");
		
		UW_Loadout_MunitionSlots_C_EquipGrenades_Params params {};
		params.ItemData = ItemData;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SelectGrenadeType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::SelectGrenadeType(class UClass* ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SelectGrenadeType");
		
		UW_Loadout_MunitionSlots_C_SelectGrenadeType_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalSlotMinusCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::TacticalSlotMinusCount(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalSlotMinusCount");
		
		UW_Loadout_MunitionSlots_C_TacticalSlotMinusCount_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalSlotAddCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::TacticalSlotAddCount(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalSlotAddCount");
		
		UW_Loadout_MunitionSlots_C_TacticalSlotAddCount_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateTacticalSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Tactical                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CategoryText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Loadout_MunitionSlots_C::CreateTacticalSlot(class UClass* Tactical, const class FText& CategoryText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateTacticalSlot");
		
		UW_Loadout_MunitionSlots_C_CreateTacticalSlot_Params params {};
		params.Tactical = Tactical;
		params.CategoryText = CategoryText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeTacticals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UClass*>                              Tacticals                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Loadout_MunitionSlots_C::InitializeTacticals(TArray<class UClass*>* Tacticals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeTacticals");
		
		UW_Loadout_MunitionSlots_C_InitializeTacticals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tacticals != nullptr)
			*Tacticals = params.Tacticals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeSlotMinusCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::GrenadeSlotMinusCount(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeSlotMinusCount");
		
		UW_Loadout_MunitionSlots_C_GrenadeSlotMinusCount_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeSlotAddCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::GrenadeSlotAddCount(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeSlotAddCount");
		
		UW_Loadout_MunitionSlots_C_GrenadeSlotAddCount_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateCurrentData
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdateCurrentData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateCurrentData");
		
		UW_Loadout_MunitionSlots_C_UpdateCurrentData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetSidearmAmmoCount2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::SetSidearmAmmoCount2(int32_t AmmoCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetSidearmAmmoCount2");
		
		UW_Loadout_MunitionSlots_C_SetSidearmAmmoCount2_Params params {};
		params.AmmoCount = AmmoCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetSidearmAmmoCount1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::SetSidearmAmmoCount1(int32_t AmmoCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetSidearmAmmoCount1");
		
		UW_Loadout_MunitionSlots_C_SetSidearmAmmoCount1_Params params {};
		params.AmmoCount = AmmoCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetPrimaryAmmoCount2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::SetPrimaryAmmoCount2(int32_t AmmoCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetPrimaryAmmoCount2");
		
		UW_Loadout_MunitionSlots_C_SetPrimaryAmmoCount2_Params params {};
		params.AmmoCount = AmmoCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetPrimaryAmmoCount1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::SetPrimaryAmmoCount1(int32_t AmmoCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetPrimaryAmmoCount1");
		
		UW_Loadout_MunitionSlots_C_SetPrimaryAmmoCount1_Params params {};
		params.AmmoCount = AmmoCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetPrimaryAmmoType1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::SetPrimaryAmmoType1(const class FName& AmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetPrimaryAmmoType1");
		
		UW_Loadout_MunitionSlots_C_SetPrimaryAmmoType1_Params params {};
		params.AmmoType = AmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateSidearmSlots
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdateSidearmSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateSidearmSlots");
		
		UW_Loadout_MunitionSlots_C_UpdateSidearmSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdatePrimarySlots
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::UpdatePrimarySlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdatePrimarySlots");
		
		UW_Loadout_MunitionSlots_C_UpdatePrimarySlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HideSidearm2
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::HideSidearm2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HideSidearm2");
		
		UW_Loadout_MunitionSlots_C_HideSidearm2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DisplaySidearm2
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::DisplaySidearm2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DisplaySidearm2");
		
		UW_Loadout_MunitionSlots_C_DisplaySidearm2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeSidearmAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                AmmoTypes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Loadout_MunitionSlots_C::InitializeSidearmAmmo(TArray<class FName>* AmmoTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeSidearmAmmo");
		
		UW_Loadout_MunitionSlots_C_InitializeSidearmAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoTypes != nullptr)
			*AmmoTypes = params.AmmoTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializePrimaryAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                AmmoTypes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Loadout_MunitionSlots_C::InitializePrimaryAmmo(TArray<class FName>* AmmoTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializePrimaryAmmo");
		
		UW_Loadout_MunitionSlots_C_InitializePrimaryAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoTypes != nullptr)
			*AmmoTypes = params.AmmoTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HidePrimary2
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::HidePrimary2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HidePrimary2");
		
		UW_Loadout_MunitionSlots_C_HidePrimary2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DisplayPrimary2
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::DisplayPrimary2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DisplayPrimary2");
		
		UW_Loadout_MunitionSlots_C_DisplayPrimary2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SplitSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TotalSlots                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewStack                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OriginalStack                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::SplitSlots(int32_t TotalSlots, int32_t* NewStack, int32_t* OriginalStack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SplitSlots");
		
		UW_Loadout_MunitionSlots_C_SplitSlots_Params params {};
		params.TotalSlots = TotalSlots;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewStack != nullptr)
			*NewStack = params.NewStack;
		if (OriginalStack != nullptr)
			*OriginalStack = params.OriginalStack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateDeployableSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGrenade                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CategoryText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       OutputPin                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::CreateDeployableSlot(bool IsGrenade, class UClass* ItemData, const class FText& CategoryText, class UW_Loadout_MunitionSlots_Deployable_C** OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateDeployableSlot");
		
		UW_Loadout_MunitionSlots_C_CreateDeployableSlot_Params params {};
		params.IsGrenade = IsGrenade;
		params.ItemData = ItemData;
		params.CategoryText = CategoryText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetAllDeployableItems
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::GetAllDeployableItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetAllDeployableItems");
		
		UW_Loadout_MunitionSlots_C_GetAllDeployableItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Initialize Deployables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGrenades                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_MunitionSlots_C::Initialize_Deployables(bool IsGrenades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Initialize Deployables");
		
		UW_Loadout_MunitionSlots_C_Initialize_Deployables_Params params {};
		params.IsGrenades = IsGrenades;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeMunitionSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RemotePlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Preview                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_MunitionSlots_C::InitializeMunitionSlots(bool RemotePlayer, bool Preview)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeMunitionSlots");
		
		UW_Loadout_MunitionSlots_C_InitializeMunitionSlots_Params params {};
		params.RemotePlayer = RemotePlayer;
		params.Preview = Preview;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetupBinds
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::SetupBinds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetupBinds");
		
		UW_Loadout_MunitionSlots_C_SetupBinds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_MunitionSlots_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PreConstruct");
		
		UW_Loadout_MunitionSlots_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Construct");
		
		UW_Loadout_MunitionSlots_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Loadout_MunitionSlots_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateActiveLoadout");
		
		UW_Loadout_MunitionSlots_C_UpdateActiveLoadout_Params params {};
		params.ActiveLoadout = ActiveLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class UClass*>                 ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Loadout_MunitionSlots_C::UpdateCurrentItemMap(TMap<EItemCategory, class UClass*> ItemCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateCurrentItemMap");
		
		UW_Loadout_MunitionSlots_C_UpdateCurrentItemMap_Params params {};
		params.ItemCategory = ItemCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Summary_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_Summary_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Summary_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_Summary_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Minimize_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_Minimize_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Minimize_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_Minimize_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SlotClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::SlotClicked(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SlotClicked");
		
		UW_Loadout_MunitionSlots_C_SlotClicked_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SlotHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::SlotHovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SlotHovered");
		
		UW_Loadout_MunitionSlots_C_SlotHovered_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SlotUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::SlotUnhovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SlotUnhovered");
		
		UW_Loadout_MunitionSlots_C_SlotUnhovered_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetLoadoutWidget");
		
		UW_Loadout_MunitionSlots_C_SetLoadoutWidget_Params params {};
		params.LoadoutWidget = LoadoutWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewPrimaryAmmoType_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_NewPrimaryAmmoType_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewPrimaryAmmoType_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_NewPrimaryAmmoType_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewSidearmAmmoType_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_NewSidearmAmmoType_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewSidearmAmmoType_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_NewSidearmAmmoType_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo2_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo2_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo2_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo2_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::Reveal(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Reveal");
		
		UW_Loadout_MunitionSlots_C_Reveal_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewGrenadeType_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_NewGrenadeType_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewGrenadeType_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_NewGrenadeType_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DeployableSlotClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::DeployableSlotClicked(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot, class UW_LoadoutSlot_C* LoadoutSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DeployableSlotClicked");
		
		UW_Loadout_MunitionSlots_C_DeployableSlotClicked_Params params {};
		params.TriggeringDeployableSlot = TriggeringDeployableSlot;
		params.LoadoutSlot = LoadoutSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DeployableSlotHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::DeployableSlotHovered(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DeployableSlotHovered");
		
		UW_Loadout_MunitionSlots_C_DeployableSlotHovered_Params params {};
		params.LoadoutSlot = LoadoutSlot;
		params.TriggeringDeployableSlot = TriggeringDeployableSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DeployableSlotUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::DeployableSlotUnhovered(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DeployableSlotUnhovered");
		
		UW_Loadout_MunitionSlots_C_DeployableSlotUnhovered_Params params {};
		params.LoadoutSlot = LoadoutSlot;
		params.TriggeringDeployableSlot = TriggeringDeployableSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo1_K2Node_ComponentBoundEvent_9_OnSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo1_K2Node_ComponentBoundEvent_9_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo1_K2Node_ComponentBoundEvent_9_OnSlotClicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo1_K2Node_ComponentBoundEvent_9_OnSlotClicked__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo2_K2Node_ComponentBoundEvent_10_OnSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo2_K2Node_ComponentBoundEvent_10_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo2_K2Node_ComponentBoundEvent_10_OnSlotClicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo2_K2Node_ComponentBoundEvent_10_OnSlotClicked__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_SidearmAmmo1_K2Node_ComponentBoundEvent_11_OnSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_SidearmAmmo1_K2Node_ComponentBoundEvent_11_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_SidearmAmmo1_K2Node_ComponentBoundEvent_11_OnSlotClicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_SidearmAmmo1_K2Node_ComponentBoundEvent_11_OnSlotClicked__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_SidearmAmmo2_K2Node_ComponentBoundEvent_12_OnSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_SidearmAmmo2_K2Node_ComponentBoundEvent_12_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_SidearmAmmo2_K2Node_ComponentBoundEvent_12_OnSlotClicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_SidearmAmmo2_K2Node_ComponentBoundEvent_12_OnSlotClicked__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateCurrentSlot");
		
		UW_Loadout_MunitionSlots_C_UpdateCurrentSlot_Params params {};
		params.CurrentSlot = CurrentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotPrimaryAmmoCount_K2Node_ComponentBoundEvent_13_OnSlotCountChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionCountSlot_C*              TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_ArmorSlotPrimaryAmmoCount_K2Node_ComponentBoundEvent_13_OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotPrimaryAmmoCount_K2Node_ComponentBoundEvent_13_OnSlotCountChanged__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_ArmorSlotPrimaryAmmoCount_K2Node_ComponentBoundEvent_13_OnSlotCountChanged__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_MunitionSlots_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Hide");
		
		UW_Loadout_MunitionSlots_C_Hide_Params params {};
		params.Delay = Delay;
		params.Collapse = Collapse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotSidearmAmmoCount_K2Node_ComponentBoundEvent_14_OnSlotCountChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionCountSlot_C*              TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_ArmorSlotSidearmAmmoCount_K2Node_ComponentBoundEvent_14_OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotSidearmAmmoCount_K2Node_ComponentBoundEvent_14_OnSlotCountChanged__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_ArmorSlotSidearmAmmoCount_K2Node_ComponentBoundEvent_14_OnSlotCountChanged__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotGrenadeCount_K2Node_ComponentBoundEvent_15_OnSlotCountChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionCountSlot_C*              TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_ArmorSlotGrenadeCount_K2Node_ComponentBoundEvent_15_OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotGrenadeCount_K2Node_ComponentBoundEvent_15_OnSlotCountChanged__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_ArmorSlotGrenadeCount_K2Node_ComponentBoundEvent_15_OnSlotCountChanged__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotTacticalCount_K2Node_ComponentBoundEvent_16_OnSlotCountChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionCountSlot_C*              TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_ArmorSlotTacticalCount_K2Node_ComponentBoundEvent_16_OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotTacticalCount_K2Node_ComponentBoundEvent_16_OnSlotCountChanged__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_ArmorSlotTacticalCount_K2Node_ComponentBoundEvent_16_OnSlotCountChanged__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PrimaryWeaponChanged
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::PrimaryWeaponChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PrimaryWeaponChanged");
		
		UW_Loadout_MunitionSlots_C_PrimaryWeaponChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SidearmWeaponChanged
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::SidearmWeaponChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SidearmWeaponChanged");
		
		UW_Loadout_MunitionSlots_C_SidearmWeaponChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PrimaryAmmoChanged
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::PrimaryAmmoChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PrimaryAmmoChanged");
		
		UW_Loadout_MunitionSlots_C_PrimaryAmmoChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SidearmAmmoChanged
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::SidearmAmmoChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SidearmAmmoChanged");
		
		UW_Loadout_MunitionSlots_C_SidearmAmmoChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SidearmAmmoCountSaved
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::SidearmAmmoCountSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SidearmAmmoCountSaved");
		
		UW_Loadout_MunitionSlots_C_SidearmAmmoCountSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PrimaryAmmoCountSaved
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::PrimaryAmmoCountSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PrimaryAmmoCountSaved");
		
		UW_Loadout_MunitionSlots_C_PrimaryAmmoCountSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeCountSaved
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::GrenadeCountSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeCountSaved");
		
		UW_Loadout_MunitionSlots_C_GrenadeCountSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeEquipped
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::GrenadeEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeEquipped");
		
		UW_Loadout_MunitionSlots_C_GrenadeEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalEquipped
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::TacticalEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalEquipped");
		
		UW_Loadout_MunitionSlots_C_TacticalEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalCountSaved
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::TacticalCountSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalCountSaved");
		
		UW_Loadout_MunitionSlots_C_TacticalCountSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewTacticalType_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_NewTacticalType_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewTacticalType_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_NewTacticalType_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_SlotEdit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_SlotEdit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_SlotEdit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_SlotEdit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.RevealSlotEditor
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::RevealSlotEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.RevealSlotEditor");
		
		UW_Loadout_MunitionSlots_C_RevealSlotEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HideSlotEditor
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_C::HideSlotEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HideSlotEditor");
		
		UW_Loadout_MunitionSlots_C_HideSlotEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.AmmoSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewAmmoType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::AmmoSelected(const class FName& NewAmmoType, class UClass* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.AmmoSelected");
		
		UW_Loadout_MunitionSlots_C_AmmoSelected_Params params {};
		params.NewAmmoType = NewAmmoType;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ExecuteUbergraph_W_Loadout_MunitionSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::ExecuteUbergraph_W_Loadout_MunitionSlots(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ExecuteUbergraph_W_Loadout_MunitionSlots");
		
		UW_Loadout_MunitionSlots_C_ExecuteUbergraph_W_Loadout_MunitionSlots_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnGrenadesChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UClass*>                              Grenades                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Loadout_MunitionSlots_C::OnGrenadesChanged__DelegateSignature(TArray<class UClass*>* Grenades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnGrenadesChanged__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_OnGrenadesChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grenades != nullptr)
			*Grenades = params.Grenades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnPrimaryAmmoChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                PrimaryAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Loadout_MunitionSlots_C::OnPrimaryAmmoChanged__DelegateSignature(TArray<class FName>* PrimaryAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnPrimaryAmmoChanged__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_OnPrimaryAmmoChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PrimaryAmmo != nullptr)
			*PrimaryAmmo = params.PrimaryAmmo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnSidearmAmmoChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                SidearmAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Loadout_MunitionSlots_C::OnSidearmAmmoChanged__DelegateSignature(TArray<class FName>* SidearmAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnSidearmAmmoChanged__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_OnSidearmAmmoChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SidearmAmmo != nullptr)
			*SidearmAmmo = params.SidearmAmmo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotCountChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PrimaryAmmoSlotCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SidearmAmmoSlotCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GrenadeSlotCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TacticalSlotCount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::OnMunitionSlotCountChanged__DelegateSignature(int32_t PrimaryAmmoSlotCount, int32_t SidearmAmmoSlotCount, int32_t GrenadeSlotCount, int32_t TacticalSlotCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotCountChanged__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_OnMunitionSlotCountChanged__DelegateSignature_Params params {};
		params.PrimaryAmmoSlotCount = PrimaryAmmoSlotCount;
		params.SidearmAmmoSlotCount = SidearmAmmoSlotCount;
		params.GrenadeSlotCount = GrenadeSlotCount;
		params.TacticalSlotCount = TacticalSlotCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::OnMunitionSlotUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotUnhovered__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_OnMunitionSlotUnhovered__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::OnMunitionSlotHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotHovered__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_OnMunitionSlotHovered__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_C::OnMunitionSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotClicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_C_OnMunitionSlotClicked__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Loadout_MunitionSlots_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Loadout_MunitionSlots_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C");
		return ptr;
	}

}


