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
	 * 		Name   -> Function LoadoutMenuLibrary.LoadoutMenuLibrary_C.GetActiveSkillColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EActiveSkillType                                   ActiveSkillType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 Color                                                      (Parm, OutParm)
	 */
	void ULoadoutMenuLibrary_C::GetActiveSkillColor(EActiveSkillType ActiveSkillType, class UObject* __WorldContext, struct FSlateColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutMenuLibrary.LoadoutMenuLibrary_C.GetActiveSkillColor");
		
		ULoadoutMenuLibrary_C_GetActiveSkillColor_Params params {};
		params.ActiveSkillType = ActiveSkillType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadoutMenuLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutMenuLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LoadoutMenuLibrary.LoadoutMenuLibrary_C");
		return ptr;
	}

}


