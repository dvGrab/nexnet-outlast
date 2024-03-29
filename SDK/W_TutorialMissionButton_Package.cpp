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
	 * 		Name   -> Function W_TutorialMissionButton.W_TutorialMissionButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_TutorialMissionButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialMissionButton.W_TutorialMissionButton_C.Construct");
		
		UW_TutorialMissionButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialMissionButton.W_TutorialMissionButton_C.UpdateTutorialMissionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_TutorialMissionButton_C::UpdateTutorialMissionData(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialMissionButton.W_TutorialMissionButton_C.UpdateTutorialMissionData");
		
		UW_TutorialMissionButton_C_UpdateTutorialMissionData_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialMissionButton.W_TutorialMissionButton_C.Destruct
	 * 		Flags  -> ()
	 */
	void UW_TutorialMissionButton_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialMissionButton.W_TutorialMissionButton_C.Destruct");
		
		UW_TutorialMissionButton_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialMissionButton.W_TutorialMissionButton_C.ExecuteUbergraph_W_TutorialMissionButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_TutorialMissionButton_C::ExecuteUbergraph_W_TutorialMissionButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialMissionButton.W_TutorialMissionButton_C.ExecuteUbergraph_W_TutorialMissionButton");
		
		UW_TutorialMissionButton_C_ExecuteUbergraph_W_TutorialMissionButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_TutorialMissionButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_TutorialMissionButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_TutorialMissionButton.W_TutorialMissionButton_C");
		return ptr;
	}

}


