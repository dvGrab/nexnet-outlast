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
	 * 		Name   -> Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_DrawHudUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBWorldIconUpdateContext                   updateContext                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void UFriendlyDeviceIcon_C::Event_DrawHudUpdate(const struct FRBWorldIconUpdateContext& updateContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_DrawHudUpdate");
		
		UFriendlyDeviceIcon_C_Event_DrawHudUpdate_Params params {};
		params.updateContext = updateContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UFriendlyDeviceIcon_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.ShouldShow");
		
		UFriendlyDeviceIcon_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UFriendlyDeviceIcon_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_Hide");
		
		UFriendlyDeviceIcon_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UFriendlyDeviceIcon_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_Show");
		
		UFriendlyDeviceIcon_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.ExecuteUbergraph_FriendlyDeviceIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFriendlyDeviceIcon_C::ExecuteUbergraph_FriendlyDeviceIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.ExecuteUbergraph_FriendlyDeviceIcon");
		
		UFriendlyDeviceIcon_C_ExecuteUbergraph_FriendlyDeviceIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFriendlyDeviceIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFriendlyDeviceIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendlyDeviceIcon.FriendlyDeviceIcon_C");
		return ptr;
	}

}


