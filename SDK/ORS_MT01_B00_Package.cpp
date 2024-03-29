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
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.OnStageReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBStageID                                  StageID                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FRBMissionID                                MissionID                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AORS_MT01_B00_C::OnStageReady(const struct FRBStageID& StageID, const struct FRBMissionID& MissionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.OnStageReady");
		
		AORS_MT01_B00_C_OnStageReady_Params params {};
		params.StageID = StageID;
		params.MissionID = MissionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B00_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.Event_OnResetStage");
		
		AORS_MT01_B00_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.BasementRandomGates
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B00_C::BasementRandomGates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.BasementRandomGates");
		
		AORS_MT01_B00_C_BasementRandomGates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerTriggerComponent*                   Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AORS_MT01_B00_C::BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature");
		
		AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume2_3_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerTriggerComponent*                   Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AORS_MT01_B00_C::BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume2_3_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume2_3_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature");
		
		AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume2_3_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.SoupeReady
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B00_C::SoupeReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.SoupeReady");
		
		AORS_MT01_B00_C_SoupeReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.Avellanos1_Neutre
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B00_C::Avellanos1_Neutre()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.Avellanos1_Neutre");
		
		AORS_MT01_B00_C_Avellanos1_Neutre_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume3_6_K2Node_ActorBoundEvent_3_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerTriggerComponent*                   Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AORS_MT01_B00_C::BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume3_6_K2Node_ActorBoundEvent_3_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume3_6_K2Node_ActorBoundEvent_3_OnPlayerTriggerVolumeTriggered__DelegateSignature");
		
		AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume3_6_K2Node_ActorBoundEvent_3_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.Avellanos1_Exit
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B00_C::Avellanos1_Exit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.Avellanos1_Exit");
		
		AORS_MT01_B00_C_Avellanos1_Exit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B01_Simple_ObjCoord_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorCompleted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsJIP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AORS_MT01_B00_C::BndEvt__ORS_MT01_B00_ORS_MT01_B01_Simple_ObjCoord_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B01_Simple_ObjCoord_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorCompleted__DelegateSignature");
		
		AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_ORS_MT01_B01_Simple_ObjCoord_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorCompleted__DelegateSignature_Params params {};
		params.bIsJIP = bIsJIP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B02_GatherAndDeliver_Bleach_K2Node_ActorBoundEvent_4_OnSingleObjectiveCompleted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBBaseObjectiveCoordinator*                 coordinator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AORS_MT01_B00_C::BndEvt__ORS_MT01_B00_ORS_MT01_B02_GatherAndDeliver_Bleach_K2Node_ActorBoundEvent_4_OnSingleObjectiveCompleted__DelegateSignature(class ARBBaseObjectiveCoordinator* coordinator, class AActor* Player, class AActor* objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B02_GatherAndDeliver_Bleach_K2Node_ActorBoundEvent_4_OnSingleObjectiveCompleted__DelegateSignature");
		
		AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_ORS_MT01_B02_GatherAndDeliver_Bleach_K2Node_ActorBoundEvent_4_OnSingleObjectiveCompleted__DelegateSignature_Params params {};
		params.coordinator = coordinator;
		params.Player = Player;
		params.objective = objective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_5_OnObjectiveCoordinatorStarted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B00_C::BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_5_OnObjectiveCoordinatorStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_5_OnObjectiveCoordinatorStarted__DelegateSignature");
		
		AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_5_OnObjectiveCoordinatorStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_6_OnObjectiveCoordinatorCompleted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsJIP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AORS_MT01_B00_C::BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_6_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_6_OnObjectiveCoordinatorCompleted__DelegateSignature");
		
		AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_6_OnObjectiveCoordinatorCompleted__DelegateSignature_Params params {};
		params.bIsJIP = bIsJIP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B03_Delay_ObjCoord_K2Node_ActorBoundEvent_7_OnObjectiveCoordinatorStarted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B00_C::BndEvt__ORS_MT01_B00_ORS_MT01_B03_Delay_ObjCoord_K2Node_ActorBoundEvent_7_OnObjectiveCoordinatorStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B03_Delay_ObjCoord_K2Node_ActorBoundEvent_7_OnObjectiveCoordinatorStarted__DelegateSignature");
		
		AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_ORS_MT01_B03_Delay_ObjCoord_K2Node_ActorBoundEvent_7_OnObjectiveCoordinatorStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B03_ExitStage_K2Node_ActorBoundEvent_8_OnObjectiveCoordinatorStarted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B00_C::BndEvt__ORS_MT01_B00_ORS_MT01_B03_ExitStage_K2Node_ActorBoundEvent_8_OnObjectiveCoordinatorStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.BndEvt__ORS_MT01_B00_ORS_MT01_B03_ExitStage_K2Node_ActorBoundEvent_8_OnObjectiveCoordinatorStarted__DelegateSignature");
		
		AORS_MT01_B00_C_BndEvt__ORS_MT01_B00_ORS_MT01_B03_ExitStage_K2Node_ActorBoundEvent_8_OnObjectiveCoordinatorStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B00.ORS_MT01_B00_C.ExecuteUbergraph_ORS_MT01_B00
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AORS_MT01_B00_C::ExecuteUbergraph_ORS_MT01_B00(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B00.ORS_MT01_B00_C.ExecuteUbergraph_ORS_MT01_B00");
		
		AORS_MT01_B00_C_ExecuteUbergraph_ORS_MT01_B00_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AORS_MT01_B00_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AORS_MT01_B00_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ORS_MT01_B00.ORS_MT01_B00_C");
		return ptr;
	}

}


