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
	 * Function DetectionCrosshair.DetectionCrosshair_C.UpdateCrosshairV3
	 */
	struct UDetectionCrosshair_C_UpdateCrosshairV3_Params
	{
	public:
		bool                                                       ShouldAnimate;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HKX3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.ShouldShow
	 */
	struct UDetectionCrosshair_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FWWV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.UpdateVisualDetection
	 */
	struct UDetectionCrosshair_C_UpdateVisualDetection_Params
	{	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.UpdateFeedbackProgressBar
	 */
	struct UDetectionCrosshair_C_UpdateFeedbackProgressBar_Params
	{
	public:
		class UProgressBar*                                        FeedbackProgressBar;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Increasing;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_34BU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.Update CrosshairV2
	 */
	struct UDetectionCrosshair_C_Update_CrosshairV2_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.UpdateSoundFeedback
	 */
	struct UDetectionCrosshair_C_UpdateSoundFeedback_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QFJG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.Update Crosshair
	 */
	struct UDetectionCrosshair_C_Update_Crosshair_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.Tick
	 */
	struct UDetectionCrosshair_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.Construct
	 */
	struct UDetectionCrosshair_C_Construct_Params
	{	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.PreConstruct
	 */
	struct UDetectionCrosshair_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.Event_Hide
	 */
	struct UDetectionCrosshair_C_Event_Hide_Params
	{	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.Event_Show
	 */
	struct UDetectionCrosshair_C_Event_Show_Params
	{	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.Event_OnWatchedPlayerChanged
	 */
	struct UDetectionCrosshair_C_Event_OnWatchedPlayerChanged_Params
	{
	public:
		class ARBPlayer*                                           oldPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           NewPlayer;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.OnIsAimingThowableChanged
	 */
	struct UDetectionCrosshair_C_OnIsAimingThowableChanged_Params
	{
	public:
		bool                                                       newAimingState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.Destruct
	 */
	struct UDetectionCrosshair_C_Destruct_Params
	{	};

	/**
	 * Function DetectionCrosshair.DetectionCrosshair_C.ExecuteUbergraph_DetectionCrosshair
	 */
	struct UDetectionCrosshair_C_ExecuteUbergraph_DetectionCrosshair_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
