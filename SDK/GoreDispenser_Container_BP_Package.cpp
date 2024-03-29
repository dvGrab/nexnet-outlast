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
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.FixUp
	 * 		Flags  -> ()
	 */
	bool AGoreDispenser_Container_BP_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.FixUp");
		
		AGoreDispenser_Container_BP_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool AGoreDispenser_Container_BP_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.GetStateName");
		
		AGoreDispenser_Container_BP_C_GetStateName_Params params {};
		
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
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool AGoreDispenser_Container_BP_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.IsStateA");
		
		AGoreDispenser_Container_BP_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 */
	bool AGoreDispenser_Container_BP_C::ShouldBeIgnoredForLots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ShouldBeIgnoredForLots");
		
		AGoreDispenser_Container_BP_C_ShouldBeIgnoredForLots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetAllItemsEnabledBySpawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGoreDispenser_Container_BP_C::SetAllItemsEnabledBySpawnLocation(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetAllItemsEnabledBySpawnLocation");
		
		AGoreDispenser_Container_BP_C_SetAllItemsEnabledBySpawnLocation_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetItemEnabledBySpawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBContainerSpawnLocationComponent*          spawnLocationComponent                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGoreDispenser_Container_BP_C::SetItemEnabledBySpawnLocation(class URBContainerSpawnLocationComponent* spawnLocationComponent, bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetItemEnabledBySpawnLocation");
		
		AGoreDispenser_Container_BP_C_SetItemEnabledBySpawnLocation_Params params {};
		params.spawnLocationComponent = spawnLocationComponent;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ReinitSpawnLocationZ
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBContainerSpawnLocationComponent*          SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SpawnLocationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::ReinitSpawnLocationZ(class URBContainerSpawnLocationComponent* SpawnLocation, int32_t SpawnLocationIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ReinitSpawnLocationZ");
		
		AGoreDispenser_Container_BP_C_ReinitSpawnLocationZ_Params params {};
		params.SpawnLocation = SpawnLocation;
		params.SpawnLocationIndex = SpawnLocationIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ReinitAllSpawnLocationZ
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::ReinitAllSpawnLocationZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ReinitAllSpawnLocationZ");
		
		AGoreDispenser_Container_BP_C_ReinitAllSpawnLocationZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnDesiredSpawnLocationZChanged
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::OnDesiredSpawnLocationZChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnDesiredSpawnLocationZChanged");
		
		AGoreDispenser_Container_BP_C_OnDesiredSpawnLocationZChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.TickFloating
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDone                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGoreDispenser_Container_BP_C::TickFloating(float DeltaTime, bool* bDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.TickFloating");
		
		AGoreDispenser_Container_BP_C_TickFloating_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDone != nullptr)
			*bDone = params.bDone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnRep_DesiredSpawnLocationZ
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::OnRep_DesiredSpawnLocationZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnRep_DesiredSpawnLocationZ");
		
		AGoreDispenser_Container_BP_C_OnRep_DesiredSpawnLocationZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetSpawnLocationRelativeZ
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBContainerSpawnLocationComponent*          SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Z                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::SetSpawnLocationRelativeZ(class URBContainerSpawnLocationComponent* SpawnLocation, float Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetSpawnLocationRelativeZ");
		
		AGoreDispenser_Container_BP_C_SetSpawnLocationRelativeZ_Params params {};
		params.SpawnLocation = SpawnLocation;
		params.Z = Z;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.UserConstructionScript");
		
		AGoreDispenser_Container_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.DrainTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::DrainTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.DrainTimeline__FinishedFunc");
		
		AGoreDispenser_Container_BP_C_DrainTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.DrainTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::DrainTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.DrainTimeline__UpdateFunc");
		
		AGoreDispenser_Container_BP_C_DrainTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnEditorPostLoad");
		
		AGoreDispenser_Container_BP_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AGoreDispenser_Container_BP_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnPostActorsPasted");
		
		AGoreDispenser_Container_BP_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostAddedToLevel");
		
		AGoreDispenser_Container_BP_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostDuplicated");
		
		AGoreDispenser_Container_BP_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostEditChange");
		
		AGoreDispenser_Container_BP_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGoreDispenser_Container_BP_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostEditMove");
		
		AGoreDispenser_Container_BP_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.TickSelected
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.TickSelected");
		
		AGoreDispenser_Container_BP_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Event_OnResetStage");
		
		AGoreDispenser_Container_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGoreDispenser_Container_BP_C::SetState(bool bStateA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetState");
		
		AGoreDispenser_Container_BP_C_SetState_Params params {};
		params.bStateA = bStateA;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGoreDispenser_Container_BP_C::SetShouldBeIgnoredForLots(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.SetShouldBeIgnoredForLots");
		
		AGoreDispenser_Container_BP_C_SetShouldBeIgnoredForLots_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Drain
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::Drain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Drain");
		
		AGoreDispenser_Container_BP_C_Drain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Fill
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::Fill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Fill");
		
		AGoreDispenser_Container_BP_C_Fill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Event_ItemRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPickup*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBContainerSpawnLocationComponent*          Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::Event_ItemRemoved(class ARBPickup* Item, int32_t Index, class URBContainerSpawnLocationComponent* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Event_ItemRemoved");
		
		AGoreDispenser_Container_BP_C_Event_ItemRemoved_Params params {};
		params.Item = Item;
		params.Index = Index;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ReceiveTick");
		
		AGoreDispenser_Container_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Event_ItemAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPickup*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBContainerSpawnLocationComponent*          Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::Event_ItemAdded(class ARBPickup* Item, int32_t Index, class URBContainerSpawnLocationComponent* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Event_ItemAdded");
		
		AGoreDispenser_Container_BP_C_Event_ItemAdded_Params params {};
		params.Item = Item;
		params.Index = Index;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Event_OnAutoRespawnItemsEnabledChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGoreDispenser_Container_BP_C::Event_OnAutoRespawnItemsEnabledChanged(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.Event_OnAutoRespawnItemsEnabledChanged");
		
		AGoreDispenser_Container_BP_C_Event_OnAutoRespawnItemsEnabledChanged_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.TestFill
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::TestFill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.TestFill");
		
		AGoreDispenser_Container_BP_C_TestFill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnSpawnedItemInfosChanged
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::OnSpawnedItemInfosChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.OnSpawnedItemInfosChanged");
		
		AGoreDispenser_Container_BP_C_OnSpawnedItemInfosChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostToggled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bToggleEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGoreDispenser_Container_BP_C::PostToggled(bool bToggleEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.PostToggled");
		
		AGoreDispenser_Container_BP_C_PostToggled_Params params {};
		params.bToggleEnabled = bToggleEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation02_K2Node_ComponentBoundEvent_0_OnContainerPickupInteractionEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBContainerSpawnLocationComponent*          Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::BndEvt__GoreDispenser_Container_BP_SpawnLocation02_K2Node_ComponentBoundEvent_0_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation02_K2Node_ComponentBoundEvent_0_OnContainerPickupInteractionEvent__DelegateSignature");
		
		AGoreDispenser_Container_BP_C_BndEvt__GoreDispenser_Container_BP_SpawnLocation02_K2Node_ComponentBoundEvent_0_OnContainerPickupInteractionEvent__DelegateSignature_Params params {};
		params.Component = Component;
		params.interactor = interactor;
		params.pickup = pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation03_K2Node_ComponentBoundEvent_1_OnContainerPickupInteractionEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBContainerSpawnLocationComponent*          Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::BndEvt__GoreDispenser_Container_BP_SpawnLocation03_K2Node_ComponentBoundEvent_1_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation03_K2Node_ComponentBoundEvent_1_OnContainerPickupInteractionEvent__DelegateSignature");
		
		AGoreDispenser_Container_BP_C_BndEvt__GoreDispenser_Container_BP_SpawnLocation03_K2Node_ComponentBoundEvent_1_OnContainerPickupInteractionEvent__DelegateSignature_Params params {};
		params.Component = Component;
		params.interactor = interactor;
		params.pickup = pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation04_K2Node_ComponentBoundEvent_2_OnContainerPickupInteractionEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBContainerSpawnLocationComponent*          Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::BndEvt__GoreDispenser_Container_BP_SpawnLocation04_K2Node_ComponentBoundEvent_2_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation04_K2Node_ComponentBoundEvent_2_OnContainerPickupInteractionEvent__DelegateSignature");
		
		AGoreDispenser_Container_BP_C_BndEvt__GoreDispenser_Container_BP_SpawnLocation04_K2Node_ComponentBoundEvent_2_OnContainerPickupInteractionEvent__DelegateSignature_Params params {};
		params.Component = Component;
		params.interactor = interactor;
		params.pickup = pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation05_K2Node_ComponentBoundEvent_3_OnContainerPickupInteractionEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBContainerSpawnLocationComponent*          Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::BndEvt__GoreDispenser_Container_BP_SpawnLocation05_K2Node_ComponentBoundEvent_3_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation05_K2Node_ComponentBoundEvent_3_OnContainerPickupInteractionEvent__DelegateSignature");
		
		AGoreDispenser_Container_BP_C_BndEvt__GoreDispenser_Container_BP_SpawnLocation05_K2Node_ComponentBoundEvent_3_OnContainerPickupInteractionEvent__DelegateSignature_Params params {};
		params.Component = Component;
		params.interactor = interactor;
		params.pickup = pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation06_K2Node_ComponentBoundEvent_4_OnContainerPickupInteractionEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBContainerSpawnLocationComponent*          Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::BndEvt__GoreDispenser_Container_BP_SpawnLocation06_K2Node_ComponentBoundEvent_4_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation06_K2Node_ComponentBoundEvent_4_OnContainerPickupInteractionEvent__DelegateSignature");
		
		AGoreDispenser_Container_BP_C_BndEvt__GoreDispenser_Container_BP_SpawnLocation06_K2Node_ComponentBoundEvent_4_OnContainerPickupInteractionEvent__DelegateSignature_Params params {};
		params.Component = Component;
		params.interactor = interactor;
		params.pickup = pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation01_K2Node_ComponentBoundEvent_5_OnContainerPickupInteractionEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBContainerSpawnLocationComponent*          Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::BndEvt__GoreDispenser_Container_BP_SpawnLocation01_K2Node_ComponentBoundEvent_5_OnContainerPickupInteractionEvent__DelegateSignature(class URBContainerSpawnLocationComponent* Component, class ARBPawn* interactor, class ARBPickup* pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.BndEvt__GoreDispenser_Container_BP_SpawnLocation01_K2Node_ComponentBoundEvent_5_OnContainerPickupInteractionEvent__DelegateSignature");
		
		AGoreDispenser_Container_BP_C_BndEvt__GoreDispenser_Container_BP_SpawnLocation01_K2Node_ComponentBoundEvent_5_OnContainerPickupInteractionEvent__DelegateSignature_Params params {};
		params.Component = Component;
		params.interactor = interactor;
		params.pickup = pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGoreDispenser_Container_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ReceiveBeginPlay");
		
		AGoreDispenser_Container_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ExecuteUbergraph_GoreDispenser_Container_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGoreDispenser_Container_BP_C::ExecuteUbergraph_GoreDispenser_Container_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoreDispenser_Container_BP.GoreDispenser_Container_BP_C.ExecuteUbergraph_GoreDispenser_Container_BP");
		
		AGoreDispenser_Container_BP_C_ExecuteUbergraph_GoreDispenser_Container_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGoreDispenser_Container_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGoreDispenser_Container_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GoreDispenser_Container_BP.GoreDispenser_Container_BP_C");
		return ptr;
	}

}


