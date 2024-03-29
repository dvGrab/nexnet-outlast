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
	 * 		Name   -> Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.StopPreviewing
	 * 		Flags  -> ()
	 */
	void ULocalPlayerCurrencyHorizontal_C::StopPreviewing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.StopPreviewing");
		
		ULocalPlayerCurrencyHorizontal_C_StopPreviewing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.PreviewCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULocalPlayerCurrencyHorizontal_C::PreviewCost(int32_t Cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.PreviewCost");
		
		ULocalPlayerCurrencyHorizontal_C_PreviewCost_Params params {};
		params.Cost = Cost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.Get_icon_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* ULocalPlayerCurrencyHorizontal_C::Get_icon_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.Get_icon_ToolTipWidget_1");
		
		ULocalPlayerCurrencyHorizontal_C_Get_icon_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.SetColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULocalPlayerCurrencyHorizontal_C::SetColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.SetColor");
		
		ULocalPlayerCurrencyHorizontal_C_SetColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.RefreshIcon
	 * 		Flags  -> ()
	 */
	void ULocalPlayerCurrencyHorizontal_C::RefreshIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.RefreshIcon");
		
		ULocalPlayerCurrencyHorizontal_C_RefreshIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.SetCurrencyType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECurrencyType                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULocalPlayerCurrencyHorizontal_C::SetCurrencyType(ECurrencyType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.SetCurrencyType");
		
		ULocalPlayerCurrencyHorizontal_C_SetCurrencyType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.RefreshValue
	 * 		Flags  -> ()
	 */
	void ULocalPlayerCurrencyHorizontal_C::RefreshValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.RefreshValue");
		
		ULocalPlayerCurrencyHorizontal_C_RefreshValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULocalPlayerCurrencyHorizontal_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.PreConstruct");
		
		ULocalPlayerCurrencyHorizontal_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.Construct
	 * 		Flags  -> ()
	 */
	void ULocalPlayerCurrencyHorizontal_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.Construct");
		
		ULocalPlayerCurrencyHorizontal_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.OnCurrenciesChanged_Event_1
	 * 		Flags  -> ()
	 */
	void ULocalPlayerCurrencyHorizontal_C::OnCurrenciesChanged_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.OnCurrenciesChanged_Event_1");
		
		ULocalPlayerCurrencyHorizontal_C_OnCurrenciesChanged_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.ExecuteUbergraph_LocalPlayerCurrencyHorizontal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULocalPlayerCurrencyHorizontal_C::ExecuteUbergraph_LocalPlayerCurrencyHorizontal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.ExecuteUbergraph_LocalPlayerCurrencyHorizontal");
		
		ULocalPlayerCurrencyHorizontal_C_ExecuteUbergraph_LocalPlayerCurrencyHorizontal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalPlayerCurrencyHorizontal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalPlayerCurrencyHorizontal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C");
		return ptr;
	}

}


