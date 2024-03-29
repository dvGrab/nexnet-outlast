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
	 * 		Name   -> Function W_FireModes.W_FireModes_C.IsFadingOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_FireModes_C::IsFadingOut(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModes.W_FireModes_C.IsFadingOut");
		
		UW_FireModes_C_IsFadingOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.IsFadeOutTimerActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_FireModes_C::IsFadeOutTimerActive(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModes.W_FireModes_C.IsFadeOutTimerActive");
		
		UW_FireModes_C_IsFadeOutTimerActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.SetStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_FireModes_C::SetStyle(int32_t Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModes.W_FireModes_C.SetStyle");
		
		UW_FireModes_C_SetStyle_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.FadeOut
	 * 		Flags  -> ()
	 */
	void UW_FireModes_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModes.W_FireModes_C.FadeOut");
		
		UW_FireModes_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.UpdateAvailableFireModes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseWeapon*                                 Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_FireModes_C::UpdateAvailableFireModes(class ABaseWeapon* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModes.W_FireModes_C.UpdateAvailableFireModes");
		
		UW_FireModes_C_UpdateAvailableFireModes_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.Deselect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_FireMode_C*                               FireModeWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_FireModes_C::Deselect(class UW_FireMode_C* FireModeWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModes.W_FireModes_C.Deselect");
		
		UW_FireModes_C_Deselect_Params params {};
		params.FireModeWidget = FireModeWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.DeselectAll
	 * 		Flags  -> ()
	 */
	void UW_FireModes_C::DeselectAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModes.W_FireModes_C.DeselectAll");
		
		UW_FireModes_C_DeselectAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.DeselectAllExpect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_FireMode_C*                               FireModeWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_FireModes_C::DeselectAllExpect(class UW_FireMode_C* FireModeWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModes.W_FireModes_C.DeselectAllExpect");
		
		UW_FireModes_C_DeselectAllExpect_Params params {};
		params.FireModeWidget = FireModeWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_FireMode_C*                               FireModeWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_FireModes_C::Select(class UW_FireMode_C* FireModeWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModes.W_FireModes_C.Select");
		
		UW_FireModes_C_Select_Params params {};
		params.FireModeWidget = FireModeWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.SetFireMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFireMode                                          newFireMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_FireModes_C::SetFireMode(EFireMode newFireMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModes.W_FireModes_C.SetFireMode");
		
		UW_FireModes_C_SetFireMode_Params params {};
		params.newFireMode = newFireMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.OnWeaponEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseWeapon*                                 NewWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_FireModes_C::OnWeaponEquipped(class ABaseWeapon* NewWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModes.W_FireModes_C.OnWeaponEquipped");
		
		UW_FireModes_C_OnWeaponEquipped_Params params {};
		params.NewWeapon = NewWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.ExecuteUbergraph_W_FireModes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_FireModes_C::ExecuteUbergraph_W_FireModes(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_FireModes.W_FireModes_C.ExecuteUbergraph_W_FireModes");
		
		UW_FireModes_C_ExecuteUbergraph_W_FireModes_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_FireModes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_FireModes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_FireModes.W_FireModes_C");
		return ptr;
	}

}


