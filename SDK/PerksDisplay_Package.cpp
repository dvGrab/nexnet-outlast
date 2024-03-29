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
	 * 		Name   -> Function PerksDisplay.PerksDisplay_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayerState*                              RBPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPerksDisplay_C::Setup(class ARBPlayerState* RBPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerksDisplay.PerksDisplay_C.Setup");
		
		UPerksDisplay_C_Setup_Params params {};
		params.RBPlayerState = RBPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerksDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerksDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PerksDisplay.PerksDisplay_C");
		return ptr;
	}

}


