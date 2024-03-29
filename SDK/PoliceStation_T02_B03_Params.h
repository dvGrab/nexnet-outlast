#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * Function PoliceStation_T02_B03.PoliceStation_T02_B03_C.BndEvt__PoliceStation_T02_B03_PS_T02_B03_ObjCoord_03_GoTo_SnitchCell_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorStarted__DelegateSignature
	 */
	struct APoliceStation_T02_B03_C_BndEvt__PoliceStation_T02_B03_PS_T02_B03_ObjCoord_03_GoTo_SnitchCell_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorStarted__DelegateSignature_Params
	{	};

	/**
	 * Function PoliceStation_T02_B03.PoliceStation_T02_B03_C.BndEvt__PoliceStation_T02_B03_PS_T02_B03_ObjCoord_03_GoTo_SnitchCell_K2Node_ActorBoundEvent_1_OnObjectiveCoordinatorCompleted__DelegateSignature
	 */
	struct APoliceStation_T02_B03_C_BndEvt__PoliceStation_T02_B03_PS_T02_B03_ObjCoord_03_GoTo_SnitchCell_K2Node_ActorBoundEvent_1_OnObjectiveCoordinatorCompleted__DelegateSignature_Params
	{
	public:
		bool                                                       bIsJIP;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PoliceStation_T02_B03.PoliceStation_T02_B03_C.BndEvt__PoliceStation_T02_B03_RBPlayerTriggerVolume_PS_T02_B03_BlockCell_K2Node_ActorBoundEvent_6_OnPlayerTriggerVolumeTriggered__DelegateSignature
	 */
	struct APoliceStation_T02_B03_C_BndEvt__PoliceStation_T02_B03_RBPlayerTriggerVolume_PS_T02_B03_BlockCell_K2Node_ActorBoundEvent_6_OnPlayerTriggerVolumeTriggered__DelegateSignature_Params
	{
	public:
		class URBPlayerTriggerComponent*                           Trigger;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceStation_T02_B03.PoliceStation_T02_B03_C.ExecuteUbergraph_PoliceStation_T02_B03
	 */
	struct APoliceStation_T02_B03_C_ExecuteUbergraph_PoliceStation_T02_B03_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
