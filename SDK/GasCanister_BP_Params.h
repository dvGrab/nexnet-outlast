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
	 * Function GasCanister_BP.GasCanister_BP_C.IsUsable
	 */
	struct AGasCanister_BP_C_IsUsable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8CAU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GasCanister_BP.GasCanister_BP_C.GetCustomDropInteractionText
	 */
	struct AGasCanister_BP_C_GetCustomDropInteractionText_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                out_CustomInteractionText;                               // 0x0008(0x0018)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasCanister_BP.GasCanister_BP_C.GetCustomPickupInteractionText
	 */
	struct AGasCanister_BP_C_GetCustomPickupInteractionText_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                out_CustomInteractionText;                               // 0x0008(0x0018)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasCanister_BP.GasCanister_BP_C.Event_OnResetStage
	 */
	struct AGasCanister_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function GasCanister_BP.GasCanister_BP_C.ReceiveBeginPlay
	 */
	struct AGasCanister_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GasCanister_BP.GasCanister_BP_C.Event_OnUsedOnInteractible
	 */
	struct AGasCanister_BP_C_Event_OnUsedOnInteractible_Params
	{
	public:
		class ARBPawn*                                             interactor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URBLargeObjectInteractionPanelComponent*             interactible;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GasCanister_BP.GasCanister_BP_C.ExecuteUbergraph_GasCanister_BP
	 */
	struct AGasCanister_BP_C_ExecuteUbergraph_GasCanister_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
