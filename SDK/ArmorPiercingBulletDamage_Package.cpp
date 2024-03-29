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
	 * 		Name   -> PredefinedFunction UArmorPiercingBulletDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArmorPiercingBulletDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ArmorPiercingBulletDamage.ArmorPiercingBulletDamage_C");
		return ptr;
	}

}


