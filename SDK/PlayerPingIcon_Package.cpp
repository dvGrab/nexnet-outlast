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
	 * 		Name   -> Function PlayerPingIcon.PlayerPingIcon_C.UpdateOpacity
	 * 		Flags  -> ()
	 */
	void UPlayerPingIcon_C::UpdateOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPingIcon.PlayerPingIcon_C.UpdateOpacity");
		
		UPlayerPingIcon_C_UpdateOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPingIcon.PlayerPingIcon_C.UpdateDesiredSize
	 * 		Flags  -> ()
	 */
	void UPlayerPingIcon_C::UpdateDesiredSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPingIcon.PlayerPingIcon_C.UpdateDesiredSize");
		
		UPlayerPingIcon_C_UpdateDesiredSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPingIcon.PlayerPingIcon_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UPlayerPingIcon_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPingIcon.PlayerPingIcon_C.ShouldShow");
		
		UPlayerPingIcon_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPingIcon.PlayerPingIcon_C.UpdateDisplay
	 * 		Flags  -> ()
	 */
	void UPlayerPingIcon_C::UpdateDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPingIcon.PlayerPingIcon_C.UpdateDisplay");
		
		UPlayerPingIcon_C_UpdateDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPingIcon.PlayerPingIcon_C.SetupIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerPingIcon_C::SetupIcon(class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPingIcon.PlayerPingIcon_C.SetupIcon");
		
		UPlayerPingIcon_C_SetupIcon_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPingIcon.PlayerPingIcon_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UPlayerPingIcon_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPingIcon.PlayerPingIcon_C.Event_Hide");
		
		UPlayerPingIcon_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPingIcon.PlayerPingIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerPingIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPingIcon.PlayerPingIcon_C.Construct");
		
		UPlayerPingIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPingIcon.PlayerPingIcon_C.ExecuteUbergraph_PlayerPingIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerPingIcon_C::ExecuteUbergraph_PlayerPingIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPingIcon.PlayerPingIcon_C.ExecuteUbergraph_PlayerPingIcon");
		
		UPlayerPingIcon_C_ExecuteUbergraph_PlayerPingIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerPingIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerPingIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerPingIcon.PlayerPingIcon_C");
		return ptr;
	}

}


