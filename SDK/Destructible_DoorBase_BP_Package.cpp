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
	 * 		Name   -> Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.HasDestructibleDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADestructible_DoorBase_BP_C::HasDestructibleDoor(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.HasDestructibleDoor");
		
		ADestructible_DoorBase_BP_C_HasDestructibleDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.ApplyDoorCollisionTypeToDestructible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Destructible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADestructible_DoorBase_BP_C::ApplyDoorCollisionTypeToDestructible(class AActor* Destructible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.ApplyDoorCollisionTypeToDestructible");
		
		ADestructible_DoorBase_BP_C_ApplyDoorCollisionTypeToDestructible_Params params {};
		params.Destructible = Destructible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.BndEvt__DestructibleDoor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBActorPrevisComponent*                     actorPrevis                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      runtimeChildActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADestructible_DoorBase_BP_C::BndEvt__DestructibleDoor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature(class URBActorPrevisComponent* actorPrevis, class AActor* runtimeChildActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.BndEvt__DestructibleDoor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature");
		
		ADestructible_DoorBase_BP_C_BndEvt__DestructibleDoor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature_Params params {};
		params.actorPrevis = actorPrevis;
		params.runtimeChildActor = runtimeChildActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.PostToggled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bToggleEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADestructible_DoorBase_BP_C::PostToggled(bool bToggleEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.PostToggled");
		
		ADestructible_DoorBase_BP_C_PostToggled_Params params {};
		params.bToggleEnabled = bToggleEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ADestructible_DoorBase_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.Event_OnResetStage");
		
		ADestructible_DoorBase_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.ExecuteUbergraph_Destructible_DoorBase_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADestructible_DoorBase_BP_C::ExecuteUbergraph_Destructible_DoorBase_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.ExecuteUbergraph_Destructible_DoorBase_BP");
		
		ADestructible_DoorBase_BP_C_ExecuteUbergraph_Destructible_DoorBase_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADestructible_DoorBase_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestructible_DoorBase_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Destructible_DoorBase_BP.Destructible_DoorBase_BP_C");
		return ptr;
	}

}


