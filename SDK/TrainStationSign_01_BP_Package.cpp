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
	 * 		Name   -> Function TrainStationSign-01_BP.TrainStationSign-01_BP_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ATrainStationSign__BP_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainStationSign-01_BP.TrainStationSign-01_BP_C.SetText");
		
		ATrainStationSign__BP_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrainStationSign-01_BP.TrainStationSign-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ATrainStationSign__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainStationSign-01_BP.TrainStationSign-01_BP_C.UserConstructionScript");
		
		ATrainStationSign__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrainStationSign__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrainStationSign__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TrainStationSign_01_BP.TrainStationSign-01_BP_C");
		return ptr;
	}

}


