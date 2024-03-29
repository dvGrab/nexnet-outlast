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
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.GetFocusActorFromCategory
	 */
	struct ACellCustomizationCameraActor_C_GetFocusActorFromCategory_Params
	{
	public:
		ECustomizationMenuCategory                                 Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1Q4N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.Init
	 */
	struct ACellCustomizationCameraActor_C_Init_Params
	{	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.DeactivateCamera
	 */
	struct ACellCustomizationCameraActor_C_DeactivateCamera_Params
	{	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.Activate Camera
	 */
	struct ACellCustomizationCameraActor_C_Activate_Camera_Params
	{	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.UpdateCameraTransforms
	 */
	struct ACellCustomizationCameraActor_C_UpdateCameraTransforms_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.FocusCameraTo
	 */
	struct ACellCustomizationCameraActor_C_FocusCameraTo_Params
	{
	public:
		ECustomizationMenuCategory                                 CustomizationCategory;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M875[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.UserConstructionScript
	 */
	struct ACellCustomizationCameraActor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ReceiveBeginPlay
	 */
	struct ACellCustomizationCameraActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ReceiveTick
	 */
	struct ACellCustomizationCameraActor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ExecuteUbergraph_CellCustomizationCameraActor
	 */
	struct ACellCustomizationCameraActor_C_ExecuteUbergraph_CellCustomizationCameraActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
