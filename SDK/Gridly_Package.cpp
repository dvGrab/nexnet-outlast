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
	 * 		Name   -> Function Gridly.GridlyBPFunctionLibrary.UpdateLocalizationPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolyglotTextData>                   PolyglotTextDatas                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGridlyBPFunctionLibrary::UpdateLocalizationPreview(TArray<struct FPolyglotTextData> PolyglotTextDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gridly.GridlyBPFunctionLibrary.UpdateLocalizationPreview");
		
		UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Params params {};
		params.PolyglotTextDatas = PolyglotTextDatas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gridly.GridlyBPFunctionLibrary.GetLocalizationPreviewCulture
	 * 		Flags  -> ()
	 */
	class FString UGridlyBPFunctionLibrary::GetLocalizationPreviewCulture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gridly.GridlyBPFunctionLibrary.GetLocalizationPreviewCulture");
		
		UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gridly.GridlyBPFunctionLibrary.EnableLocalizationPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Culture                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGridlyBPFunctionLibrary::EnableLocalizationPreview(const class FString& Culture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gridly.GridlyBPFunctionLibrary.EnableLocalizationPreview");
		
		UGridlyBPFunctionLibrary_EnableLocalizationPreview_Params params {};
		params.Culture = Culture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGridlyBPFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGridlyBPFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gridly.GridlyBPFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGridlyDataTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGridlyDataTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gridly.GridlyDataTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGridlyGameSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGridlyGameSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gridly.GridlyGameSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gridly.GridlyTask_DownloadLocalizedTexts.DownloadLocalizedTexts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ViewId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGridlyTask_DownloadLocalizedTexts* UGridlyTask_DownloadLocalizedTexts::DownloadLocalizedTexts(class UObject* WorldContextObject, const class FString& ViewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gridly.GridlyTask_DownloadLocalizedTexts.DownloadLocalizedTexts");
		
		UGridlyTask_DownloadLocalizedTexts_DownloadLocalizedTexts_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ViewId = ViewId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGridlyTask_DownloadLocalizedTexts.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGridlyTask_DownloadLocalizedTexts::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gridly.GridlyTask_DownloadLocalizedTexts");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gridly.GridlyTask_ImportDataTableFromGridly.ImportDataTableFromGridly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGridlyDataTable*                            GridlyDataTable                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGridlyTask_ImportDataTableFromGridly* UGridlyTask_ImportDataTableFromGridly::ImportDataTableFromGridly(class UObject* WorldContextObject, class UGridlyDataTable* GridlyDataTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gridly.GridlyTask_ImportDataTableFromGridly.ImportDataTableFromGridly");
		
		UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GridlyDataTable = GridlyDataTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGridlyTask_ImportDataTableFromGridly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGridlyTask_ImportDataTableFromGridly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gridly.GridlyTask_ImportDataTableFromGridly");
		return ptr;
	}

}


