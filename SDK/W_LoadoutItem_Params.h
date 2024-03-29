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
	 * Function W_LoadoutItem.W_LoadoutItem_C.GetSelectionSound
	 */
	struct UW_LoadoutItem_C_GetSelectionSound_Params
	{
	public:
		class UFMODEvent*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.GetCurrentMenuDirectory
	 */
	struct UW_LoadoutItem_C_GetCurrentMenuDirectory_Params
	{
	public:
		class FText                                                Return_Value;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.Get_Equipped_Text_Visibility
	 */
	struct UW_LoadoutItem_C_Get_Equipped_Text_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.SimulateUnhover
	 */
	struct UW_LoadoutItem_C_SimulateUnhover_Params
	{	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.SimulateHover
	 */
	struct UW_LoadoutItem_C_SimulateHover_Params
	{	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.SimulateClick
	 */
	struct UW_LoadoutItem_C_SimulateClick_Params
	{	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.ToggleSelection
	 */
	struct UW_LoadoutItem_C_ToggleSelection_Params
	{	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.Deselect
	 */
	struct UW_LoadoutItem_C_Deselect_Params
	{	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.Select
	 */
	struct UW_LoadoutItem_C_Select_Params
	{	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
	 */
	struct UW_LoadoutItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
	 */
	struct UW_LoadoutItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UW_LoadoutItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.OnLoadoutLoaded
	 */
	struct UW_LoadoutItem_C_OnLoadoutLoaded_Params
	{	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.PreConstruct
	 */
	struct UW_LoadoutItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.ExecuteUbergraph_W_LoadoutItem
	 */
	struct UW_LoadoutItem_C_ExecuteUbergraph_W_LoadoutItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UW_LoadoutItem_C_OnButtonUnhovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutItem_C*                                    LoadoutItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.OnButtonHovered__DelegateSignature
	 */
	struct UW_LoadoutItem_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutItem_C*                                    LoadoutItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem.W_LoadoutItem_C.OnButtonClicked__DelegateSignature
	 */
	struct UW_LoadoutItem_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutItem_C*                                    LoadoutItemWidget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
