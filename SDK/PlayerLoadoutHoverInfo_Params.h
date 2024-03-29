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
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.IsTierLocked
	 */
	struct UPlayerLoadoutHoverInfo_C_IsTierLocked_Params
	{
	public:
		bool                                                       bIsTierLocked;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupActionButton2
	 */
	struct UPlayerLoadoutHoverInfo_C_SetupActionButton2_Params
	{
	public:
		class FString                                              ActionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                actionText;                                              // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bHold;                                                   // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupActionButton
	 */
	struct UPlayerLoadoutHoverInfo_C_SetupActionButton_Params
	{
	public:
		class FString                                              ActionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                actionText;                                              // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bHold;                                                   // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupError
	 */
	struct UPlayerLoadoutHoverInfo_C_SetupError_Params
	{
	public:
		class FText                                                Error;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupCoreUpgrade
	 */
	struct UPlayerLoadoutHoverInfo_C_SetupCoreUpgrade_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    tier;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupPerk
	 */
	struct UPlayerLoadoutHoverInfo_C_SetupPerk_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SlotIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DS2T[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupRigUpgrade
	 */
	struct UPlayerLoadoutHoverInfo_C_SetupRigUpgrade_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SlotIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2HPE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupRig
	 */
	struct UPlayerLoadoutHoverInfo_C_SetupRig_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.OnLoadoutItemUnhovered
	 */
	struct UPlayerLoadoutHoverInfo_C_OnLoadoutItemUnhovered_Params
	{	};

	/**
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.OnLoadoutItemHovered
	 */
	struct UPlayerLoadoutHoverInfo_C_OnLoadoutItemHovered_Params
	{
	public:
		ELoadoutElementType                                        loadoutItemType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MFGJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ItemId;                                                  // 0x0004(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    tier;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.Refresh
	 */
	struct UPlayerLoadoutHoverInfo_C_Refresh_Params
	{	};

	/**
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.Construct
	 */
	struct UPlayerLoadoutHoverInfo_C_Construct_Params
	{	};

	/**
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.Destruct
	 */
	struct UPlayerLoadoutHoverInfo_C_Destruct_Params
	{	};

	/**
	 * Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.ExecuteUbergraph_PlayerLoadoutHoverInfo
	 */
	struct UPlayerLoadoutHoverInfo_C_ExecuteUbergraph_PlayerLoadoutHoverInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K2KZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
