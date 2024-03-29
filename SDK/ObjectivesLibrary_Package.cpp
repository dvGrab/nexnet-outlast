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
	 * 		Name   -> Function ObjectivesLibrary.ObjectivesLibrary_C.GetClueObjectiveIconFromName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        clueName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 ClueObjectiveIcon                                          (Parm, OutParm)
	 */
	void UObjectivesLibrary_C::GetClueObjectiveIconFromName(class FName* clueName, class UObject* __WorldContext, struct FSlateBrush* ClueObjectiveIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectivesLibrary.ObjectivesLibrary_C.GetClueObjectiveIconFromName");
		
		UObjectivesLibrary_C_GetClueObjectiveIconFromName_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (clueName != nullptr)
			*clueName = params.clueName;
		if (ClueObjectiveIcon != nullptr)
			*ClueObjectiveIcon = params.ClueObjectiveIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectivesLibrary.ObjectivesLibrary_C.GetClueTextFromName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        clueName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ClueText                                                   (Parm, OutParm)
	 */
	void UObjectivesLibrary_C::GetClueTextFromName(class FName* clueName, class UObject* __WorldContext, class FText* ClueText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectivesLibrary.ObjectivesLibrary_C.GetClueTextFromName");
		
		UObjectivesLibrary_C_GetClueTextFromName_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (clueName != nullptr)
			*clueName = params.clueName;
		if (ClueText != nullptr)
			*ClueText = params.ClueText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectivesLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectivesLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ObjectivesLibrary.ObjectivesLibrary_C");
		return ptr;
	}

}


