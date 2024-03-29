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
	 * 		Name   -> Function SceneCapturePlayerCamera.SceneCapturePlayerCamera_C.Stop
	 * 		Flags  -> ()
	 */
	void ASceneCapturePlayerCamera_C::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SceneCapturePlayerCamera.SceneCapturePlayerCamera_C.Stop");
		
		ASceneCapturePlayerCamera_C_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SceneCapturePlayerCamera.SceneCapturePlayerCamera_C.Start
	 * 		Flags  -> ()
	 */
	void ASceneCapturePlayerCamera_C::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SceneCapturePlayerCamera.SceneCapturePlayerCamera_C.Start");
		
		ASceneCapturePlayerCamera_C_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SceneCapturePlayerCamera.SceneCapturePlayerCamera_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASceneCapturePlayerCamera_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SceneCapturePlayerCamera.SceneCapturePlayerCamera_C.ReceiveBeginPlay");
		
		ASceneCapturePlayerCamera_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SceneCapturePlayerCamera.SceneCapturePlayerCamera_C.ExecuteUbergraph_SceneCapturePlayerCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASceneCapturePlayerCamera_C::ExecuteUbergraph_SceneCapturePlayerCamera(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SceneCapturePlayerCamera.SceneCapturePlayerCamera_C.ExecuteUbergraph_SceneCapturePlayerCamera");
		
		ASceneCapturePlayerCamera_C_ExecuteUbergraph_SceneCapturePlayerCamera_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASceneCapturePlayerCamera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASceneCapturePlayerCamera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SceneCapturePlayerCamera.SceneCapturePlayerCamera_C");
		return ptr;
	}

}


