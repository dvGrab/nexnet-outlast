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
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.HandleMaxBatteryChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Max_Battery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNightVision_C::HandleMaxBatteryChange(float Max_Battery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.HandleMaxBatteryChange");
		
		UHUDNightVision_C_HandleMaxBatteryChange_Params params {};
		params.Max_Battery = Max_Battery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.GetBatteryBoosterValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StaminaBoosterValue                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNightVision_C::GetBatteryBoosterValue(float* StaminaBoosterValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.GetBatteryBoosterValue");
		
		UHUDNightVision_C_GetBatteryBoosterValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StaminaBoosterValue != nullptr)
			*StaminaBoosterValue = params.StaminaBoosterValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.UpdateRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              batteryValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNightVision_C::UpdateRatio(float batteryValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.UpdateRatio");
		
		UHUDNightVision_C_UpdateRatio_Params params {};
		params.batteryValue = batteryValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.SetIsNVActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isNvActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDNightVision_C::SetIsNVActive(bool isNvActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.SetIsNVActive");
		
		UHUDNightVision_C_SetIsNVActive_Params params {};
		params.isNvActive = isNvActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UHUDNightVision_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.ShouldShow");
		
		UHUDNightVision_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UHUDNightVision_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.Event_Show");
		
		UHUDNightVision_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UHUDNightVision_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.Event_Hide");
		
		UHUDNightVision_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUDNightVision_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.Construct");
		
		UHUDNightVision_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.Event_OnWatchedPlayerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   oldPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNightVision_C::Event_OnWatchedPlayerChanged(class ARBPlayer* oldPlayer, class ARBPlayer* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.Event_OnWatchedPlayerChanged");
		
		UHUDNightVision_C_Event_OnWatchedPlayerChanged_Params params {};
		params.oldPlayer = oldPlayer;
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.OnNVChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDNightVision_C::OnNVChanged(bool bOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.OnNVChanged");
		
		UHUDNightVision_C_OnNVChanged_Params params {};
		params.bOn = bOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.OnActiveSkillChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBActiveSkill*                              activeSkillActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNightVision_C::OnActiveSkillChanged(class ARBActiveSkill* activeSkillActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.OnActiveSkillChanged");
		
		UHUDNightVision_C_OnActiveSkillChanged_Params params {};
		params.activeSkillActor = activeSkillActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.OnActiveSkillActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBActiveSkill*                              ActiveSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDNightVision_C::OnActiveSkillActivated(class ARBActiveSkill* ActiveSkill, bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.OnActiveSkillActivated");
		
		UHUDNightVision_C_OnActiveSkillActivated_Params params {};
		params.ActiveSkill = ActiveSkill;
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.BindPlayerEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNightVision_C::BindPlayerEvents(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.BindPlayerEvents");
		
		UHUDNightVision_C_BindPlayerEvents_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.UnbindPlayerEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNightVision_C::UnbindPlayerEvents(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.UnbindPlayerEvents");
		
		UHUDNightVision_C_UnbindPlayerEvents_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.OnMaxNVBatteryChangedDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              maxBattery                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNightVision_C::OnMaxNVBatteryChangedDelegate_Event_1(float maxBattery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.OnMaxNVBatteryChangedDelegate_Event_1");
		
		UHUDNightVision_C_OnMaxNVBatteryChangedDelegate_Event_1_Params params {};
		params.maxBattery = maxBattery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.OnBatteryLevelChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              batteryLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNightVision_C::OnBatteryLevelChanged(float batteryLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.OnBatteryLevelChanged");
		
		UHUDNightVision_C_OnBatteryLevelChanged_Params params {};
		params.batteryLevel = batteryLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UHUDNightVision_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.CustomEvent_1");
		
		UHUDNightVision_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDNightVision.HUDNightVision_C.ExecuteUbergraph_HUDNightVision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNightVision_C::ExecuteUbergraph_HUDNightVision(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNightVision.HUDNightVision_C.ExecuteUbergraph_HUDNightVision");
		
		UHUDNightVision_C_ExecuteUbergraph_HUDNightVision_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDNightVision_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDNightVision_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDNightVision.HUDNightVision_C");
		return ptr;
	}

}


