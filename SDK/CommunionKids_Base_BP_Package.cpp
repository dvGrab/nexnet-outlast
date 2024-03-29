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
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.SetBlood
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              IncrementalValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACommunionKids_Base_BP_C::SetBlood(float IncrementalValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.SetBlood");
		
		ACommunionKids_Base_BP_C_SetBlood_Params params {};
		params.IncrementalValue = IncrementalValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_OrientationYaw
	 * 		Flags  -> ()
	 */
	void ACommunionKids_Base_BP_C::OnRep_OrientationYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_OrientationYaw");
		
		ACommunionKids_Base_BP_C_OnRep_OrientationYaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ApplyStateToAnimInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACommunionKids_Base_BP_C::ApplyStateToAnimInstance(class USkeletalMeshComponent* SkeletalMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ApplyStateToAnimInstance");
		
		ACommunionKids_Base_BP_C_ApplyStateToAnimInstance_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_IsReorienting
	 * 		Flags  -> ()
	 */
	void ACommunionKids_Base_BP_C::OnRep_IsReorienting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_IsReorienting");
		
		ACommunionKids_Base_BP_C_OnRep_IsReorienting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.TickRecentering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACommunionKids_Base_BP_C::TickRecentering(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.TickRecentering");
		
		ACommunionKids_Base_BP_C_TickRecentering_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ShouldBPTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACommunionKids_Base_BP_C::ShouldBPTick(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ShouldBPTick");
		
		ACommunionKids_Base_BP_C_ShouldBPTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_IsRecentering
	 * 		Flags  -> ()
	 */
	void ACommunionKids_Base_BP_C::OnRep_IsRecentering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_IsRecentering");
		
		ACommunionKids_Base_BP_C_OnRep_IsRecentering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.TickReorientingAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACommunionKids_Base_BP_C::TickReorientingAngle(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.TickReorientingAngle");
		
		ACommunionKids_Base_BP_C_TickReorientingAngle_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_IsLooking
	 * 		Flags  -> ()
	 */
	void ACommunionKids_Base_BP_C::OnRep_IsLooking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_IsLooking");
		
		ACommunionKids_Base_BP_C_OnRep_IsLooking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.Refresh Anim State
	 * 		Flags  -> ()
	 */
	void ACommunionKids_Base_BP_C::Refresh_Anim_State()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.Refresh Anim State");
		
		ACommunionKids_Base_BP_C_Refresh_Anim_State_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_IsPraying
	 * 		Flags  -> ()
	 */
	void ACommunionKids_Base_BP_C::OnRep_IsPraying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_IsPraying");
		
		ACommunionKids_Base_BP_C_OnRep_IsPraying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.StartExiting
	 * 		Flags  -> ()
	 */
	void ACommunionKids_Base_BP_C::StartExiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.StartExiting");
		
		ACommunionKids_Base_BP_C_StartExiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.Event_StartedScriptedAnim
	 * 		Flags  -> ()
	 */
	void ACommunionKids_Base_BP_C::Event_StartedScriptedAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.Event_StartedScriptedAnim");
		
		ACommunionKids_Base_BP_C_Event_StartedScriptedAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ACommunionKids_Base_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.Event_OnResetStage");
		
		ACommunionKids_Base_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.Detach
	 * 		Flags  -> ()
	 */
	void ACommunionKids_Base_BP_C::Detach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.Detach");
		
		ACommunionKids_Base_BP_C_Detach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.StartPraying
	 * 		Flags  -> ()
	 */
	void ACommunionKids_Base_BP_C::StartPraying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.StartPraying");
		
		ACommunionKids_Base_BP_C_StartPraying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.StartStaring
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      StaringActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACommunionKids_Base_BP_C::StartStaring(class AActor* StaringActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.StartStaring");
		
		ACommunionKids_Base_BP_C_StartStaring_Params params {};
		params.StaringActor = StaringActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACommunionKids_Base_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ReceiveTick");
		
		ACommunionKids_Base_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACommunionKids_Base_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ReceiveBeginPlay");
		
		ACommunionKids_Base_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ExecuteUbergraph_CommunionKids_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACommunionKids_Base_BP_C::ExecuteUbergraph_CommunionKids_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ExecuteUbergraph_CommunionKids_Base_BP");
		
		ACommunionKids_Base_BP_C_ExecuteUbergraph_CommunionKids_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACommunionKids_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACommunionKids_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CommunionKids_Base_BP.CommunionKids_Base_BP_C");
		return ptr;
	}

}


