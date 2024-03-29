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
	 * 		Name   -> Function TutorialZoneIcon.TutorialZoneIcon_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UTutorialZoneIcon_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialZoneIcon.TutorialZoneIcon_C.ShouldShow");
		
		UTutorialZoneIcon_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialZoneIcon.TutorialZoneIcon_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UTutorialZoneIcon_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialZoneIcon.TutorialZoneIcon_C.Event_Hide");
		
		UTutorialZoneIcon_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialZoneIcon.TutorialZoneIcon_C.Event_UpdateIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  newTexture                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialZoneIcon_C::Event_UpdateIconTexture(class UTexture2D* newTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialZoneIcon.TutorialZoneIcon_C.Event_UpdateIconTexture");
		
		UTutorialZoneIcon_C_Event_UpdateIconTexture_Params params {};
		params.newTexture = newTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialZoneIcon.TutorialZoneIcon_C.ExecuteUbergraph_TutorialZoneIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialZoneIcon_C::ExecuteUbergraph_TutorialZoneIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialZoneIcon.TutorialZoneIcon_C.ExecuteUbergraph_TutorialZoneIcon");
		
		UTutorialZoneIcon_C_ExecuteUbergraph_TutorialZoneIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialZoneIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialZoneIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialZoneIcon.TutorialZoneIcon_C");
		return ptr;
	}

}


