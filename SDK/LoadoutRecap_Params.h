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
	 * Function LoadoutRecap.LoadoutRecap_C.OnFocusReceived
	 */
	struct ULoadoutRecap_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function LoadoutRecap.LoadoutRecap_C.Refresh
	 */
	struct ULoadoutRecap_C_Refresh_Params
	{	};

	/**
	 * Function LoadoutRecap.LoadoutRecap_C.Init
	 */
	struct ULoadoutRecap_C_Init_Params
	{	};

	/**
	 * Function LoadoutRecap.LoadoutRecap_C.BndEvt__LoadoutRecap_RigSlotButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct ULoadoutRecap_C_BndEvt__LoadoutRecap_RigSlotButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LoadoutRecap.LoadoutRecap_C.BndEvt__LoadoutRecap_PerkSlotsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct ULoadoutRecap_C_BndEvt__LoadoutRecap_PerkSlotsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LoadoutRecap.LoadoutRecap_C.BndEvt__LoadoutRecap_CoreUpgradesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct ULoadoutRecap_C_BndEvt__LoadoutRecap_CoreUpgradesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LoadoutRecap.LoadoutRecap_C.ExecuteUbergraph_LoadoutRecap
	 */
	struct ULoadoutRecap_C_ExecuteUbergraph_LoadoutRecap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoadoutRecap.LoadoutRecap_C.OnCoreUpgradesButtonClicked__DelegateSignature
	 */
	struct ULoadoutRecap_C_OnCoreUpgradesButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LoadoutRecap.LoadoutRecap_C.OnPerkSlotsButtonClicked__DelegateSignature
	 */
	struct ULoadoutRecap_C_OnPerkSlotsButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LoadoutRecap.LoadoutRecap_C.OnRigButtonClicked__DelegateSignature
	 */
	struct ULoadoutRecap_C_OnRigButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
