/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.getBGIntroTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              GruntTimer                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_AI_C::getBGIntroTimer(float* GruntTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.getBGIntroTimer");
		
		APoliceStation_T02_AI_C_getBGIntroTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GruntTimer != nullptr)
			*GruntTimer = params.GruntTimer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_SpawnCoyle
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B02_AI_SpawnCoyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_SpawnCoyle");
		
		APoliceStation_T02_AI_C_B02_AI_SpawnCoyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_Setup
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B02_AI_Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_Setup");
		
		APoliceStation_T02_AI_C_B02_AI_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.BndEvt__PoliceStation_T02_AI_RBPlayerTriggerVolume_AI_SpawnCoyleEasy_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerTriggerComponent*                   Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_AI_C::BndEvt__PoliceStation_T02_AI_RBPlayerTriggerVolume_AI_SpawnCoyleEasy_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.BndEvt__PoliceStation_T02_AI_RBPlayerTriggerVolume_AI_SpawnCoyleEasy_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature");
		
		APoliceStation_T02_AI_C_BndEvt__PoliceStation_T02_AI_RBPlayerTriggerVolume_AI_SpawnCoyleEasy_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_SpawnPouncer
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B02_AI_SpawnPouncer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_SpawnPouncer");
		
		APoliceStation_T02_AI_C_B02_AI_SpawnPouncer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_SpawnScreamer1
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B02_AI_SpawnScreamer1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_SpawnScreamer1");
		
		APoliceStation_T02_AI_C_B02_AI_SpawnScreamer1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_SpawnScreamer2
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B02_AI_SpawnScreamer2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_SpawnScreamer2");
		
		APoliceStation_T02_AI_C_B02_AI_SpawnScreamer2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_GeneratorCompleted_Remote
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B02_AI_GeneratorCompleted_Remote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_GeneratorCompleted_Remote");
		
		APoliceStation_T02_AI_C_B02_AI_GeneratorCompleted_Remote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_SwapCoyleBehavior
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B02_AI_SwapCoyleBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_SwapCoyleBehavior");
		
		APoliceStation_T02_AI_C_B02_AI_SwapCoyleBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.Event_OnResetStage");
		
		APoliceStation_T02_AI_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B07_AI_Update
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B07_AI_Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B07_AI_Update");
		
		APoliceStation_T02_AI_C_B07_AI_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_Berzerker_Basement
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B02_AI_Berzerker_Basement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_Berzerker_Basement");
		
		APoliceStation_T02_AI_C_B02_AI_Berzerker_Basement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_SpawnBigGruntRail
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_SpawnBigGruntRail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_SpawnBigGruntRail");
		
		APoliceStation_T02_AI_C_B01_AI_SpawnBigGruntRail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_ReachCell_Remote
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_ReachCell_Remote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_ReachCell_Remote");
		
		APoliceStation_T02_AI_C_B01_AI_ReachCell_Remote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_Setup
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_Setup");
		
		APoliceStation_T02_AI_C_B04_AI_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnPouncer
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_SpawnPouncer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnPouncer");
		
		APoliceStation_T02_AI_C_B04_AI_SpawnPouncer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_ManagementAfterControlRoom
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_ManagementAfterControlRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_ManagementAfterControlRoom");
		
		APoliceStation_T02_AI_C_B01_AI_ManagementAfterControlRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_AllGatesOpen
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_AllGatesOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_AllGatesOpen");
		
		APoliceStation_T02_AI_C_B04_AI_AllGatesOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_CoyleTriggerPassed
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_CoyleTriggerPassed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_CoyleTriggerPassed");
		
		APoliceStation_T02_AI_C_B04_AI_CoyleTriggerPassed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.AI_DataSetup
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::AI_DataSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.AI_DataSetup");
		
		APoliceStation_T02_AI_C_AI_DataSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_ButtonPress_Remote
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_ButtonPress_Remote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_ButtonPress_Remote");
		
		APoliceStation_T02_AI_C_B01_AI_ButtonPress_Remote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnCoyle
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_SpawnCoyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnCoyle");
		
		APoliceStation_T02_AI_C_B04_AI_SpawnCoyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_Spawn_PatrolOfficeBigGrunt
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_Spawn_PatrolOfficeBigGrunt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_Spawn_PatrolOfficeBigGrunt");
		
		APoliceStation_T02_AI_C_B01_AI_Spawn_PatrolOfficeBigGrunt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_SpawnPatrolScreamer
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_SpawnPatrolScreamer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_SpawnPatrolScreamer");
		
		APoliceStation_T02_AI_C_B01_AI_SpawnPatrolScreamer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_SpawnPouncer
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_SpawnPouncer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_SpawnPouncer");
		
		APoliceStation_T02_AI_C_B01_AI_SpawnPouncer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_SpawnGruntPatrol_Medium
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_SpawnGruntPatrol_Medium()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_SpawnGruntPatrol_Medium");
		
		APoliceStation_T02_AI_C_B01_AI_SpawnGruntPatrol_Medium_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.BndEvt__PoliceStation_T02_AI_Trigger_T02_SPawnBG_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerTriggerComponent*                   Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_AI_C::BndEvt__PoliceStation_T02_AI_Trigger_T02_SPawnBG_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.BndEvt__PoliceStation_T02_AI_Trigger_T02_SPawnBG_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature");
		
		APoliceStation_T02_AI_C_BndEvt__PoliceStation_T02_AI_Trigger_T02_SPawnBG_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_SpawnGruntPatrol_Heavy
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_SpawnGruntPatrol_Heavy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_SpawnGruntPatrol_Heavy");
		
		APoliceStation_T02_AI_C_B01_AI_SpawnGruntPatrol_Heavy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_Spawn_PatrolStreetBigGrunt
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_Spawn_PatrolStreetBigGrunt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_Spawn_PatrolStreetBigGrunt");
		
		APoliceStation_T02_AI_C_B01_AI_Spawn_PatrolStreetBigGrunt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_Cleaning_Part01
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B02_AI_Cleaning_Part01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_Cleaning_Part01");
		
		APoliceStation_T02_AI_C_B02_AI_Cleaning_Part01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_Setup_Remote
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_Setup_Remote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_Setup_Remote");
		
		APoliceStation_T02_AI_C_B01_AI_Setup_Remote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_ExtendRailBGToAdmin
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_ExtendRailBGToAdmin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_ExtendRailBGToAdmin");
		
		APoliceStation_T02_AI_C_B04_AI_ExtendRailBGToAdmin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnGruntAdmin_Medium
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_SpawnGruntAdmin_Medium()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnGruntAdmin_Medium");
		
		APoliceStation_T02_AI_C_B04_AI_SpawnGruntAdmin_Medium_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_ExtendRailBGToLobby
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_ExtendRailBGToLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_ExtendRailBGToLobby");
		
		APoliceStation_T02_AI_C_B04_AI_ExtendRailBGToLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnScreamerAdmin
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_SpawnScreamerAdmin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnScreamerAdmin");
		
		APoliceStation_T02_AI_C_B04_AI_SpawnScreamerAdmin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnScreamerDetective
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_SpawnScreamerDetective()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnScreamerDetective");
		
		APoliceStation_T02_AI_C_B04_AI_SpawnScreamerDetective_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnGruntDetective_Medium
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_SpawnGruntDetective_Medium()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnGruntDetective_Medium");
		
		APoliceStation_T02_AI_C_B04_AI_SpawnGruntDetective_Medium_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnGruntDetective_Heavy
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_SpawnGruntDetective_Heavy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SpawnGruntDetective_Heavy");
		
		APoliceStation_T02_AI_C_B04_AI_SpawnGruntDetective_Heavy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_Cleaning
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_Cleaning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_Cleaning");
		
		APoliceStation_T02_AI_C_B04_AI_Cleaning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SecondGateOpened_Remote
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_SecondGateOpened_Remote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_SecondGateOpened_Remote");
		
		APoliceStation_T02_AI_C_B04_AI_SecondGateOpened_Remote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_SpawnSecuritySreamer
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_SpawnSecuritySreamer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_SpawnSecuritySreamer");
		
		APoliceStation_T02_AI_C_B01_AI_SpawnSecuritySreamer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_ThirdGateOpened_Remote
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_ThirdGateOpened_Remote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_ThirdGateOpened_Remote");
		
		APoliceStation_T02_AI_C_B04_AI_ThirdGateOpened_Remote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_ExtendRailBGToDetective
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_ExtendRailBGToDetective()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_ExtendRailBGToDetective");
		
		APoliceStation_T02_AI_C_B04_AI_ExtendRailBGToDetective_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_Spawn_PatrolStreetHeavyBigGrunt
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_Spawn_PatrolStreetHeavyBigGrunt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_Spawn_PatrolStreetHeavyBigGrunt");
		
		APoliceStation_T02_AI_C_B01_AI_Spawn_PatrolStreetHeavyBigGrunt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_Cleaning_Part02
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B02_AI_Cleaning_Part02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_Cleaning_Part02");
		
		APoliceStation_T02_AI_C_B02_AI_Cleaning_Part02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_ManagementBeforeGarage
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_ManagementBeforeGarage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_ManagementBeforeGarage");
		
		APoliceStation_T02_AI_C_B01_AI_ManagementBeforeGarage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.AI_StartDirectorHigh
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::AI_StartDirectorHigh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.AI_StartDirectorHigh");
		
		APoliceStation_T02_AI_C_AI_StartDirectorHigh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.AI_StartDirector
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::AI_StartDirector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.AI_StartDirector");
		
		APoliceStation_T02_AI_C_AI_StartDirector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_Spawn_AmbientPatrolStreet
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_Spawn_AmbientPatrolStreet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_Spawn_AmbientPatrolStreet");
		
		APoliceStation_T02_AI_C_B01_AI_Spawn_AmbientPatrolStreet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_Spawn_AmbientSully
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B02_AI_Spawn_AmbientSully()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_Spawn_AmbientSully");
		
		APoliceStation_T02_AI_C_B02_AI_Spawn_AmbientSully_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_FirstGateOpened_Remote
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B04_AI_FirstGateOpened_Remote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B04_AI_FirstGateOpened_Remote");
		
		APoliceStation_T02_AI_C_B04_AI_FirstGateOpened_Remote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B03_AI_GetBackSnitch_Remote
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B03_AI_GetBackSnitch_Remote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B03_AI_GetBackSnitch_Remote");
		
		APoliceStation_T02_AI_C_B03_AI_GetBackSnitch_Remote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_ManagementAfterGenerator
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B01_AI_ManagementAfterGenerator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B01_AI_ManagementAfterGenerator");
		
		APoliceStation_T02_AI_C_B01_AI_ManagementAfterGenerator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_PlayerTriggerAvellanos_Remote
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_AI_C::B02_AI_PlayerTriggerAvellanos_Remote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.B02_AI_PlayerTriggerAvellanos_Remote");
		
		APoliceStation_T02_AI_C_B02_AI_PlayerTriggerAvellanos_Remote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.ExecuteUbergraph_PoliceStation_T02_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_AI_C::ExecuteUbergraph_PoliceStation_T02_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_AI.PoliceStation_T02_AI_C.ExecuteUbergraph_PoliceStation_T02_AI");
		
		APoliceStation_T02_AI_C_ExecuteUbergraph_PoliceStation_T02_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoliceStation_T02_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceStation_T02_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceStation_T02_AI.PoliceStation_T02_AI_C");
		return ptr;
	}

}


