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
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.OnRep_bIsBoiling
	 * 		Flags  -> ()
	 */
	void ACauldron_BP_C::OnRep_bIsBoiling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.OnRep_bIsBoiling");
		
		ACauldron_BP_C_OnRep_bIsBoiling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.ShouldBPTick
	 * 		Flags  -> ()
	 */
	bool ACauldron_BP_C::ShouldBPTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.ShouldBPTick");
		
		ACauldron_BP_C_ShouldBPTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.Set Boiling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               boilingOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACauldron_BP_C::Set_Boiling(bool boilingOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.Set Boiling");
		
		ACauldron_BP_C_Set_Boiling_Params params {};
		params.boilingOn = boilingOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.UpdateTargetAcidLevel
	 * 		Flags  -> ()
	 */
	void ACauldron_BP_C::UpdateTargetAcidLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.UpdateTargetAcidLevel");
		
		ACauldron_BP_C_UpdateTargetAcidLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.SetWaveLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACauldron_BP_C::SetWaveLevel(float Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.SetWaveLevel");
		
		ACauldron_BP_C_SetWaveLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.GetTargetWaveLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACauldron_BP_C::GetTargetWaveLevel(float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.GetTargetWaveLevel");
		
		ACauldron_BP_C_GetTargetWaveLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.UpdateAcidLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACauldron_BP_C::UpdateAcidLevel(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.UpdateAcidLevel");
		
		ACauldron_BP_C_UpdateAcidLevel_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.UpdateWaveLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACauldron_BP_C::UpdateWaveLevel(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.UpdateWaveLevel");
		
		ACauldron_BP_C_UpdateWaveLevel_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.SetTargetAcidLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACauldron_BP_C::SetTargetAcidLevel(float Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.SetTargetAcidLevel");
		
		ACauldron_BP_C_SetTargetAcidLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.SetAcidLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AcidLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               completed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACauldron_BP_C::SetAcidLevel(float AcidLevel, bool completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.SetAcidLevel");
		
		ACauldron_BP_C_SetAcidLevel_Params params {};
		params.AcidLevel = AcidLevel;
		params.completed = completed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ACauldron_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.UserConstructionScript");
		
		ACauldron_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ACauldron_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.Timeline_0__FinishedFunc");
		
		ACauldron_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ACauldron_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.Timeline_0__UpdateFunc");
		
		ACauldron_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void ACauldron_BP_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.OnWorldPopulateFinished");
		
		ACauldron_BP_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACauldron_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.ReceiveBeginPlay");
		
		ACauldron_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ACauldron_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.Event_OnResetStage");
		
		ACauldron_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.StartDrainBathAnimation
	 * 		Flags  -> ()
	 */
	void ACauldron_BP_C::StartDrainBathAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.StartDrainBathAnimation");
		
		ACauldron_BP_C_StartDrainBathAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACauldron_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.ReceiveTick");
		
		ACauldron_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ACauldron_BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.Event_OnTriggered");
		
		ACauldron_BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.BndEvt__Cauldron_BP_Cauldron_InteractionPanel_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACauldron_BP_C::BndEvt__Cauldron_BP_Cauldron_InteractionPanel_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.BndEvt__Cauldron_BP_Cauldron_InteractionPanel_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature");
		
		ACauldron_BP_C_BndEvt__Cauldron_BP_Cauldron_InteractionPanel_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.BndEvt__Cauldron_BP_Cauldron_InteractionPanel_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACauldron_BP_C::BndEvt__Cauldron_BP_Cauldron_InteractionPanel_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.BndEvt__Cauldron_BP_Cauldron_InteractionPanel_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature");
		
		ACauldron_BP_C_BndEvt__Cauldron_BP_Cauldron_InteractionPanel_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.OnWorldFullyLoaded
	 * 		Flags  -> ()
	 */
	void ACauldron_BP_C::OnWorldFullyLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.OnWorldFullyLoaded");
		
		ACauldron_BP_C_OnWorldFullyLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cauldron_BP.Cauldron_BP_C.ExecuteUbergraph_Cauldron_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACauldron_BP_C::ExecuteUbergraph_Cauldron_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cauldron_BP.Cauldron_BP_C.ExecuteUbergraph_Cauldron_BP");
		
		ACauldron_BP_C_ExecuteUbergraph_Cauldron_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACauldron_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACauldron_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cauldron_BP.Cauldron_BP_C");
		return ptr;
	}

}


