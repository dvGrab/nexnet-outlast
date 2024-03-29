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
	 * 		Name   -> Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ACameraIntercom__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.UserConstructionScript");
		
		ACameraIntercom__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACameraIntercom__BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ReceiveTick");
		
		ACameraIntercom__BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.Activate Light
	 * 		Flags  -> ()
	 */
	void ACameraIntercom__BP_C::Activate_Light()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.Activate Light");
		
		ACameraIntercom__BP_C_Activate_Light_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.Deactivate Light
	 * 		Flags  -> ()
	 */
	void ACameraIntercom__BP_C::Deactivate_Light()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.Deactivate Light");
		
		ACameraIntercom__BP_C_Deactivate_Light_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.AssignPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer_BP_C*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACameraIntercom__BP_C::AssignPlayer(class ARBPlayer_BP_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.AssignPlayer");
		
		ACameraIntercom__BP_C_AssignPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ReactToNightVision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACameraIntercom__BP_C::ReactToNightVision(bool bOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ReactToNightVision");
		
		ACameraIntercom__BP_C_ReactToNightVision_Params params {};
		params.bOn = bOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ExecuteUbergraph_CameraIntercom-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACameraIntercom__BP_C::ExecuteUbergraph_CameraIntercom__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ExecuteUbergraph_CameraIntercom-01_BP");
		
		ACameraIntercom__BP_C_ExecuteUbergraph_CameraIntercom__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACameraIntercom__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACameraIntercom__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraIntercom_01_BP.CameraIntercom-01_BP_C");
		return ptr;
	}

}


