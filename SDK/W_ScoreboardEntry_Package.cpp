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
	 * 		Name   -> Function W_ScoreboardEntry.W_ScoreboardEntry_C.UpdateEntry
	 * 		Flags  -> ()
	 */
	void UW_ScoreboardEntry_C::UpdateEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardEntry.W_ScoreboardEntry_C.UpdateEntry");
		
		UW_ScoreboardEntry_C_UpdateEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardEntry.W_ScoreboardEntry_C.SetScoreboardText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  InTextWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_ScoreboardEntry_C::SetScoreboardText(class UTextBlock** InTextWidget, const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardEntry.W_ScoreboardEntry_C.SetScoreboardText");
		
		UW_ScoreboardEntry_C_SetScoreboardText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTextWidget != nullptr)
			*InTextWidget = params.InTextWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardEntry.W_ScoreboardEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ScoreboardEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardEntry.W_ScoreboardEntry_C.PreConstruct");
		
		UW_ScoreboardEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardEntry.W_ScoreboardEntry_C.ExecuteUbergraph_W_ScoreboardEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ScoreboardEntry_C::ExecuteUbergraph_W_ScoreboardEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardEntry.W_ScoreboardEntry_C.ExecuteUbergraph_W_ScoreboardEntry");
		
		UW_ScoreboardEntry_C_ExecuteUbergraph_W_ScoreboardEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ScoreboardEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ScoreboardEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ScoreboardEntry.W_ScoreboardEntry_C");
		return ptr;
	}

}


