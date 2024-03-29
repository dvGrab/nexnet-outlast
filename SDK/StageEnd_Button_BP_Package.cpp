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
	 * 		Name   -> Function StageEnd_Button_BP.StageEnd_Button_BP_C.SetTrainArrivalTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStageEnd_Button_BP_C::SetTrainArrivalTime(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageEnd_Button_BP.StageEnd_Button_BP_C.SetTrainArrivalTime");
		
		AStageEnd_Button_BP_C_SetTrainArrivalTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageEnd_Button_BP.StageEnd_Button_BP_C.Update Time
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStageEnd_Button_BP_C::Update_Time(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageEnd_Button_BP.StageEnd_Button_BP_C.Update Time");
		
		AStageEnd_Button_BP_C_Update_Time_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageEnd_Button_BP.StageEnd_Button_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AStageEnd_Button_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageEnd_Button_BP.StageEnd_Button_BP_C.ReceiveBeginPlay");
		
		AStageEnd_Button_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageEnd_Button_BP.StageEnd_Button_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AStageEnd_Button_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageEnd_Button_BP.StageEnd_Button_BP_C.Event_OnResetStage");
		
		AStageEnd_Button_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageEnd_Button_BP.StageEnd_Button_BP_C.WakeTimerMeshes
	 * 		Flags  -> ()
	 */
	void AStageEnd_Button_BP_C::WakeTimerMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageEnd_Button_BP.StageEnd_Button_BP_C.WakeTimerMeshes");
		
		AStageEnd_Button_BP_C_WakeTimerMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageEnd_Button_BP.StageEnd_Button_BP_C.BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_2_OnInteractionEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBInteractibleComponent*                    Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStageEnd_Button_BP_C::BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_2_OnInteractionEvent__DelegateSignature(class ARBPawn* interactor, class URBInteractibleComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageEnd_Button_BP.StageEnd_Button_BP_C.BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_2_OnInteractionEvent__DelegateSignature");
		
		AStageEnd_Button_BP_C_BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_2_OnInteractionEvent__DelegateSignature_Params params {};
		params.interactor = interactor;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageEnd_Button_BP.StageEnd_Button_BP_C.BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_3_OnEnabledChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractionZoneComponent*                 Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStageEnd_Button_BP_C::BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_3_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageEnd_Button_BP.StageEnd_Button_BP_C.BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_3_OnEnabledChanged__DelegateSignature");
		
		AStageEnd_Button_BP_C_BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_3_OnEnabledChanged__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageEnd_Button_BP.StageEnd_Button_BP_C.ExecuteUbergraph_StageEnd_Button_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStageEnd_Button_BP_C::ExecuteUbergraph_StageEnd_Button_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageEnd_Button_BP.StageEnd_Button_BP_C.ExecuteUbergraph_StageEnd_Button_BP");
		
		AStageEnd_Button_BP_C_ExecuteUbergraph_StageEnd_Button_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStageEnd_Button_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStageEnd_Button_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StageEnd_Button_BP.StageEnd_Button_BP_C");
		return ptr;
	}

}


