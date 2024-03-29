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
	 * Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.StopPreviewing
	 */
	struct ULocalPlayerCurrencyHorizontal_C_StopPreviewing_Params
	{	};

	/**
	 * Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.PreviewCost
	 */
	struct ULocalPlayerCurrencyHorizontal_C_PreviewCost_Params
	{
	public:
		int32_t                                                    Cost;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.Get_icon_ToolTipWidget_1
	 */
	struct ULocalPlayerCurrencyHorizontal_C_Get_icon_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.SetColor
	 */
	struct ULocalPlayerCurrencyHorizontal_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.RefreshIcon
	 */
	struct ULocalPlayerCurrencyHorizontal_C_RefreshIcon_Params
	{	};

	/**
	 * Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.SetCurrencyType
	 */
	struct ULocalPlayerCurrencyHorizontal_C_SetCurrencyType_Params
	{
	public:
		ECurrencyType                                              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.RefreshValue
	 */
	struct ULocalPlayerCurrencyHorizontal_C_RefreshValue_Params
	{	};

	/**
	 * Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.PreConstruct
	 */
	struct ULocalPlayerCurrencyHorizontal_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.Construct
	 */
	struct ULocalPlayerCurrencyHorizontal_C_Construct_Params
	{	};

	/**
	 * Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.OnCurrenciesChanged_Event_1
	 */
	struct ULocalPlayerCurrencyHorizontal_C_OnCurrenciesChanged_Event_1_Params
	{	};

	/**
	 * Function LocalPlayerCurrencyHorizontal.LocalPlayerCurrencyHorizontal_C.ExecuteUbergraph_LocalPlayerCurrencyHorizontal
	 */
	struct ULocalPlayerCurrencyHorizontal_C_ExecuteUbergraph_LocalPlayerCurrencyHorizontal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
