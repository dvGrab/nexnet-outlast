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
	 * 		Name   -> Function MateHealthBarElement.MateHealthBarElement_C.ForceValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMateHealthBarElement_C::ForceValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBarElement.MateHealthBarElement_C.ForceValue");
		
		UMateHealthBarElement_C_ForceValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBarElement.MateHealthBarElement_C.SetEntireBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Fill                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMateHealthBarElement_C::SetEntireBar(bool Fill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBarElement.MateHealthBarElement_C.SetEntireBar");
		
		UMateHealthBarElement_C_SetEntireBar_Params params {};
		params.Fill = Fill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBarElement.MateHealthBarElement_C.SetBarHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DesiredSize_Y                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMateHealthBarElement_C::SetBarHeight(float DesiredSize_Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBarElement.MateHealthBarElement_C.SetBarHeight");
		
		UMateHealthBarElement_C_SetBarHeight_Params params {};
		params.DesiredSize_Y = DesiredSize_Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBarElement.MateHealthBarElement_C.UpdateTints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInBleedout                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMateHealthBarElement_C::UpdateTints(bool IsInBleedout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBarElement.MateHealthBarElement_C.UpdateTints");
		
		UMateHealthBarElement_C_UpdateTints_Params params {};
		params.IsInBleedout = IsInBleedout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBarElement.MateHealthBarElement_C.UpdateTween
	 * 		Flags  -> ()
	 */
	void UMateHealthBarElement_C::UpdateTween()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBarElement.MateHealthBarElement_C.UpdateTween");
		
		UMateHealthBarElement_C_UpdateTween_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBarElement.MateHealthBarElement_C.Start New Tween
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               StartsOutsideBracket                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMateHealthBarElement_C::Start_New_Tween(float NewValue, bool StartsOutsideBracket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBarElement.MateHealthBarElement_C.Start New Tween");
		
		UMateHealthBarElement_C_Start_New_Tween_Params params {};
		params.NewValue = NewValue;
		params.StartsOutsideBracket = StartsOutsideBracket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBarElement.MateHealthBarElement_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMateHealthBarElement_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBarElement.MateHealthBarElement_C.PreConstruct");
		
		UMateHealthBarElement_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBarElement.MateHealthBarElement_C.Construct
	 * 		Flags  -> ()
	 */
	void UMateHealthBarElement_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBarElement.MateHealthBarElement_C.Construct");
		
		UMateHealthBarElement_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBarElement.MateHealthBarElement_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMateHealthBarElement_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBarElement.MateHealthBarElement_C.Tick");
		
		UMateHealthBarElement_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBarElement.MateHealthBarElement_C.ExecuteUbergraph_MateHealthBarElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMateHealthBarElement_C::ExecuteUbergraph_MateHealthBarElement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBarElement.MateHealthBarElement_C.ExecuteUbergraph_MateHealthBarElement");
		
		UMateHealthBarElement_C_ExecuteUbergraph_MateHealthBarElement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBarElement.MateHealthBarElement_C.BleedoutCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMateHealthBarElement_C::BleedoutCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBarElement.MateHealthBarElement_C.BleedoutCompleted__DelegateSignature");
		
		UMateHealthBarElement_C_BleedoutCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBarElement.MateHealthBarElement_C.TweenCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMateHealthBarElement_C::TweenCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBarElement.MateHealthBarElement_C.TweenCompleted__DelegateSignature");
		
		UMateHealthBarElement_C_TweenCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMateHealthBarElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMateHealthBarElement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MateHealthBarElement.MateHealthBarElement_C");
		return ptr;
	}

}


