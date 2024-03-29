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
	 * Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.TurnOn
	 */
	struct UFlipSwitchComponent_BP_C_TurnOn_Params
	{	};

	/**
	 * Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.TurnOff
	 */
	struct UFlipSwitchComponent_BP_C_TurnOff_Params
	{	};

	/**
	 * Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.GetSwitchColor
	 */
	struct UFlipSwitchComponent_BP_C_GetSwitchColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.RefreshVisualState
	 */
	struct UFlipSwitchComponent_BP_C_RefreshVisualState_Params
	{	};

	/**
	 * Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.ReceiveBeginPlay
	 */
	struct UFlipSwitchComponent_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.OnFlipSwitchStageChanged
	 */
	struct UFlipSwitchComponent_BP_C_OnFlipSwitchStageChanged_Params
	{	};

	/**
	 * Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.OnLocallyFocusStateChange
	 */
	struct UFlipSwitchComponent_BP_C_OnLocallyFocusStateChange_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.Event_OnResetStage
	 */
	struct UFlipSwitchComponent_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function FlipSwitchComponent_BP.FlipSwitchComponent_BP_C.ExecuteUbergraph_FlipSwitchComponent_BP
	 */
	struct UFlipSwitchComponent_BP_C_ExecuteUbergraph_FlipSwitchComponent_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
