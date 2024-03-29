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
	 * 		Name   -> PredefinedFunction ACorpseSearch_PS_Trial02_AgainstWall_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACorpseSearch_PS_Trial02_AgainstWall_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CorpseSearch_PS_Trial02_AgainstWall_BP.CorpseSearch_PS_Trial02_AgainstWall_BP_C");
		return ptr;
	}

}


