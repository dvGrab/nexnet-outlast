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
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Event_InventoryUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryUpdateEventType                          InventoryEventType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverheadInfo_C::Event_InventoryUpdated(EInventoryUpdateEventType InventoryEventType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Event_InventoryUpdated");
		
		UOverheadInfo_C_Event_InventoryUpdated_Params params {};
		params.InventoryEventType = InventoryEventType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Event_PlayerHealthChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverheadInfo_C::Event_PlayerHealthChanged(float newHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Event_PlayerHealthChanged");
		
		UOverheadInfo_C_Event_PlayerHealthChanged_Params params {};
		params.newHealth = newHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Event_ImposterUpdated
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::Event_ImposterUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Event_ImposterUpdated");
		
		UOverheadInfo_C_Event_ImposterUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Event_PlayerStateUpdated
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::Event_PlayerStateUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Event_PlayerStateUpdated");
		
		UOverheadInfo_C_Event_PlayerStateUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Event_PlayerIndicatorTypeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerIndicatorType                               playerIndicatorType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverheadInfo_C::Event_PlayerIndicatorTypeChanged(EPlayerIndicatorType playerIndicatorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Event_PlayerIndicatorTypeChanged");
		
		UOverheadInfo_C_Event_PlayerIndicatorTypeChanged_Params params {};
		params.playerIndicatorType = playerIndicatorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Event_PlayerMaxHealthChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newMaxHealth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverheadInfo_C::Event_PlayerMaxHealthChanged(float newMaxHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Event_PlayerMaxHealthChanged");
		
		UOverheadInfo_C_Event_PlayerMaxHealthChanged_Params params {};
		params.newMaxHealth = newMaxHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Event_CurrentLoadoutChanged
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::Event_CurrentLoadoutChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Event_CurrentLoadoutChanged");
		
		UOverheadInfo_C_Event_CurrentLoadoutChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Event_PlayerPartyStateUpdated
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::Event_PlayerPartyStateUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Event_PlayerPartyStateUpdated");
		
		UOverheadInfo_C_Event_PlayerPartyStateUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Event_HUDSettingsUpdated
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::Event_HUDSettingsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Event_HUDSettingsUpdated");
		
		UOverheadInfo_C_Event_HUDSettingsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.UpdateDisplay_old_DEPRECATED_NOT_USED
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::UpdateDisplay_old_DEPRECATED_NOT_USED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.UpdateDisplay_old_DEPRECATED_NOT_USED");
		
		UOverheadInfo_C_UpdateDisplay_old_DEPRECATED_NOT_USED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.UpdateDistanceEffects_DEPRECATED_NOT_USED
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::UpdateDistanceEffects_DEPRECATED_NOT_USED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.UpdateDistanceEffects_DEPRECATED_NOT_USED");
		
		UOverheadInfo_C_UpdateDistanceEffects_DEPRECATED_NOT_USED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.UpdateActiveSkillType
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::UpdateActiveSkillType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.UpdateActiveSkillType");
		
		UOverheadInfo_C_UpdateActiveSkillType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.UpdateElementVisibility
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::UpdateElementVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.UpdateElementVisibility");
		
		UOverheadInfo_C_UpdateElementVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.UpdatePartyState
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::UpdatePartyState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.UpdatePartyState");
		
		UOverheadInfo_C_UpdatePartyState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.InithHealthBarVisibility
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::InithHealthBarVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.InithHealthBarVisibility");
		
		UOverheadInfo_C_InithHealthBarVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.SetImposterName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CopiedName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UOverheadInfo_C::SetImposterName(const class FString& CopiedName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.SetImposterName");
		
		UOverheadInfo_C_SetImposterName_Params params {};
		params.CopiedName = CopiedName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.UpdateTradeItem
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::UpdateTradeItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.UpdateTradeItem");
		
		UOverheadInfo_C_UpdateTradeItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Construct");
		
		UOverheadInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Event_Show");
		
		UOverheadInfo_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Event_Hide");
		
		UOverheadInfo_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.ExecuteUbergraph_OverheadInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverheadInfo_C::ExecuteUbergraph_OverheadInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.ExecuteUbergraph_OverheadInfo");
		
		UOverheadInfo_C_ExecuteUbergraph_OverheadInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOverheadInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOverheadInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OverheadInfo.OverheadInfo_C");
		return ptr;
	}

}


