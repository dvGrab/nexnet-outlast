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
	 * 		Name   -> Function ISplineAnchorAttachable.ISplineAnchorAttachable_C.SplineAnchorMovingStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMoving                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UISplineAnchorAttachable_C::SplineAnchorMovingStateChanged(bool bMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ISplineAnchorAttachable.ISplineAnchorAttachable_C.SplineAnchorMovingStateChanged");
		
		UISplineAnchorAttachable_C_SplineAnchorMovingStateChanged_Params params {};
		params.bMoving = bMoving;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UISplineAnchorAttachable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UISplineAnchorAttachable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ISplineAnchorAttachable.ISplineAnchorAttachable_C");
		return ptr;
	}

}


