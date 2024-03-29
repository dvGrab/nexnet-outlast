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
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.GetFaceFXSkeletalMeshComponent
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ABaseAnimatedQuestGiver_BP_C::GetFaceFXSkeletalMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.GetFaceFXSkeletalMeshComponent");
		
		ABaseAnimatedQuestGiver_BP_C_GetFaceFXSkeletalMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.SetAnimationParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class Uquest_AnimBP_C*                             NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseAnimatedQuestGiver_BP_C::SetAnimationParameters(bool Reset, class Uquest_AnimBP_C* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.SetAnimationParameters");
		
		ABaseAnimatedQuestGiver_BP_C_SetAnimationParameters_Params params {};
		params.Reset = Reset;
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.TryPlayHailing
	 * 		Flags  -> ()
	 */
	void ABaseAnimatedQuestGiver_BP_C::TryPlayHailing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.TryPlayHailing");
		
		ABaseAnimatedQuestGiver_BP_C_TryPlayHailing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABaseAnimatedQuestGiver_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.GetInteractionPawnLocation");
		
		ABaseAnimatedQuestGiver_BP_C_GetInteractionPawnLocation_Params params {};
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
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABaseAnimatedQuestGiver_BP_C::BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABaseAnimatedQuestGiver_BP_C_BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.OnFocused
	 * 		Flags  -> ()
	 */
	void ABaseAnimatedQuestGiver_BP_C::OnFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.OnFocused");
		
		ABaseAnimatedQuestGiver_BP_C_OnFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.BndEvt__HailingZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseAnimatedQuestGiver_BP_C::BndEvt__HailingZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.BndEvt__HailingZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ABaseAnimatedQuestGiver_BP_C_BndEvt__HailingZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.OnItemPurchased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBController*                               RBController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ItemId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseAnimatedQuestGiver_BP_C::OnItemPurchased(class ARBController* RBController, const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.OnItemPurchased");
		
		ABaseAnimatedQuestGiver_BP_C_OnItemPurchased_Params params {};
		params.RBController = RBController;
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.OnPawnPlaySpecialMoveAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseAnimatedQuestGiver_BP_C::OnPawnPlaySpecialMoveAnimation(class ARBPawn* Pawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.OnPawnPlaySpecialMoveAnimation");
		
		ABaseAnimatedQuestGiver_BP_C_OnPawnPlaySpecialMoveAnimation_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Serve
	 * 		Flags  -> ()
	 */
	void ABaseAnimatedQuestGiver_BP_C::Serve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Serve");
		
		ABaseAnimatedQuestGiver_BP_C_Serve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.NoticeStart
	 * 		Flags  -> ()
	 */
	void ABaseAnimatedQuestGiver_BP_C::NoticeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.NoticeStart");
		
		ABaseAnimatedQuestGiver_BP_C_NoticeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.NoticeStop
	 * 		Flags  -> ()
	 */
	void ABaseAnimatedQuestGiver_BP_C::NoticeStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.NoticeStop");
		
		ABaseAnimatedQuestGiver_BP_C_NoticeStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Purchase
	 * 		Flags  -> ()
	 */
	void ABaseAnimatedQuestGiver_BP_C::Purchase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Purchase");
		
		ABaseAnimatedQuestGiver_BP_C_Purchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Stop Serve
	 * 		Flags  -> ()
	 */
	void ABaseAnimatedQuestGiver_BP_C::Stop_Serve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Stop Serve");
		
		ABaseAnimatedQuestGiver_BP_C_Stop_Serve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Onpop
	 * 		Flags  -> ()
	 */
	void ABaseAnimatedQuestGiver_BP_C::Onpop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Onpop");
		
		ABaseAnimatedQuestGiver_BP_C_Onpop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.UpdateLookAt
	 * 		Flags  -> ()
	 */
	void ABaseAnimatedQuestGiver_BP_C::UpdateLookAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.UpdateLookAt");
		
		ABaseAnimatedQuestGiver_BP_C_UpdateLookAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Event_PostInitializeComponents
	 * 		Flags  -> ()
	 */
	void ABaseAnimatedQuestGiver_BP_C::Event_PostInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Event_PostInitializeComponents");
		
		ABaseAnimatedQuestGiver_BP_C_Event_PostInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Event_OnLocalPlayerInteracted
	 * 		Flags  -> ()
	 */
	void ABaseAnimatedQuestGiver_BP_C::Event_OnLocalPlayerInteracted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.Event_OnLocalPlayerInteracted");
		
		ABaseAnimatedQuestGiver_BP_C_Event_OnLocalPlayerInteracted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.ExecuteUbergraph_BaseAnimatedQuestGiver_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseAnimatedQuestGiver_BP_C::ExecuteUbergraph_BaseAnimatedQuestGiver_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C.ExecuteUbergraph_BaseAnimatedQuestGiver_BP");
		
		ABaseAnimatedQuestGiver_BP_C_ExecuteUbergraph_BaseAnimatedQuestGiver_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseAnimatedQuestGiver_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseAnimatedQuestGiver_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C");
		return ptr;
	}

}


