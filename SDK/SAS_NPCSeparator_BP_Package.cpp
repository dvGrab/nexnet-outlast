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
	 * 		Name   -> Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.ValidateTube
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESeparatorTubeState                                TubeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASNPCSeparator_BP_C::ValidateTube(ESeparatorTubeState TubeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.ValidateTube");
		
		ASASNPCSeparator_BP_C_ValidateTube_Params params {};
		params.TubeState = TubeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASASNPCSeparator_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.UserConstructionScript");
		
		ASASNPCSeparator_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.unlockTubes
	 * 		Flags  -> ()
	 */
	void ASASNPCSeparator_BP_C::unlockTubes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.unlockTubes");
		
		ASASNPCSeparator_BP_C_unlockTubes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.lockTubes
	 * 		Flags  -> ()
	 */
	void ASASNPCSeparator_BP_C::lockTubes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.lockTubes");
		
		ASASNPCSeparator_BP_C_lockTubes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.InitTubeList
	 * 		Flags  -> ()
	 */
	void ASASNPCSeparator_BP_C::InitTubeList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.InitTubeList");
		
		ASASNPCSeparator_BP_C_InitTubeList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASASNPCSeparator_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.ReceiveBeginPlay");
		
		ASASNPCSeparator_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.OnPlayerEnteredInside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBNPCSeparatorTube*                         tube                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASNPCSeparator_BP_C::OnPlayerEnteredInside(class ARBNPCSeparatorTube* tube, class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.OnPlayerEnteredInside");
		
		ASASNPCSeparator_BP_C_OnPlayerEnteredInside_Params params {};
		params.tube = tube;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.OnPlayerExitedInside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBNPCSeparatorTube*                         tube                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASNPCSeparator_BP_C::OnPlayerExitedInside(class ARBNPCSeparatorTube* tube, class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.OnPlayerExitedInside");
		
		ASASNPCSeparator_BP_C_OnPlayerExitedInside_Params params {};
		params.tube = tube;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ASASNPCSeparator_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.Event_OnResetStage");
		
		ASASNPCSeparator_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.BndEvt__SAS-NPCSeparator_BP_OusideSafetyValidationBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ASASNPCSeparator_BP_C::BndEvt__SASNPCSeparator_BP_OusideSafetyValidationBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.BndEvt__SAS-NPCSeparator_BP_OusideSafetyValidationBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ASASNPCSeparator_BP_C_BndEvt__SASNPCSeparator_BP_OusideSafetyValidationBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.BndEvt__SAS-NPCSeparator_BP_InsideSafetyValidationBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ASASNPCSeparator_BP_C::BndEvt__SASNPCSeparator_BP_InsideSafetyValidationBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.BndEvt__SAS-NPCSeparator_BP_InsideSafetyValidationBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		ASASNPCSeparator_BP_C_BndEvt__SASNPCSeparator_BP_InsideSafetyValidationBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.ExecuteUbergraph_SAS-NPCSeparator_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASNPCSeparator_BP_C::ExecuteUbergraph_SASNPCSeparator_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.ExecuteUbergraph_SAS-NPCSeparator_BP");
		
		ASASNPCSeparator_BP_C_ExecuteUbergraph_SASNPCSeparator_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASASNPCSeparator_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASASNPCSeparator_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SAS_NPCSeparator_BP.SAS-NPCSeparator_BP_C");
		return ptr;
	}

}


