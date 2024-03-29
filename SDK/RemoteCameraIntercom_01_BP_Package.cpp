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
	 * 		Name   -> Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.GetAllCameraIntercoms
	 * 		Flags  -> ()
	 */
	void ARemoteCameraIntercom__BP_C::GetAllCameraIntercoms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.GetAllCameraIntercoms");
		
		ARemoteCameraIntercom__BP_C_GetAllCameraIntercoms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.Event_OnCompletedOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ARBPawn*>                             pawns                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ARemoteCameraIntercom__BP_C::Event_OnCompletedOperation(TArray<class ARBPawn*> pawns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.Event_OnCompletedOperation");
		
		ARemoteCameraIntercom__BP_C_Event_OnCompletedOperation_Params params {};
		params.pawns = pawns;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.ExecuteUbergraph_RemoteCameraIntercom-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARemoteCameraIntercom__BP_C::ExecuteUbergraph_RemoteCameraIntercom__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.ExecuteUbergraph_RemoteCameraIntercom-01_BP");
		
		ARemoteCameraIntercom__BP_C_ExecuteUbergraph_RemoteCameraIntercom__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.OnForcePlayerExit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ARemoteCameraIntercom__BP_C::OnForcePlayerExit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.OnForcePlayerExit__DelegateSignature");
		
		ARemoteCameraIntercom__BP_C_OnForcePlayerExit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARemoteCameraIntercom__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARemoteCameraIntercom__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RemoteCameraIntercom_01_BP.RemoteCameraIntercom-01_BP_C");
		return ptr;
	}

}


