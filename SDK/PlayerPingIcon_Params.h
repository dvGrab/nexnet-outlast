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
	 * Function PlayerPingIcon.PlayerPingIcon_C.UpdateOpacity
	 */
	struct UPlayerPingIcon_C_UpdateOpacity_Params
	{	};

	/**
	 * Function PlayerPingIcon.PlayerPingIcon_C.UpdateDesiredSize
	 */
	struct UPlayerPingIcon_C_UpdateDesiredSize_Params
	{	};

	/**
	 * Function PlayerPingIcon.PlayerPingIcon_C.ShouldShow
	 */
	struct UPlayerPingIcon_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPingIcon.PlayerPingIcon_C.UpdateDisplay
	 */
	struct UPlayerPingIcon_C_UpdateDisplay_Params
	{	};

	/**
	 * Function PlayerPingIcon.PlayerPingIcon_C.SetupIcon
	 */
	struct UPlayerPingIcon_C_SetupIcon_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPingIcon.PlayerPingIcon_C.Event_Hide
	 */
	struct UPlayerPingIcon_C_Event_Hide_Params
	{	};

	/**
	 * Function PlayerPingIcon.PlayerPingIcon_C.Construct
	 */
	struct UPlayerPingIcon_C_Construct_Params
	{	};

	/**
	 * Function PlayerPingIcon.PlayerPingIcon_C.ExecuteUbergraph_PlayerPingIcon
	 */
	struct UPlayerPingIcon_C_ExecuteUbergraph_PlayerPingIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J631[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
