/**
 * Name: READYORNOT
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
	 * 		Name   -> Function W_PermanentOverlay.W_PermanentOverlay_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_PermanentOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PermanentOverlay.W_PermanentOverlay_C.Construct");
		
		UW_PermanentOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PermanentOverlay.W_PermanentOverlay_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UW_PermanentOverlay_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PermanentOverlay.W_PermanentOverlay_C.CustomEvent_1");
		
		UW_PermanentOverlay_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PermanentOverlay.W_PermanentOverlay_C.OnStatsStarted_Event_1
	 * 		Flags  -> ()
	 */
	void UW_PermanentOverlay_C::OnStatsStarted_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PermanentOverlay.W_PermanentOverlay_C.OnStatsStarted_Event_1");
		
		UW_PermanentOverlay_C_OnStatsStarted_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PermanentOverlay.W_PermanentOverlay_C.OnStatsSaved_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      StatsName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_PermanentOverlay_C::OnStatsSaved_Event_1(bool bWasSuccessful, const class FString& StatsName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PermanentOverlay.W_PermanentOverlay_C.OnStatsSaved_Event_1");
		
		UW_PermanentOverlay_C_OnStatsSaved_Event_1_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.StatsName = StatsName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PermanentOverlay.W_PermanentOverlay_C.OnStatsUploadProgress_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PermanentOverlay_C::OnStatsUploadProgress_Event_1(const class FString& Filename, float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PermanentOverlay.W_PermanentOverlay_C.OnStatsUploadProgress_Event_1");
		
		UW_PermanentOverlay_C_OnStatsUploadProgress_Event_1_Params params {};
		params.Filename = Filename;
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PermanentOverlay.W_PermanentOverlay_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UW_PermanentOverlay_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PermanentOverlay.W_PermanentOverlay_C.CustomEvent_2");
		
		UW_PermanentOverlay_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PermanentOverlay.W_PermanentOverlay_C.ExecuteUbergraph_W_PermanentOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PermanentOverlay_C::ExecuteUbergraph_W_PermanentOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PermanentOverlay.W_PermanentOverlay_C.ExecuteUbergraph_W_PermanentOverlay");
		
		UW_PermanentOverlay_C_ExecuteUbergraph_W_PermanentOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PermanentOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PermanentOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PermanentOverlay.W_PermanentOverlay_C");
		return ptr;
	}

}


