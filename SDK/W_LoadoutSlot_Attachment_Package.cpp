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
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.GetIsNullAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsNull                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutSlot_Attachment_C::GetIsNullAttachment(class UClass* AttachmentData, bool* IsNull)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.GetIsNullAttachment");
		
		UW_LoadoutSlot_Attachment_C_GetIsNullAttachment_Params params {};
		params.AttachmentData = AttachmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNull != nullptr)
			*IsNull = params.IsNull;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Equipped                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutSlot_Attachment_C::SetEquipped(bool Equipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetEquipped");
		
		UW_LoadoutSlot_Attachment_C_SetEquipped_Params params {};
		params.Equipped = Equipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.RefreshItemInfo
	 * 		Flags  -> ()
	 */
	void UW_LoadoutSlot_Attachment_C::RefreshItemInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.RefreshItemInfo");
		
		UW_LoadoutSlot_Attachment_C_RefreshItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetMinimalLayout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MinimalLayout                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutSlot_Attachment_C::SetMinimalLayout(bool MinimalLayout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetMinimalLayout");
		
		UW_LoadoutSlot_Attachment_C_SetMinimalLayout_Params params {};
		params.MinimalLayout = MinimalLayout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.GetHoverState
	 * 		Flags  -> ()
	 */
	bool UW_LoadoutSlot_Attachment_C::GetHoverState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.GetHoverState");
		
		UW_LoadoutSlot_Attachment_C_GetHoverState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutSlot_Attachment_C::SetActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetActive");
		
		UW_LoadoutSlot_Attachment_C_SetActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnLoaded_EBAC7585457EE912D265E9983ECE7CE6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::OnLoaded_EBAC7585457EE912D265E9983ECE7CE6(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnLoaded_EBAC7585457EE912D265E9983ECE7CE6");
		
		UW_LoadoutSlot_Attachment_C_OnLoaded_EBAC7585457EE912D265E9983ECE7CE6_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class UClass*>                 ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_LoadoutSlot_Attachment_C::UpdateCurrentItemMap(TMap<EItemCategory, class UClass*> ItemCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateCurrentItemMap");
		
		UW_LoadoutSlot_Attachment_C_UpdateCurrentItemMap_Params params {};
		params.ItemCategory = ItemCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetLoadoutWidget");
		
		UW_LoadoutSlot_Attachment_C_SetLoadoutWidget_Params params {};
		params.LoadoutWidget = LoadoutWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutSlot_Attachment_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.PreConstruct");
		
		UW_LoadoutSlot_Attachment_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_LoadoutSlot_Attachment_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Construct");
		
		UW_LoadoutSlot_Attachment_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateCurrentSlot");
		
		UW_LoadoutSlot_Attachment_C_UpdateCurrentSlot_Params params {};
		params.CurrentSlot = CurrentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnItemExpansionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutSlot_Attachment_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnItemExpansionChanged");
		
		UW_LoadoutSlot_Attachment_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnListItemObjectSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnListItemObjectSet");
		
		UW_LoadoutSlot_Attachment_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");
		
		UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature");
		
		UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature");
		
		UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.InitializeAsSlot
	 * 		Flags  -> ()
	 */
	void UW_LoadoutSlot_Attachment_C::InitializeAsSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.InitializeAsSlot");
		
		UW_LoadoutSlot_Attachment_C_InitializeAsSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnEntryReleased
	 * 		Flags  -> ()
	 */
	void UW_LoadoutSlot_Attachment_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnEntryReleased");
		
		UW_LoadoutSlot_Attachment_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature");
		
		UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.InitializeAttachmentData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::InitializeAttachmentData(class UClass* AttachmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.InitializeAttachmentData");
		
		UW_LoadoutSlot_Attachment_C_InitializeAttachmentData_Params params {};
		params.AttachmentData = AttachmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.InitializeAsListItem
	 * 		Flags  -> ()
	 */
	void UW_LoadoutSlot_Attachment_C::InitializeAsListItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.InitializeAsListItem");
		
		UW_LoadoutSlot_Attachment_C_InitializeAsListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");
		
		UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature");
		
		UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature");
		
		UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_7_DoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_7_DoubleClicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_7_DoubleClicked__DelegateSignature");
		
		UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_7_DoubleClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_LoadoutSlot_Attachment_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateActiveLoadout");
		
		UW_LoadoutSlot_Attachment_C_UpdateActiveLoadout_Params params {};
		params.ActiveLoadout = ActiveLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnItemSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutSlot_Attachment_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnItemSelectionChanged");
		
		UW_LoadoutSlot_Attachment_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutSlot_Attachment_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Hide");
		
		UW_LoadoutSlot_Attachment_C_Hide_Params params {};
		params.Delay = Delay;
		params.Collapse = Collapse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::Reveal(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Reveal");
		
		UW_LoadoutSlot_Attachment_C_Reveal_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.ForceClick
	 * 		Flags  -> ()
	 */
	void UW_LoadoutSlot_Attachment_C::ForceClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.ForceClick");
		
		UW_LoadoutSlot_Attachment_C_ForceClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.ExecuteUbergraph_W_LoadoutSlot_Attachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::ExecuteUbergraph_W_LoadoutSlot_Attachment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.ExecuteUbergraph_W_LoadoutSlot_Attachment");
		
		UW_LoadoutSlot_Attachment_C_ExecuteUbergraph_W_LoadoutSlot_Attachment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::OnDoubleClicked__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnDoubleClicked__DelegateSignature");
		
		UW_LoadoutSlot_Attachment_C_OnDoubleClicked__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::OnUnhovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnUnhovered__DelegateSignature");
		
		UW_LoadoutSlot_Attachment_C_OnUnhovered__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::OnHovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnHovered__DelegateSignature");
		
		UW_LoadoutSlot_Attachment_C_OnHovered__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutSlot_Attachment_C::OnClicked__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnClicked__DelegateSignature");
		
		UW_LoadoutSlot_Attachment_C_OnClicked__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_LoadoutSlot_Attachment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_LoadoutSlot_Attachment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C");
		return ptr;
	}

}


