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
	 * 		Name   -> Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARewardRoom_Door__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.UserConstructionScript");
		
		ARewardRoom_Door__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.LockPanelHinge__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ARewardRoom_Door__BP_C::LockPanelHinge__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.LockPanelHinge__FinishedFunc");
		
		ARewardRoom_Door__BP_C_LockPanelHinge__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.LockPanelHinge__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ARewardRoom_Door__BP_C::LockPanelHinge__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.LockPanelHinge__UpdateFunc");
		
		ARewardRoom_Door__BP_C_LockPanelHinge__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.BP_OnNumberOfRewardUnlockActiveChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            numberOfRewardUnlockActive                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARewardRoom_Door__BP_C::BP_OnNumberOfRewardUnlockActiveChanged(int32_t numberOfRewardUnlockActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.BP_OnNumberOfRewardUnlockActiveChanged");
		
		ARewardRoom_Door__BP_C_BP_OnNumberOfRewardUnlockActiveChanged_Params params {};
		params.numberOfRewardUnlockActive = numberOfRewardUnlockActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.BP_OnRewardDoorInitialization
	 * 		Flags  -> ()
	 */
	void ARewardRoom_Door__BP_C::BP_OnRewardDoorInitialization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.BP_OnRewardDoorInitialization");
		
		ARewardRoom_Door__BP_C_BP_OnRewardDoorInitialization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ARewardRoom_Door__BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.Event_OnResetStage");
		
		ARewardRoom_Door__BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.BndEvt__RewardRoom_Door-02_BP_StingerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ARewardRoom_Door__BP_C::BndEvt__RewardRoom_Door__BP_StingerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.BndEvt__RewardRoom_Door-02_BP_StingerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ARewardRoom_Door__BP_C_BndEvt__RewardRoom_Door__BP_StingerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.BndEvt__RewardRoom_Door-02_BP_RBSinglePlayerHelper_K2Node_ComponentBoundEvent_1_OnSinglePlayerChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ARewardRoom_Door__BP_C::BndEvt__RewardRoom_Door__BP_RBSinglePlayerHelper_K2Node_ComponentBoundEvent_1_OnSinglePlayerChangedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.BndEvt__RewardRoom_Door-02_BP_RBSinglePlayerHelper_K2Node_ComponentBoundEvent_1_OnSinglePlayerChangedEvent__DelegateSignature");
		
		ARewardRoom_Door__BP_C_BndEvt__RewardRoom_Door__BP_RBSinglePlayerHelper_K2Node_ComponentBoundEvent_1_OnSinglePlayerChangedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.ExecuteUbergraph_RewardRoom_Door-02_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARewardRoom_Door__BP_C::ExecuteUbergraph_RewardRoom_Door__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.ExecuteUbergraph_RewardRoom_Door-02_BP");
		
		ARewardRoom_Door__BP_C_ExecuteUbergraph_RewardRoom_Door__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.DoorInteracted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOpen                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARewardRoom_Door__BP_C::DoorInteracted__DelegateSignature(bool bOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C.DoorInteracted__DelegateSignature");
		
		ARewardRoom_Door__BP_C_DoorInteracted__DelegateSignature_Params params {};
		params.bOpen = bOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARewardRoom_Door__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARewardRoom_Door__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RewardRoom_Door_02_BP.RewardRoom_Door-02_BP_C");
		return ptr;
	}

}


