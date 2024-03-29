/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> PredefinedFunction AMotivityAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMotivityAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MotivityRuntime.MotivityAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotivityAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MotivityRuntime.MotivityAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.ToggleMotivityStrafing
	 * 		Flags  -> ()
	 */
	void AMotivityCharacter::ToggleMotivityStrafing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.ToggleMotivityStrafing");
		
		AMotivityCharacter_ToggleMotivityStrafing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.ToggleMotivityMovementMode
	 * 		Flags  -> ()
	 */
	void AMotivityCharacter::ToggleMotivityMovementMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.ToggleMotivityMovementMode");
		
		AMotivityCharacter_ToggleMotivityMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.ToggleMotivityInputMode
	 * 		Flags  -> ()
	 */
	void AMotivityCharacter::ToggleMotivityInputMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.ToggleMotivityInputMode");
		
		AMotivityCharacter_ToggleMotivityInputMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SwitchMotivityMoveStyle
	 * 		Flags  -> ()
	 */
	void AMotivityCharacter::SwitchMotivityMoveStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.SwitchMotivityMoveStyle");
		
		AMotivityCharacter_SwitchMotivityMoveStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SwitchMotivityGait
	 * 		Flags  -> ()
	 */
	void AMotivityCharacter::SwitchMotivityGait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.SwitchMotivityGait");
		
		AMotivityCharacter_SwitchMotivityGait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetTrajectoryGoals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCoreUObject_FVector>                GoalLocations                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      GoalRotations                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AMotivityCharacter::SetTrajectoryGoals(TArray<struct FCoreUObject_FVector> GoalLocations, TArray<float> GoalRotations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.SetTrajectoryGoals");
		
		AMotivityCharacter_SetTrajectoryGoals_Params params {};
		params.GoalLocations = GoalLocations;
		params.GoalRotations = GoalRotations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetTrajectoryGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        GoalLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GoalRotation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMotivityCharacter::SetTrajectoryGoal(const struct FCoreUObject_FVector& GoalLocation, float GoalRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.SetTrajectoryGoal");
		
		AMotivityCharacter_SetTrajectoryGoal_Params params {};
		params.GoalLocation = GoalLocation;
		params.GoalRotation = GoalRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetMovementStyleByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMotivityCharacter::SetMovementStyleByName(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.SetMovementStyleByName");
		
		AMotivityCharacter_SetMovementStyleByName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetMovementStyleByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMotivityCharacter::SetMovementStyleByIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.SetMovementStyleByIndex");
		
		AMotivityCharacter_SetMovementStyleByIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetMovementGaitByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AMotivityCharacter::SetMovementGaitByName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.SetMovementGaitByName");
		
		AMotivityCharacter_SetMovementGaitByName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetMovementGaitByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMotivityCharacter::SetMovementGaitByIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.SetMovementGaitByIndex");
		
		AMotivityCharacter_SetMovementGaitByIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetDesireSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMotivityCharacter::SetDesireSpeed(float NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.SetDesireSpeed");
		
		AMotivityCharacter_SetDesireSpeed_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.OnRep_IsStrafing
	 * 		Flags  -> ()
	 */
	void AMotivityCharacter::OnRep_IsStrafing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.OnRep_IsStrafing");
		
		AMotivityCharacter_OnRep_IsStrafing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.CalculateTrajectoryErrorWarping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AMotivityCharacter::CalculateTrajectoryErrorWarping(float DeltaTime, float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.CalculateTrajectoryErrorWarping");
		
		AMotivityCharacter_CalculateTrajectoryErrorWarping_Params params {};
		params.DeltaTime = DeltaTime;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.ApplyTrajectoryErrorWarping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMotivityCharacter::ApplyTrajectoryErrorWarping(float DeltaTime, float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotivityRuntime.MotivityCharacter.ApplyTrajectoryErrorWarping");
		
		AMotivityCharacter_ApplyTrajectoryErrorWarping_Params params {};
		params.DeltaTime = DeltaTime;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMotivityCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMotivityCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MotivityRuntime.MotivityCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityMoveData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotivityMoveData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MotivityRuntime.MotivityMoveData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityPathFollowingComp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotivityPathFollowingComp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MotivityRuntime.MotivityPathFollowingComp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityPreprocessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotivityPreprocessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MotivityRuntime.MotivityPreprocessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityProcessedData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotivityProcessedData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MotivityRuntime.MotivityProcessedData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityTweakData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotivityTweakData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MotivityRuntime.MotivityTweakData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityTagAnimNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotivityTagAnimNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MotivityRuntime.MotivityTagAnimNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityThreadManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotivityThreadManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MotivityRuntime.MotivityThreadManager");
		return ptr;
	}

}


