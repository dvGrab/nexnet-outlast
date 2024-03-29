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
	 * 		Name   -> PredefinedFunction AContDirectSurfaceDrawer012_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContDirectSurfaceDrawer012_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cont_DirectSurface_Drawer_01_2_BP.Cont-DirectSurface-Drawer-01-2_BP_C");
		return ptr;
	}

}


