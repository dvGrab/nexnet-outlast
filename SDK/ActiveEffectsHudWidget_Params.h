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
	 * Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.Refresh
	 */
	struct UActiveEffectsHudWidget_C_Refresh_Params
	{
	public:
		TArray<struct FActiveEffectTrackingData>                   activeEffectTrackingDataEntries;                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.RemoveActiveEffect
	 */
	struct UActiveEffectsHudWidget_C_RemoveActiveEffect_Params
	{
	public:
		class FName                                                EffectId;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.UpdateActiveEffect
	 */
	struct UActiveEffectsHudWidget_C_UpdateActiveEffect_Params
	{
	public:
		struct FActiveEffectTrackingData                           activeEffectTrackingDataEntry;                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.AddActiveEffect
	 */
	struct UActiveEffectsHudWidget_C_AddActiveEffect_Params
	{
	public:
		struct FActiveEffectTrackingData                           activeEffectTrackingDataEntry;                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.PreConstruct
	 */
	struct UActiveEffectsHudWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.Event_OnWatchedPlayerChanged
	 */
	struct UActiveEffectsHudWidget_C_Event_OnWatchedPlayerChanged_Params
	{
	public:
		class ARBPlayer*                                           oldPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           NewPlayer;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActiveEffectsHudWidget.ActiveEffectsHudWidget_C.ExecuteUbergraph_ActiveEffectsHudWidget
	 */
	struct UActiveEffectsHudWidget_C_ExecuteUbergraph_ActiveEffectsHudWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
