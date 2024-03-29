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
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.SetHoldRequirement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RequiresHold                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionIconWidget_C::SetHoldRequirement(bool RequiresHold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.SetHoldRequirement");
		
		UActionIconWidget_C_SetHoldRequirement_Params params {};
		params.RequiresHold = RequiresHold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.ResetVisibleIcons
	 * 		Flags  -> ()
	 */
	void UActionIconWidget_C::ResetVisibleIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.ResetVisibleIcons");
		
		UActionIconWidget_C_ResetVisibleIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.SetWidgetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionIconWidget_C::SetWidgetVisible(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.SetWidgetVisible");
		
		UActionIconWidget_C_SetWidgetVisible_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.UpdateSize
	 * 		Flags  -> ()
	 */
	void UActionIconWidget_C::UpdateSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.UpdateSize");
		
		UActionIconWidget_C_UpdateSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.SetDesiredHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DesiredHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionIconWidget_C::SetDesiredHeight(float DesiredHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.SetDesiredHeight");
		
		UActionIconWidget_C_SetDesiredHeight_Params params {};
		params.DesiredHeight = DesiredHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.ShowContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionIconWidget_C::ShowContainer(class UPanelWidget* container)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.ShowContainer");
		
		UActionIconWidget_C_ShowContainer_Params params {};
		params.container = container;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.HideIcons
	 * 		Flags  -> ()
	 */
	void UActionIconWidget_C::HideIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.HideIcons");
		
		UActionIconWidget_C_HideIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.RefreshActionIcon
	 * 		Flags  -> ()
	 */
	void UActionIconWidget_C::RefreshActionIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.RefreshActionIcon");
		
		UActionIconWidget_C_RefreshActionIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.SetActionName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewActionName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionIconWidget_C::SetActionName(const class FName& NewActionName, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.SetActionName");
		
		UActionIconWidget_C_SetActionName_Params params {};
		params.NewActionName = NewActionName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionIconWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.PreConstruct");
		
		UActionIconWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UActionIconWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.Construct");
		
		UActionIconWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionIconWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.Tick");
		
		UActionIconWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.OnMenuInputSourceChanged
	 * 		Flags  -> ()
	 */
	void UActionIconWidget_C::OnMenuInputSourceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.OnMenuInputSourceChanged");
		
		UActionIconWidget_C_OnMenuInputSourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.OnMenuActionProgressChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              newProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionIconWidget_C::OnMenuActionProgressChanged(const class FName& ActionName, float newProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.OnMenuActionProgressChanged");
		
		UActionIconWidget_C_OnMenuActionProgressChanged_Params params {};
		params.ActionName = ActionName;
		params.newProgress = newProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.OnHudActionProgressChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionIconWidget_C::OnHudActionProgressChanged(float newProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.OnHudActionProgressChanged");
		
		UActionIconWidget_C_OnHudActionProgressChanged_Params params {};
		params.newProgress = newProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionIconWidget.ActionIconWidget_C.ExecuteUbergraph_ActionIconWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionIconWidget_C::ExecuteUbergraph_ActionIconWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionIconWidget.ActionIconWidget_C.ExecuteUbergraph_ActionIconWidget");
		
		UActionIconWidget_C_ExecuteUbergraph_ActionIconWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionIconWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionIconWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ActionIconWidget.ActionIconWidget_C");
		return ptr;
	}

}


