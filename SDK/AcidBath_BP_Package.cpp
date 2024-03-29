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
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.ShouldTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldTick                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAcidBath_BP_C::ShouldTick(bool* bShouldTick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.ShouldTick");
		
		AAcidBath_BP_C_ShouldTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldTick != nullptr)
			*bShouldTick = params.bShouldTick;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.UpdateTargetAcidLevel
	 * 		Flags  -> ()
	 */
	void AAcidBath_BP_C::UpdateTargetAcidLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.UpdateTargetAcidLevel");
		
		AAcidBath_BP_C_UpdateTargetAcidLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.SetWaveLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAcidBath_BP_C::SetWaveLevel(float Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.SetWaveLevel");
		
		AAcidBath_BP_C_SetWaveLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.GetTargetWaveLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAcidBath_BP_C::GetTargetWaveLevel(float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.GetTargetWaveLevel");
		
		AAcidBath_BP_C_GetTargetWaveLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.UpdateAcidLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAcidBath_BP_C::UpdateAcidLevel(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.UpdateAcidLevel");
		
		AAcidBath_BP_C_UpdateAcidLevel_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.UpdateWaveLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAcidBath_BP_C::UpdateWaveLevel(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.UpdateWaveLevel");
		
		AAcidBath_BP_C_UpdateWaveLevel_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.SetTargetAcidLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAcidBath_BP_C::SetTargetAcidLevel(float Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.SetTargetAcidLevel");
		
		AAcidBath_BP_C_SetTargetAcidLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.SetAcidLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AcidLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               completed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAcidBath_BP_C::SetAcidLevel(float AcidLevel, bool completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.SetAcidLevel");
		
		AAcidBath_BP_C_SetAcidLevel_Params params {};
		params.AcidLevel = AcidLevel;
		params.completed = completed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AAcidBath_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.UserConstructionScript");
		
		AAcidBath_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AAcidBath_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.Timeline_0__FinishedFunc");
		
		AAcidBath_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AAcidBath_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.Timeline_0__UpdateFunc");
		
		AAcidBath_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AAcidBath_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.ReceiveBeginPlay");
		
		AAcidBath_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AAcidBath_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.Event_OnResetStage");
		
		AAcidBath_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.StartDrainBathAnimation
	 * 		Flags  -> ()
	 */
	void AAcidBath_BP_C::StartDrainBathAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.StartDrainBathAnimation");
		
		AAcidBath_BP_C_StartDrainBathAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAcidBath_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.ReceiveTick");
		
		AAcidBath_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.BndEvt__AcidBath_BP_AcidBath_InteractionPanel_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAcidBath_BP_C::BndEvt__AcidBath_BP_AcidBath_InteractionPanel_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.BndEvt__AcidBath_BP_AcidBath_InteractionPanel_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature");
		
		AAcidBath_BP_C_BndEvt__AcidBath_BP_AcidBath_InteractionPanel_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.BndEvt__AcidBath_BP_AcidBath_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAcidBath_BP_C::BndEvt__AcidBath_BP_AcidBath_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.BndEvt__AcidBath_BP_AcidBath_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature");
		
		AAcidBath_BP_C_BndEvt__AcidBath_BP_AcidBath_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AcidBath_BP.AcidBath_BP_C.ExecuteUbergraph_AcidBath_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAcidBath_BP_C::ExecuteUbergraph_AcidBath_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AcidBath_BP.AcidBath_BP_C.ExecuteUbergraph_AcidBath_BP");
		
		AAcidBath_BP_C_ExecuteUbergraph_AcidBath_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAcidBath_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAcidBath_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AcidBath_BP.AcidBath_BP_C");
		return ptr;
	}

}


