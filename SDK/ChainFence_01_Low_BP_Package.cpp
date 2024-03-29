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
	 * 		Name   -> PredefinedFunction AChainFence__Low_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChainFence__Low_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChainFence_01_Low_BP.ChainFence-01_Low_BP_C");
		return ptr;
	}

}


