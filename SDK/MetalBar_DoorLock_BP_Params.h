#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
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
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.SnapBarToPosition
	 */
	struct AMetalBar_DoorLock_BP_C_SnapBarToPosition_Params
	{	};

	/**
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetCurrentAnimSequence
	 */
	struct AMetalBar_DoorLock_BP_C_GetCurrentAnimSequence_Params
	{
	public:
		class UAnimSequence*                                       AnimSequence;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetLockedTransform
	 */
	struct AMetalBar_DoorLock_BP_C_GetLockedTransform_Params
	{
	public:
		struct FTransform                                          UnlockedTransform;                                       // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetUnlockedTransform
	 */
	struct AMetalBar_DoorLock_BP_C_GetUnlockedTransform_Params
	{
	public:
		struct FTransform                                          UnlockedTransform;                                       // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_OverrideEditorCompTranform
	 */
	struct AMetalBar_DoorLock_BP_C_BP_OverrideEditorCompTranform_Params
	{
	public:
		class FName                                                compName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLocked;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4YTY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FTransform                                          ReturnValue;                                             // 0x0040(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.OnSetup
	 */
	struct AMetalBar_DoorLock_BP_C_OnSetup_Params
	{	};

	/**
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.UserConstructionScript
	 */
	struct AMetalBar_DoorLock_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_OnInitialization
	 */
	struct AMetalBar_DoorLock_BP_C_BP_OnInitialization_Params
	{	};

	/**
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.Event_SnapToState
	 */
	struct AMetalBar_DoorLock_BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.ReceiveBeginPlay
	 */
	struct AMetalBar_DoorLock_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_ApplyAnimatedTransform
	 */
	struct AMetalBar_DoorLock_BP_C_BP_ApplyAnimatedTransform_Params
	{
	public:
		float                                                      curveValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z1L2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBPawn*                                             interactorPawn;                                          // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_OnDoorOwnerChanged
	 */
	struct AMetalBar_DoorLock_BP_C_BP_OnDoorOwnerChanged_Params
	{	};

	/**
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.Event_OnResetStage
	 */
	struct AMetalBar_DoorLock_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.ExecuteUbergraph_MetalBar-DoorLock_BP
	 */
	struct AMetalBar_DoorLock_BP_C_ExecuteUbergraph_MetalBar_DoorLock_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
