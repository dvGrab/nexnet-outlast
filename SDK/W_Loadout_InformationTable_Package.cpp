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
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateLoadoutPresetInfo
	 * 		Flags  -> ()
	 */
	void UW_Loadout_InformationTable_C::UpdateLoadoutPresetInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateLoadoutPresetInfo");
		
		UW_Loadout_InformationTable_C_UpdateLoadoutPresetInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.SetAttachmentEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FST_ItemEffects>                     Effects                                                    (Parm, OutParm)
	 */
	void UW_Loadout_InformationTable_C::SetAttachmentEffects(TArray<struct FST_ItemEffects>* Effects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.SetAttachmentEffects");
		
		UW_Loadout_InformationTable_C_SetAttachmentEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Effects != nullptr)
			*Effects = params.Effects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.QuickHide
	 * 		Flags  -> ()
	 */
	void UW_Loadout_InformationTable_C::QuickHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.QuickHide");
		
		UW_Loadout_InformationTable_C_QuickHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Play Refresh Anim
	 * 		Flags  -> ()
	 */
	void UW_Loadout_InformationTable_C::Play_Refresh_Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Play Refresh Anim");
		
		UW_Loadout_InformationTable_C_Play_Refresh_Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateAttachmentInfo
	 * 		Flags  -> ()
	 */
	void UW_Loadout_InformationTable_C::UpdateAttachmentInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateAttachmentInfo");
		
		UW_Loadout_InformationTable_C_UpdateAttachmentInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateArmourMaterialInfo
	 * 		Flags  -> ()
	 */
	void UW_Loadout_InformationTable_C::UpdateArmourMaterialInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateArmourMaterialInfo");
		
		UW_Loadout_InformationTable_C_UpdateArmourMaterialInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateAmmoInfo
	 * 		Flags  -> ()
	 */
	void UW_Loadout_InformationTable_C::UpdateAmmoInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateAmmoInfo");
		
		UW_Loadout_InformationTable_C_UpdateAmmoInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.GetWeaponClassText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        WeaponClass                                                (Parm, OutParm)
	 */
	void UW_Loadout_InformationTable_C::GetWeaponClassText(class FText* WeaponClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.GetWeaponClassText");
		
		UW_Loadout_InformationTable_C_GetWeaponClassText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponClass != nullptr)
			*WeaponClass = params.WeaponClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateItemInfo
	 * 		Flags  -> ()
	 */
	void UW_Loadout_InformationTable_C::UpdateItemInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateItemInfo");
		
		UW_Loadout_InformationTable_C_UpdateItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.SetLoadoutWidget");
		
		UW_Loadout_InformationTable_C_SetLoadoutWidget_Params params {};
		params.LoadoutWidget = LoadoutWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_InformationTable_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.PreConstruct");
		
		UW_Loadout_InformationTable_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Tick");
		
		UW_Loadout_InformationTable_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateCurrentSlot");
		
		UW_Loadout_InformationTable_C_UpdateCurrentSlot_Params params {};
		params.CurrentSlot = CurrentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class UClass*>                 ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Loadout_InformationTable_C::UpdateCurrentItemMap(TMap<EItemCategory, class UClass*> ItemCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateCurrentItemMap");
		
		UW_Loadout_InformationTable_C_UpdateCurrentItemMap_Params params {};
		params.ItemCategory = ItemCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Loadout_InformationTable_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Construct");
		
		UW_Loadout_InformationTable_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemCategory                                      LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Restricted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_InformationTable_C::RefreshPanelItemInfo(const struct FSavedLoadout& ActiveLoadout, class UClass* ItemClass, EItemCategory LoadoutSlot, bool Restricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelItemInfo");
		
		UW_Loadout_InformationTable_C_RefreshPanelItemInfo_Params params {};
		params.ActiveLoadout = ActiveLoadout;
		params.ItemClass = ItemClass;
		params.LoadoutSlot = LoadoutSlot;
		params.Restricted = Restricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.ModifyWeaponClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemToModify                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::ModifyWeaponClicked(class UClass* ItemToModify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.ModifyWeaponClicked");
		
		UW_Loadout_InformationTable_C_ModifyWeaponClicked_Params params {};
		params.ItemToModify = ItemToModify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.InitializePanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Loadout_InformationTable_C::InitializePanel(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.InitializePanel");
		
		UW_Loadout_InformationTable_C_InitializePanel_Params params {};
		params.ActiveLoadout = ActiveLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Loadout_InformationTable_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateActiveLoadout");
		
		UW_Loadout_InformationTable_C_UpdateActiveLoadout_Params params {};
		params.ActiveLoadout = ActiveLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::Reveal(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Reveal");
		
		UW_Loadout_InformationTable_C_Reveal_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_InformationTable_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Hide");
		
		UW_Loadout_InformationTable_C_Hide_Params params {};
		params.Delay = Delay;
		params.Collapse = Collapse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.AttachmentItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutInfo_AttachmentListEntry_C*        AttachmentListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::AttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* AttachmentListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.AttachmentItemClicked");
		
		UW_Loadout_InformationTable_C_AttachmentItemClicked_Params params {};
		params.AttachmentListItem = AttachmentListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelAmmoInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      WeaponData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::RefreshPanelAmmoInfo(const class FName& AmmoType, class UClass* WeaponData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelAmmoInfo");
		
		UW_Loadout_InformationTable_C_RefreshPanelAmmoInfo_Params params {};
		params.AmmoType = AmmoType;
		params.WeaponData = WeaponData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelArmourMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::RefreshPanelArmourMaterial(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelArmourMaterial");
		
		UW_Loadout_InformationTable_C_RefreshPanelArmourMaterial_Params params {};
		params.ArmourMaterial = ArmourMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Attachment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AttachingWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::RefreshPanelAttachment(class UClass* Attachment, class UClass* AttachingWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelAttachment");
		
		UW_Loadout_InformationTable_C_RefreshPanelAttachment_Params params {};
		params.Attachment = Attachment;
		params.AttachingWeapon = AttachingWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RemoveAttachmentItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutInfo_AttachmentListEntry_C*        AttachmentListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::RemoveAttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* AttachmentListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RemoveAttachmentItemClicked");
		
		UW_Loadout_InformationTable_C_RemoveAttachmentItemClicked_Params params {};
		params.AttachmentListItem = AttachmentListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelLoadoutPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLoadoutPreset                              LoadoutPreset                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Loadout_InformationTable_C::RefreshPanelLoadoutPreset(const struct FLoadoutPreset& LoadoutPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelLoadoutPreset");
		
		UW_Loadout_InformationTable_C_RefreshPanelLoadoutPreset_Params params {};
		params.LoadoutPreset = LoadoutPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.ExecuteUbergraph_W_Loadout_InformationTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::ExecuteUbergraph_W_Loadout_InformationTable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.ExecuteUbergraph_W_Loadout_InformationTable");
		
		UW_Loadout_InformationTable_C_ExecuteUbergraph_W_Loadout_InformationTable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelRemoveAttachmentClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponAttachmentType                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::OnInfoPanelRemoveAttachmentClicked__DelegateSignature(EWeaponAttachmentType Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelRemoveAttachmentClicked__DelegateSignature");
		
		UW_Loadout_InformationTable_C_OnInfoPanelRemoveAttachmentClicked__DelegateSignature_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelAttachmentClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponAttachmentType                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::OnInfoPanelAttachmentClicked__DelegateSignature(EWeaponAttachmentType Slot, class UClass* AttachmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelAttachmentClicked__DelegateSignature");
		
		UW_Loadout_InformationTable_C_OnInfoPanelAttachmentClicked__DelegateSignature_Params params {};
		params.Slot = Slot;
		params.AttachmentData = AttachmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnCancelRefresh__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Loadout_InformationTable_C::OnCancelRefresh__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnCancelRefresh__DelegateSignature");
		
		UW_Loadout_InformationTable_C_OnCancelRefresh__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelRemoved__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Loadout_InformationTable_C::OnInfoPanelRemoved__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelRemoved__DelegateSignature");
		
		UW_Loadout_InformationTable_C_OnInfoPanelRemoved__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnModifyWeaponButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemToModify                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_InformationTable_C::OnModifyWeaponButtonClicked__DelegateSignature(class UClass* ItemToModify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnModifyWeaponButtonClicked__DelegateSignature");
		
		UW_Loadout_InformationTable_C_OnModifyWeaponButtonClicked__DelegateSignature_Params params {};
		params.ItemToModify = ItemToModify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Loadout_InformationTable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Loadout_InformationTable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Loadout_InformationTable.W_Loadout_InformationTable_C");
		return ptr;
	}

}


