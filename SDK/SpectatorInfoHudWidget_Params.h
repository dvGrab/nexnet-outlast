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
	 * Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Event_Show
	 */
	struct USpectatorInfoHudWidget_C_Event_Show_Params
	{	};

	/**
	 * Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Event_Hide
	 */
	struct USpectatorInfoHudWidget_C_Event_Hide_Params
	{	};

	/**
	 * Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Tick
	 */
	struct USpectatorInfoHudWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Event_OnSpectatedPlayerChanged
	 */
	struct USpectatorInfoHudWidget_C_Event_OnSpectatedPlayerChanged_Params
	{
	public:
		class ARBPlayer*                                           newSpectatedlPlayer;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Construct
	 */
	struct USpectatorInfoHudWidget_C_Construct_Params
	{	};

	/**
	 * Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.PreConstruct
	 */
	struct USpectatorInfoHudWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.ExecuteUbergraph_SpectatorInfoHudWidget
	 */
	struct USpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
