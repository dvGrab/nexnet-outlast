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
	 * 		Name   -> PredefinedFunction ATableLampShadeBase02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATableLampShadeBase02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TableLampShadeBase_02.TableLampShadeBase-02_C");
		return ptr;
	}

}


