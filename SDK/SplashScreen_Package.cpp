/**
 * Name: OUTLAST
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
	 * 		Name   -> Function SplashScreen.SplashScreen_C.Event_OnFocusMenu
	 * 		Flags  -> ()
	 */
	void USplashScreen_C::Event_OnFocusMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplashScreen.SplashScreen_C.Event_OnFocusMenu");
		
		USplashScreen_C_Event_OnFocusMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplashScreen.SplashScreen_C.OnMainMenuStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMainMenuState                                     mainMenuState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USplashScreen_C::OnMainMenuStateChanged(EMainMenuState mainMenuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplashScreen.SplashScreen_C.OnMainMenuStateChanged");
		
		USplashScreen_C_OnMainMenuStateChanged_Params params {};
		params.mainMenuState = mainMenuState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplashScreen.SplashScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void USplashScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplashScreen.SplashScreen_C.Construct");
		
		USplashScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplashScreen.SplashScreen_C.ExecuteUbergraph_SplashScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USplashScreen_C::ExecuteUbergraph_SplashScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplashScreen.SplashScreen_C.ExecuteUbergraph_SplashScreen");
		
		USplashScreen_C_ExecuteUbergraph_SplashScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplashScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplashScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SplashScreen.SplashScreen_C");
		return ptr;
	}

}


