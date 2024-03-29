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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.GetOwningPlayerCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::GetOwningPlayerCharacter(class APlayerCharacter** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.GetOwningPlayerCharacter");
		
		UW_HumanCharacter_HUD_V2_C_GetOwningPlayerCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowFireModes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseWeapon*                                 Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::ShowFireModes(class ABaseWeapon* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowFireModes");
		
		UW_HumanCharacter_HUD_V2_C_ShowFireModes_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowMagCheck
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::ShowMagCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowMagCheck");
		
		UW_HumanCharacter_HUD_V2_C_ShowMagCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponFireModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFireMode                                          newFireMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::OnWeaponFireModeChanged(EFireMode newFireMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponFireModeChanged");
		
		UW_HumanCharacter_HUD_V2_C_OnWeaponFireModeChanged_Params params {};
		params.newFireMode = newFireMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.TickCommandContext
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::TickCommandContext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.TickCommandContext");
		
		UW_HumanCharacter_HUD_V2_C_TickCommandContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddMapActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapActorComponent*                          MapActorComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      MapActorIconWidgetClass                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 IconBrush                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                IconColor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                IconTextColor                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RotationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UMapActorWidget* UW_HumanCharacter_HUD_V2_C::AddMapActor(class UMapActorComponent* MapActorComponent, class UClass* MapActorIconWidgetClass, const struct FSlateBrush& IconBrush, const struct FLinearColor& IconColor, const struct FLinearColor& IconTextColor, float RotationOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddMapActor");
		
		UW_HumanCharacter_HUD_V2_C_AddMapActor_Params params {};
		params.MapActorComponent = MapActorComponent;
		params.MapActorIconWidgetClass = MapActorIconWidgetClass;
		params.IconBrush = IconBrush;
		params.IconColor = IconColor;
		params.IconTextColor = IconTextColor;
		params.RotationOffset = RotationOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.PreviousTabletMenu
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::PreviousTabletMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.PreviousTabletMenu");
		
		UW_HumanCharacter_HUD_V2_C_PreviousTabletMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.NextTabletMenu
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::NextTabletMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.NextTabletMenu");
		
		UW_HumanCharacter_HUD_V2_C_NextTabletMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideTablet
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::HideTablet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideTablet");
		
		UW_HumanCharacter_HUD_V2_C_HideTablet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTablet
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::ShowTablet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTablet");
		
		UW_HumanCharacter_HUD_V2_C_ShowTablet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideIncriminationExtractionHUD
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::HideIncriminationExtractionHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideIncriminationExtractionHUD");
		
		UW_HumanCharacter_HUD_V2_C_HideIncriminationExtractionHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowIncriminationExtractionHUD
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::ShowIncriminationExtractionHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowIncriminationExtractionHUD");
		
		UW_HumanCharacter_HUD_V2_C_ShowIncriminationExtractionHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateCurrentFireMode
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::UpdateCurrentFireMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateCurrentFireMode");
		
		UW_HumanCharacter_HUD_V2_C_UpdateCurrentFireMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.FadeInHUD
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::FadeInHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.FadeInHUD");
		
		UW_HumanCharacter_HUD_V2_C_FadeInHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.InitializeItemSelectionPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_HumanCharacter_HUD_V2_C::InitializeItemSelectionPanel(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.InitializeItemSelectionPanel");
		
		UW_HumanCharacter_HUD_V2_C_InitializeItemSelectionPanel_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.EnabledCurvedHUD
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::EnabledCurvedHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.EnabledCurvedHUD");
		
		UW_HumanCharacter_HUD_V2_C_EnabledCurvedHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.DisableCurvedHUD
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::DisableCurvedHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.DisableCurvedHUD");
		
		UW_HumanCharacter_HUD_V2_C_DisableCurvedHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.IsCurvedHUDEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_HumanCharacter_HUD_V2_C::IsCurvedHUDEnabled(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.IsCurvedHUDEnabled");
		
		UW_HumanCharacter_HUD_V2_C_IsCurvedHUDEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateCurveHUDValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::UpdateCurveHUDValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateCurveHUDValue");
		
		UW_HumanCharacter_HUD_V2_C_UpdateCurveHUDValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ToggleCurvedHUD
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::ToggleCurvedHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ToggleCurvedHUD");
		
		UW_HumanCharacter_HUD_V2_C_ToggleCurvedHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ToggleHUDSway
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::ToggleHUDSway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ToggleHUDSway");
		
		UW_HumanCharacter_HUD_V2_C_ToggleHUDSway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Construct");
		
		UW_HumanCharacter_HUD_V2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Tick");
		
		UW_HumanCharacter_HUD_V2_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Re-Initialize Item Selection Menu
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::Re_Initialize_Item_Selection_Menu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Re-Initialize Item Selection Menu");
		
		UW_HumanCharacter_HUD_V2_C_Re_Initialize_Item_Selection_Menu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponFireModeChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFireMode                                          newFireMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFireMode                                          LastFireMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::OnWeaponFireModeChanged_Event_1(EFireMode newFireMode, EFireMode LastFireMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponFireModeChanged_Event_1");
		
		UW_HumanCharacter_HUD_V2_C_OnWeaponFireModeChanged_Event_1_Params params {};
		params.newFireMode = newFireMode;
		params.LastFireMode = LastFireMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.InitalizeDelegateEvents
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::InitalizeDelegateEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.InitalizeDelegateEvents");
		
		UW_HumanCharacter_HUD_V2_C_InitalizeDelegateEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ReflectHUDSettings
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::ReflectHUDSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ReflectHUDSettings");
		
		UW_HumanCharacter_HUD_V2_C_ReflectHUDSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ChatPressed
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::ChatPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ChatPressed");
		
		UW_HumanCharacter_HUD_V2_C_ChatPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.TeamChatPressed
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::TeamChatPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.TeamChatPressed");
		
		UW_HumanCharacter_HUD_V2_C_TeamChatPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.RemoveMapActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapActorComponent*                          MapActorComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::RemoveMapActor(class UMapActorComponent* MapActorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.RemoveMapActor");
		
		UW_HumanCharacter_HUD_V2_C_RemoveMapActor_Params params {};
		params.MapActorComponent = MapActorComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateMapFloors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBuildingFloor>                      Floors                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_HumanCharacter_HUD_V2_C::UpdateMapFloors(TArray<struct FBuildingFloor> Floors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateMapFloors");
		
		UW_HumanCharacter_HUD_V2_C_UpdateMapFloors_Params params {};
		params.Floors = Floors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponMagCheck_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         MagazineWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::OnWeaponMagCheck_Event_1(class ABaseMagazineWeapon* MagazineWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponMagCheck_Event_1");
		
		UW_HumanCharacter_HUD_V2_C_OnWeaponMagCheck_Event_1_Params params {};
		params.MagazineWeapon = MagazineWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnInventoryItemsChanged
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::OnInventoryItemsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnInventoryItemsChanged");
		
		UW_HumanCharacter_HUD_V2_C_OnInventoryItemsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddScorePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ScoreText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            ScoreValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bGive                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_HumanCharacter_HUD_V2_C::AddScorePopup(const class FText& ScoreText, int32_t ScoreValue, bool bGive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddScorePopup");
		
		UW_HumanCharacter_HUD_V2_C_AddScorePopup_Params params {};
		params.ScoreText = ScoreText;
		params.ScoreValue = ScoreValue;
		params.bGive = bGive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTutorialPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MessageID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bFirstShowing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        MessageTitle                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FText>                                MessageContent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_HumanCharacter_HUD_V2_C::ShowTutorialPrompt(const class FString& MessageID, bool bFirstShowing, const class FText& MessageTitle, TArray<class FText> MessageContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTutorialPrompt");
		
		UW_HumanCharacter_HUD_V2_C_ShowTutorialPrompt_Params params {};
		params.MessageID = MessageID;
		params.bFirstShowing = bFirstShowing;
		params.MessageTitle = MessageTitle;
		params.MessageContent = MessageContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideTutorialPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MessageID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::HideTutorialPrompt(const class FString& MessageID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideTutorialPrompt");
		
		UW_HumanCharacter_HUD_V2_C_HideTutorialPrompt_Params params {};
		params.MessageID = MessageID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTutorialOverview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MessageID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        MessageTitle                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FText>                                MessageContent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_HumanCharacter_HUD_V2_C::ShowTutorialOverview(const class FString& MessageID, const class FText& MessageTitle, TArray<class FText> MessageContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTutorialOverview");
		
		UW_HumanCharacter_HUD_V2_C_ShowTutorialOverview_Params params {};
		params.MessageID = MessageID;
		params.MessageTitle = MessageTitle;
		params.MessageContent = MessageContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnTeamViewSet_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        NewViewCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::OnTeamViewSet_Event_1(class AReadyOrNotCharacter* NewViewCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnTeamViewSet_Event_1");
		
		UW_HumanCharacter_HUD_V2_C_OnTeamViewSet_Event_1_Params params {};
		params.NewViewCharacter = NewViewCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnMenuOpened_Event_1
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::OnMenuOpened_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnMenuOpened_Event_1");
		
		UW_HumanCharacter_HUD_V2_C_OnMenuOpened_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemEquipped_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::OnItemEquipped_Event_1(class ABaseItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemEquipped_Event_1");
		
		UW_HumanCharacter_HUD_V2_C_OnItemEquipped_Event_1_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnBodyPartDamaged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHeadDamaged                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBodyDamaged                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftArmDamaged                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRightArmDamaged                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftLegDamaged                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRightLegDamaged                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftFootDamaged                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRightFootDamaged                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_HumanCharacter_HUD_V2_C::OnBodyPartDamaged_Event_1(bool bHeadDamaged, bool bBodyDamaged, bool bLeftArmDamaged, bool bRightArmDamaged, bool bLeftLegDamaged, bool bRightLegDamaged, bool bLeftFootDamaged, bool bRightFootDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnBodyPartDamaged_Event_1");
		
		UW_HumanCharacter_HUD_V2_C_OnBodyPartDamaged_Event_1_Params params {};
		params.bHeadDamaged = bHeadDamaged;
		params.bBodyDamaged = bBodyDamaged;
		params.bLeftArmDamaged = bLeftArmDamaged;
		params.bRightArmDamaged = bRightArmDamaged;
		params.bLeftLegDamaged = bLeftLegDamaged;
		params.bRightLegDamaged = bRightLegDamaged;
		params.bLeftFootDamaged = bLeftFootDamaged;
		params.bRightFootDamaged = bRightFootDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Reconstruct
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::Reconstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Reconstruct");
		
		UW_HumanCharacter_HUD_V2_C_Reconstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_Pressed_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GroupIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::OnItemGroupSelection_Pressed_Event_1(int32_t GroupIndex, int32_t CategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_Pressed_Event_1");
		
		UW_HumanCharacter_HUD_V2_C_OnItemGroupSelection_Pressed_Event_1_Params params {};
		params.GroupIndex = GroupIndex;
		params.CategoryIndex = CategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_Released_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GroupIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::OnItemGroupSelection_Released_Event_1(int32_t GroupIndex, int32_t CategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_Released_Event_1");
		
		UW_HumanCharacter_HUD_V2_C_OnItemGroupSelection_Released_Event_1_Params params {};
		params.GroupIndex = GroupIndex;
		params.CategoryIndex = CategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateItemSelectionPanel
	 * 		Flags  -> ()
	 */
	void UW_HumanCharacter_HUD_V2_C::UpdateItemSelectionPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateItemSelectionPanel");
		
		UW_HumanCharacter_HUD_V2_C_UpdateItemSelectionPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnCharacterTakeDamage_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InstigatorCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AReadyOrNotCharacter*                        DamagedCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealthRemaining                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::OnCharacterTakeDamage_Event_1(class AReadyOrNotCharacter* InstigatorCharacter, class AReadyOrNotCharacter* DamagedCharacter, class AActor* DamageCauser, float Damage, float HealthRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnCharacterTakeDamage_Event_1");
		
		UW_HumanCharacter_HUD_V2_C_OnCharacterTakeDamage_Event_1_Params params {};
		params.InstigatorCharacter = InstigatorCharacter;
		params.DamagedCharacter = DamagedCharacter;
		params.DamageCauser = DamageCauser;
		params.Damage = Damage;
		params.HealthRemaining = HealthRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_ItemChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GroupIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::OnItemGroupSelection_ItemChanged_Event_1(int32_t GroupIndex, int32_t CategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_ItemChanged_Event_1");
		
		UW_HumanCharacter_HUD_V2_C_OnItemGroupSelection_ItemChanged_Event_1_Params params {};
		params.GroupIndex = GroupIndex;
		params.CategoryIndex = CategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ExecuteUbergraph_W_HumanCharacter_HUD_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_HumanCharacter_HUD_V2_C::ExecuteUbergraph_W_HumanCharacter_HUD_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ExecuteUbergraph_W_HumanCharacter_HUD_V2");
		
		UW_HumanCharacter_HUD_V2_C_ExecuteUbergraph_W_HumanCharacter_HUD_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_HumanCharacter_HUD_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_HumanCharacter_HUD_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C");
		return ptr;
	}

}


