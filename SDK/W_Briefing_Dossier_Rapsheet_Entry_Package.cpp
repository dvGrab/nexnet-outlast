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
	 * 		Name   -> Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Briefing_Dossier_Rapsheet_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.PreConstruct");
		
		UW_Briefing_Dossier_Rapsheet_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Dossier_Rapsheet_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.Construct");
		
		UW_Briefing_Dossier_Rapsheet_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.Reveal
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Dossier_Rapsheet_Entry_C::Reveal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.Reveal");
		
		UW_Briefing_Dossier_Rapsheet_Entry_C_Reveal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.Hide
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Dossier_Rapsheet_Entry_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.Hide");
		
		UW_Briefing_Dossier_Rapsheet_Entry_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Dossier_Rapsheet_Entry_C::ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Entry");
		
		UW_Briefing_Dossier_Rapsheet_Entry_C_ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_Dossier_Rapsheet_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Briefing_Dossier_Rapsheet_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C");
		return ptr;
	}

}


