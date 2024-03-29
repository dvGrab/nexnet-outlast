/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> PredefinedFunction APoliceStation_Trial2_QuestItem_Bunny_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceStation_Trial2_QuestItem_Bunny_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceStation_Trial2_QuestItem_Bunny_BP.PoliceStation_Trial2_QuestItem_Bunny_BP_C");
		return ptr;
	}

}


