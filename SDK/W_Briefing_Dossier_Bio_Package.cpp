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
	 * 		Name   -> Function W_Briefing_Dossier_Bio.W_Briefing_Dossier_Bio_C.SetBioText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        BioText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Briefing_Dossier_Bio_C::SetBioText(const class FText& BioText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Dossier_Bio.W_Briefing_Dossier_Bio_C.SetBioText");
		
		UW_Briefing_Dossier_Bio_C_SetBioText_Params params {};
		params.BioText = BioText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_Dossier_Bio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Briefing_Dossier_Bio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Briefing_Dossier_Bio.W_Briefing_Dossier_Bio_C");
		return ptr;
	}

}


