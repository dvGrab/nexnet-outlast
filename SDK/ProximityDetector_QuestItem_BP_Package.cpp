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
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool AProximityDetector_QuestItem_BP_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.GetStateName");
		
		AProximityDetector_QuestItem_BP_C_GetStateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (stateA != nullptr)
			*stateA = params.stateA;
		if (stateB != nullptr)
			*stateB = params.stateB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool AProximityDetector_QuestItem_BP_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.IsStateA");
		
		AProximityDetector_QuestItem_BP_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.ShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 */
	bool AProximityDetector_QuestItem_BP_C::ShouldBeIgnoredForLots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.ShouldBeIgnoredForLots");
		
		AProximityDetector_QuestItem_BP_C_ShouldBeIgnoredForLots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.CheckForProximityChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSomethingChanged                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProximityDetector_QuestItem_BP_C::CheckForProximityChange(bool* bSomethingChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.CheckForProximityChange");
		
		AProximityDetector_QuestItem_BP_C_CheckForProximityChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSomethingChanged != nullptr)
			*bSomethingChanged = params.bSomethingChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.ShouldFogLightBeVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LIghtLevel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AProximityDetector_QuestItem_BP_C::ShouldFogLightBeVisible(int32_t* LIghtLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.ShouldFogLightBeVisible");
		
		AProximityDetector_QuestItem_BP_C_ShouldFogLightBeVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LIghtLevel != nullptr)
			*LIghtLevel = params.LIghtLevel;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.RefreshFogLight
	 * 		Flags  -> ()
	 */
	void AProximityDetector_QuestItem_BP_C::RefreshFogLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.RefreshFogLight");
		
		AProximityDetector_QuestItem_BP_C_RefreshFogLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.StartAudioLoop
	 * 		Flags  -> ()
	 */
	void AProximityDetector_QuestItem_BP_C::StartAudioLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.StartAudioLoop");
		
		AProximityDetector_QuestItem_BP_C_StartAudioLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.StopAudioLoop
	 * 		Flags  -> ()
	 */
	void AProximityDetector_QuestItem_BP_C::StopAudioLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.StopAudioLoop");
		
		AProximityDetector_QuestItem_BP_C_StopAudioLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.RefreshAudioState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAllowAudio                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProximityDetector_QuestItem_BP_C::RefreshAudioState(bool bAllowAudio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.RefreshAudioState");
		
		AProximityDetector_QuestItem_BP_C_RefreshAudioState_Params params {};
		params.bAllowAudio = bAllowAudio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AProximityDetector_QuestItem_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.UserConstructionScript");
		
		AProximityDetector_QuestItem_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.PrepareState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      randomOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProximityDetector_QuestItem_BP_C::PrepareState(bool bStateA, class AActor* randomOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.PrepareState");
		
		AProximityDetector_QuestItem_BP_C_PrepareState_Params params {};
		params.bStateA = bStateA;
		params.randomOwner = randomOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.SetShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProximityDetector_QuestItem_BP_C::SetShouldBeIgnoredForLots(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.SetShouldBeIgnoredForLots");
		
		AProximityDetector_QuestItem_BP_C_SetShouldBeIgnoredForLots_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProximityDetector_QuestItem_BP_C::SetState(bool bStateA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.SetState");
		
		AProximityDetector_QuestItem_BP_C_SetState_Params params {};
		params.bStateA = bStateA;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.BP_OnProximityLevelChanged
	 * 		Flags  -> ()
	 */
	void AProximityDetector_QuestItem_BP_C::BP_OnProximityLevelChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.BP_OnProximityLevelChanged");
		
		AProximityDetector_QuestItem_BP_C_BP_OnProximityLevelChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.BP_OnEquipped
	 * 		Flags  -> ()
	 */
	void AProximityDetector_QuestItem_BP_C::BP_OnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.BP_OnEquipped");
		
		AProximityDetector_QuestItem_BP_C_BP_OnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.BP_OnUnequipped
	 * 		Flags  -> ()
	 */
	void AProximityDetector_QuestItem_BP_C::BP_OnUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.BP_OnUnequipped");
		
		AProximityDetector_QuestItem_BP_C_BP_OnUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.ExecuteUbergraph_ProximityDetector_QuestItem_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProximityDetector_QuestItem_BP_C::ExecuteUbergraph_ProximityDetector_QuestItem_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.ExecuteUbergraph_ProximityDetector_QuestItem_BP");
		
		AProximityDetector_QuestItem_BP_C_ExecuteUbergraph_ProximityDetector_QuestItem_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProximityDetector_QuestItem_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProximityDetector_QuestItem_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C");
		return ptr;
	}

}


