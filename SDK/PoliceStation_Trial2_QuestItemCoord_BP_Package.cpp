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
	 * 		Name   -> Function PoliceStation_Trial2_QuestItemCoord_BP.PoliceStation_Trial2_QuestItemCoord_BP_C.GetClueObjectiveIconFromClueName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        clueName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSlateBrush APoliceStation_Trial2_QuestItemCoord_BP_C::GetClueObjectiveIconFromClueName(const class FName& clueName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_Trial2_QuestItemCoord_BP.PoliceStation_Trial2_QuestItemCoord_BP_C.GetClueObjectiveIconFromClueName");
		
		APoliceStation_Trial2_QuestItemCoord_BP_C_GetClueObjectiveIconFromClueName_Params params {};
		params.clueName = clueName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_Trial2_QuestItemCoord_BP.PoliceStation_Trial2_QuestItemCoord_BP_C.GetClueTextFromClueName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        clueName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText APoliceStation_Trial2_QuestItemCoord_BP_C::GetClueTextFromClueName(const class FName& clueName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_Trial2_QuestItemCoord_BP.PoliceStation_Trial2_QuestItemCoord_BP_C.GetClueTextFromClueName");
		
		APoliceStation_Trial2_QuestItemCoord_BP_C_GetClueTextFromClueName_Params params {};
		params.clueName = clueName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoliceStation_Trial2_QuestItemCoord_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceStation_Trial2_QuestItemCoord_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceStation_Trial2_QuestItemCoord_BP.PoliceStation_Trial2_QuestItemCoord_BP_C");
		return ptr;
	}

}


