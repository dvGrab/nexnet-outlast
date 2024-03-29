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
	 * Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
	 */
	struct UBP_GameInstance_C_ReceiveInit_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.AdjustVolume
	 */
	struct UBP_GameInstance_C_AdjustVolume_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.AddPauseGameCondition
	 */
	struct UBP_GameInstance_C_AddPauseGameCondition_Params
	{
	public:
		class FString                                              PauseCondition;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.RemovePauseGameCondition
	 */
	struct UBP_GameInstance_C_RemovePauseGameCondition_Params
	{
	public:
		class FString                                              PauseCondition;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.PauseGameWithConditon
	 */
	struct UBP_GameInstance_C_PauseGameWithConditon_Params
	{
	public:
		class FString                                              NewCondition;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnSessionInviteAccepted
	 */
	struct UBP_GameInstance_C_OnSessionInviteAccepted_Params
	{
	public:
		int32_t                                                    LocalPlayerNum;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L7R1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPUniqueNetId                                      PersonInvited;                                           // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FBlueprintSessionResult                             SessionToJoin;                                           // 0x0028(0x0108)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
	 */
	struct UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZEFR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
