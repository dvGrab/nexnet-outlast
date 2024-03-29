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
	 * 		Name   -> PredefinedFunction APhysicsActorAudio_Blueprint_Traffic_Hat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APhysicsActorAudio_Blueprint_Traffic_Hat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PhysicsActorAudio_Blueprint_Traffic_Hat.PhysicsActorAudio_Blueprint_Traffic_Hat_C");
		return ptr;
	}

}


