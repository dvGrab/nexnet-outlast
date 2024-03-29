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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.CheckCurrentAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UClass*>                              Attachments                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_LoadoutInfo_AttachmentList_C::CheckCurrentAttachments(TArray<class UClass*>* Attachments)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.CheckCurrentAttachments");
		
		UW_LoadoutInfo_AttachmentList_C_CheckCurrentAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.GetIsNullAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsNull                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutInfo_AttachmentList_C::GetIsNullAttachment(class UClass* AttachmentData, bool* IsNull)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.GetIsNullAttachment");
		
		UW_LoadoutInfo_AttachmentList_C_GetIsNullAttachment_Params params {};
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentArraySidearm
	 * 		Flags  -> ()
	 */
	void UW_LoadoutInfo_AttachmentList_C::AttachmentArraySidearm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentArraySidearm");
		
		UW_LoadoutInfo_AttachmentList_C_AttachmentArraySidearm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentArrayPrimary
	 * 		Flags  -> ()
	 */
	void UW_LoadoutInfo_AttachmentList_C::AttachmentArrayPrimary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentArrayPrimary");
		
		UW_LoadoutInfo_AttachmentList_C_AttachmentArrayPrimary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.GetCurrentAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UClass*>                              Attachments                                                (Parm, OutParm)
	 */
	void UW_LoadoutInfo_AttachmentList_C::GetCurrentAttachments(TArray<class UClass*>* Attachments)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.GetCurrentAttachments");
		
		UW_LoadoutInfo_AttachmentList_C_GetCurrentAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Finished_EC73150B49B091C3F6FAB48DDD93DD29
	 * 		Flags  -> ()
	 */
	void UW_LoadoutInfo_AttachmentList_C::Finished_EC73150B49B091C3F6FAB48DDD93DD29()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Finished_EC73150B49B091C3F6FAB48DDD93DD29");
		
		UW_LoadoutInfo_AttachmentList_C_Finished_EC73150B49B091C3F6FAB48DDD93DD29_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutInfo_AttachmentList_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Hide");
		
		UW_LoadoutInfo_AttachmentList_C_Hide_Params params {};
		params.Delay = Delay;
		params.Collapse = Collapse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutInfo_AttachmentList_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateCurrentSlot");
		
		UW_LoadoutInfo_AttachmentList_C_UpdateCurrentSlot_Params params {};
		params.CurrentSlot = CurrentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class UClass*>                 ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_LoadoutInfo_AttachmentList_C::UpdateCurrentItemMap(TMap<EItemCategory, class UClass*> ItemCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateCurrentItemMap");
		
		UW_LoadoutInfo_AttachmentList_C_UpdateCurrentItemMap_Params params {};
		params.ItemCategory = ItemCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutInfo_AttachmentList_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.SetLoadoutWidget");
		
		UW_LoadoutInfo_AttachmentList_C_SetLoadoutWidget_Params params {};
		params.LoadoutWidget = LoadoutWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutInfo_AttachmentList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.PreConstruct");
		
		UW_LoadoutInfo_AttachmentList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_LoadoutInfo_AttachmentList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Construct");
		
		UW_LoadoutInfo_AttachmentList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.BndEvt__W_LoadoutInfo_AttachmentList_btn_ModifyWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutInfo_AttachmentList_C::BndEvt__W_LoadoutInfo_AttachmentList_btn_ModifyWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.BndEvt__W_LoadoutInfo_AttachmentList_btn_ModifyWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
		
		UW_LoadoutInfo_AttachmentList_C_BndEvt__W_LoadoutInfo_AttachmentList_btn_ModifyWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.RefreshList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Restricted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutInfo_AttachmentList_C::RefreshList(const struct FSavedLoadout& ActiveLoadout, class UClass* ItemClass, bool Restricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.RefreshList");
		
		UW_LoadoutInfo_AttachmentList_C_RefreshList_Params params {};
		params.ActiveLoadout = ActiveLoadout;
		params.ItemClass = ItemClass;
		params.Restricted = Restricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_LoadoutInfo_AttachmentList_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateActiveLoadout");
		
		UW_LoadoutInfo_AttachmentList_C_UpdateActiveLoadout_Params params {};
		params.ActiveLoadout = ActiveLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutInfo_AttachmentList_C::Reveal(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Reveal");
		
		UW_LoadoutInfo_AttachmentList_C_Reveal_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeredBy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutInfo_AttachmentList_C::AttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentItemClicked");
		
		UW_LoadoutInfo_AttachmentList_C_AttachmentItemClicked_Params params {};
		params.TriggeredBy = TriggeredBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.RemoveAttachmentClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeredBy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutInfo_AttachmentList_C::RemoveAttachmentClicked(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.RemoveAttachmentClicked");
		
		UW_LoadoutInfo_AttachmentList_C_RemoveAttachmentClicked_Params params {};
		params.TriggeredBy = TriggeredBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.ExecuteUbergraph_W_LoadoutInfo_AttachmentList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutInfo_AttachmentList_C::ExecuteUbergraph_W_LoadoutInfo_AttachmentList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.ExecuteUbergraph_W_LoadoutInfo_AttachmentList");
		
		UW_LoadoutInfo_AttachmentList_C_ExecuteUbergraph_W_LoadoutInfo_AttachmentList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnRemoveAttachmentClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeringListEntry                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutInfo_AttachmentList_C::OnRemoveAttachmentClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeringListEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnRemoveAttachmentClicked__DelegateSignature");
		
		UW_LoadoutInfo_AttachmentList_C_OnRemoveAttachmentClicked__DelegateSignature_Params params {};
		params.TriggeringListEntry = TriggeringListEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnAttachmentItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeringListEntry                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutInfo_AttachmentList_C::OnAttachmentItemClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeringListEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnAttachmentItemClicked__DelegateSignature");
		
		UW_LoadoutInfo_AttachmentList_C_OnAttachmentItemClicked__DelegateSignature_Params params {};
		params.TriggeringListEntry = TriggeringListEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnModifyWeaponButtonClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutInfo_AttachmentList_C::OnModifyWeaponButtonClick__DelegateSignature(class UClass* ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnModifyWeaponButtonClick__DelegateSignature");
		
		UW_LoadoutInfo_AttachmentList_C_OnModifyWeaponButtonClick__DelegateSignature_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_LoadoutInfo_AttachmentList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_LoadoutInfo_AttachmentList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C");
		return ptr;
	}

}


