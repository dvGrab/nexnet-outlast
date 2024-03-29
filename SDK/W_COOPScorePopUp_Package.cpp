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
	 * 		Name   -> Function W_COOPScorePopUp.W_COOPScorePopUp_C.AddScorePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InScoreText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            InCalculatedScore                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bGive                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_COOPScorePopUp_C::AddScorePopup(const class FText& InScoreText, int32_t InCalculatedScore, bool bGive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_COOPScorePopUp.W_COOPScorePopUp_C.AddScorePopup");
		
		UW_COOPScorePopUp_C_AddScorePopup_Params params {};
		params.InScoreText = InScoreText;
		params.InCalculatedScore = InCalculatedScore;
		params.bGive = bGive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_COOPScorePopUp.W_COOPScorePopUp_C.ExecuteUbergraph_W_COOPScorePopUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_COOPScorePopUp_C::ExecuteUbergraph_W_COOPScorePopUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_COOPScorePopUp.W_COOPScorePopUp_C.ExecuteUbergraph_W_COOPScorePopUp");
		
		UW_COOPScorePopUp_C_ExecuteUbergraph_W_COOPScorePopUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_COOPScorePopUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_COOPScorePopUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_COOPScorePopUp.W_COOPScorePopUp_C");
		return ptr;
	}

}


