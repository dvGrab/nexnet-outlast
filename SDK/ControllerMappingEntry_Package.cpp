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
	 * 		Name   -> Function ControllerMappingEntry.ControllerMappingEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UControllerMappingEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingEntry.ControllerMappingEntry_C.PreConstruct");
		
		UControllerMappingEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingEntry.ControllerMappingEntry_C.Event_UpdateDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        newDescription                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UControllerMappingEntry_C::Event_UpdateDescription(const class FText& newDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingEntry.ControllerMappingEntry_C.Event_UpdateDescription");
		
		UControllerMappingEntry_C_Event_UpdateDescription_Params params {};
		params.newDescription = newDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingEntry.ControllerMappingEntry_C.UpdateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  newIcon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControllerMappingEntry_C::UpdateIcon(class UTexture2D* newIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingEntry.ControllerMappingEntry_C.UpdateIcon");
		
		UControllerMappingEntry_C_UpdateIcon_Params params {};
		params.newIcon = newIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingEntry.ControllerMappingEntry_C.ExecuteUbergraph_ControllerMappingEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControllerMappingEntry_C::ExecuteUbergraph_ControllerMappingEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingEntry.ControllerMappingEntry_C.ExecuteUbergraph_ControllerMappingEntry");
		
		UControllerMappingEntry_C_ExecuteUbergraph_ControllerMappingEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControllerMappingEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControllerMappingEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControllerMappingEntry.ControllerMappingEntry_C");
		return ptr;
	}

}


