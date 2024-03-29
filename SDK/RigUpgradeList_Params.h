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
	 * Function RigUpgradeList.RigUpgradeList_C.OnFocusReceived
	 */
	struct URigUpgradeList_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function RigUpgradeList.RigUpgradeList_C.OnUpgradeReleasedEvent
	 */
	struct URigUpgradeList_C_OnUpgradeReleasedEvent_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RigUpgradeList.RigUpgradeList_C.OnUpgradePressedEvent
	 */
	struct URigUpgradeList_C_OnUpgradePressedEvent_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RigUpgradeList.RigUpgradeList_C.OnUpgradeClickedEvent
	 */
	struct URigUpgradeList_C_OnUpgradeClickedEvent_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RigUpgradeList.RigUpgradeList_C.OnUpgradeUnhoveredEvent
	 */
	struct URigUpgradeList_C_OnUpgradeUnhoveredEvent_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RigUpgradeList.RigUpgradeList_C.OnUpgradeHoveredEvent
	 */
	struct URigUpgradeList_C_OnUpgradeHoveredEvent_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RigUpgradeList.RigUpgradeList_C.Refresh
	 */
	struct URigUpgradeList_C_Refresh_Params
	{	};

	/**
	 * Function RigUpgradeList.RigUpgradeList_C.Init
	 */
	struct URigUpgradeList_C_Init_Params
	{
	public:
		bool                                                       bIsLoadout;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EActiveSkillType                                           activeSkillUpgradeId;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C5RP[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RigUpgradeList.RigUpgradeList_C.Setup
	 */
	struct URigUpgradeList_C_Setup_Params
	{	};

	/**
	 * Function RigUpgradeList.RigUpgradeList_C.PreConstruct
	 */
	struct URigUpgradeList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RigUpgradeList.RigUpgradeList_C.ExecuteUbergraph_RigUpgradeList
	 */
	struct URigUpgradeList_C_ExecuteUbergraph_RigUpgradeList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RigUpgradeList.RigUpgradeList_C.OnUpgradeClicked__DelegateSignature
	 */
	struct URigUpgradeList_C_OnUpgradeClicked__DelegateSignature_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RigUpgradeList.RigUpgradeList_C.OnUpgradeUnhovered__DelegateSignature
	 */
	struct URigUpgradeList_C_OnUpgradeUnhovered__DelegateSignature_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RigUpgradeList.RigUpgradeList_C.OnUpgradeHovered__DelegateSignature
	 */
	struct URigUpgradeList_C_OnUpgradeHovered__DelegateSignature_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
