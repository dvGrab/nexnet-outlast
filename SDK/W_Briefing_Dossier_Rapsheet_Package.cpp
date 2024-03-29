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
	 * 		Name   -> Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Briefing_Dossier_Rapsheet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.PreConstruct");
		
		UW_Briefing_Dossier_Rapsheet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCriminalRecord>                     CriminalRecord                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Briefing_Dossier_Rapsheet_C::Initialize(TArray<struct FCriminalRecord> CriminalRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.Initialize");
		
		UW_Briefing_Dossier_Rapsheet_C_Initialize_Params params {};
		params.CriminalRecord = CriminalRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.ExecuteUbergraph_W_Briefing_Dossier_Rapsheet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Dossier_Rapsheet_C::ExecuteUbergraph_W_Briefing_Dossier_Rapsheet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.ExecuteUbergraph_W_Briefing_Dossier_Rapsheet");
		
		UW_Briefing_Dossier_Rapsheet_C_ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_Dossier_Rapsheet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Briefing_Dossier_Rapsheet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C");
		return ptr;
	}

}


