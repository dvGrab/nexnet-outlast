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
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.GetVisibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_SwatCommandEntry_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SwatCommandEntry.W_SwatCommandEntry_C.GetVisibility_1");
		
		UW_SwatCommandEntry_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.GetTeamColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                TeamColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SwatCommandEntry_C::GetTeamColor(struct FLinearColor* TeamColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SwatCommandEntry.W_SwatCommandEntry_C.GetTeamColor");
		
		UW_SwatCommandEntry_C_GetTeamColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamColor != nullptr)
			*TeamColor = params.TeamColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.GetBrushColor_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UW_SwatCommandEntry_C::GetBrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SwatCommandEntry.W_SwatCommandEntry_C.GetBrushColor_1");
		
		UW_SwatCommandEntry_C_GetBrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.SetCommandText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_SwatCommandEntry_C::SetCommandText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SwatCommandEntry.W_SwatCommandEntry_C.SetCommandText");
		
		UW_SwatCommandEntry_C_SetCommandText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_SwatCommandEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SwatCommandEntry.W_SwatCommandEntry_C.PreConstruct");
		
		UW_SwatCommandEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.UpdateCommandEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSwatCommand                                SwatCommand                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETeamType                                          ActiveTeamType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SwatCommandEntry_C::UpdateCommandEntry(const struct FSwatCommand& SwatCommand, ETeamType ActiveTeamType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SwatCommandEntry.W_SwatCommandEntry_C.UpdateCommandEntry");
		
		UW_SwatCommandEntry_C_UpdateCommandEntry_Params params {};
		params.SwatCommand = SwatCommand;
		params.ActiveTeamType = ActiveTeamType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.ExecuteUbergraph_W_SwatCommandEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SwatCommandEntry_C::ExecuteUbergraph_W_SwatCommandEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SwatCommandEntry.W_SwatCommandEntry_C.ExecuteUbergraph_W_SwatCommandEntry");
		
		UW_SwatCommandEntry_C_ExecuteUbergraph_W_SwatCommandEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_SwatCommandEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_SwatCommandEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SwatCommandEntry.W_SwatCommandEntry_C");
		return ptr;
	}

}


