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
	 * 		Name   -> PredefinedFunction ACameraTracking__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACameraTracking__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraTracking_01_BP.CameraTracking-01_BP_C");
		return ptr;
	}

}


