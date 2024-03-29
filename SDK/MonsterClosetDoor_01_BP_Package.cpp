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
	 * 		Name   -> Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.PlayOpenSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Open                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMonsterClosetDoor__BP_C::PlayOpenSound(bool Open)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.PlayOpenSound");
		
		AMonsterClosetDoor__BP_C_PlayOpenSound_Params params {};
		params.Open = Open;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.BP_Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AMonsterClosetDoor__BP_C::BP_Tick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.BP_Tick");
		
		AMonsterClosetDoor__BP_C_BP_Tick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Set Height
	 * 		Flags  -> ()
	 */
	void AMonsterClosetDoor__BP_C::Set_Height()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Set Height");
		
		AMonsterClosetDoor__BP_C_Set_Height_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.OnTimelineUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonsterClosetDoor__BP_C::OnTimelineUpdate(float ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.OnTimelineUpdate");
		
		AMonsterClosetDoor__BP_C_OnTimelineUpdate_Params params {};
		params.ratio = ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMonsterClosetDoor__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.UserConstructionScript");
		
		AMonsterClosetDoor__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.AnimationTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AMonsterClosetDoor__BP_C::AnimationTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.AnimationTimeline__FinishedFunc");
		
		AMonsterClosetDoor__BP_C_AnimationTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.AnimationTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AMonsterClosetDoor__BP_C::AnimationTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.AnimationTimeline__UpdateFunc");
		
		AMonsterClosetDoor__BP_C_AnimationTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_OnPlayerInClosetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   oldPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonsterClosetDoor__BP_C::Event_OnPlayerInClosetChanged(class ARBPlayer* oldPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_OnPlayerInClosetChanged");
		
		AMonsterClosetDoor__BP_C_Event_OnPlayerInClosetChanged_Params params {};
		params.oldPlayer = oldPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_TriggerNPCSpawnAnnouncement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENPCType                                           NPCType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonsterClosetDoor__BP_C::Event_TriggerNPCSpawnAnnouncement(ENPCType NPCType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_TriggerNPCSpawnAnnouncement");
		
		AMonsterClosetDoor__BP_C_Event_TriggerNPCSpawnAnnouncement_Params params {};
		params.NPCType = NPCType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.SetWarningLightActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AlarmLightState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMonsterClosetDoor__BP_C::SetWarningLightActive(bool AlarmLightState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.SetWarningLightActive");
		
		AMonsterClosetDoor__BP_C_SetWarningLightActive_Params params {};
		params.AlarmLightState = AlarmLightState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_SetNPCSpawnWarningActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWarningActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMonsterClosetDoor__BP_C::Event_SetNPCSpawnWarningActive(bool bWarningActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_SetNPCSpawnWarningActive");
		
		AMonsterClosetDoor__BP_C_Event_SetNPCSpawnWarningActive_Params params {};
		params.bWarningActive = bWarningActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_ApplyOpenState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOpen                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMonsterClosetDoor__BP_C::Event_ApplyOpenState(bool bOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_ApplyOpenState");
		
		AMonsterClosetDoor__BP_C_Event_ApplyOpenState_Params params {};
		params.bOpen = bOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.ExecuteUbergraph_MonsterClosetDoor-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMonsterClosetDoor__BP_C::ExecuteUbergraph_MonsterClosetDoor__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.ExecuteUbergraph_MonsterClosetDoor-01_BP");
		
		AMonsterClosetDoor__BP_C_ExecuteUbergraph_MonsterClosetDoor__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMonsterClosetDoor__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMonsterClosetDoor__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MonsterClosetDoor_01_BP.MonsterClosetDoor-01_BP_C");
		return ptr;
	}

}


