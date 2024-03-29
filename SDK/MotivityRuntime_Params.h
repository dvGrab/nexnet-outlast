#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MotivityRuntime.MotivityCharacter.ToggleMotivityStrafing
	 */
	struct AMotivityCharacter_ToggleMotivityStrafing_Params
	{	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.ToggleMotivityMovementMode
	 */
	struct AMotivityCharacter_ToggleMotivityMovementMode_Params
	{	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.ToggleMotivityInputMode
	 */
	struct AMotivityCharacter_ToggleMotivityInputMode_Params
	{	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.SwitchMotivityMoveStyle
	 */
	struct AMotivityCharacter_SwitchMotivityMoveStyle_Params
	{	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.SwitchMotivityGait
	 */
	struct AMotivityCharacter_SwitchMotivityGait_Params
	{	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.SetTrajectoryGoals
	 */
	struct AMotivityCharacter_SetTrajectoryGoals_Params
	{
	public:
		TArray<struct FCoreUObject_FVector>                        GoalLocations;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<float>                                              GoalRotations;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.SetTrajectoryGoal
	 */
	struct AMotivityCharacter_SetTrajectoryGoal_Params
	{
	public:
		struct FCoreUObject_FVector                                GoalLocation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GoalRotation;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.SetMovementStyleByName
	 */
	struct AMotivityCharacter_SetMovementStyleByName_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.SetMovementStyleByIndex
	 */
	struct AMotivityCharacter_SetMovementStyleByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.SetMovementGaitByName
	 */
	struct AMotivityCharacter_SetMovementGaitByName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.SetMovementGaitByIndex
	 */
	struct AMotivityCharacter_SetMovementGaitByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.SetDesireSpeed
	 */
	struct AMotivityCharacter_SetDesireSpeed_Params
	{
	public:
		float                                                      NewSpeed;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.OnRep_IsStrafing
	 */
	struct AMotivityCharacter_OnRep_IsStrafing_Params
	{	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.CalculateTrajectoryErrorWarping
	 */
	struct AMotivityCharacter_CalculateTrajectoryErrorWarping_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlaybackSpeed;                                           // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotivityRuntime.MotivityCharacter.ApplyTrajectoryErrorWarping
	 */
	struct AMotivityCharacter_ApplyTrajectoryErrorWarping_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlaybackSpeed;                                           // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
