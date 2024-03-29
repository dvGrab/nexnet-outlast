#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * Function W_DebugOverlay.W_DebugOverlay_C.HideDebugElements
	 */
	struct UW_DebugOverlay_C_HideDebugElements_Params
	{	};

	/**
	 * Function W_DebugOverlay.W_DebugOverlay_C.UpdateDebugPanel
	 */
	struct UW_DebugOverlay_C_UpdateDebugPanel_Params
	{	};

	/**
	 * Function W_DebugOverlay.W_DebugOverlay_C.Construct
	 */
	struct UW_DebugOverlay_C_Construct_Params
	{	};

	/**
	 * Function W_DebugOverlay.W_DebugOverlay_C.CustomEvent_1
	 */
	struct UW_DebugOverlay_C_CustomEvent_1_Params
	{	};

	/**
	 * Function W_DebugOverlay.W_DebugOverlay_C.Tick
	 */
	struct UW_DebugOverlay_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DebugOverlay.W_DebugOverlay_C.ShowBounceVertical
	 */
	struct UW_DebugOverlay_C_ShowBounceVertical_Params
	{	};

	/**
	 * Function W_DebugOverlay.W_DebugOverlay_C.HideBounceVertical
	 */
	struct UW_DebugOverlay_C_HideBounceVertical_Params
	{	};

	/**
	 * Function W_DebugOverlay.W_DebugOverlay_C.CustomEvent_2
	 */
	struct UW_DebugOverlay_C_CustomEvent_2_Params
	{	};

	/**
	 * Function W_DebugOverlay.W_DebugOverlay_C.ExecuteUbergraph_W_DebugOverlay
	 */
	struct UW_DebugOverlay_C_ExecuteUbergraph_W_DebugOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
