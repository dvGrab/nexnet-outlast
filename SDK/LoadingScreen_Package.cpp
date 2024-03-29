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
	 * 		Name   -> Function LoadingScreen.LoadingScreen_C.Event_StartLoadingScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               skipIntro                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadingScreen_C::Event_StartLoadingScreen(bool skipIntro)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.Event_StartLoadingScreen");
		
		ULoadingScreen_C_Event_StartLoadingScreen_Params params {};
		params.skipIntro = skipIntro;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingScreen.LoadingScreen_C.Event_StopLoadingScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               skipOutro                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadingScreen_C::Event_StopLoadingScreen(bool skipOutro)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.Event_StopLoadingScreen");
		
		ULoadingScreen_C_Event_StopLoadingScreen_Params params {};
		params.skipOutro = skipOutro;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingScreen.LoadingScreen_C.FadeOutCompleted
	 * 		Flags  -> ()
	 */
	void ULoadingScreen_C::FadeOutCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.FadeOutCompleted");
		
		ULoadingScreen_C_FadeOutCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingScreen.LoadingScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void ULoadingScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.Construct");
		
		ULoadingScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingScreen.LoadingScreen_C.OnHintFadeOutCompleted
	 * 		Flags  -> ()
	 */
	void ULoadingScreen_C::OnHintFadeOutCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.OnHintFadeOutCompleted");
		
		ULoadingScreen_C_OnHintFadeOutCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingScreen.LoadingScreen_C.OnHintFadeInCompleted
	 * 		Flags  -> ()
	 */
	void ULoadingScreen_C::OnHintFadeInCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.OnHintFadeInCompleted");
		
		ULoadingScreen_C_OnHintFadeInCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingScreen.LoadingScreen_C.ExecuteUbergraph_LoadingScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadingScreen_C::ExecuteUbergraph_LoadingScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreen_C.ExecuteUbergraph_LoadingScreen");
		
		ULoadingScreen_C_ExecuteUbergraph_LoadingScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadingScreen.LoadingScreen_C");
		return ptr;
	}

}


