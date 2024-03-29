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
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UpdateSpectreMeshes
	 */
	struct ARBNPC_Spectre_BP_C_UpdateSpectreMeshes_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Update Spectre Meshes Visibiliy
	 */
	struct ARBNPC_Spectre_BP_C_Update_Spectre_Meshes_Visibiliy_Params
	{
	public:
		bool                                                       OldMeshVisible;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllMeshesVisible;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0VBU[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UpdateSpectreVisibility
	 */
	struct ARBNPC_Spectre_BP_C_UpdateSpectreVisibility_Params
	{
	public:
		class USkeletalMeshComponent*                              SpectreMesh;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bNewVisibility;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UpdateRandomOffset
	 */
	struct ARBNPC_Spectre_BP_C_UpdateRandomOffset_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UpdateSpectre
	 */
	struct ARBNPC_Spectre_BP_C_UpdateSpectre_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.UserConstructionScript
	 */
	struct ARBNPC_Spectre_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_0__FinishedFunc
	 */
	struct ARBNPC_Spectre_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_0__UpdateFunc
	 */
	struct ARBNPC_Spectre_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_2__FinishedFunc
	 */
	struct ARBNPC_Spectre_BP_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_2__UpdateFunc
	 */
	struct ARBNPC_Spectre_BP_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_3__FinishedFunc
	 */
	struct ARBNPC_Spectre_BP_C_Timeline_3__FinishedFunc_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Timeline_3__UpdateFunc
	 */
	struct ARBNPC_Spectre_BP_C_Timeline_3__UpdateFunc_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.ReceiveBeginPlay
	 */
	struct ARBNPC_Spectre_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.ReceiveTick
	 */
	struct ARBNPC_Spectre_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.SetNormalMeshVisibility
	 */
	struct ARBNPC_Spectre_BP_C_SetNormalMeshVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.ReceiveDestroyed
	 */
	struct ARBNPC_Spectre_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.MotionBlurByBones
	 */
	struct ARBNPC_Spectre_BP_C_MotionBlurByBones_Params
	{
	public:
		TArray<class FName>                                        ListOfBones;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class USkeletalMeshComponent*>                      Target;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		struct FVector                                             Rotation;                                                // 0x0020(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.MotionBlurSwap
	 */
	struct ARBNPC_Spectre_BP_C_MotionBlurSwap_Params
	{
	public:
		float                                                      blurIntensity;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnSpectreVisibilityChanged
	 */
	struct ARBNPC_Spectre_BP_C_Event_OnSpectreVisibilityChanged_Params
	{
	public:
		bool                                                       bShouldBeVisible;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.startGlitch
	 */
	struct ARBNPC_Spectre_BP_C_startGlitch_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnSpectreVisualTypeChanged
	 */
	struct ARBNPC_Spectre_BP_C_Event_OnSpectreVisualTypeChanged_Params
	{
	public:
		EAISpectreVisualType                                       oldType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAISpectreVisualType                                       NewType;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.StartBlackHole
	 */
	struct ARBNPC_Spectre_BP_C_StartBlackHole_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.setScaleMesh
	 */
	struct ARBNPC_Spectre_BP_C_setScaleMesh_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnSpectreIntroSpecialMoveStarted
	 */
	struct ARBNPC_Spectre_BP_C_Event_OnSpectreIntroSpecialMoveStarted_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnSpectreOutroSpecialMoveStarted
	 */
	struct ARBNPC_Spectre_BP_C_Event_OnSpectreOutroSpecialMoveStarted_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.Event_OnFootstep
	 */
	struct ARBNPC_Spectre_BP_C_Event_OnFootstep_Params
	{
	public:
		struct FFootstepData                                       FootstepData;                                            // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.BlurHead
	 */
	struct ARBNPC_Spectre_BP_C_BlurHead_Params
	{
	public:
		float                                                      blurIntensity;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.EntityAnimControl
	 */
	struct ARBNPC_Spectre_BP_C_EntityAnimControl_Params
	{	};

	/**
	 * Function RBNPC_Spectre_BP.RBNPC_Spectre_BP_C.ExecuteUbergraph_RBNPC_Spectre_BP
	 */
	struct ARBNPC_Spectre_BP_C_ExecuteUbergraph_RBNPC_Spectre_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
