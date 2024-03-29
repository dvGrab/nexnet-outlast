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
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Hotkeys_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Hotkeys.W_Hotkeys_C.Construct");
		
		UW_Hotkeys_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.OnQuickThrowStart_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   LastItemBeforeQuickThrow                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   QuickThrowGrenade                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Hotkeys_C::OnQuickThrowStart_Event_1(class ABaseItem* LastItemBeforeQuickThrow, class ABaseItem* QuickThrowGrenade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Hotkeys.W_Hotkeys_C.OnQuickThrowStart_Event_1");
		
		UW_Hotkeys_C_OnQuickThrowStart_Event_1_Params params {};
		params.LastItemBeforeQuickThrow = LastItemBeforeQuickThrow;
		params.QuickThrowGrenade = QuickThrowGrenade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.OnQuickThrowEnd_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   QuickThrowGrenade                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Hotkeys_C::OnQuickThrowEnd_Event_1(class ABaseItem* QuickThrowGrenade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Hotkeys.W_Hotkeys_C.OnQuickThrowEnd_Event_1");
		
		UW_Hotkeys_C_OnQuickThrowEnd_Event_1_Params params {};
		params.QuickThrowGrenade = QuickThrowGrenade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.OnSecondarySightToggled_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUsingSecondarySight                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABaseMagazineWeapon*                         Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Hotkeys_C::OnSecondarySightToggled_Event_1(bool bUsingSecondarySight, class ABaseMagazineWeapon* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Hotkeys.W_Hotkeys_C.OnSecondarySightToggled_Event_1");
		
		UW_Hotkeys_C_OnSecondarySightToggled_Event_1_Params params {};
		params.bUsingSecondarySight = bUsingSecondarySight;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.OnAttachmentLightToggled_Event_1
	 * 		Flags  -> ()
	 */
	void UW_Hotkeys_C::OnAttachmentLightToggled_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Hotkeys.W_Hotkeys_C.OnAttachmentLightToggled_Event_1");
		
		UW_Hotkeys_C_OnAttachmentLightToggled_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.OnNightVisionGogglesToggled_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNVGOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Hotkeys_C::OnNightVisionGogglesToggled_Event_1(bool bNVGOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Hotkeys.W_Hotkeys_C.OnNightVisionGogglesToggled_Event_1");
		
		UW_Hotkeys_C_OnNightVisionGogglesToggled_Event_1_Params params {};
		params.bNVGOn = bNVGOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.RefreshHotkeyInput
	 * 		Flags  -> ()
	 */
	void UW_Hotkeys_C::RefreshHotkeyInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Hotkeys.W_Hotkeys_C.RefreshHotkeyInput");
		
		UW_Hotkeys_C_RefreshHotkeyInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.ExecuteUbergraph_W_Hotkeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Hotkeys_C::ExecuteUbergraph_W_Hotkeys(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Hotkeys.W_Hotkeys_C.ExecuteUbergraph_W_Hotkeys");
		
		UW_Hotkeys_C_ExecuteUbergraph_W_Hotkeys_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Hotkeys_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Hotkeys_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Hotkeys.W_Hotkeys_C");
		return ptr;
	}

}


