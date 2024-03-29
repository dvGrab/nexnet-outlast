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
	 * Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.ValidateTube
	 */
	struct ASASNPCSeparator_BP_C_ValidateTube_Params
	{
	public:
		ESeparatorTubeState                                        TubeState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.UserConstructionScript
	 */
	struct ASASNPCSeparator_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.unlockTubes
	 */
	struct ASASNPCSeparator_BP_C_unlockTubes_Params
	{	};

	/**
	 * Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.lockTubes
	 */
	struct ASASNPCSeparator_BP_C_lockTubes_Params
	{	};

	/**
	 * Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.InitTubeList
	 */
	struct ASASNPCSeparator_BP_C_InitTubeList_Params
	{	};

	/**
	 * Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.ReceiveBeginPlay
	 */
	struct ASASNPCSeparator_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.OnPlayerEnteredInside
	 */
	struct ASASNPCSeparator_BP_C_OnPlayerEnteredInside_Params
	{
	public:
		class ARBNPCSeparatorTube*                                 tube;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.OnPlayerExitedInside
	 */
	struct ASASNPCSeparator_BP_C_OnPlayerExitedInside_Params
	{
	public:
		class ARBNPCSeparatorTube*                                 tube;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.Event_OnResetStage
	 */
	struct ASASNPCSeparator_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.BndEvt__SAS-NPCSeparator_BP_OusideSafetyValidationBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ASASNPCSeparator_BP_C_BndEvt__SASNPCSeparator_BP_OusideSafetyValidationBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3V7L[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.BndEvt__SAS-NPCSeparator_BP_InsideSafetyValidationBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ASASNPCSeparator_BP_C_BndEvt__SASNPCSeparator_BP_InsideSafetyValidationBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z481[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function SAS-NPCSeparator_BP.SAS-NPCSeparator_BP_C.ExecuteUbergraph_SAS-NPCSeparator_BP
	 */
	struct ASASNPCSeparator_BP_C_ExecuteUbergraph_SASNPCSeparator_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
