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
	 * 		Name   -> Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.UpdateRTPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAcidBath_InteractionPanel_BP_C::UpdateRTPC(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.UpdateRTPC");
		
		UAcidBath_InteractionPanel_BP_C_UpdateRTPC_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.GetAmountOfBottlesAndHeadsUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BottleUsed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HeadsUsed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAcidBath_InteractionPanel_BP_C::GetAmountOfBottlesAndHeadsUsed(int32_t* BottleUsed, int32_t* HeadsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.GetAmountOfBottlesAndHeadsUsed");
		
		UAcidBath_InteractionPanel_BP_C_GetAmountOfBottlesAndHeadsUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BottleUsed != nullptr)
			*BottleUsed = params.BottleUsed;
		if (HeadsUsed != nullptr)
			*HeadsUsed = params.HeadsUsed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.InitializeLinkedObject
	 * 		Flags  -> ()
	 */
	void UAcidBath_InteractionPanel_BP_C::InitializeLinkedObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.InitializeLinkedObject");
		
		UAcidBath_InteractionPanel_BP_C_InitializeLinkedObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.ShouldBPTick
	 * 		Flags  -> ()
	 */
	bool UAcidBath_InteractionPanel_BP_C::ShouldBPTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.ShouldBPTick");
		
		UAcidBath_InteractionPanel_BP_C_ShouldBPTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.GetLargeObjectRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBLargePickup*                              pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USceneComponent* UAcidBath_InteractionPanel_BP_C::GetLargeObjectRef(class ARBLargePickup* pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.GetLargeObjectRef");
		
		UAcidBath_InteractionPanel_BP_C_GetLargeObjectRef_Params params {};
		params.pickup = pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.GetSpecialMoveAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsFirstPerson                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimSequence* UAcidBath_InteractionPanel_BP_C::GetSpecialMoveAnimation(class ARBPawn* Pawn, bool bIsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.GetSpecialMoveAnimation");
		
		UAcidBath_InteractionPanel_BP_C_GetSpecialMoveAnimation_Params params {};
		params.Pawn = Pawn;
		params.bIsFirstPerson = bIsFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UAcidBath_InteractionPanel_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.GetInteractionPawnLocation");
		
		UAcidBath_InteractionPanel_BP_C_GetInteractionPawnLocation_Params params {};
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
	 * 		Name   -> Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.Event_OnLargeObjectDoAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBLargePickup*                              largeObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAcidBath_InteractionPanel_BP_C::Event_OnLargeObjectDoAction(class ARBLargePickup* largeObject, class ARBPawn* interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.Event_OnLargeObjectDoAction");
		
		UAcidBath_InteractionPanel_BP_C_Event_OnLargeObjectDoAction_Params params {};
		params.largeObject = largeObject;
		params.interactor = interactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void UAcidBath_InteractionPanel_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.Event_OnResetStage");
		
		UAcidBath_InteractionPanel_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UAcidBath_InteractionPanel_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.ReceiveBeginPlay");
		
		UAcidBath_InteractionPanel_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.Event_OnTossIntoFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBLargePickup*                              largeObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAcidBath_InteractionPanel_BP_C::Event_OnTossIntoFinished(class ARBLargePickup* largeObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.Event_OnTossIntoFinished");
		
		UAcidBath_InteractionPanel_BP_C_Event_OnTossIntoFinished_Params params {};
		params.largeObject = largeObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAcidBath_InteractionPanel_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.ReceiveTick");
		
		UAcidBath_InteractionPanel_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.ExecuteUbergraph_AcidBath_InteractionPanel_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAcidBath_InteractionPanel_BP_C::ExecuteUbergraph_AcidBath_InteractionPanel_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C.ExecuteUbergraph_AcidBath_InteractionPanel_BP");
		
		UAcidBath_InteractionPanel_BP_C_ExecuteUbergraph_AcidBath_InteractionPanel_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAcidBath_InteractionPanel_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAcidBath_InteractionPanel_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C");
		return ptr;
	}

}


