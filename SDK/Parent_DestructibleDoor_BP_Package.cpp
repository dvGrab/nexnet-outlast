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
	 * 		Name   -> Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.GetPingItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        outName                                                    (Parm, OutParm)
	 */
	bool AParent_DestructibleDoor_BP_C::GetPingItemName(class FText* outName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.GetPingItemName");
		
		AParent_DestructibleDoor_BP_C_GetPingItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outName != nullptr)
			*outName = params.outName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.GetPingEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               outIsEnabled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AParent_DestructibleDoor_BP_C::GetPingEnabled(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, bool* outIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.GetPingEnabled");
		
		AParent_DestructibleDoor_BP_C_GetPingEnabled_Params params {};
		params.pingOwner = pingOwner;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outIsEnabled != nullptr)
			*outIsEnabled = params.outIsEnabled;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.GetPlayerPingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FPlayerPingData                             outData                                                    (Parm, OutParm)
	 */
	bool AParent_DestructibleDoor_BP_C::GetPlayerPingData(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FPlayerPingData* outData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.GetPlayerPingData");
		
		AParent_DestructibleDoor_BP_C_GetPlayerPingData_Params params {};
		params.pingOwner = pingOwner;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outData != nullptr)
			*outData = params.outData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.GetPlayerPingWorldLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AParent_DestructibleDoor_BP_C::GetPlayerPingWorldLocation(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.GetPlayerPingWorldLocation");
		
		AParent_DestructibleDoor_BP_C_GetPlayerPingWorldLocation_Params params {};
		params.pingOwner = pingOwner;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.EnableDamageSectionsShadow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CastShadow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AParent_DestructibleDoor_BP_C::EnableDamageSectionsShadow(bool CastShadow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.EnableDamageSectionsShadow");
		
		AParent_DestructibleDoor_BP_C_EnableDamageSectionsShadow_Params params {};
		params.CastShadow = CastShadow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.PostWindowBreakAkEvent
	 * 		Flags  -> ()
	 */
	void AParent_DestructibleDoor_BP_C::PostWindowBreakAkEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.PostWindowBreakAkEvent");
		
		AParent_DestructibleDoor_BP_C_PostWindowBreakAkEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.SetParticleRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Front                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystemComponent*                    ParticleSystem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AParent_DestructibleDoor_BP_C::SetParticleRotation(class ARBPawn* Front, class UParticleSystemComponent* ParticleSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.SetParticleRotation");
		
		AParent_DestructibleDoor_BP_C_SetParticleRotation_Params params {};
		params.Front = Front;
		params.ParticleSystem = ParticleSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.SetMovementTransforms
	 * 		Flags  -> ()
	 */
	void AParent_DestructibleDoor_BP_C::SetMovementTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.SetMovementTransforms");
		
		AParent_DestructibleDoor_BP_C_SetMovementTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AParent_DestructibleDoor_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.UserConstructionScript");
		
		AParent_DestructibleDoor_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.Event On Bash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bApplyDamageVisual                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EBashDoorType                                      bashType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AParent_DestructibleDoor_BP_C::Event_On_Bash(class ARBPawn* Pawn, bool bSuccess, bool bApplyDamageVisual, EBashDoorType bashType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.Event On Bash");
		
		AParent_DestructibleDoor_BP_C_Event_On_Bash_Params params {};
		params.Pawn = Pawn;
		params.bSuccess = bSuccess;
		params.bApplyDamageVisual = bApplyDamageVisual;
		params.bashType = bashType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AParent_DestructibleDoor_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.Event_OnResetStage");
		
		AParent_DestructibleDoor_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AParent_DestructibleDoor_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.ReceiveBeginPlay");
		
		AParent_DestructibleDoor_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.ExecuteUbergraph_Parent_DestructibleDoor_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AParent_DestructibleDoor_BP_C::ExecuteUbergraph_Parent_DestructibleDoor_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C.ExecuteUbergraph_Parent_DestructibleDoor_BP");
		
		AParent_DestructibleDoor_BP_C_ExecuteUbergraph_Parent_DestructibleDoor_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AParent_DestructibleDoor_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AParent_DestructibleDoor_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C");
		return ptr;
	}

}


