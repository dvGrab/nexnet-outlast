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
	 * Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.ConstructWheelMeshesList
	 */
	struct APushable_OnRail_BP_C_ConstructWheelMeshesList_Params
	{	};

	/**
	 * Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.UpdateLights
	 */
	struct APushable_OnRail_BP_C_UpdateLights_Params
	{	};

	/**
	 * Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.GetLedgeMarkerClosestTo
	 */
	struct APushable_OnRail_BP_C_GetLedgeMarkerClosestTo_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MNPJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBLedgeMarker*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.SetupLedgeMarkers
	 */
	struct APushable_OnRail_BP_C_SetupLedgeMarkers_Params
	{	};

	/**
	 * Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.UserConstructionScript
	 */
	struct APushable_OnRail_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.BP_PostMove
	 */
	struct APushable_OnRail_BP_C_BP_PostMove_Params
	{
	public:
		struct FVector                                             DeltaLocation;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.ReceiveBeginPlay
	 */
	struct APushable_OnRail_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.BP_PostRotated
	 */
	struct APushable_OnRail_BP_C_BP_PostRotated_Params
	{
	public:
		struct FRotator                                            frontRotation;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            rearRotation;                                            // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.Event_OnPushableNearbyPlayersChanged
	 */
	struct APushable_OnRail_BP_C_Event_OnPushableNearbyPlayersChanged_Params
	{	};

	/**
	 * Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.Event_OnPawnPushingChanged
	 */
	struct APushable_OnRail_BP_C_Event_OnPawnPushingChanged_Params
	{
	public:
		class URBPushableComponent*                                pushableComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pushable_OnRail_BP.Pushable_OnRail_BP_C.ExecuteUbergraph_Pushable_OnRail_BP
	 */
	struct APushable_OnRail_BP_C_ExecuteUbergraph_Pushable_OnRail_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
