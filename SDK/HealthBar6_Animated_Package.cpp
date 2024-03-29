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
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.UpdateFifthBarVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AnimateShow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHealthBar6_Animated_C::UpdateFifthBarVisibility(bool Show, bool AnimateShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.UpdateFifthBarVisibility");
		
		UHealthBar6_Animated_C_UpdateFifthBarVisibility_Params params {};
		params.Show = Show;
		params.AnimateShow = AnimateShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.InitHealthBars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AnimateShow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHealthBar6_Animated_C::InitHealthBars(bool AnimateShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.InitHealthBars");
		
		UHealthBar6_Animated_C_InitHealthBars_Params params {};
		params.AnimateShow = AnimateShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.ProcessPlayerStatusChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerIndicatorType                               NewStatus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHealthBar6_Animated_C::ProcessPlayerStatusChange(EPlayerIndicatorType NewStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.ProcessPlayerStatusChange");
		
		UHealthBar6_Animated_C_ProcessPlayerStatusChange_Params params {};
		params.NewStatus = NewStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.ChainTweens
	 * 		Flags  -> ()
	 */
	void UHealthBar6_Animated_C::ChainTweens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.ChainTweens");
		
		UHealthBar6_Animated_C_ChainTweens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.ProcessHealthEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Increased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SkipAnims                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHealthBar6_Animated_C::ProcessHealthEvent(float newHealth, bool Increased, bool SkipAnims)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.ProcessHealthEvent");
		
		UHealthBar6_Animated_C_ProcessHealthEvent_Params params {};
		params.newHealth = newHealth;
		params.Increased = Increased;
		params.SkipAnims = SkipAnims;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UHealthBar6_Animated_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.ShouldShow");
		
		UHealthBar6_Animated_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UHealthBar6_Animated_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.Event_Show");
		
		UHealthBar6_Animated_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UHealthBar6_Animated_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.Event_Hide");
		
		UHealthBar6_Animated_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHealthBar6_Animated_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.PreConstruct");
		
		UHealthBar6_Animated_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.Event_OnWatchedPlayerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   oldPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHealthBar6_Animated_C::Event_OnWatchedPlayerChanged(class ARBPlayer* oldPlayer, class ARBPlayer* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.Event_OnWatchedPlayerChanged");
		
		UHealthBar6_Animated_C_Event_OnWatchedPlayerChanged_Params params {};
		params.oldPlayer = oldPlayer;
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.OnHealthUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIncreased                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHealthBar6_Animated_C::OnHealthUpdated(float newHealth, bool bIncreased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.OnHealthUpdated");
		
		UHealthBar6_Animated_C_OnHealthUpdated_Params params {};
		params.newHealth = newHealth;
		params.bIncreased = bIncreased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.OnPlayerIndicatorTypeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerIndicatorType                               playerIndicatorType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHealthBar6_Animated_C::OnPlayerIndicatorTypeChanged(EPlayerIndicatorType playerIndicatorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.OnPlayerIndicatorTypeChanged");
		
		UHealthBar6_Animated_C_OnPlayerIndicatorTypeChanged_Params params {};
		params.playerIndicatorType = playerIndicatorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.OnAutoHealthRegenEnded
	 * 		Flags  -> ()
	 */
	void UHealthBar6_Animated_C::OnAutoHealthRegenEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.OnAutoHealthRegenEnded");
		
		UHealthBar6_Animated_C_OnAutoHealthRegenEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.OnMaxHealthChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              maxHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHealthBar6_Animated_C::OnMaxHealthChanged(float maxHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.OnMaxHealthChanged");
		
		UHealthBar6_Animated_C_OnMaxHealthChanged_Params params {};
		params.maxHealth = maxHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.Construct
	 * 		Flags  -> ()
	 */
	void UHealthBar6_Animated_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.Construct");
		
		UHealthBar6_Animated_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.Destruct
	 * 		Flags  -> ()
	 */
	void UHealthBar6_Animated_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.Destruct");
		
		UHealthBar6_Animated_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HealthBar6_Animated.HealthBar6_Animated_C.ExecuteUbergraph_HealthBar6_Animated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHealthBar6_Animated_C::ExecuteUbergraph_HealthBar6_Animated(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealthBar6_Animated.HealthBar6_Animated_C.ExecuteUbergraph_HealthBar6_Animated");
		
		UHealthBar6_Animated_C_ExecuteUbergraph_HealthBar6_Animated_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHealthBar6_Animated_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHealthBar6_Animated_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HealthBar6_Animated.HealthBar6_Animated_C");
		return ptr;
	}

}


