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
	 * 		Name   -> Function EndScreenResult_BP.EndScreenResult_BP_C.UpdateBackgroundImage
	 * 		Flags  -> ()
	 */
	void AEndScreenResult_BP_C::UpdateBackgroundImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenResult_BP.EndScreenResult_BP_C.UpdateBackgroundImage");
		
		AEndScreenResult_BP_C_UpdateBackgroundImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenResult_BP.EndScreenResult_BP_C.SetTrialSucessSettings
	 * 		Flags  -> ()
	 */
	void AEndScreenResult_BP_C::SetTrialSucessSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenResult_BP.EndScreenResult_BP_C.SetTrialSucessSettings");
		
		AEndScreenResult_BP_C_SetTrialSucessSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenResult_BP.EndScreenResult_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AEndScreenResult_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenResult_BP.EndScreenResult_BP_C.UserConstructionScript");
		
		AEndScreenResult_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenResult_BP.EndScreenResult_BP_C.Event_Activate
	 * 		Flags  -> ()
	 */
	void AEndScreenResult_BP_C::Event_Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenResult_BP.EndScreenResult_BP_C.Event_Activate");
		
		AEndScreenResult_BP_C_Event_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenResult_BP.EndScreenResult_BP_C.Event_Deactivate
	 * 		Flags  -> ()
	 */
	void AEndScreenResult_BP_C::Event_Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenResult_BP.EndScreenResult_BP_C.Event_Deactivate");
		
		AEndScreenResult_BP_C_Event_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenResult_BP.EndScreenResult_BP_C.Open_EndScreenMovieSource
	 * 		Flags  -> ()
	 */
	void AEndScreenResult_BP_C::Open_EndScreenMovieSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenResult_BP.EndScreenResult_BP_C.Open_EndScreenMovieSource");
		
		AEndScreenResult_BP_C_Open_EndScreenMovieSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenResult_BP.EndScreenResult_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AEndScreenResult_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenResult_BP.EndScreenResult_BP_C.ReceiveBeginPlay");
		
		AEndScreenResult_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenResult_BP.EndScreenResult_BP_C.ExecuteUbergraph_EndScreenResult_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEndScreenResult_BP_C::ExecuteUbergraph_EndScreenResult_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenResult_BP.EndScreenResult_BP_C.ExecuteUbergraph_EndScreenResult_BP");
		
		AEndScreenResult_BP_C_ExecuteUbergraph_EndScreenResult_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEndScreenResult_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEndScreenResult_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EndScreenResult_BP.EndScreenResult_BP_C");
		return ptr;
	}

}


