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
	 * 		Name   -> PredefinedFunction UBP_RichTextImageDecorator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RichTextImageDecorator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RichTextImageDecorator.BP_RichTextImageDecorator_C");
		return ptr;
	}

}


