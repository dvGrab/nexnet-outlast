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
	 * 		Name   -> Function StaminaBar3.StaminaBar3_C.GetStaminaBoosterValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StaminaBoosterValue                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaminaBar3_C::GetStaminaBoosterValue(float* StaminaBoosterValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaBar3.StaminaBar3_C.GetStaminaBoosterValue");
		
		UStaminaBar3_C_GetStaminaBoosterValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StaminaBoosterValue != nullptr)
			*StaminaBoosterValue = params.StaminaBoosterValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaBar3.StaminaBar3_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UStaminaBar3_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaBar3.StaminaBar3_C.ShouldShow");
		
		UStaminaBar3_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaBar3.StaminaBar3_C.HandleMaxStaminaChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewMaxStamina                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaminaBar3_C::HandleMaxStaminaChanged(float NewMaxStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaBar3.StaminaBar3_C.HandleMaxStaminaChanged");
		
		UStaminaBar3_C_HandleMaxStaminaChanged_Params params {};
		params.NewMaxStamina = NewMaxStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaBar3.StaminaBar3_C.HandleStaminaChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newStamina                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaminaBar3_C::HandleStaminaChanged(float newStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaBar3.StaminaBar3_C.HandleStaminaChanged");
		
		UStaminaBar3_C_HandleStaminaChanged_Params params {};
		params.newStamina = newStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaBar3.StaminaBar3_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaminaBar3_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaBar3.StaminaBar3_C.PreConstruct");
		
		UStaminaBar3_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaBar3.StaminaBar3_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UStaminaBar3_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaBar3.StaminaBar3_C.Event_Show");
		
		UStaminaBar3_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaBar3.StaminaBar3_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UStaminaBar3_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaBar3.StaminaBar3_C.Event_Hide");
		
		UStaminaBar3_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaBar3.StaminaBar3_C.Event_OnWatchedPlayerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   oldPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaminaBar3_C::Event_OnWatchedPlayerChanged(class ARBPlayer* oldPlayer, class ARBPlayer* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaBar3.StaminaBar3_C.Event_OnWatchedPlayerChanged");
		
		UStaminaBar3_C_Event_OnWatchedPlayerChanged_Params params {};
		params.oldPlayer = oldPlayer;
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaBar3.StaminaBar3_C.Destruct
	 * 		Flags  -> ()
	 */
	void UStaminaBar3_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaBar3.StaminaBar3_C.Destruct");
		
		UStaminaBar3_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaBar3.StaminaBar3_C.OnStaminaChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newStamina                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsExhausted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaminaBar3_C::OnStaminaChanged(float newStamina, bool bIsExhausted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaBar3.StaminaBar3_C.OnStaminaChanged");
		
		UStaminaBar3_C_OnStaminaChanged_Params params {};
		params.newStamina = newStamina;
		params.bIsExhausted = bIsExhausted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaBar3.StaminaBar3_C.OnMaxStaminaChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              maxStamina                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaminaBar3_C::OnMaxStaminaChanged(float maxStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaBar3.StaminaBar3_C.OnMaxStaminaChanged");
		
		UStaminaBar3_C_OnMaxStaminaChanged_Params params {};
		params.maxStamina = maxStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaminaBar3.StaminaBar3_C.ExecuteUbergraph_StaminaBar3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaminaBar3_C::ExecuteUbergraph_StaminaBar3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaminaBar3.StaminaBar3_C.ExecuteUbergraph_StaminaBar3");
		
		UStaminaBar3_C_ExecuteUbergraph_StaminaBar3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaminaBar3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaminaBar3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StaminaBar3.StaminaBar3_C");
		return ptr;
	}

}


