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
	 * Function ActionIconWidget.ActionIconWidget_C.SetHoldRequirement
	 */
	struct UActionIconWidget_C_SetHoldRequirement_Params
	{
	public:
		bool                                                       RequiresHold;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.ResetVisibleIcons
	 */
	struct UActionIconWidget_C_ResetVisibleIcons_Params
	{	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.SetWidgetVisible
	 */
	struct UActionIconWidget_C_SetWidgetVisible_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.UpdateSize
	 */
	struct UActionIconWidget_C_UpdateSize_Params
	{	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.SetDesiredHeight
	 */
	struct UActionIconWidget_C_SetDesiredHeight_Params
	{
	public:
		float                                                      DesiredHeight;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.ShowContainer
	 */
	struct UActionIconWidget_C_ShowContainer_Params
	{
	public:
		class UPanelWidget*                                        container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.HideIcons
	 */
	struct UActionIconWidget_C_HideIcons_Params
	{	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.RefreshActionIcon
	 */
	struct UActionIconWidget_C_RefreshActionIcon_Params
	{	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.SetActionName
	 */
	struct UActionIconWidget_C_SetActionName_Params
	{
	public:
		class FName                                                NewActionName;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.PreConstruct
	 */
	struct UActionIconWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.Construct
	 */
	struct UActionIconWidget_C_Construct_Params
	{	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.Tick
	 */
	struct UActionIconWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.OnMenuInputSourceChanged
	 */
	struct UActionIconWidget_C_OnMenuInputSourceChanged_Params
	{	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.OnMenuActionProgressChanged
	 */
	struct UActionIconWidget_C_OnMenuActionProgressChanged_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      newProgress;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.OnHudActionProgressChanged
	 */
	struct UActionIconWidget_C_OnHudActionProgressChanged_Params
	{
	public:
		float                                                      newProgress;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionIconWidget.ActionIconWidget_C.ExecuteUbergraph_ActionIconWidget
	 */
	struct UActionIconWidget_C_ExecuteUbergraph_ActionIconWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
