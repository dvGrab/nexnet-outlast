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
	 * Function HUDNightVision.HUDNightVision_C.HandleMaxBatteryChange
	 */
	struct UHUDNightVision_C_HandleMaxBatteryChange_Params
	{
	public:
		float                                                      Max_Battery;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.GetBatteryBoosterValue
	 */
	struct UHUDNightVision_C_GetBatteryBoosterValue_Params
	{
	public:
		float                                                      StaminaBoosterValue;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.UpdateRatio
	 */
	struct UHUDNightVision_C_UpdateRatio_Params
	{
	public:
		float                                                      batteryValue;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.SetIsNVActive
	 */
	struct UHUDNightVision_C_SetIsNVActive_Params
	{
	public:
		bool                                                       isNvActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.ShouldShow
	 */
	struct UHUDNightVision_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.Event_Show
	 */
	struct UHUDNightVision_C_Event_Show_Params
	{	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.Event_Hide
	 */
	struct UHUDNightVision_C_Event_Hide_Params
	{	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.Construct
	 */
	struct UHUDNightVision_C_Construct_Params
	{	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.Event_OnWatchedPlayerChanged
	 */
	struct UHUDNightVision_C_Event_OnWatchedPlayerChanged_Params
	{
	public:
		class ARBPlayer*                                           oldPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           NewPlayer;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.OnNVChanged
	 */
	struct UHUDNightVision_C_OnNVChanged_Params
	{
	public:
		bool                                                       bOn;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.OnActiveSkillChanged
	 */
	struct UHUDNightVision_C_OnActiveSkillChanged_Params
	{
	public:
		class ARBActiveSkill*                                      activeSkillActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.OnActiveSkillActivated
	 */
	struct UHUDNightVision_C_OnActiveSkillActivated_Params
	{
	public:
		class ARBActiveSkill*                                      ActiveSkill;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsActive;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.BindPlayerEvents
	 */
	struct UHUDNightVision_C_BindPlayerEvents_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.UnbindPlayerEvents
	 */
	struct UHUDNightVision_C_UnbindPlayerEvents_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.OnMaxNVBatteryChangedDelegate_Event_1
	 */
	struct UHUDNightVision_C_OnMaxNVBatteryChangedDelegate_Event_1_Params
	{
	public:
		float                                                      maxBattery;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.OnBatteryLevelChanged
	 */
	struct UHUDNightVision_C_OnBatteryLevelChanged_Params
	{
	public:
		float                                                      batteryLevel;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.CustomEvent_1
	 */
	struct UHUDNightVision_C_CustomEvent_1_Params
	{	};

	/**
	 * Function HUDNightVision.HUDNightVision_C.ExecuteUbergraph_HUDNightVision
	 */
	struct UHUDNightVision_C_ExecuteUbergraph_HUDNightVision_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
