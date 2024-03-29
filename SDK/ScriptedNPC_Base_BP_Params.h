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
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.PlayAnimOnSpecificMesh
	 */
	struct AScriptedNPC_Base_BP_C_PlayAnimOnSpecificMesh_Params
	{
	public:
		class UAnimSequenceBase*                                   Anim;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnExitingChanged
	 */
	struct AScriptedNPC_Base_BP_C_OnExitingChanged_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.DisableDecalsOnSkelmeshes
	 */
	struct AScriptedNPC_Base_BP_C_DisableDecalsOnSkelmeshes_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnRep_Exiting
	 */
	struct AScriptedNPC_Base_BP_C_OnRep_Exiting_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnRep_IsInLoopB
	 */
	struct AScriptedNPC_Base_BP_C_OnRep_IsInLoopB_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnRep_hasSentFinished
	 */
	struct AScriptedNPC_Base_BP_C_OnRep_hasSentFinished_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.NotifyExitFinished
	 */
	struct AScriptedNPC_Base_BP_C_NotifyExitFinished_Params
	{
	public:
		class USkeletalMeshComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.UserConstructionScript
	 */
	struct AScriptedNPC_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.EnterLoopB
	 */
	struct AScriptedNPC_Base_BP_C_EnterLoopB_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.StartExiting
	 */
	struct AScriptedNPC_Base_BP_C_StartExiting_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.Event_StartedScriptedAnim
	 */
	struct AScriptedNPC_Base_BP_C_Event_StartedScriptedAnim_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.Event_OnResetStage
	 */
	struct AScriptedNPC_Base_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.DetachBot
	 */
	struct AScriptedNPC_Base_BP_C_DetachBot_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.DelayedCheckVariables
	 */
	struct AScriptedNPC_Base_BP_C_DelayedCheckVariables_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.ReceiveBeginPlay
	 */
	struct AScriptedNPC_Base_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.DelayedStop
	 */
	struct AScriptedNPC_Base_BP_C_DelayedStop_Params
	{	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.ExecuteUbergraph_ScriptedNPC_Base_BP
	 */
	struct AScriptedNPC_Base_BP_C_ExecuteUbergraph_ScriptedNPC_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PNRQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnFinished__DelegateSignature
	 */
	struct AScriptedNPC_Base_BP_C_OnFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
