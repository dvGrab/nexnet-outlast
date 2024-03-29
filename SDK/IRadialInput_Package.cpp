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
	 * 		Name   -> Function IRadialInput.IRadialInput_C.GetJoystickDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJoystickTypes                                     Stick                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCoreUObject_FVector2D                      StickInput                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIRadialInput_C::GetJoystickDirection(EJoystickTypes Stick, struct FCoreUObject_FVector2D* StickInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IRadialInput.IRadialInput_C.GetJoystickDirection");
		
		UIRadialInput_C_GetJoystickDirection_Params params {};
		params.Stick = Stick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StickInput != nullptr)
			*StickInput = params.StickInput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIRadialInput_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIRadialInput_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IRadialInput.IRadialInput_C");
		return ptr;
	}

}


