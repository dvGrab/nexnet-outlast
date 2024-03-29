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
	 * Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.GetStateName
	 */
	struct AViolentKids_Button_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.IsStateA
	 */
	struct AViolentKids_Button_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.ShouldBeIgnoredForLots
	 */
	struct AViolentKids_Button_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.UserConstructionScript
	 */
	struct AViolentKids_Button_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.OnWorldPopulateFinished
	 */
	struct AViolentKids_Button_BP_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.PrepareState
	 */
	struct AViolentKids_Button_BP_C_PrepareState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NDFL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              randomOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.ReceiveBeginPlay
	 */
	struct AViolentKids_Button_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.SetState
	 */
	struct AViolentKids_Button_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.SetShouldBeIgnoredForLots
	 */
	struct AViolentKids_Button_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.BndEvt__ChildMannequin_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature
	 */
	struct AViolentKids_Button_BP_C_BndEvt__ChildMannequin_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature_Params
	{
	public:
		class URBInteractionZoneComponent*                         Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.OnWorldFullyLoaded
	 */
	struct AViolentKids_Button_BP_C_OnWorldFullyLoaded_Params
	{	};

	/**
	 * Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.ExecuteUbergraph_ViolentKids_Button_BP
	 */
	struct AViolentKids_Button_BP_C_ExecuteUbergraph_ViolentKids_Button_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
