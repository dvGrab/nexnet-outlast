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
	 * 		Name   -> Function BloodPipeBase_BP.BloodPipeBase_BP_C.setTriggerPressure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABloodPipeBase_BP_C::setTriggerPressure(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BloodPipeBase_BP.BloodPipeBase_BP_C.setTriggerPressure");
		
		ABloodPipeBase_BP_C_setTriggerPressure_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BloodPipeBase_BP.BloodPipeBase_BP_C.TriggerSprinkler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TriggerUntrigger                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABloodPipeBase_BP_C::TriggerSprinkler(bool TriggerUntrigger, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BloodPipeBase_BP.BloodPipeBase_BP_C.TriggerSprinkler");
		
		ABloodPipeBase_BP_C_TriggerSprinkler_Params params {};
		params.TriggerUntrigger = TriggerUntrigger;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BloodPipeBase_BP.BloodPipeBase_BP_C.OnRep_State
	 * 		Flags  -> ()
	 */
	void ABloodPipeBase_BP_C::OnRep_State()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BloodPipeBase_BP.BloodPipeBase_BP_C.OnRep_State");
		
		ABloodPipeBase_BP_C_OnRep_State_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BloodPipeBase_BP.BloodPipeBase_BP_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DataIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Valut                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABloodPipeBase_BP_C::SetData(int32_t DataIndex, float Valut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BloodPipeBase_BP.BloodPipeBase_BP_C.SetData");
		
		ABloodPipeBase_BP_C_SetData_Params params {};
		params.DataIndex = DataIndex;
		params.Valut = Valut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BloodPipeBase_BP.BloodPipeBase_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABloodPipeBase_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BloodPipeBase_BP.BloodPipeBase_BP_C.UserConstructionScript");
		
		ABloodPipeBase_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BloodPipeBase_BP.BloodPipeBase_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABloodPipeBase_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BloodPipeBase_BP.BloodPipeBase_BP_C.ReceiveBeginPlay");
		
		ABloodPipeBase_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BloodPipeBase_BP.BloodPipeBase_BP_C.startFluid
	 * 		Flags  -> ()
	 */
	void ABloodPipeBase_BP_C::startFluid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BloodPipeBase_BP.BloodPipeBase_BP_C.startFluid");
		
		ABloodPipeBase_BP_C_startFluid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BloodPipeBase_BP.BloodPipeBase_BP_C.StopFluid
	 * 		Flags  -> ()
	 */
	void ABloodPipeBase_BP_C::StopFluid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BloodPipeBase_BP.BloodPipeBase_BP_C.StopFluid");
		
		ABloodPipeBase_BP_C_StopFluid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BloodPipeBase_BP.BloodPipeBase_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ABloodPipeBase_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BloodPipeBase_BP.BloodPipeBase_BP_C.Event_OnResetStage");
		
		ABloodPipeBase_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BloodPipeBase_BP.BloodPipeBase_BP_C.Reset
	 * 		Flags  -> ()
	 */
	void ABloodPipeBase_BP_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BloodPipeBase_BP.BloodPipeBase_BP_C.Reset");
		
		ABloodPipeBase_BP_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BloodPipeBase_BP.BloodPipeBase_BP_C.On
	 * 		Flags  -> ()
	 */
	void ABloodPipeBase_BP_C::On()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BloodPipeBase_BP.BloodPipeBase_BP_C.On");
		
		ABloodPipeBase_BP_C_On_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BloodPipeBase_BP.BloodPipeBase_BP_C.played
	 * 		Flags  -> ()
	 */
	void ABloodPipeBase_BP_C::played()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BloodPipeBase_BP.BloodPipeBase_BP_C.played");
		
		ABloodPipeBase_BP_C_played_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BloodPipeBase_BP.BloodPipeBase_BP_C.ExecuteUbergraph_BloodPipeBase_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABloodPipeBase_BP_C::ExecuteUbergraph_BloodPipeBase_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BloodPipeBase_BP.BloodPipeBase_BP_C.ExecuteUbergraph_BloodPipeBase_BP");
		
		ABloodPipeBase_BP_C_ExecuteUbergraph_BloodPipeBase_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABloodPipeBase_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABloodPipeBase_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BloodPipeBase_BP.BloodPipeBase_BP_C");
		return ptr;
	}

}


