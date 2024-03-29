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
	 * Function W_ModCard.W_ModCard_C.SetButtonSubcribedState
	 */
	struct UW_ModCard_C_SetButtonSubcribedState_Params
	{
	public:
		bool                                                       Subscribed;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ModCard.W_ModCard_C.OnThumbnailLoaded
	 */
	struct UW_ModCard_C_OnThumbnailLoaded_Params
	{
	public:
		class UTexture2DDynamic*                                   Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModCard.W_ModCard_C.BndEvt__W_ModCard_CheckBox_129_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UW_ModCard_C_BndEvt__W_ModCard_CheckBox_129_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ModCard.W_ModCard_C.OnModSet
	 */
	struct UW_ModCard_C_OnModSet_Params
	{	};

	/**
	 * Function W_ModCard.W_ModCard_C.OnModStateUpdated
	 */
	struct UW_ModCard_C_OnModStateUpdated_Params
	{	};

	/**
	 * Function W_ModCard.W_ModCard_C.OnLoadingFinished
	 */
	struct UW_ModCard_C_OnLoadingFinished_Params
	{
	public:
		bool                                                       bSubscribed;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ModCard.W_ModCard_C.BndEvt__W_ModCard_btn_Subscription_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UW_ModCard_C_BndEvt__W_ModCard_btn_Subscription_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModCard.W_ModCard_C.Construct
	 */
	struct UW_ModCard_C_Construct_Params
	{	};

	/**
	 * Function W_ModCard.W_ModCard_C.OnLoadingStarted
	 */
	struct UW_ModCard_C_OnLoadingStarted_Params
	{	};

	/**
	 * Function W_ModCard.W_ModCard_C.BndEvt__W_ModCard_btn_Card_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_ModCard_C_BndEvt__W_ModCard_btn_Card_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ModCard.W_ModCard_C.ExecuteUbergraph_W_ModCard
	 */
	struct UW_ModCard_C_ExecuteUbergraph_W_ModCard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LCX8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ModCard.W_ModCard_C.OnCardClicked__DelegateSignature
	 */
	struct UW_ModCard_C_OnCardClicked__DelegateSignature_Params
	{
	public:
		class UModData*                                            ModData;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
