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
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.UnhighlightBorder
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::UnhighlightBorder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.UnhighlightBorder");
		
		UW_AttachmentItem_C_UnhighlightBorder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.HighlightBorder
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::HighlightBorder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.HighlightBorder");
		
		UW_AttachmentItem_C_HighlightBorder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.UpdateAttachmentName
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::UpdateAttachmentName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.UpdateAttachmentName");
		
		UW_AttachmentItem_C_UpdateAttachmentName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.SimulateClicked
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::SimulateClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.SimulateClicked");
		
		UW_AttachmentItem_C_SimulateClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.SimulateUnhover
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::SimulateUnhover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.SimulateUnhover");
		
		UW_AttachmentItem_C_SimulateUnhover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.SimulateHover
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::SimulateHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.SimulateHover");
		
		UW_AttachmentItem_C_SimulateHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.Deselect
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::Deselect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.Deselect");
		
		UW_AttachmentItem_C_Deselect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.Select
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::Select()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.Select");
		
		UW_AttachmentItem_C_Select_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.Get_ItemClassName_Text_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_AttachmentItem_C::Get_ItemClassName_Text_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.Get_ItemClassName_Text_Visibility");
		
		UW_AttachmentItem_C_Get_ItemClassName_Text_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UW_AttachmentItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_AttachmentItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.PreConstruct");
		
		UW_AttachmentItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UW_AttachmentItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");
		
		UW_AttachmentItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature");
		
		UW_AttachmentItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature");
		
		UW_AttachmentItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.OnLoadoutLoaded
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::OnLoadoutLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.OnLoadoutLoaded");
		
		UW_AttachmentItem_C_OnLoadoutLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.OnGunCleaned
	 * 		Flags  -> ()
	 */
	void UW_AttachmentItem_C::OnGunCleaned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.OnGunCleaned");
		
		UW_AttachmentItem_C_OnGunCleaned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.ExecuteUbergraph_W_AttachmentItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentItem_C::ExecuteUbergraph_W_AttachmentItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.ExecuteUbergraph_W_AttachmentItem");
		
		UW_AttachmentItem_C_ExecuteUbergraph_W_AttachmentItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentItem_C*                         AttachmentItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentItem_C::OnButtonUnhovered__DelegateSignature(class UW_AttachmentItem_C* AttachmentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.OnButtonUnhovered__DelegateSignature");
		
		UW_AttachmentItem_C_OnButtonUnhovered__DelegateSignature_Params params {};
		params.AttachmentItem = AttachmentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentItem_C*                         AttachmentItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentItem_C::OnButtonHovered__DelegateSignature(class UW_AttachmentItem_C* AttachmentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.OnButtonHovered__DelegateSignature");
		
		UW_AttachmentItem_C_OnButtonHovered__DelegateSignature_Params params {};
		params.AttachmentItem = AttachmentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentItem.W_AttachmentItem_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentItem_C*                         AttachmentItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentItem_C::OnButtonClicked__DelegateSignature(class UW_AttachmentItem_C* AttachmentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentItem.W_AttachmentItem_C.OnButtonClicked__DelegateSignature");
		
		UW_AttachmentItem_C_OnButtonClicked__DelegateSignature_Params params {};
		params.AttachmentItem = AttachmentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_AttachmentItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_AttachmentItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_AttachmentItem.W_AttachmentItem_C");
		return ptr;
	}

}


