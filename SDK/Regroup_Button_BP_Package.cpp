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
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.GetTotalOfPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARegroup_Button_BP_C::GetTotalOfPlayers(int32_t* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.GetTotalOfPlayers");
		
		ARegroup_Button_BP_C_GetTotalOfPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.GetNumberOfPlayersInZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARegroup_Button_BP_C::GetNumberOfPlayersInZone(int32_t* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.GetNumberOfPlayersInZone");
		
		ARegroup_Button_BP_C_GetNumberOfPlayersInZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.SignAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Current                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        playerSign                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARegroup_Button_BP_C::SignAnim(bool Condition, float Current, class UStaticMeshComponent* playerSign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.SignAnim");
		
		ARegroup_Button_BP_C_SignAnim_Params params {};
		params.Condition = Condition;
		params.Current = Current;
		params.playerSign = playerSign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARegroup_Button_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.UserConstructionScript");
		
		ARegroup_Button_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.UpdatePlayerSign
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumberOfPlayerInTheZone                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARegroup_Button_BP_C::UpdatePlayerSign(int32_t NumberOfPlayer, int32_t NumberOfPlayerInTheZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.UpdatePlayerSign");
		
		ARegroup_Button_BP_C_UpdatePlayerSign_Params params {};
		params.NumberOfPlayer = NumberOfPlayer;
		params.NumberOfPlayerInTheZone = NumberOfPlayerInTheZone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARegroup_Button_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.ReceiveTick");
		
		ARegroup_Button_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.OnObjectiveStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBRegroupObjectiveCoordinator*              coordinator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARegroup_Button_BP_C::OnObjectiveStarted(class ARBRegroupObjectiveCoordinator* coordinator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.OnObjectiveStarted");
		
		ARegroup_Button_BP_C_OnObjectiveStarted_Params params {};
		params.coordinator = coordinator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.OnObjectiveEnded
	 * 		Flags  -> ()
	 */
	void ARegroup_Button_BP_C::OnObjectiveEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.OnObjectiveEnded");
		
		ARegroup_Button_BP_C_OnObjectiveEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ARegroup_Button_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.Event_OnResetStage");
		
		ARegroup_Button_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.OnNumberOfPlayerInZoneChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            numberOfPlayers                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARegroup_Button_BP_C::OnNumberOfPlayerInZoneChanged(int32_t numberOfPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.OnNumberOfPlayerInZoneChanged");
		
		ARegroup_Button_BP_C_OnNumberOfPlayerInZoneChanged_Params params {};
		params.numberOfPlayers = numberOfPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.OnRegroupObjectiveStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERegroupObjectiveState                             newState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARegroup_Button_BP_C::OnRegroupObjectiveStateChanged(ERegroupObjectiveState newState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.OnRegroupObjectiveStateChanged");
		
		ARegroup_Button_BP_C_OnRegroupObjectiveStateChanged_Params params {};
		params.newState = newState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.OnTotalNumberOfPlayersChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            numberOfPlayers                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARegroup_Button_BP_C::OnTotalNumberOfPlayersChanged(int32_t numberOfPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.OnTotalNumberOfPlayersChanged");
		
		ARegroup_Button_BP_C_OnTotalNumberOfPlayersChanged_Params params {};
		params.numberOfPlayers = numberOfPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.OnRegroupActionFailed
	 * 		Flags  -> ()
	 */
	void ARegroup_Button_BP_C::OnRegroupActionFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.OnRegroupActionFailed");
		
		ARegroup_Button_BP_C_OnRegroupActionFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Regroup_Button_BP.Regroup_Button_BP_C.ExecuteUbergraph_Regroup_Button_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARegroup_Button_BP_C::ExecuteUbergraph_Regroup_Button_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Regroup_Button_BP.Regroup_Button_BP_C.ExecuteUbergraph_Regroup_Button_BP");
		
		ARegroup_Button_BP_C_ExecuteUbergraph_Regroup_Button_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARegroup_Button_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARegroup_Button_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Regroup_Button_BP.Regroup_Button_BP_C");
		return ptr;
	}

}


