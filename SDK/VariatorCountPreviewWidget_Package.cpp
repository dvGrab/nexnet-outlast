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
	 * 		Name   -> Function VariatorCountPreviewWidget.VariatorCountPreviewWidget_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TrialId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVariatorCountPreviewWidget_C::Init(const class FName& TrialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariatorCountPreviewWidget.VariatorCountPreviewWidget_C.Init");
		
		UVariatorCountPreviewWidget_C_Init_Params params {};
		params.TrialId = TrialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVariatorCountPreviewWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVariatorCountPreviewWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VariatorCountPreviewWidget.VariatorCountPreviewWidget_C");
		return ptr;
	}

}


