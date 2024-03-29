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
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_HotkeyBar_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.Construct");
		
		UW_HotkeyBar_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_HotkeyBar_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.PreConstruct");
		
		UW_HotkeyBar_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.SetBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct Fst_HotkeySettings                          Hotkey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_HotkeyBar_Entry_C::SetBinding(const struct Fst_HotkeySettings& Hotkey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.SetBinding");
		
		UW_HotkeyBar_Entry_C_SetBinding_Params params {};
		params.Hotkey = Hotkey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature");
		
		UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature");
		
		UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");
		
		UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature");
		
		UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature");
		
		UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.ExecuteUbergraph_W_HotkeyBar_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HotkeyBar_Entry_C::ExecuteUbergraph_W_HotkeyBar_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.ExecuteUbergraph_W_HotkeyBar_Entry");
		
		UW_HotkeyBar_Entry_C_ExecuteUbergraph_W_HotkeyBar_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.OnHotkeyButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_HotkeyBar_Entry_C*                        TriggeringHotkeyEntry                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HotkeyBar_Entry_C::OnHotkeyButtonClicked__DelegateSignature(class UW_HotkeyBar_Entry_C* TriggeringHotkeyEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.OnHotkeyButtonClicked__DelegateSignature");
		
		UW_HotkeyBar_Entry_C_OnHotkeyButtonClicked__DelegateSignature_Params params {};
		params.TriggeringHotkeyEntry = TriggeringHotkeyEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_HotkeyBar_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_HotkeyBar_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_HotkeyBar_Entry.W_HotkeyBar_Entry_C");
		return ptr;
	}

}


