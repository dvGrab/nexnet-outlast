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
	 * 		Name   -> Function MateHealthBar.MateHealthBar_C.TryConstructBracketsArray
	 * 		Flags  -> ()
	 */
	void UMateHealthBar_C::TryConstructBracketsArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBar.MateHealthBar_C.TryConstructBracketsArray");
		
		UMateHealthBar_C_TryConstructBracketsArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBar.MateHealthBar_C.UpdateFifthBarVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMateHealthBar_C::UpdateFifthBarVisibility(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBar.MateHealthBar_C.UpdateFifthBarVisibility");
		
		UMateHealthBar_C_UpdateFifthBarVisibility_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBar.MateHealthBar_C.ChainTweens
	 * 		Flags  -> ()
	 */
	void UMateHealthBar_C::ChainTweens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBar.MateHealthBar_C.ChainTweens");
		
		UMateHealthBar_C_ChainTweens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBar.MateHealthBar_C.ProcessHealthEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SkipAnims                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMateHealthBar_C::ProcessHealthEvent(float newHealth, bool SkipAnims)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBar.MateHealthBar_C.ProcessHealthEvent");
		
		UMateHealthBar_C_ProcessHealthEvent_Params params {};
		params.newHealth = newHealth;
		params.SkipAnims = SkipAnims;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBar.MateHealthBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMateHealthBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBar.MateHealthBar_C.PreConstruct");
		
		UMateHealthBar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MateHealthBar.MateHealthBar_C.ExecuteUbergraph_MateHealthBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMateHealthBar_C::ExecuteUbergraph_MateHealthBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MateHealthBar.MateHealthBar_C.ExecuteUbergraph_MateHealthBar");
		
		UMateHealthBar_C_ExecuteUbergraph_MateHealthBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMateHealthBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMateHealthBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MateHealthBar.MateHealthBar_C");
		return ptr;
	}

}


