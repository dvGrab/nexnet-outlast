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
	 * 		Name   -> Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Event_Show
	 * 		Flags  -> ()
	 */
	void USpectatorInfoHudWidget_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Event_Show");
		
		USpectatorInfoHudWidget_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void USpectatorInfoHudWidget_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Event_Hide");
		
		USpectatorInfoHudWidget_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpectatorInfoHudWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Tick");
		
		USpectatorInfoHudWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Event_OnSpectatedPlayerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   newSpectatedlPlayer                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpectatorInfoHudWidget_C::Event_OnSpectatedPlayerChanged(class ARBPlayer* newSpectatedlPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Event_OnSpectatedPlayerChanged");
		
		USpectatorInfoHudWidget_C_Event_OnSpectatedPlayerChanged_Params params {};
		params.newSpectatedlPlayer = newSpectatedlPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void USpectatorInfoHudWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Construct");
		
		USpectatorInfoHudWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorInfoHudWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.PreConstruct");
		
		USpectatorInfoHudWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.ExecuteUbergraph_SpectatorInfoHudWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpectatorInfoHudWidget_C::ExecuteUbergraph_SpectatorInfoHudWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.ExecuteUbergraph_SpectatorInfoHudWidget");
		
		USpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpectatorInfoHudWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectatorInfoHudWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpectatorInfoHudWidget.SpectatorInfoHudWidget_C");
		return ptr;
	}

}


