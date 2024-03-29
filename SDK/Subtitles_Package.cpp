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
	 * 		Name   -> Function Subtitles.Subtitles_C.AddStringToMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      string                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USubtitles_C::AddStringToMessage(class FText* Message, const class FString& string)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles.Subtitles_C.AddStringToMessage");
		
		USubtitles_C_AddStringToMessage_Params params {};
		params.string = string;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Message != nullptr)
			*Message = params.Message;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles.Subtitles_C.IsCJKLanguage
	 * 		Flags  -> ()
	 */
	bool USubtitles_C::IsCJKLanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles.Subtitles_C.IsCJKLanguage");
		
		USubtitles_C_IsCJKLanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles.Subtitles_C.GetMaxCharactersPerLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxCharactersPerLine                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USubtitles_C::GetMaxCharactersPerLine(int32_t* MaxCharactersPerLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles.Subtitles_C.GetMaxCharactersPerLine");
		
		USubtitles_C_GetMaxCharactersPerLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxCharactersPerLine != nullptr)
			*MaxCharactersPerLine = params.MaxCharactersPerLine;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles.Subtitles_C.UpdateTextSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUIFontSize                                        Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USubtitles_C::UpdateTextSize(EUIFontSize Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles.Subtitles_C.UpdateTextSize");
		
		USubtitles_C_UpdateTextSize_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles.Subtitles_C.SetSubtitleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      subTitleText                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USubtitles_C::SetSubtitleText(const class FString& subTitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles.Subtitles_C.SetSubtitleText");
		
		USubtitles_C_SetSubtitleText_Params params {};
		params.subTitleText = subTitleText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles.Subtitles_C.Construct
	 * 		Flags  -> ()
	 */
	void USubtitles_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles.Subtitles_C.Construct");
		
		USubtitles_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles.Subtitles_C.OnCurrentSubtitleUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentSubtitle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USubtitles_C::OnCurrentSubtitleUpdated(const class FString& CurrentSubtitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles.Subtitles_C.OnCurrentSubtitleUpdated");
		
		USubtitles_C_OnCurrentSubtitleUpdated_Params params {};
		params.CurrentSubtitle = CurrentSubtitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles.Subtitles_C.OnSubtitleConfigChanged
	 * 		Flags  -> ()
	 */
	void USubtitles_C::OnSubtitleConfigChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles.Subtitles_C.OnSubtitleConfigChanged");
		
		USubtitles_C_OnSubtitleConfigChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles.Subtitles_C.ExecuteUbergraph_Subtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USubtitles_C::ExecuteUbergraph_Subtitles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles.Subtitles_C.ExecuteUbergraph_Subtitles");
		
		USubtitles_C_ExecuteUbergraph_Subtitles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubtitles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubtitles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Subtitles.Subtitles_C");
		return ptr;
	}

}


