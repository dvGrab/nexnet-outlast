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
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.OnRep_TriggeredBulbIndex
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanelComponent_BP_C::OnRep_TriggeredBulbIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.OnRep_TriggeredBulbIndex");
		
		UZoneTimingPanelComponent_BP_C_OnRep_TriggeredBulbIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ShouldBPTick
	 * 		Flags  -> ()
	 */
	bool UZoneTimingPanelComponent_BP_C::ShouldBPTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ShouldBPTick");
		
		UZoneTimingPanelComponent_BP_C_ShouldBPTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ClearLastTriggeredBulb
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanelComponent_BP_C::ClearLastTriggeredBulb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ClearLastTriggeredBulb");
		
		UZoneTimingPanelComponent_BP_C_ClearLastTriggeredBulb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.RefreshRPMIndicator
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanelComponent_BP_C::RefreshRPMIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.RefreshRPMIndicator");
		
		UZoneTimingPanelComponent_BP_C_RefreshRPMIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.RefreshBulbColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Bulb                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETimingInputResultType                             Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UZoneTimingPanelComponent_BP_C::RefreshBulbColor(class UStaticMeshComponent* Bulb, ETimingInputResultType Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.RefreshBulbColor");
		
		UZoneTimingPanelComponent_BP_C_RefreshBulbColor_Params params {};
		params.Bulb = Bulb;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.RefreshNeedlePosition
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanelComponent_BP_C::RefreshNeedlePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.RefreshNeedlePosition");
		
		UZoneTimingPanelComponent_BP_C_RefreshNeedlePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.InitMeterSize
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanelComponent_BP_C::InitMeterSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.InitMeterSize");
		
		UZoneTimingPanelComponent_BP_C_InitMeterSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.RefreshAllBulbColors
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanelComponent_BP_C::RefreshAllBulbColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.RefreshAllBulbColors");
		
		UZoneTimingPanelComponent_BP_C_RefreshAllBulbColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.InitializePanelParts
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanelComponent_BP_C::InitializePanelParts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.InitializePanelParts");
		
		UZoneTimingPanelComponent_BP_C_InitializePanelParts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UZoneTimingPanelComponent_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.GetInteractionPawnLocation");
		
		UZoneTimingPanelComponent_BP_C_GetInteractionPawnLocation_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		if (outDirection != nullptr)
			*outDirection = params.outDirection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UZoneTimingPanelComponent_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ReceiveTick");
		
		UZoneTimingPanelComponent_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanelComponent_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ReceiveBeginPlay");
		
		UZoneTimingPanelComponent_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanelComponent_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.Event_OnResetStage");
		
		UZoneTimingPanelComponent_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.BP_OnPawnInteractingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     newPawnInteracting                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UZoneTimingPanelComponent_BP_C::BP_OnPawnInteractingChanged(class ARBPawn* newPawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.BP_OnPawnInteractingChanged");
		
		UZoneTimingPanelComponent_BP_C_BP_OnPawnInteractingChanged_Params params {};
		params.newPawnInteracting = newPawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.OnTickEnabledChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UZoneTimingPanelComponent_BP_C::OnTickEnabledChanged_Event(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.OnTickEnabledChanged_Event");
		
		UZoneTimingPanelComponent_BP_C_OnTickEnabledChanged_Event_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.OnTriggeredBulbIndexChanged
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanelComponent_BP_C::OnTriggeredBulbIndexChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.OnTriggeredBulbIndexChanged");
		
		UZoneTimingPanelComponent_BP_C_OnTriggeredBulbIndexChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.Event_OnInputEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            targetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Timestamp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETimingInputResultType                             Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UZoneTimingPanelComponent_BP_C::Event_OnInputEvent(class ARBPlayer* Player, int32_t targetIndex, float Timestamp, ETimingInputResultType Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.Event_OnInputEvent");
		
		UZoneTimingPanelComponent_BP_C_Event_OnInputEvent_Params params {};
		params.Player = Player;
		params.targetIndex = targetIndex;
		params.Timestamp = Timestamp;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.Event_OnTargetInfoChanged
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanelComponent_BP_C::Event_OnTargetInfoChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.Event_OnTargetInfoChanged");
		
		UZoneTimingPanelComponent_BP_C_Event_OnTargetInfoChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.Event_OnInteractionAnimationDone
	 * 		Flags  -> ()
	 */
	void UZoneTimingPanelComponent_BP_C::Event_OnInteractionAnimationDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.Event_OnInteractionAnimationDone");
		
		UZoneTimingPanelComponent_BP_C_Event_OnInteractionAnimationDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.PostToggled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bToggleEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZoneTimingPanelComponent_BP_C::PostToggled(bool bToggleEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.PostToggled");
		
		UZoneTimingPanelComponent_BP_C_PostToggled_Params params {};
		params.bToggleEnabled = bToggleEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ExecuteUbergraph_ZoneTimingPanelComponent_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UZoneTimingPanelComponent_BP_C::ExecuteUbergraph_ZoneTimingPanelComponent_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ExecuteUbergraph_ZoneTimingPanelComponent_BP");
		
		UZoneTimingPanelComponent_BP_C_ExecuteUbergraph_ZoneTimingPanelComponent_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZoneTimingPanelComponent_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZoneTimingPanelComponent_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C");
		return ptr;
	}

}


