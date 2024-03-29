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
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.AddWindowCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             AttachBase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoorBase_BP_C::AddWindowCollision(class AActor* Actor, class USceneComponent* AttachBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.AddWindowCollision");
		
		ADoorBase_BP_C_AddWindowCollision_Params params {};
		params.Actor = Actor;
		params.AttachBase = AttachBase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.HasDestructibleDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADoorBase_BP_C::HasDestructibleDoor(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.HasDestructibleDoor");
		
		ADoorBase_BP_C_HasDestructibleDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.ApplyDoorCollisionTypeToDoor
	 * 		Flags  -> ()
	 */
	void ADoorBase_BP_C::ApplyDoorCollisionTypeToDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.ApplyDoorCollisionTypeToDoor");
		
		ADoorBase_BP_C_ApplyDoorCollisionTypeToDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.GetTrapTellMaxIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TrapTellMaxIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoorBase_BP_C::GetTrapTellMaxIndex(int32_t* TrapTellMaxIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.GetTrapTellMaxIndex");
		
		ADoorBase_BP_C_GetTrapTellMaxIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TrapTellMaxIndex != nullptr)
			*TrapTellMaxIndex = params.TrapTellMaxIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.ClearAllTrapTells
	 * 		Flags  -> ()
	 */
	void ADoorBase_BP_C::ClearAllTrapTells()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.ClearAllTrapTells");
		
		ADoorBase_BP_C_ClearAllTrapTells_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.TryAddNewTrapTell
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFromFront                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADoorBase_BP_C::TryAddNewTrapTell(bool bFromFront)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.TryAddNewTrapTell");
		
		ADoorBase_BP_C_TryAddNewTrapTell_Params params {};
		params.bFromFront = bFromFront;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.GetRandomTrapIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TellIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMesh*                                 Mesh                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  RelativeTransform                                          (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ADoorBase_BP_C::GetRandomTrapIndicator(int32_t* TellIndex, class UStaticMesh** Mesh, struct FTransform* RelativeTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.GetRandomTrapIndicator");
		
		ADoorBase_BP_C_GetRandomTrapIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TellIndex != nullptr)
			*TellIndex = params.TellIndex;
		if (Mesh != nullptr)
			*Mesh = params.Mesh;
		if (RelativeTransform != nullptr)
			*RelativeTransform = params.RelativeTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.InitializeSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoorBase_BP_C::InitializeSettings(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.InitializeSettings");
		
		ADoorBase_BP_C_InitializeSettings_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.SetLockBarsVisibility
	 * 		Flags  -> ()
	 */
	void ADoorBase_BP_C::SetLockBarsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.SetLockBarsVisibility");
		
		ADoorBase_BP_C_SetLockBarsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.DisableDestructibleDoorCollision
	 * 		Flags  -> ()
	 */
	void ADoorBase_BP_C::DisableDestructibleDoorCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.DisableDestructibleDoorCollision");
		
		ADoorBase_BP_C_DisableDestructibleDoorCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ADoorBase_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.UserConstructionScript");
		
		ADoorBase_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.ShakeTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ADoorBase_BP_C::ShakeTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.ShakeTimeline__FinishedFunc");
		
		ADoorBase_BP_C_ShakeTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.ShakeTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ADoorBase_BP_C::ShakeTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.ShakeTimeline__UpdateFunc");
		
		ADoorBase_BP_C_ShakeTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorBashEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bApplyVisualDoorDamage                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EBashDoorType                                      bashType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoorBase_BP_C::BP_OnDoorBashEvent(class ARBPawn* Pawn, bool bSuccess, bool bApplyVisualDoorDamage, EBashDoorType bashType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorBashEvent");
		
		ADoorBase_BP_C_BP_OnDoorBashEvent_Params params {};
		params.Pawn = Pawn;
		params.bSuccess = bSuccess;
		params.bApplyVisualDoorDamage = bApplyVisualDoorDamage;
		params.bashType = bashType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.ShakeDoor
	 * 		Flags  -> ()
	 */
	void ADoorBase_BP_C::ShakeDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.ShakeDoor");
		
		ADoorBase_BP_C_ShakeDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorBarsLockingEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLocking                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADoorBase_BP_C::BP_OnDoorBarsLockingEvent(bool bLocking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorBarsLockingEvent");
		
		ADoorBase_BP_C_BP_OnDoorBarsLockingEvent_Params params {};
		params.bLocking = bLocking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorUnhingeEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoorBase_BP_C::BP_OnDoorUnhingeEvent(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorUnhingeEvent");
		
		ADoorBase_BP_C_BP_OnDoorUnhingeEvent_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.Event_PostRegisterAllComponents
	 * 		Flags  -> ()
	 */
	void ADoorBase_BP_C::Event_PostRegisterAllComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.Event_PostRegisterAllComponents");
		
		ADoorBase_BP_C_Event_PostRegisterAllComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.BP_OnActorAttachedToDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoorBase_BP_C::BP_OnActorAttachedToDoor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BP_OnActorAttachedToDoor");
		
		ADoorBase_BP_C_BP_OnActorAttachedToDoor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorTrappedStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTrapped                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromFront                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADoorBase_BP_C::BP_OnDoorTrappedStateChanged(bool bTrapped, bool bFromFront)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorTrappedStateChanged");
		
		ADoorBase_BP_C_BP_OnDoorTrappedStateChanged_Params params {};
		params.bTrapped = bTrapped;
		params.bFromFront = bFromFront;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ADoorBase_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.Event_OnResetStage");
		
		ADoorBase_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorTrapActivated
	 * 		Flags  -> ()
	 */
	void ADoorBase_BP_C::BP_OnDoorTrapActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorTrapActivated");
		
		ADoorBase_BP_C_BP_OnDoorTrapActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorTrapDisarmed
	 * 		Flags  -> ()
	 */
	void ADoorBase_BP_C::BP_OnDoorTrapDisarmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorTrapDisarmed");
		
		ADoorBase_BP_C_BP_OnDoorTrapDisarmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void ADoorBase_BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.Event_SnapToState");
		
		ADoorBase_BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.PostToggled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bToggleEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADoorBase_BP_C::PostToggled(bool bToggleEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PostToggled");
		
		ADoorBase_BP_C_PostToggled_Params params {};
		params.bToggleEnabled = bToggleEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorBase_BP.DoorBase_BP_C.ExecuteUbergraph_DoorBase_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoorBase_BP_C::ExecuteUbergraph_DoorBase_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.ExecuteUbergraph_DoorBase_BP");
		
		ADoorBase_BP_C_ExecuteUbergraph_DoorBase_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoorBase_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoorBase_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoorBase_BP.DoorBase_BP_C");
		return ptr;
	}

}


