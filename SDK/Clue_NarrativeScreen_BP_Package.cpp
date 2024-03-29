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
	 * 		Name   -> Function Clue_NarrativeScreen_BP.Clue_NarrativeScreen_BP_C.GetAssociatedInvestigationComponent
	 * 		Flags  -> ()
	 */
	class URBPlayerInvestigationZoneComponent* AClue_NarrativeScreen_BP_C::GetAssociatedInvestigationComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_NarrativeScreen_BP.Clue_NarrativeScreen_BP_C.GetAssociatedInvestigationComponent");
		
		AClue_NarrativeScreen_BP_C_GetAssociatedInvestigationComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_NarrativeScreen_BP.Clue_NarrativeScreen_BP_C.GetClue
	 * 		Flags  -> ()
	 */
	struct FClueData AClue_NarrativeScreen_BP_C::GetClue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_NarrativeScreen_BP.Clue_NarrativeScreen_BP_C.GetClue");
		
		AClue_NarrativeScreen_BP_C_GetClue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_NarrativeScreen_BP.Clue_NarrativeScreen_BP_C.SetClue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FClueData                                   ClueData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void AClue_NarrativeScreen_BP_C::SetClue(const struct FClueData& ClueData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_NarrativeScreen_BP.Clue_NarrativeScreen_BP_C.SetClue");
		
		AClue_NarrativeScreen_BP_C_SetClue_Params params {};
		params.ClueData = ClueData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Clue_NarrativeScreen_BP.Clue_NarrativeScreen_BP_C.ExecuteUbergraph_Clue_NarrativeScreen_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AClue_NarrativeScreen_BP_C::ExecuteUbergraph_Clue_NarrativeScreen_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Clue_NarrativeScreen_BP.Clue_NarrativeScreen_BP_C.ExecuteUbergraph_Clue_NarrativeScreen_BP");
		
		AClue_NarrativeScreen_BP_C_ExecuteUbergraph_Clue_NarrativeScreen_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AClue_NarrativeScreen_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AClue_NarrativeScreen_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Clue_NarrativeScreen_BP.Clue_NarrativeScreen_BP_C");
		return ptr;
	}

}


