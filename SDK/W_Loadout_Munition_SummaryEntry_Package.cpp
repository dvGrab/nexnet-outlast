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
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.CreateIcon
	 * 		Flags  -> ()
	 */
	void UW_Loadout_Munition_SummaryEntry_C::CreateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.CreateIcon");
		
		UW_Loadout_Munition_SummaryEntry_C_CreateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetAmmoIcon
	 * 		Flags  -> ()
	 */
	void UW_Loadout_Munition_SummaryEntry_C::GetAmmoIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetAmmoIcon");
		
		UW_Loadout_Munition_SummaryEntry_C_GetAmmoIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetAmmoName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        AmmoName                                                   (Parm, OutParm)
	 */
	void UW_Loadout_Munition_SummaryEntry_C::GetAmmoName(class FText* AmmoName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetAmmoName");
		
		UW_Loadout_Munition_SummaryEntry_C_GetAmmoName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoName != nullptr)
			*AmmoName = params.AmmoName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetItemIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UW_Loadout_Munition_SummaryEntry_C::GetItemIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetItemIcon");
		
		UW_Loadout_Munition_SummaryEntry_C_GetItemIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetAmmoInfo
	 * 		Flags  -> ()
	 */
	void UW_Loadout_Munition_SummaryEntry_C::GetAmmoInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetAmmoInfo");
		
		UW_Loadout_Munition_SummaryEntry_C_GetAmmoInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_Munition_SummaryEntry_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateCurrentSlot");
		
		UW_Loadout_Munition_SummaryEntry_C_UpdateCurrentSlot_Params params {};
		params.CurrentSlot = CurrentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class UClass*>                 ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Loadout_Munition_SummaryEntry_C::UpdateCurrentItemMap(TMap<EItemCategory, class UClass*> ItemCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateCurrentItemMap");
		
		UW_Loadout_Munition_SummaryEntry_C_UpdateCurrentItemMap_Params params {};
		params.ItemCategory = ItemCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_Munition_SummaryEntry_C::Reveal(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.Reveal");
		
		UW_Loadout_Munition_SummaryEntry_C_Reveal_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_Munition_SummaryEntry_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.Hide");
		
		UW_Loadout_Munition_SummaryEntry_C_Hide_Params params {};
		params.Delay = Delay;
		params.Collapse = Collapse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_Munition_SummaryEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.PreConstruct");
		
		UW_Loadout_Munition_SummaryEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Loadout_Munition_SummaryEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.Construct");
		
		UW_Loadout_Munition_SummaryEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Loadout_Munition_SummaryEntry_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateActiveLoadout");
		
		UW_Loadout_Munition_SummaryEntry_C_UpdateActiveLoadout_Params params {};
		params.ActiveLoadout = ActiveLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_Munition_SummaryEntry_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.SetLoadoutWidget");
		
		UW_Loadout_Munition_SummaryEntry_C_SetLoadoutWidget_Params params {};
		params.LoadoutWidget = LoadoutWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateAmmunition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_Munition_SummaryEntry_C::UpdateAmmunition(class UClass* Weapon, const class FName& AmmoType, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateAmmunition");
		
		UW_Loadout_Munition_SummaryEntry_C_UpdateAmmunition_Params params {};
		params.Weapon = Weapon;
		params.AmmoType = AmmoType;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_Munition_SummaryEntry_C::UpdateItem(class UClass* ItemData, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateItem");
		
		UW_Loadout_Munition_SummaryEntry_C_UpdateItem_Params params {};
		params.ItemData = ItemData;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.ExecuteUbergraph_W_Loadout_Munition_SummaryEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_Munition_SummaryEntry_C::ExecuteUbergraph_W_Loadout_Munition_SummaryEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.ExecuteUbergraph_W_Loadout_Munition_SummaryEntry");
		
		UW_Loadout_Munition_SummaryEntry_C_ExecuteUbergraph_W_Loadout_Munition_SummaryEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Loadout_Munition_SummaryEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Loadout_Munition_SummaryEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C");
		return ptr;
	}

}


