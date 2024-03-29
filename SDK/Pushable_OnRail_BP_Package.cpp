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
	 * 		Name   -> Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.ConstructWheelMeshesList
	 * 		Flags  -> ()
	 */
	void APushable_OnRail_BP_C::ConstructWheelMeshesList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.ConstructWheelMeshesList");
		
		APushable_OnRail_BP_C_ConstructWheelMeshesList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.UpdateLights
	 * 		Flags  -> ()
	 */
	void APushable_OnRail_BP_C::UpdateLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.UpdateLights");
		
		APushable_OnRail_BP_C_UpdateLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.GetLedgeMarkerClosestTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class ARBLedgeMarker* APushable_OnRail_BP_C::GetLedgeMarkerClosestTo(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.GetLedgeMarkerClosestTo");
		
		APushable_OnRail_BP_C_GetLedgeMarkerClosestTo_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.SetupLedgeMarkers
	 * 		Flags  -> ()
	 */
	void APushable_OnRail_BP_C::SetupLedgeMarkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.SetupLedgeMarkers");
		
		APushable_OnRail_BP_C_SetupLedgeMarkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APushable_OnRail_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.UserConstructionScript");
		
		APushable_OnRail_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.BP_PostMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     DeltaLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_BP_C::BP_PostMove(const struct FVector& DeltaLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.BP_PostMove");
		
		APushable_OnRail_BP_C_BP_PostMove_Params params {};
		params.DeltaLocation = DeltaLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APushable_OnRail_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.ReceiveBeginPlay");
		
		APushable_OnRail_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.BP_PostRotated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    frontRotation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    rearRotation                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void APushable_OnRail_BP_C::BP_PostRotated(const struct FRotator& frontRotation, const struct FRotator& rearRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.BP_PostRotated");
		
		APushable_OnRail_BP_C_BP_PostRotated_Params params {};
		params.frontRotation = frontRotation;
		params.rearRotation = rearRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.Event_OnPushableNearbyPlayersChanged
	 * 		Flags  -> ()
	 */
	void APushable_OnRail_BP_C::Event_OnPushableNearbyPlayersChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.Event_OnPushableNearbyPlayersChanged");
		
		APushable_OnRail_BP_C_Event_OnPushableNearbyPlayersChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.Event_OnPawnPushingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPushableComponent*                        pushableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_BP_C::Event_OnPawnPushingChanged(class URBPushableComponent* pushableComponent, class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.Event_OnPawnPushingChanged");
		
		APushable_OnRail_BP_C_Event_OnPawnPushingChanged_Params params {};
		params.pushableComponent = pushableComponent;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.ExecuteUbergraph_Pushable_OnRail_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_BP_C::ExecuteUbergraph_Pushable_OnRail_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.ExecuteUbergraph_Pushable_OnRail_BP");
		
		APushable_OnRail_BP_C_ExecuteUbergraph_Pushable_OnRail_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APushable_OnRail_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APushable_OnRail_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Pushable_OnRail_BP.Pushable_OnRail_BP_C");
		return ptr;
	}

}


