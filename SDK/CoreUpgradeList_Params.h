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
	 * Function CoreUpgradeList.CoreUpgradeList_C.OnFocusReceived
	 */
	struct UCoreUpgradeList_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeReleasedEvent
	 */
	struct UCoreUpgradeList_C_OnUpgradeReleasedEvent_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradePressedEvent
	 */
	struct UCoreUpgradeList_C_OnUpgradePressedEvent_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeClickedEvent
	 */
	struct UCoreUpgradeList_C_OnUpgradeClickedEvent_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeUnhoveredEvent
	 */
	struct UCoreUpgradeList_C_OnUpgradeUnhoveredEvent_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeHoveredEvent
	 */
	struct UCoreUpgradeList_C_OnUpgradeHoveredEvent_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeList.CoreUpgradeList_C.Refresh
	 */
	struct UCoreUpgradeList_C_Refresh_Params
	{	};

	/**
	 * Function CoreUpgradeList.CoreUpgradeList_C.Init
	 */
	struct UCoreUpgradeList_C_Init_Params
	{
	public:
		bool                                                       bIsLoadout;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KQ7A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    tier;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeList.CoreUpgradeList_C.Setup
	 */
	struct UCoreUpgradeList_C_Setup_Params
	{	};

	/**
	 * Function CoreUpgradeList.CoreUpgradeList_C.PreConstruct
	 */
	struct UCoreUpgradeList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoreUpgradeList.CoreUpgradeList_C.ExecuteUbergraph_CoreUpgradeList
	 */
	struct UCoreUpgradeList_C_ExecuteUbergraph_CoreUpgradeList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeClicked__DelegateSignature
	 */
	struct UCoreUpgradeList_C_OnUpgradeClicked__DelegateSignature_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeUnhovered__DelegateSignature
	 */
	struct UCoreUpgradeList_C_OnUpgradeUnhovered__DelegateSignature_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeHovered__DelegateSignature
	 */
	struct UCoreUpgradeList_C_OnUpgradeHovered__DelegateSignature_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
