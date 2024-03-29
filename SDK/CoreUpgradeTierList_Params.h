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
	 * Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnFocusReceived
	 */
	struct UCoreUpgradeTierList_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierClickedEvent
	 */
	struct UCoreUpgradeTierList_C_OnTierClickedEvent_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierUnhoveredEvent
	 */
	struct UCoreUpgradeTierList_C_OnTierUnhoveredEvent_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierHoveredEvent
	 */
	struct UCoreUpgradeTierList_C_OnTierHoveredEvent_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeTierList.CoreUpgradeTierList_C.Refresh
	 */
	struct UCoreUpgradeTierList_C_Refresh_Params
	{	};

	/**
	 * Function CoreUpgradeTierList.CoreUpgradeTierList_C.Init
	 */
	struct UCoreUpgradeTierList_C_Init_Params
	{
	public:
		bool                                                       bIsLoadout;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoreUpgradeTierList.CoreUpgradeTierList_C.Setup
	 */
	struct UCoreUpgradeTierList_C_Setup_Params
	{	};

	/**
	 * Function CoreUpgradeTierList.CoreUpgradeTierList_C.PreConstruct
	 */
	struct UCoreUpgradeTierList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoreUpgradeTierList.CoreUpgradeTierList_C.ExecuteUbergraph_CoreUpgradeTierList
	 */
	struct UCoreUpgradeTierList_C_ExecuteUbergraph_CoreUpgradeTierList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierClicked__DelegateSignature
	 */
	struct UCoreUpgradeTierList_C_OnTierClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierUnhovered__DelegateSignature
	 */
	struct UCoreUpgradeTierList_C_OnTierUnhovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierHovered__DelegateSignature
	 */
	struct UCoreUpgradeTierList_C_OnTierHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
