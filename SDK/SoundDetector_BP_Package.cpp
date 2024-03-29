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
	 * 		Name   -> Function SoundDetector_BP.SoundDetector_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ASoundDetector_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundDetector_BP.SoundDetector_BP_C.Event_OnResetStage");
		
		ASoundDetector_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundDetector_BP.SoundDetector_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASoundDetector_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundDetector_BP.SoundDetector_BP_C.ReceiveTick");
		
		ASoundDetector_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundDetector_BP.SoundDetector_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASoundDetector_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundDetector_BP.SoundDetector_BP_C.ReceiveBeginPlay");
		
		ASoundDetector_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundDetector_BP.SoundDetector_BP_C.BndEvt__SoundDetector_BP_RBPlayerSoundDetection_K2Node_ComponentBoundEvent_0_OnSoundDetectionMeterChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              currentMeterRatio                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASoundDetector_BP_C::BndEvt__SoundDetector_BP_RBPlayerSoundDetection_K2Node_ComponentBoundEvent_0_OnSoundDetectionMeterChanged__DelegateSignature(float currentMeterRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundDetector_BP.SoundDetector_BP_C.BndEvt__SoundDetector_BP_RBPlayerSoundDetection_K2Node_ComponentBoundEvent_0_OnSoundDetectionMeterChanged__DelegateSignature");
		
		ASoundDetector_BP_C_BndEvt__SoundDetector_BP_RBPlayerSoundDetection_K2Node_ComponentBoundEvent_0_OnSoundDetectionMeterChanged__DelegateSignature_Params params {};
		params.currentMeterRatio = currentMeterRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundDetector_BP.SoundDetector_BP_C.BndEvt__SoundDetector_BP_RBPlayerSoundDetection_K2Node_ComponentBoundEvent_1_OnSoundDetectionStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerSoundDetectionState                         oldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPlayerSoundDetectionState                         newState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASoundDetector_BP_C::BndEvt__SoundDetector_BP_RBPlayerSoundDetection_K2Node_ComponentBoundEvent_1_OnSoundDetectionStateChanged__DelegateSignature(EPlayerSoundDetectionState oldState, EPlayerSoundDetectionState newState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundDetector_BP.SoundDetector_BP_C.BndEvt__SoundDetector_BP_RBPlayerSoundDetection_K2Node_ComponentBoundEvent_1_OnSoundDetectionStateChanged__DelegateSignature");
		
		ASoundDetector_BP_C_BndEvt__SoundDetector_BP_RBPlayerSoundDetection_K2Node_ComponentBoundEvent_1_OnSoundDetectionStateChanged__DelegateSignature_Params params {};
		params.oldState = oldState;
		params.newState = newState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundDetector_BP.SoundDetector_BP_C.ExecuteUbergraph_SoundDetector_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASoundDetector_BP_C::ExecuteUbergraph_SoundDetector_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundDetector_BP.SoundDetector_BP_C.ExecuteUbergraph_SoundDetector_BP");
		
		ASoundDetector_BP_C_ExecuteUbergraph_SoundDetector_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASoundDetector_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASoundDetector_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SoundDetector_BP.SoundDetector_BP_C");
		return ptr;
	}

}


