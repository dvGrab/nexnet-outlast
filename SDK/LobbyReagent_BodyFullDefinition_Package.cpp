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
	 * 		Name   -> PredefinedFunction ULobbyReagent_BodyFullDefinition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULobbyReagent_BodyFullDefinition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LobbyReagent_BodyFullDefinition.LobbyReagent_BodyFullDefinition_C");
		return ptr;
	}

}


