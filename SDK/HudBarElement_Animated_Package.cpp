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
	 * 		Name   -> Function HudBarElement_Animated.HudBarElement_Animated_C.ForceValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHudBarElement_Animated_C::ForceValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudBarElement_Animated.HudBarElement_Animated_C.ForceValue");
		
		UHudBarElement_Animated_C_ForceValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudBarElement_Animated.HudBarElement_Animated_C.SetEntireBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Fill                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHudBarElement_Animated_C::SetEntireBar(bool Fill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudBarElement_Animated.HudBarElement_Animated_C.SetEntireBar");
		
		UHudBarElement_Animated_C_SetEntireBar_Params params {};
		params.Fill = Fill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudBarElement_Animated.HudBarElement_Animated_C.UpdateTween
	 * 		Flags  -> ()
	 */
	void UHudBarElement_Animated_C::UpdateTween()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudBarElement_Animated.HudBarElement_Animated_C.UpdateTween");
		
		UHudBarElement_Animated_C_UpdateTween_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudBarElement_Animated.HudBarElement_Animated_C.SetupNewTween
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsStartBracket                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFinishBracket                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHudBarElement_Animated_C::SetupNewTween(float NewValue, bool IsStartBracket, bool IsFinishBracket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudBarElement_Animated.HudBarElement_Animated_C.SetupNewTween");
		
		UHudBarElement_Animated_C_SetupNewTween_Params params {};
		params.NewValue = NewValue;
		params.IsStartBracket = IsStartBracket;
		params.IsFinishBracket = IsFinishBracket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudBarElement_Animated.HudBarElement_Animated_C.Setup Tints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Tint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                BgdTint                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                GlowTint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHudBarElement_Animated_C::Setup_Tints(const struct FLinearColor& Tint, const struct FLinearColor& BgdTint, const struct FLinearColor& GlowTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudBarElement_Animated.HudBarElement_Animated_C.Setup Tints");
		
		UHudBarElement_Animated_C_Setup_Tints_Params params {};
		params.Tint = Tint;
		params.BgdTint = BgdTint;
		params.GlowTint = GlowTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudBarElement_Animated.HudBarElement_Animated_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHudBarElement_Animated_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudBarElement_Animated.HudBarElement_Animated_C.PreConstruct");
		
		UHudBarElement_Animated_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudBarElement_Animated.HudBarElement_Animated_C.Construct
	 * 		Flags  -> ()
	 */
	void UHudBarElement_Animated_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudBarElement_Animated.HudBarElement_Animated_C.Construct");
		
		UHudBarElement_Animated_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudBarElement_Animated.HudBarElement_Animated_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHudBarElement_Animated_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudBarElement_Animated.HudBarElement_Animated_C.Tick");
		
		UHudBarElement_Animated_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudBarElement_Animated.HudBarElement_Animated_C.StartTween
	 * 		Flags  -> ()
	 */
	void UHudBarElement_Animated_C::StartTween()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudBarElement_Animated.HudBarElement_Animated_C.StartTween");
		
		UHudBarElement_Animated_C_StartTween_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudBarElement_Animated.HudBarElement_Animated_C.ExecuteUbergraph_HudBarElement_Animated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHudBarElement_Animated_C::ExecuteUbergraph_HudBarElement_Animated(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudBarElement_Animated.HudBarElement_Animated_C.ExecuteUbergraph_HudBarElement_Animated");
		
		UHudBarElement_Animated_C_ExecuteUbergraph_HudBarElement_Animated_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudBarElement_Animated.HudBarElement_Animated_C.BleedoutCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHudBarElement_Animated_C::BleedoutCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudBarElement_Animated.HudBarElement_Animated_C.BleedoutCompleted__DelegateSignature");
		
		UHudBarElement_Animated_C_BleedoutCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudBarElement_Animated.HudBarElement_Animated_C.TweenCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHudBarElement_Animated_C::TweenCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudBarElement_Animated.HudBarElement_Animated_C.TweenCompleted__DelegateSignature");
		
		UHudBarElement_Animated_C_TweenCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudBarElement_Animated_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudBarElement_Animated_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudBarElement_Animated.HudBarElement_Animated_C");
		return ptr;
	}

}


