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
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool ASoundTrap_Base_BP_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.GetStateName");
		
		ASoundTrap_Base_BP_C_GetStateName_Params params {};
		
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
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool ASoundTrap_Base_BP_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.IsStateA");
		
		ASoundTrap_Base_BP_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 */
	bool ASoundTrap_Base_BP_C::ShouldBeIgnoredForLots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ShouldBeIgnoredForLots");
		
		ASoundTrap_Base_BP_C_ShouldBeIgnoredForLots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BP_GetCollisionCapsule
	 * 		Flags  -> ()
	 */
	class UCapsuleComponent* ASoundTrap_Base_BP_C::BP_GetCollisionCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BP_GetCollisionCapsule");
		
		ASoundTrap_Base_BP_C_BP_GetCollisionCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.Editor_RopeOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOverlaps                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      outOverlaps                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ASoundTrap_Base_BP_C::Editor_RopeOverlap(bool* bOverlaps, class FString* outOverlaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.Editor_RopeOverlap");
		
		ASoundTrap_Base_BP_C_Editor_RopeOverlap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOverlaps != nullptr)
			*bOverlaps = params.bOverlaps;
		if (outOverlaps != nullptr)
			*outOverlaps = params.outOverlaps;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BP_MapCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapCheckType                                      checkType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outErrorMsg                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool ASoundTrap_Base_BP_C::BP_MapCheck(EMapCheckType checkType, class FString* outErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BP_MapCheck");
		
		ASoundTrap_Base_BP_C_BP_MapCheck_Params params {};
		params.checkType = checkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outErrorMsg != nullptr)
			*outErrorMsg = params.outErrorMsg;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetAnchor
	 * 		Flags  -> ()
	 */
	void ASoundTrap_Base_BP_C::SetAnchor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetAnchor");
		
		ASoundTrap_Base_BP_C_SetAnchor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.EnableRopePhysics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enablePhysics                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASoundTrap_Base_BP_C::EnableRopePhysics(bool enablePhysics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.EnableRopePhysics");
		
		ASoundTrap_Base_BP_C_EnableRopePhysics_Params params {};
		params.enablePhysics = enablePhysics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ResetRopeToInitial
	 * 		Flags  -> ()
	 */
	void ASoundTrap_Base_BP_C::ResetRopeToInitial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ResetRopeToInitial");
		
		ASoundTrap_Base_BP_C_ResetRopeToInitial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetScale
	 * 		Flags  -> ()
	 */
	void ASoundTrap_Base_BP_C::SetScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetScale");
		
		ASoundTrap_Base_BP_C_SetScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetGizmo
	 * 		Flags  -> ()
	 */
	void ASoundTrap_Base_BP_C::SetGizmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetGizmo");
		
		ASoundTrap_Base_BP_C_SetGizmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ConstructSound
	 * 		Flags  -> ()
	 */
	void ASoundTrap_Base_BP_C::ConstructSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ConstructSound");
		
		ASoundTrap_Base_BP_C_ConstructSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.Initialize
	 * 		Flags  -> ()
	 */
	void ASoundTrap_Base_BP_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.Initialize");
		
		ASoundTrap_Base_BP_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.OnBumped
	 * 		Flags  -> ()
	 */
	void ASoundTrap_Base_BP_C::OnBumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.OnBumped");
		
		ASoundTrap_Base_BP_C_OnBumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.OnRep_bBumped
	 * 		Flags  -> ()
	 */
	void ASoundTrap_Base_BP_C::OnRep_bBumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.OnRep_bBumped");
		
		ASoundTrap_Base_BP_C_OnRep_bBumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASoundTrap_Base_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.UserConstructionScript");
		
		ASoundTrap_Base_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.PrepareState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      randomOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASoundTrap_Base_BP_C::PrepareState(bool bStateA, class AActor* randomOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.PrepareState");
		
		ASoundTrap_Base_BP_C_PrepareState_Params params {};
		params.bStateA = bStateA;
		params.randomOwner = randomOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASoundTrap_Base_BP_C::SetState(bool bStateA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetState");
		
		ASoundTrap_Base_BP_C_SetState_Params params {};
		params.bStateA = bStateA;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASoundTrap_Base_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ReceiveBeginPlay");
		
		ASoundTrap_Base_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BndEvt__RBRandomizableHelper_K2Node_ComponentBoundEvent_3_OnRandomStateChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ASoundTrap_Base_BP_C::BndEvt__RBRandomizableHelper_K2Node_ComponentBoundEvent_3_OnRandomStateChangedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BndEvt__RBRandomizableHelper_K2Node_ComponentBoundEvent_3_OnRandomStateChangedEvent__DelegateSignature");
		
		ASoundTrap_Base_BP_C_BndEvt__RBRandomizableHelper_K2Node_ComponentBoundEvent_3_OnRandomStateChangedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.Server_SoundTrapActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ASoundTrap_Base_BP_C::Server_SoundTrapActivated(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.Server_SoundTrapActivated");
		
		ASoundTrap_Base_BP_C_Server_SoundTrapActivated_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASoundTrap_Base_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ReceiveTick");
		
		ASoundTrap_Base_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASoundTrap_Base_BP_C::SetShouldBeIgnoredForLots(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetShouldBeIgnoredForLots");
		
		ASoundTrap_Base_BP_C_SetShouldBeIgnoredForLots_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BP_OnHitByThrowable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBThrowableWeapon*                          throwableWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASoundTrap_Base_BP_C::BP_OnHitByThrowable(const struct FVector& HitLocation, class ARBThrowableWeapon* throwableWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BP_OnHitByThrowable");
		
		ASoundTrap_Base_BP_C_BP_OnHitByThrowable_Params params {};
		params.HitLocation = HitLocation;
		params.throwableWeapon = throwableWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ProjectileHitSoundMulticast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SwitchName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ASoundTrap_Base_BP_C::ProjectileHitSoundMulticast(const class FString& SwitchName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ProjectileHitSoundMulticast");
		
		ASoundTrap_Base_BP_C_ProjectileHitSoundMulticast_Params params {};
		params.SwitchName = SwitchName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ExecuteUbergraph_SoundTrap_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASoundTrap_Base_BP_C::ExecuteUbergraph_SoundTrap_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ExecuteUbergraph_SoundTrap_Base_BP");
		
		ASoundTrap_Base_BP_C_ExecuteUbergraph_SoundTrap_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASoundTrap_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASoundTrap_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SoundTrap_Base_BP.SoundTrap_Base_BP_C");
		return ptr;
	}

}


