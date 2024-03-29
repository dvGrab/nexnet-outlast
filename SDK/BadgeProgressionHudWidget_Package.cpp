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
	 * 		Name   -> Function BadgeProgressionHudWidget.BadgeProgressionHudWidget_C.OnLoaded_297F3B8945FF1E7BC838EA8B27A8A839
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBadgeProgressionHudWidget_C::OnLoaded_297F3B8945FF1E7BC838EA8B27A8A839(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BadgeProgressionHudWidget.BadgeProgressionHudWidget_C.OnLoaded_297F3B8945FF1E7BC838EA8B27A8A839");
		
		UBadgeProgressionHudWidget_C_OnLoaded_297F3B8945FF1E7BC838EA8B27A8A839_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeProgressionHudWidget.BadgeProgressionHudWidget_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBBadgeHudProgressDisplayDetails           details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBadgeProgressionHudWidget_C::Show(const struct FRBBadgeHudProgressDisplayDetails& details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BadgeProgressionHudWidget.BadgeProgressionHudWidget_C.Show");
		
		UBadgeProgressionHudWidget_C_Show_Params params {};
		params.details = details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeProgressionHudWidget.BadgeProgressionHudWidget_C.Hide
	 * 		Flags  -> ()
	 */
	void UBadgeProgressionHudWidget_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BadgeProgressionHudWidget.BadgeProgressionHudWidget_C.Hide");
		
		UBadgeProgressionHudWidget_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeProgressionHudWidget.BadgeProgressionHudWidget_C.ExecuteUbergraph_BadgeProgressionHudWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBadgeProgressionHudWidget_C::ExecuteUbergraph_BadgeProgressionHudWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BadgeProgressionHudWidget.BadgeProgressionHudWidget_C.ExecuteUbergraph_BadgeProgressionHudWidget");
		
		UBadgeProgressionHudWidget_C_ExecuteUbergraph_BadgeProgressionHudWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBadgeProgressionHudWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBadgeProgressionHudWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BadgeProgressionHudWidget.BadgeProgressionHudWidget_C");
		return ptr;
	}

}


