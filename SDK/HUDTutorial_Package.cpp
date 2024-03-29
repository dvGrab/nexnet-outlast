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
	 * 		Name   -> Function HUDTutorial.HUDTutorial_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UHUDTutorial_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDTutorial.HUDTutorial_C.ShouldShow");
		
		UHUDTutorial_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDTutorial.HUDTutorial_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUDTutorial_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDTutorial.HUDTutorial_C.Construct");
		
		UHUDTutorial_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDTutorial.HUDTutorial_C.OnShowHUDTutorial_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHUDTutorialTextData                        tutorialData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUDTutorial_C::OnShowHUDTutorial_Event_1(const struct FHUDTutorialTextData& tutorialData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDTutorial.HUDTutorial_C.OnShowHUDTutorial_Event_1");
		
		UHUDTutorial_C_OnShowHUDTutorial_Event_1_Params params {};
		params.tutorialData = tutorialData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDTutorial.HUDTutorial_C.OnHideHUDTutorial_Event_1
	 * 		Flags  -> ()
	 */
	void UHUDTutorial_C::OnHideHUDTutorial_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDTutorial.HUDTutorial_C.OnHideHUDTutorial_Event_1");
		
		UHUDTutorial_C_OnHideHUDTutorial_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDTutorial.HUDTutorial_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UHUDTutorial_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDTutorial.HUDTutorial_C.Event_Show");
		
		UHUDTutorial_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDTutorial.HUDTutorial_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UHUDTutorial_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDTutorial.HUDTutorial_C.Event_Hide");
		
		UHUDTutorial_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDTutorial.HUDTutorial_C.ExecuteUbergraph_HUDTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDTutorial_C::ExecuteUbergraph_HUDTutorial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDTutorial.HUDTutorial_C.ExecuteUbergraph_HUDTutorial");
		
		UHUDTutorial_C_ExecuteUbergraph_HUDTutorial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDTutorial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDTutorial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDTutorial.HUDTutorial_C");
		return ptr;
	}

}


