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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.ResetPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutItem_Preset_C::ResetPreset(bool bResetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.ResetPreset");
		
		UW_LoadoutItem_Preset_C_ResetPreset_Params params {};
		params.bResetName = bResetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.LoadPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWeaponPreset                               PresetData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UW_LoadoutItem_Preset_C::LoadPreset(const struct FWeaponPreset& PresetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.LoadPreset");
		
		UW_LoadoutItem_Preset_C_LoadPreset_Params params {};
		params.PresetData = PresetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.UpdatePreset
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::UpdatePreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.UpdatePreset");
		
		UW_LoadoutItem_Preset_C_UpdatePreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.UpdatePreset (Custom)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWeaponPreset                               PresetData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UW_LoadoutItem_Preset_C::UpdatePreset_Custom(const struct FWeaponPreset& PresetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.UpdatePreset (Custom)");
		
		UW_LoadoutItem_Preset_C_UpdatePreset_Custom_Params params {};
		params.PresetData = PresetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.CanRename
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutItem_Preset_C::CanRename(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.CanRename");
		
		UW_LoadoutItem_Preset_C_CanRename_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.UnhoverResetButton
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::UnhoverResetButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.UnhoverResetButton");
		
		UW_LoadoutItem_Preset_C_UnhoverResetButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.HoverResetButton
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::HoverResetButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.HoverResetButton");
		
		UW_LoadoutItem_Preset_C_HoverResetButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Escape
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::Escape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Escape");
		
		UW_LoadoutItem_Preset_C_Escape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_LoadoutItem_Preset_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnKeyUp");
		
		UW_LoadoutItem_Preset_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_LoadoutItem_Preset_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnKeyDown");
		
		UW_LoadoutItem_Preset_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.StopRenaming
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::StopRenaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.StopRenaming");
		
		UW_LoadoutItem_Preset_C_StopRenaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.IsRenaming
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutItem_Preset_C::IsRenaming(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.IsRenaming");
		
		UW_LoadoutItem_Preset_C_IsRenaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.CanReset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bConsiderPresetName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutItem_Preset_C::CanReset(bool bConsiderPresetName, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.CanReset");
		
		UW_LoadoutItem_Preset_C_CanReset_Params params {};
		params.bConsiderPresetName = bConsiderPresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.AnyAttachmentEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutItem_Preset_C::AnyAttachmentEquipped(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.AnyAttachmentEquipped");
		
		UW_LoadoutItem_Preset_C_AnyAttachmentEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Get_ResetButton_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_LoadoutItem_Preset_C::Get_ResetButton_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Get_ResetButton_Visibility");
		
		UW_LoadoutItem_Preset_C_Get_ResetButton_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Rename
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::Rename()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Rename");
		
		UW_LoadoutItem_Preset_C_Rename_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Get_CannotEdit_Text_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_LoadoutItem_Preset_C::Get_CannotEdit_Text_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Get_CannotEdit_Text_Visibility");
		
		UW_LoadoutItem_Preset_C_Get_CannotEdit_Text_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.SimulateUnhover
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::SimulateUnhover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.SimulateUnhover");
		
		UW_LoadoutItem_Preset_C_SimulateUnhover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.SimulateHover
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::SimulateHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.SimulateHover");
		
		UW_LoadoutItem_Preset_C_SimulateHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.SimulateClick
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::SimulateClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.SimulateClick");
		
		UW_LoadoutItem_Preset_C_SimulateClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Deselect Preset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSavePreset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutItem_Preset_C::Deselect_Preset(bool bSavePreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Deselect Preset");
		
		UW_LoadoutItem_Preset_C_Deselect_Preset_Params params {};
		params.bSavePreset = bSavePreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Select Preset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSavePreset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutItem_Preset_C::Select_Preset(bool bSavePreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Select Preset");
		
		UW_LoadoutItem_Preset_C_Select_Preset_Params params {};
		params.bSavePreset = bSavePreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");
		
		UW_LoadoutItem_Preset_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature");
		
		UW_LoadoutItem_Preset_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UW_LoadoutItem_Preset_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnLoadoutLoaded
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::OnLoadoutLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnLoadoutLoaded");
		
		UW_LoadoutItem_Preset_C_OnLoadoutLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__EditableText_184_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__EditableText_184_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__EditableText_184_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature");
		
		UW_LoadoutItem_Preset_C_BndEvt__EditableText_184_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__LoadoutItemPresetNameEdit_Text_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__LoadoutItemPresetNameEdit_Text_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__LoadoutItemPresetNameEdit_Text_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature");
		
		UW_LoadoutItem_Preset_C_BndEvt__LoadoutItemPresetNameEdit_Text_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.FocusOnEditableText
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::FocusOnEditableText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.FocusOnEditableText");
		
		UW_LoadoutItem_Preset_C_FocusOnEditableText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UW_LoadoutItem_Preset_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutItem_Preset_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.PreConstruct");
		
		UW_LoadoutItem_Preset_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Preset_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Tick");
		
		UW_LoadoutItem_Preset_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature");
		
		UW_LoadoutItem_Preset_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature");
		
		UW_LoadoutItem_Preset_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.ExecuteUbergraph_W_LoadoutItem_Preset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Preset_C::ExecuteUbergraph_W_LoadoutItem_Preset(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.ExecuteUbergraph_W_LoadoutItem_Preset");
		
		UW_LoadoutItem_Preset_C_ExecuteUbergraph_W_LoadoutItem_Preset_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Preset_C::OnButtonUnhovered__DelegateSignature(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnButtonUnhovered__DelegateSignature");
		
		UW_LoadoutItem_Preset_C_OnButtonUnhovered__DelegateSignature_Params params {};
		params.LoadoutItemPresetWidget = LoadoutItemPresetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Preset_C::OnButtonHovered__DelegateSignature(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnButtonHovered__DelegateSignature");
		
		UW_LoadoutItem_Preset_C_OnButtonHovered__DelegateSignature_Params params {};
		params.LoadoutItemPresetWidget = LoadoutItemPresetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Preset_C::OnButtonClicked__DelegateSignature(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnButtonClicked__DelegateSignature");
		
		UW_LoadoutItem_Preset_C_OnButtonClicked__DelegateSignature_Params params {};
		params.LoadoutItemPresetWidget = LoadoutItemPresetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_LoadoutItem_Preset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_LoadoutItem_Preset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_LoadoutItem_Preset.W_LoadoutItem_Preset_C");
		return ptr;
	}

}


