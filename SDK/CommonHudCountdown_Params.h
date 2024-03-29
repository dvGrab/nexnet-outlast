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
	 * Function CommonHudCountdown.CommonHudCountdown_C.ShowSpinner
	 */
	struct UCommonHudCountdown_C_ShowSpinner_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonHudCountdown.CommonHudCountdown_C.SetIsRightAligned
	 */
	struct UCommonHudCountdown_C_SetIsRightAligned_Params
	{
	public:
		bool                                                       isRightAligned;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonHudCountdown.CommonHudCountdown_C.ShowCountdownText
	 */
	struct UCommonHudCountdown_C_ShowCountdownText_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonHudCountdown.CommonHudCountdown_C.SetCountdownValueInSeconds
	 */
	struct UCommonHudCountdown_C_SetCountdownValueInSeconds_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonHudCountdown.CommonHudCountdown_C.SetMessage
	 */
	struct UCommonHudCountdown_C_SetMessage_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
