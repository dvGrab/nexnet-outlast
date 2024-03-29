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
	 * 		Name   -> Function BPF_UI.BPF_UI_C.GetAmmoCategoryText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBPF_UI_C::GetAmmoCategoryText(class UClass* ItemData, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_UI.BPF_UI_C.GetAmmoCategoryText");
		
		UBPF_UI_C_GetAmmoCategoryText_Params params {};
		params.ItemData = ItemData;
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
	 * 		Name   -> Function BPF_UI.BPF_UI_C.UpdateCurrent_LoadoutUI_Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPF_UI_C::UpdateCurrent_LoadoutUI_Slot(class UObject* WorldContextObject, class UW_LoadoutSlot_C* CurrentSlot, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_UI.BPF_UI_C.UpdateCurrent_LoadoutUI_Slot");
		
		UBPF_UI_C_UpdateCurrent_LoadoutUI_Slot_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CurrentSlot = CurrentSlot;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_UI.BPF_UI_C.GetItemType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      BaseItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          Item_Type                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPF_UI_C::GetItemType(class UClass* BaseItemClass, class UObject* __WorldContext, EItemType* Item_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_UI.BPF_UI_C.GetItemType");
		
		UBPF_UI_C_GetItemType_Params params {};
		params.BaseItemClass = BaseItemClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item_Type != nullptr)
			*Item_Type = params.Item_Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_UI.BPF_UI_C.GetItemDataTableInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      BaseItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DataFound                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FItemLookupTable                            ItemLookupData                                             (Parm, OutParm)
	 */
	void UBPF_UI_C::GetItemDataTableInfo(class UClass* BaseItemClass, class UObject* __WorldContext, bool* DataFound, struct FItemLookupTable* ItemLookupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_UI.BPF_UI_C.GetItemDataTableInfo");
		
		UBPF_UI_C_GetItemDataTableInfo_Params params {};
		params.BaseItemClass = BaseItemClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataFound != nullptr)
			*DataFound = params.DataFound;
		if (ItemLookupData != nullptr)
			*ItemLookupData = params.ItemLookupData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_UI.BPF_UI_C.GetAttachmentSlotText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponAttachmentType                              AttachmentType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        SlotText                                                   (Parm, OutParm)
	 */
	void UBPF_UI_C::GetAttachmentSlotText(EWeaponAttachmentType AttachmentType, class UObject* __WorldContext, class FText* SlotText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_UI.BPF_UI_C.GetAttachmentSlotText");
		
		UBPF_UI_C_GetAttachmentSlotText_Params params {};
		params.AttachmentType = AttachmentType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlotText != nullptr)
			*SlotText = params.SlotText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_UI.BPF_UI_C.GetItemClassText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemClass                                         ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Category_Text                                              (Parm, OutParm)
	 */
	void UBPF_UI_C::GetItemClassText(EItemClass ItemCategory, class UObject* __WorldContext, class FText* Category_Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_UI.BPF_UI_C.GetItemClassText");
		
		UBPF_UI_C_GetItemClassText_Params params {};
		params.ItemCategory = ItemCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Category_Text != nullptr)
			*Category_Text = params.Category_Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_UI.BPF_UI_C.GetLoadoutCategoryText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Category_Text                                              (Parm, OutParm)
	 */
	void UBPF_UI_C::GetLoadoutCategoryText(EItemCategory ItemCategory, class UObject* __WorldContext, class FText* Category_Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_UI.BPF_UI_C.GetLoadoutCategoryText");
		
		UBPF_UI_C_GetLoadoutCategoryText_Params params {};
		params.ItemCategory = ItemCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Category_Text != nullptr)
			*Category_Text = params.Category_Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_UI.BPF_UI_C.RemoveSpacesFromString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ReturnString                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        ReturnText                                                 (Parm, OutParm)
	 * 		class FName                                        ReturnName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPF_UI_C::RemoveSpacesFromString(const class FString& String, class UObject* __WorldContext, class FString* ReturnString, class FText* ReturnText, class FName* ReturnName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_UI.BPF_UI_C.RemoveSpacesFromString");
		
		UBPF_UI_C_RemoveSpacesFromString_Params params {};
		params.String = String;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnString != nullptr)
			*ReturnString = params.ReturnString;
		if (ReturnText != nullptr)
			*ReturnText = params.ReturnText;
		if (ReturnName != nullptr)
			*ReturnName = params.ReturnName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPF_UI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPF_UI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPF_UI.BPF_UI_C");
		return ptr;
	}

}


