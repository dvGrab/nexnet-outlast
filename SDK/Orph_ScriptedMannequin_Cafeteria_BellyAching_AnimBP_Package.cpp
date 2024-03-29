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
	 * 		Name   -> PredefinedFunction UOrph_ScriptedMannequin_Cafeteria_BellyAching_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrph_ScriptedMannequin_Cafeteria_BellyAching_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Orph_ScriptedMannequin_Cafeteria_BellyAching_AnimBP.Orph_ScriptedMannequin_Cafeteria_BellyAching_AnimBP_C");
		return ptr;
	}

}


