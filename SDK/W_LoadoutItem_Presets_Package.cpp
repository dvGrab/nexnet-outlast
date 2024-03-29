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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.LoadPresets (ItemClass)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Presets_C::LoadPresets_ItemClass(class UClass* ItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.LoadPresets (ItemClass)");
		
		UW_LoadoutItem_Presets_C_LoadPresets_ItemClass_Params params {};
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.FindSelectedPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutItem_Preset_C*                     Loadout_Item_Preset                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Presets_C::FindSelectedPreset(class UClass* ItemClass, int32_t* Return_Value, class UW_LoadoutItem_Preset_C** Loadout_Item_Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.FindSelectedPreset");
		
		UW_LoadoutItem_Presets_C_FindSelectedPreset_Params params {};
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
		if (Loadout_Item_Preset != nullptr)
			*Loadout_Item_Preset = params.Loadout_Item_Preset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.CanRenamePreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutItem_Presets_C::CanRenamePreset(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.CanRenamePreset");
		
		UW_LoadoutItem_Presets_C_CanRenamePreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.GetSelectedPresetWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     Return_Value                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Presets_C::GetSelectedPresetWidget(class UW_LoadoutItem_Preset_C** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.GetSelectedPresetWidget");
		
		UW_LoadoutItem_Presets_C_GetSelectedPresetWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.IsRenamingPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutItem_Presets_C::IsRenamingPreset(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.IsRenamingPreset");
		
		UW_LoadoutItem_Presets_C_IsRenamingPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.ConflictsWithOtherPresets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     Loadout_Item_Preset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutItem_Presets_C::ConflictsWithOtherPresets(class UW_LoadoutItem_Preset_C* Loadout_Item_Preset, const class FText& InText, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.ConflictsWithOtherPresets");
		
		UW_LoadoutItem_Presets_C_ConflictsWithOtherPresets_Params params {};
		params.Loadout_Item_Preset = Loadout_Item_Preset;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.UnhoverAllPresetsExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     Loadout_Item_Preset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Presets_C::UnhoverAllPresetsExcept(class UW_LoadoutItem_Preset_C* Loadout_Item_Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.UnhoverAllPresetsExcept");
		
		UW_LoadoutItem_Presets_C_UnhoverAllPresetsExcept_Params params {};
		params.Loadout_Item_Preset = Loadout_Item_Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.DeselectAllPresetsExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     Loadout_Item_Preset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Presets_C::DeselectAllPresetsExcept(class UW_LoadoutItem_Preset_C* Loadout_Item_Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.DeselectAllPresetsExcept");
		
		UW_LoadoutItem_Presets_C_DeselectAllPresetsExcept_Params params {};
		params.Loadout_Item_Preset = Loadout_Item_Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.StopRenamingPreset
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Presets_C::StopRenamingPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.StopRenamingPreset");
		
		UW_LoadoutItem_Presets_C_StopRenamingPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.StartRenamingPreset
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Presets_C::StartRenamingPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.StartRenamingPreset");
		
		UW_LoadoutItem_Presets_C_StartRenamingPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Enter
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Presets_C::Enter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Enter");
		
		UW_LoadoutItem_Presets_C_Enter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Exit
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Presets_C::Exit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Exit");
		
		UW_LoadoutItem_Presets_C_Exit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Escape
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Presets_C::Escape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Escape");
		
		UW_LoadoutItem_Presets_C_Escape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Presets_C::Select(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Select");
		
		UW_LoadoutItem_Presets_C_Select_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Click
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Presets_C::Click()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Click");
		
		UW_LoadoutItem_Presets_C_Click_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Unhover
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Presets_C::Unhover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Unhover");
		
		UW_LoadoutItem_Presets_C_Unhover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Hover
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Presets_C::Hover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Hover");
		
		UW_LoadoutItem_Presets_C_Hover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.PreviousRow
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Presets_C::PreviousRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.PreviousRow");
		
		UW_LoadoutItem_Presets_C_PreviousRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.NextRow
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Presets_C::NextRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.NextRow");
		
		UW_LoadoutItem_Presets_C_NextRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_LoadoutItem_Presets_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnKeyUp");
		
		UW_LoadoutItem_Presets_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_LoadoutItem_Presets_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnKeyDown");
		
		UW_LoadoutItem_Presets_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.InitializeWidget
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Presets_C::InitializeWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.InitializeWidget");
		
		UW_LoadoutItem_Presets_C_InitializeWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnLoadoutItemPresetButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Presets_C::OnLoadoutItemPresetButtonClicked(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnLoadoutItemPresetButtonClicked");
		
		UW_LoadoutItem_Presets_C_OnLoadoutItemPresetButtonClicked_Params params {};
		params.LoadoutItemPresetWidget = LoadoutItemPresetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnLoadoutItemPresetButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Presets_C::OnLoadoutItemPresetButtonHovered(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnLoadoutItemPresetButtonHovered");
		
		UW_LoadoutItem_Presets_C_OnLoadoutItemPresetButtonHovered_Params params {};
		params.LoadoutItemPresetWidget = LoadoutItemPresetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_LoadoutItem_Presets_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Construct");
		
		UW_LoadoutItem_Presets_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.ExecuteUbergraph_W_LoadoutItem_Presets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutItem_Presets_C::ExecuteUbergraph_W_LoadoutItem_Presets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.ExecuteUbergraph_W_LoadoutItem_Presets");
		
		UW_LoadoutItem_Presets_C_ExecuteUbergraph_W_LoadoutItem_Presets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_LoadoutItem_Presets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_LoadoutItem_Presets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_LoadoutItem_Presets.W_LoadoutItem_Presets_C");
		return ptr;
	}

}


