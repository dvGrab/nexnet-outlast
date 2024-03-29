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
	 * 		Name   -> Function W_HotkeyBar.W_HotkeyBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_HotkeyBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar.W_HotkeyBar_C.PreConstruct");
		
		UW_HotkeyBar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar.W_HotkeyBar_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_HotkeyBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar.W_HotkeyBar_C.Construct");
		
		UW_HotkeyBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar.W_HotkeyBar_C.UpdateHints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct Fst_HotkeySettings>                  Hotkeys                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_HotkeyBar_C::UpdateHints(TArray<struct Fst_HotkeySettings> Hotkeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar.W_HotkeyBar_C.UpdateHints");
		
		UW_HotkeyBar_C_UpdateHints_Params params {};
		params.Hotkeys = Hotkeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar.W_HotkeyBar_C.HotkeyButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_HotkeyBar_Entry_C*                        TriggeringHotkeyEntry                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HotkeyBar_C::HotkeyButtonClicked(class UW_HotkeyBar_Entry_C* TriggeringHotkeyEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar.W_HotkeyBar_C.HotkeyButtonClicked");
		
		UW_HotkeyBar_C_HotkeyButtonClicked_Params params {};
		params.TriggeringHotkeyEntry = TriggeringHotkeyEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar.W_HotkeyBar_C.ExecuteUbergraph_W_HotkeyBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HotkeyBar_C::ExecuteUbergraph_W_HotkeyBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar.W_HotkeyBar_C.ExecuteUbergraph_W_HotkeyBar");
		
		UW_HotkeyBar_C_ExecuteUbergraph_W_HotkeyBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar.W_HotkeyBar_C.OnHotkeyClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      HotkeyID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_HotkeyBar_C::OnHotkeyClicked__DelegateSignature(const class FString& HotkeyID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar.W_HotkeyBar_C.OnHotkeyClicked__DelegateSignature");
		
		UW_HotkeyBar_C_OnHotkeyClicked__DelegateSignature_Params params {};
		params.HotkeyID = HotkeyID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_HotkeyBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_HotkeyBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_HotkeyBar.W_HotkeyBar_C");
		return ptr;
	}

}


