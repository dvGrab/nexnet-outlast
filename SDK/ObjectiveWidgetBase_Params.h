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
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.ShouldShow
	 */
	struct UObjectiveWidgetBase_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.IsInValidStateForExtraInfo
	 */
	struct UObjectiveWidgetBase_C_IsInValidStateForExtraInfo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.ClearBindings
	 */
	struct UObjectiveWidgetBase_C_ClearBindings_Params
	{	};

	/**
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.GetFadeInAnimation
	 */
	struct UObjectiveWidgetBase_C_GetFadeInAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    FadeInAnimation;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.UpdateProgress
	 */
	struct UObjectiveWidgetBase_C_UpdateProgress_Params
	{
	public:
		float                                                      progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isPositiveProgress;                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BWJP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                objectiveText;                                           // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.SetCompleted
	 */
	struct UObjectiveWidgetBase_C_SetCompleted_Params
	{	};

	/**
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Initialize
	 */
	struct UObjectiveWidgetBase_C_Initialize_Params
	{
	public:
		class ARBBaseObjectiveCoordinator*                         coordinator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Event_Show
	 */
	struct UObjectiveWidgetBase_C_Event_Show_Params
	{	};

	/**
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Event_Hide
	 */
	struct UObjectiveWidgetBase_C_Event_Hide_Params
	{	};

	/**
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.CustomEvent_1
	 */
	struct UObjectiveWidgetBase_C_CustomEvent_1_Params
	{	};

	/**
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Event_Completed
	 */
	struct UObjectiveWidgetBase_C_Event_Completed_Params
	{	};

	/**
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Remove
	 */
	struct UObjectiveWidgetBase_C_Remove_Params
	{	};

	/**
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.ExecuteUbergraph_ObjectiveWidgetBase
	 */
	struct UObjectiveWidgetBase_C_ExecuteUbergraph_ObjectiveWidgetBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.VisibilityEventDispatcher__DelegateSignature
	 */
	struct UObjectiveWidgetBase_C_VisibilityEventDispatcher__DelegateSignature_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
