/**
 * Name: TRIALS
 * Version: FINAL
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
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.GamepadNav_MenuConfirm_Release
	 * 		Flags  -> ()
	 */
	void UActiveSkillButton_C::GamepadNav_MenuConfirm_Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.GamepadNav_MenuConfirm_Release");
		
		UActiveSkillButton_C_GamepadNav_MenuConfirm_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.GamepadNav_MenuConfirm
	 * 		Flags  -> ()
	 */
	void UActiveSkillButton_C::GamepadNav_MenuConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.GamepadNav_MenuConfirm");
		
		UActiveSkillButton_C_GamepadNav_MenuConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UActiveSkillButton_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.OnFocusLost");
		
		UActiveSkillButton_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UActiveSkillButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.OnFocusReceived");
		
		UActiveSkillButton_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActiveSkillButton_C::SetHovered(bool bInHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.SetHovered");
		
		UActiveSkillButton_C_SetHovered_Params params {};
		params.bInHovered = bInHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.UpdateNewStatus
	 * 		Flags  -> ()
	 */
	void UActiveSkillButton_C::UpdateNewStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.UpdateNewStatus");
		
		UActiveSkillButton_C_UpdateNewStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.GetIsEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEquipped                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActiveSkillButton_C::GetIsEquipped(bool* IsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.GetIsEquipped");
		
		UActiveSkillButton_C_GetIsEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEquipped != nullptr)
			*IsEquipped = params.IsEquipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.SetIsEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEquipped                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActiveSkillButton_C::SetIsEquipped(bool IsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.SetIsEquipped");
		
		UActiveSkillButton_C_SetIsEquipped_Params params {};
		params.IsEquipped = IsEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActiveSkillButton_C::SetSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.SetSelected");
		
		UActiveSkillButton_C_SetSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.Initialize Empty Slot
	 * 		Flags  -> ()
	 */
	void UActiveSkillButton_C::Initialize_Empty_Slot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.Initialize Empty Slot");
		
		UActiveSkillButton_C_Initialize_Empty_Slot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMenuUpgradeItemInfo                        itemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bInIsSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActiveSkillButton_C::Initialize(const struct FMenuUpgradeItemInfo& itemInfo, bool bInIsSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.Initialize");
		
		UActiveSkillButton_C_Initialize_Params params {};
		params.itemInfo = itemInfo;
		params.bInIsSlot = bInIsSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UActiveSkillButton_C::BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature");
		
		UActiveSkillButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UActiveSkillButton_C::BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature");
		
		UActiveSkillButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UActiveSkillButton_C::BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature");
		
		UActiveSkillButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UActiveSkillButton_C::BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature");
		
		UActiveSkillButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UActiveSkillButton_C::BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature");
		
		UActiveSkillButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UActiveSkillButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.Construct");
		
		UActiveSkillButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.OnUpdateNewStatus_Event_1
	 * 		Flags  -> ()
	 */
	void UActiveSkillButton_C::OnUpdateNewStatus_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.OnUpdateNewStatus_Event_1");
		
		UActiveSkillButton_C_OnUpdateNewStatus_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.ExecuteUbergraph_ActiveSkillButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActiveSkillButton_C::ExecuteUbergraph_ActiveSkillButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.ExecuteUbergraph_ActiveSkillButton");
		
		UActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.OnReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMenuUpgradeItemInfo                        itemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UActiveSkillButton_C::OnReleasedEvent__DelegateSignature(const struct FMenuUpgradeItemInfo& itemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.OnReleasedEvent__DelegateSignature");
		
		UActiveSkillButton_C_OnReleasedEvent__DelegateSignature_Params params {};
		params.itemInfo = itemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.OnPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMenuUpgradeItemInfo                        itemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UActiveSkillButton_C::OnPressedEvent__DelegateSignature(const struct FMenuUpgradeItemInfo& itemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.OnPressedEvent__DelegateSignature");
		
		UActiveSkillButton_C_OnPressedEvent__DelegateSignature_Params params {};
		params.itemInfo = itemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.OnUnhoveredEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActiveSkillButton_C*                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActiveSkillButton_C::OnUnhoveredEvent__DelegateSignature(class UActiveSkillButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.OnUnhoveredEvent__DelegateSignature");
		
		UActiveSkillButton_C_OnUnhoveredEvent__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.OnHoveredEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActiveSkillButton_C*                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActiveSkillButton_C::OnHoveredEvent__DelegateSignature(class UActiveSkillButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.OnHoveredEvent__DelegateSignature");
		
		UActiveSkillButton_C_OnHoveredEvent__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveSkillButton.ActiveSkillButton_C.OnClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActiveSkillButton_C*                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActiveSkillButton_C::OnClickedEvent__DelegateSignature(class UActiveSkillButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveSkillButton.ActiveSkillButton_C.OnClickedEvent__DelegateSignature");
		
		UActiveSkillButton_C_OnClickedEvent__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveSkillButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveSkillButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ActiveSkillButton.ActiveSkillButton_C");
		return ptr;
	}

}


