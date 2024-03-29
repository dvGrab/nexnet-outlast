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
	 * Function W_RadialIcon_MapMarking.W_RadialIcon_MapMarking_C.Get_Icon_ColorAndOpacity_1
	 */
	struct UW_RadialIcon_MapMarking_C_Get_Icon_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_RadialIcon_MapMarking.W_RadialIcon_MapMarking_C.Tick
	 */
	struct UW_RadialIcon_MapMarking_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_RadialIcon_MapMarking.W_RadialIcon_MapMarking_C.PreConstruct
	 */
	struct UW_RadialIcon_MapMarking_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_RadialIcon_MapMarking.W_RadialIcon_MapMarking_C.Construct
	 */
	struct UW_RadialIcon_MapMarking_C_Construct_Params
	{	};

	/**
	 * Function W_RadialIcon_MapMarking.W_RadialIcon_MapMarking_C.OnUnhighlight
	 */
	struct UW_RadialIcon_MapMarking_C_OnUnhighlight_Params
	{
	public:
		bool                                                       Unselected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_RadialIcon_MapMarking.W_RadialIcon_MapMarking_C.Selected
	 */
	struct UW_RadialIcon_MapMarking_C_Selected_Params
	{	};

	/**
	 * Function W_RadialIcon_MapMarking.W_RadialIcon_MapMarking_C.OnHighlight
	 */
	struct UW_RadialIcon_MapMarking_C_OnHighlight_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_RadialIcon_MapMarking.W_RadialIcon_MapMarking_C.ExecuteUbergraph_W_RadialIcon_MapMarking
	 */
	struct UW_RadialIcon_MapMarking_C_ExecuteUbergraph_W_RadialIcon_MapMarking_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
