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
	 * Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.GetNetworkSyncOffset
	 */
	struct ASplineFollowing_Base_BP_C_GetNetworkSyncOffset_Params
	{
	public:
		float                                                      RealOffset;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.GetRealOffset
	 */
	struct ASplineFollowing_Base_BP_C_GetRealOffset_Params
	{
	public:
		float                                                      RealOffset;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.RefreshSplineData
	 */
	struct ASplineFollowing_Base_BP_C_RefreshSplineData_Params
	{
	public:
		class USplineComponent*                                    SplineComp;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.FindDefaultSplineComponent
	 */
	struct ASplineFollowing_Base_BP_C_FindDefaultSplineComponent_Params
	{
	public:
		class USplineComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.FindSplineComponent
	 */
	struct ASplineFollowing_Base_BP_C_FindSplineComponent_Params
	{
	public:
		class USplineComponent*                                    LinkedSplineComponent;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.RefreshTransform
	 */
	struct ASplineFollowing_Base_BP_C_RefreshTransform_Params
	{	};

	/**
	 * Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.UserConstructionScript
	 */
	struct ASplineFollowing_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.ReceiveBeginPlay
	 */
	struct ASplineFollowing_Base_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.Event_OnTriggered
	 */
	struct ASplineFollowing_Base_BP_C_Event_OnTriggered_Params
	{	};

	/**
	 * Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.Event_OnUntriggered
	 */
	struct ASplineFollowing_Base_BP_C_Event_OnUntriggered_Params
	{	};

	/**
	 * Function SplineFollowing_Base_BP.SplineFollowing_Base_BP_C.ExecuteUbergraph_SplineFollowing_Base_BP
	 */
	struct ASplineFollowing_Base_BP_C_ExecuteUbergraph_SplineFollowing_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WQ72[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
