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
	 * Function BloodPipeBase_BP.BloodPipeBase_BP_C.setTriggerPressure
	 */
	struct ABloodPipeBase_BP_C_setTriggerPressure_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BloodPipeBase_BP.BloodPipeBase_BP_C.TriggerSprinkler
	 */
	struct ABloodPipeBase_BP_C_TriggerSprinkler_Params
	{
	public:
		bool                                                       TriggerUntrigger;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Reset;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BloodPipeBase_BP.BloodPipeBase_BP_C.OnRep_State
	 */
	struct ABloodPipeBase_BP_C_OnRep_State_Params
	{	};

	/**
	 * Function BloodPipeBase_BP.BloodPipeBase_BP_C.SetData
	 */
	struct ABloodPipeBase_BP_C_SetData_Params
	{
	public:
		int32_t                                                    DataIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Valut;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BloodPipeBase_BP.BloodPipeBase_BP_C.UserConstructionScript
	 */
	struct ABloodPipeBase_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BloodPipeBase_BP.BloodPipeBase_BP_C.ReceiveBeginPlay
	 */
	struct ABloodPipeBase_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BloodPipeBase_BP.BloodPipeBase_BP_C.startFluid
	 */
	struct ABloodPipeBase_BP_C_startFluid_Params
	{	};

	/**
	 * Function BloodPipeBase_BP.BloodPipeBase_BP_C.StopFluid
	 */
	struct ABloodPipeBase_BP_C_StopFluid_Params
	{	};

	/**
	 * Function BloodPipeBase_BP.BloodPipeBase_BP_C.Event_OnResetStage
	 */
	struct ABloodPipeBase_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function BloodPipeBase_BP.BloodPipeBase_BP_C.Reset
	 */
	struct ABloodPipeBase_BP_C_Reset_Params
	{	};

	/**
	 * Function BloodPipeBase_BP.BloodPipeBase_BP_C.On
	 */
	struct ABloodPipeBase_BP_C_On_Params
	{	};

	/**
	 * Function BloodPipeBase_BP.BloodPipeBase_BP_C.played
	 */
	struct ABloodPipeBase_BP_C_played_Params
	{	};

	/**
	 * Function BloodPipeBase_BP.BloodPipeBase_BP_C.ExecuteUbergraph_BloodPipeBase_BP
	 */
	struct ABloodPipeBase_BP_C_ExecuteUbergraph_BloodPipeBase_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
