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
	 * 		Name   -> Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.RefreshGaugeNeedleAngleRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGasReservoir_InteractionPanel_BP_C::RefreshGaugeNeedleAngleRatio(float ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.RefreshGaugeNeedleAngleRatio");
		
		UGasReservoir_InteractionPanel_BP_C_RefreshGaugeNeedleAngleRatio_Params params {};
		params.ratio = ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.UpdateGaugeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGasReservoir_InteractionPanel_BP_C::UpdateGaugeValue(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.UpdateGaugeValue");
		
		UGasReservoir_InteractionPanel_BP_C_UpdateGaugeValue_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.ShouldBPTick
	 * 		Flags  -> ()
	 */
	bool UGasReservoir_InteractionPanel_BP_C::ShouldBPTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.ShouldBPTick");
		
		UGasReservoir_InteractionPanel_BP_C_ShouldBPTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.GetLargeObjectRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBLargePickup*                              pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USceneComponent* UGasReservoir_InteractionPanel_BP_C::GetLargeObjectRef(class ARBLargePickup* pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.GetLargeObjectRef");
		
		UGasReservoir_InteractionPanel_BP_C_GetLargeObjectRef_Params params {};
		params.pickup = pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGasReservoir_InteractionPanel_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.GetInteractionPawnLocation");
		
		UGasReservoir_InteractionPanel_BP_C_GetInteractionPawnLocation_Params params {};
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
	 * 		Name   -> Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UGasReservoir_InteractionPanel_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.ReceiveBeginPlay");
		
		UGasReservoir_InteractionPanel_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void UGasReservoir_InteractionPanel_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.Event_OnResetStage");
		
		UGasReservoir_InteractionPanel_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGasReservoir_InteractionPanel_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.ReceiveTick");
		
		UGasReservoir_InteractionPanel_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.Event_OnNumberOfCompletedInteractionsChanged
	 * 		Flags  -> ()
	 */
	void UGasReservoir_InteractionPanel_BP_C::Event_OnNumberOfCompletedInteractionsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.Event_OnNumberOfCompletedInteractionsChanged");
		
		UGasReservoir_InteractionPanel_BP_C_Event_OnNumberOfCompletedInteractionsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.ExecuteUbergraph_GasReservoir_InteractionPanel_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGasReservoir_InteractionPanel_BP_C::ExecuteUbergraph_GasReservoir_InteractionPanel_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.ExecuteUbergraph_GasReservoir_InteractionPanel_BP");
		
		UGasReservoir_InteractionPanel_BP_C_ExecuteUbergraph_GasReservoir_InteractionPanel_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.UpdateGasLight__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLightOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGasReservoir_InteractionPanel_BP_C::UpdateGasLight__DelegateSignature(bool bLightOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.UpdateGasLight__DelegateSignature");
		
		UGasReservoir_InteractionPanel_BP_C_UpdateGasLight__DelegateSignature_Params params {};
		params.bLightOn = bLightOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.UpdateGaugeNeedle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              needleRatio                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGasReservoir_InteractionPanel_BP_C::UpdateGaugeNeedle__DelegateSignature(float needleRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C.UpdateGaugeNeedle__DelegateSignature");
		
		UGasReservoir_InteractionPanel_BP_C_UpdateGaugeNeedle__DelegateSignature_Params params {};
		params.needleRatio = needleRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGasReservoir_InteractionPanel_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGasReservoir_InteractionPanel_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C");
		return ptr;
	}

}


