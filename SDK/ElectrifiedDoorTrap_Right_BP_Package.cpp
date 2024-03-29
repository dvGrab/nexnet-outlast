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
	 * 		Name   -> Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.WillPlayerTriggerTrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBDoor*                                     door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWillTrigger                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectrifiedDoorTrap_Right_BP_C::WillPlayerTriggerTrap(class ARBDoor* door, bool* bWillTrigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.WillPlayerTriggerTrap");
		
		AElectrifiedDoorTrap_Right_BP_C_WillPlayerTriggerTrap_Params params {};
		params.door = door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bWillTrigger != nullptr)
			*bWillTrigger = params.bWillTrigger;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.IsCurrentlyTriggering
	 * 		Flags  -> ()
	 */
	bool AElectrifiedDoorTrap_Right_BP_C::IsCurrentlyTriggering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.IsCurrentlyTriggering");
		
		AElectrifiedDoorTrap_Right_BP_C_IsCurrentlyTriggering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.SpawnTrapDart
	 * 		Flags  -> ()
	 */
	void AElectrifiedDoorTrap_Right_BP_C::SpawnTrapDart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.SpawnTrapDart");
		
		AElectrifiedDoorTrap_Right_BP_C_SpawnTrapDart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.OnRep_TrapProjectile
	 * 		Flags  -> ()
	 */
	void AElectrifiedDoorTrap_Right_BP_C::OnRep_TrapProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.OnRep_TrapProjectile");
		
		AElectrifiedDoorTrap_Right_BP_C_OnRep_TrapProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.Reset
	 * 		Flags  -> ()
	 */
	void AElectrifiedDoorTrap_Right_BP_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.Reset");
		
		AElectrifiedDoorTrap_Right_BP_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void AElectrifiedDoorTrap_Right_BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.Event_OnTriggered");
		
		AElectrifiedDoorTrap_Right_BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AElectrifiedDoorTrap_Right_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.ReceiveBeginPlay");
		
		AElectrifiedDoorTrap_Right_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AElectrifiedDoorTrap_Right_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.Event_OnResetStage");
		
		AElectrifiedDoorTrap_Right_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void AElectrifiedDoorTrap_Right_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.ReceiveDestroyed");
		
		AElectrifiedDoorTrap_Right_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.BP_LinkTriggerTrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBWireTriggerTrap*                          triggerTrap                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrifiedDoorTrap_Right_BP_C::BP_LinkTriggerTrap(class ARBWireTriggerTrap* triggerTrap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.BP_LinkTriggerTrap");
		
		AElectrifiedDoorTrap_Right_BP_C_BP_LinkTriggerTrap_Params params {};
		params.triggerTrap = triggerTrap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.OnDoorRepulsionScheduled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBDoor*                                     door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrifiedDoorTrap_Right_BP_C::OnDoorRepulsionScheduled(class ARBDoor* door)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.OnDoorRepulsionScheduled");
		
		AElectrifiedDoorTrap_Right_BP_C_OnDoorRepulsionScheduled_Params params {};
		params.door = door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void AElectrifiedDoorTrap_Right_BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.Event_SnapToState");
		
		AElectrifiedDoorTrap_Right_BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.ExecuteUbergraph_ElectrifiedDoorTrap-Right_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AElectrifiedDoorTrap_Right_BP_C::ExecuteUbergraph_ElectrifiedDoorTrap_Right_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.ExecuteUbergraph_ElectrifiedDoorTrap-Right_BP");
		
		AElectrifiedDoorTrap_Right_BP_C_ExecuteUbergraph_ElectrifiedDoorTrap_Right_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AElectrifiedDoorTrap_Right_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElectrifiedDoorTrap_Right_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElectrifiedDoorTrap_Right_BP.ElectrifiedDoorTrap-Right_BP_C");
		return ptr;
	}

}


