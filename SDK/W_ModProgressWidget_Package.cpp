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
	 * 		Name   -> Function W_ModProgressWidget.W_ModProgressWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ModProgressWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModProgressWidget.W_ModProgressWidget_C.Construct");
		
		UW_ModProgressWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModProgressWidget.W_ModProgressWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModProgressWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModProgressWidget.W_ModProgressWidget_C.Tick");
		
		UW_ModProgressWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModProgressWidget.W_ModProgressWidget_C.OnModNameUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_ModProgressWidget_C::OnModNameUpdated(const class FString& ModName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModProgressWidget.W_ModProgressWidget_C.OnModNameUpdated");
		
		UW_ModProgressWidget_C_OnModNameUpdated_Params params {};
		params.ModName = ModName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModProgressWidget.W_ModProgressWidget_C.OnDownloadProgressUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DownloadPercent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ExtractionPercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        PercentText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        RemainingText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_ModProgressWidget_C::OnDownloadProgressUpdated(float DownloadPercent, float ExtractionPercent, const class FText& PercentText, const class FText& RemainingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModProgressWidget.W_ModProgressWidget_C.OnDownloadProgressUpdated");
		
		UW_ModProgressWidget_C_OnDownloadProgressUpdated_Params params {};
		params.DownloadPercent = DownloadPercent;
		params.ExtractionPercent = ExtractionPercent;
		params.PercentText = PercentText;
		params.RemainingText = RemainingText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModProgressWidget.W_ModProgressWidget_C.OnQueueProgressUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CompletedMods                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalMods                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModProgressWidget_C::OnQueueProgressUpdated(int32_t CompletedMods, int32_t TotalMods)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModProgressWidget.W_ModProgressWidget_C.OnQueueProgressUpdated");
		
		UW_ModProgressWidget_C_OnQueueProgressUpdated_Params params {};
		params.CompletedMods = CompletedMods;
		params.TotalMods = TotalMods;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModProgressWidget.W_ModProgressWidget_C.ExecuteUbergraph_W_ModProgressWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModProgressWidget_C::ExecuteUbergraph_W_ModProgressWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModProgressWidget.W_ModProgressWidget_C.ExecuteUbergraph_W_ModProgressWidget");
		
		UW_ModProgressWidget_C_ExecuteUbergraph_W_ModProgressWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ModProgressWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ModProgressWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ModProgressWidget.W_ModProgressWidget_C");
		return ptr;
	}

}


