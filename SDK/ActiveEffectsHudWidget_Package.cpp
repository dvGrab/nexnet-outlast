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
	 * 		Name   -> Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.Refresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FActiveEffectTrackingData>           activeEffectTrackingDataEntries                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UActiveEffectsHudWidget_C::Refresh(TArray<struct FActiveEffectTrackingData>* activeEffectTrackingDataEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.Refresh");
		
		UActiveEffectsHudWidget_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (activeEffectTrackingDataEntries != nullptr)
			*activeEffectTrackingDataEntries = params.activeEffectTrackingDataEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.RemoveActiveEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EffectId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActiveEffectsHudWidget_C::RemoveActiveEffect(const class FName& EffectId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.RemoveActiveEffect");
		
		UActiveEffectsHudWidget_C_RemoveActiveEffect_Params params {};
		params.EffectId = EffectId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.UpdateActiveEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActiveEffectTrackingData                   activeEffectTrackingDataEntry                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UActiveEffectsHudWidget_C::UpdateActiveEffect(const struct FActiveEffectTrackingData& activeEffectTrackingDataEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.UpdateActiveEffect");
		
		UActiveEffectsHudWidget_C_UpdateActiveEffect_Params params {};
		params.activeEffectTrackingDataEntry = activeEffectTrackingDataEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.AddActiveEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActiveEffectTrackingData                   activeEffectTrackingDataEntry                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UActiveEffectsHudWidget_C::AddActiveEffect(const struct FActiveEffectTrackingData& activeEffectTrackingDataEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.AddActiveEffect");
		
		UActiveEffectsHudWidget_C_AddActiveEffect_Params params {};
		params.activeEffectTrackingDataEntry = activeEffectTrackingDataEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActiveEffectsHudWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.PreConstruct");
		
		UActiveEffectsHudWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.Event_OnWatchedPlayerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   oldPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActiveEffectsHudWidget_C::Event_OnWatchedPlayerChanged(class ARBPlayer* oldPlayer, class ARBPlayer* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.Event_OnWatchedPlayerChanged");
		
		UActiveEffectsHudWidget_C_Event_OnWatchedPlayerChanged_Params params {};
		params.oldPlayer = oldPlayer;
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.ExecuteUbergraph_ActiveEffectsHudWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActiveEffectsHudWidget_C::ExecuteUbergraph_ActiveEffectsHudWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.ExecuteUbergraph_ActiveEffectsHudWidget");
		
		UActiveEffectsHudWidget_C_ExecuteUbergraph_ActiveEffectsHudWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveEffectsHudWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveEffectsHudWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ActiveEffectsHudWidget.ActiveEffectsHudWidget_C");
		return ptr;
	}

}


