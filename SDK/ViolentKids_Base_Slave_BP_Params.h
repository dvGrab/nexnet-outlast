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
	 * Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.GetPropAnimationData
	 */
	struct AViolentKids_Base_Slave_BP_C_GetPropAnimationData_Params
	{
	public:
		class UViolentKids_MannequinData_BP_C*                     New_Param;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.GetAnimationData
	 */
	struct AViolentKids_Base_Slave_BP_C_GetAnimationData_Params
	{
	public:
		class UViolentKids_MannequinData_BP_C*                     Data;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.OnLoopDoneChanged
	 */
	struct AViolentKids_Base_Slave_BP_C_OnLoopDoneChanged_Params
	{	};

	/**
	 * Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.Initialize
	 */
	struct AViolentKids_Base_Slave_BP_C_Initialize_Params
	{
	public:
		class AActor*                                              AnimDriver;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.OnRep_IsLoopDone
	 */
	struct AViolentKids_Base_Slave_BP_C_OnRep_IsLoopDone_Params
	{	};

	/**
	 * Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.SetLoopDone (Server)
	 */
	struct AViolentKids_Base_Slave_BP_C_SetLoopDone_Server_Params
	{
	public:
		bool                                                       LoopDone;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.Reset Anims
	 */
	struct AViolentKids_Base_Slave_BP_C_Reset_Anims_Params
	{	};

	/**
	 * Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.Event_OnResetStage
	 */
	struct AViolentKids_Base_Slave_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ViolentKids_Base_Slave_BP.ViolentKids_Base_Slave_BP_C.ExecuteUbergraph_ViolentKids_Base_Slave_BP
	 */
	struct AViolentKids_Base_Slave_BP_C_ExecuteUbergraph_ViolentKids_Base_Slave_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
