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
	 * 		Name   -> Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.StopPreviewingCosts
	 * 		Flags  -> ()
	 */
	void ULocalPlayerInfo_v2_C::StopPreviewingCosts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.StopPreviewingCosts");
		
		ULocalPlayerInfo_v2_C_StopPreviewingCosts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.PreviewCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<ECurrencyType, int32_t>                       Costs                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULocalPlayerInfo_v2_C::PreviewCost(TMap<ECurrencyType, int32_t> Costs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.PreviewCost");
		
		ULocalPlayerInfo_v2_C_PreviewCost_Params params {};
		params.Costs = Costs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULocalPlayerInfo_v2_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.SetText");
		
		ULocalPlayerInfo_v2_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.OnLoaded_C660C23545870CAB9A7274A288C8A37D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULocalPlayerInfo_v2_C::OnLoaded_C660C23545870CAB9A7274A288C8A37D(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.OnLoaded_C660C23545870CAB9A7274A288C8A37D");
		
		ULocalPlayerInfo_v2_C_OnLoaded_C660C23545870CAB9A7274A288C8A37D_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.OnLoaded_0E1F4792410C545D150CC28C05B61547
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULocalPlayerInfo_v2_C::OnLoaded_0E1F4792410C545D150CC28C05B61547(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.OnLoaded_0E1F4792410C545D150CC28C05B61547");
		
		ULocalPlayerInfo_v2_C_OnLoaded_0E1F4792410C545D150CC28C05B61547_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.Construct
	 * 		Flags  -> ()
	 */
	void ULocalPlayerInfo_v2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.Construct");
		
		ULocalPlayerInfo_v2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.OnPlayerIconEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerIconCustomizationOption*            Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULocalPlayerInfo_v2_C::OnPlayerIconEquipped(class URBPlayerIconCustomizationOption* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.OnPlayerIconEquipped");
		
		ULocalPlayerInfo_v2_C_OnPlayerIconEquipped_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.ExecuteUbergraph_LocalPlayerInfo_v2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULocalPlayerInfo_v2_C::ExecuteUbergraph_LocalPlayerInfo_v2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.ExecuteUbergraph_LocalPlayerInfo_v2");
		
		ULocalPlayerInfo_v2_C_ExecuteUbergraph_LocalPlayerInfo_v2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalPlayerInfo_v2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalPlayerInfo_v2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LocalPlayerInfo_v2.LocalPlayerInfo_v2_C");
		return ptr;
	}

}


