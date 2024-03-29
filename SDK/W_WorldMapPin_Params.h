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
	 * Function W_WorldMapPin.W_WorldMapPin_C.PreConstruct
	 */
	struct UW_WorldMapPin_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WorldMapPin.W_WorldMapPin_C.Tick
	 */
	struct UW_WorldMapPin_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WorldMapPin.W_WorldMapPin_C.BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_WorldMapPin_C_BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_WorldMapPin.W_WorldMapPin_C.BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_WorldMapPin_C_BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_WorldMapPin.W_WorldMapPin_C.BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_WorldMapPin_C_BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_WorldMapPin.W_WorldMapPin_C.BndEvt__W_WorldMapPin_Locked_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_WorldMapPin_C_BndEvt__W_WorldMapPin_Locked_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_WorldMapPin.W_WorldMapPin_C.ExecuteUbergraph_W_WorldMapPin
	 */
	struct UW_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
