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
	 * Function LinearInventory.LinearInventory_C.SequenceEvent__ENTRYPOINTLinearInventory_1
	 */
	struct ULinearInventory_C_SequenceEvent__ENTRYPOINTLinearInventory_1_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.ShouldShow
	 */
	struct ULinearInventory_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LinearInventory.LinearInventory_C.OnASCooldownStateChanged
	 */
	struct ULinearInventory_C_OnASCooldownStateChanged_Params
	{
	public:
		class ARBActiveSkill*                                      ActiveSkill;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsInCooldown;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LinearInventory.LinearInventory_C.UpdateDarknessDetection
	 */
	struct ULinearInventory_C_UpdateDarknessDetection_Params
	{
	public:
		bool                                                       InDarkness;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HUOH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LinearInventory.LinearInventory_C.GetActiveSkillIndex
	 */
	struct ULinearInventory_C_GetActiveSkillIndex_Params
	{
	public:
		int32_t                                                    ActiveSkillIndex;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ActiveSkillFound;                                        // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LinearInventory.LinearInventory_C.GetActiveSkillInfo
	 */
	struct ULinearInventory_C_GetActiveSkillInfo_Params
	{
	public:
		bool                                                       ActiveSkillFound;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5DP2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUILinearInventoryItem                              ActiveSkillInfo;                                         // 0x0008(0x0080)  (Parm, OutParm)
	};

	/**
	 * Function LinearInventory.LinearInventory_C.RefreshPrompts
	 */
	struct ULinearInventory_C_RefreshPrompts_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.UpdateASCooldown
	 */
	struct ULinearInventory_C_UpdateASCooldown_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.UpdateRigSlot
	 */
	struct ULinearInventory_C_UpdateRigSlot_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.UpdateObjectiveItems
	 */
	struct ULinearInventory_C_UpdateObjectiveItems_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.RefreshInventory
	 */
	struct ULinearInventory_C_RefreshInventory_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.UpdateEquippedItem
	 */
	struct ULinearInventory_C_UpdateEquippedItem_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.UpdateText
	 */
	struct ULinearInventory_C_UpdateText_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.Construct
	 */
	struct ULinearInventory_C_Construct_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.Event_Refresh
	 */
	struct ULinearInventory_C_Event_Refresh_Params
	{
	public:
		EInventoryUpdateEventType                                  EventType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LinearInventory.LinearInventory_C.Event_RefreshActiveSkill
	 */
	struct ULinearInventory_C_Event_RefreshActiveSkill_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.OnMenuExit
	 */
	struct ULinearInventory_C_OnMenuExit_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.Event_RefreshPrompts
	 */
	struct ULinearInventory_C_Event_RefreshPrompts_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.Tick
	 */
	struct ULinearInventory_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LinearInventory.LinearInventory_C.PreConstruct
	 */
	struct ULinearInventory_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LinearInventory.LinearInventory_C.Event_OnWatchedPlayerChanged
	 */
	struct ULinearInventory_C_Event_OnWatchedPlayerChanged_Params
	{
	public:
		class ARBPlayer*                                           oldPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           NewPlayer;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LinearInventory.LinearInventory_C.OnSpeakerVisibilityChanged
	 */
	struct ULinearInventory_C_OnSpeakerVisibilityChanged_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LinearInventory.LinearInventory_C.OnInventorySizeChanged
	 */
	struct ULinearInventory_C_OnInventorySizeChanged_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.Event_RefreshDarknessIndicator
	 */
	struct ULinearInventory_C_Event_RefreshDarknessIndicator_Params
	{
	public:
		bool                                                       newDarknessState;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LinearInventory.LinearInventory_C.StartFadeOutTimer
	 */
	struct ULinearInventory_C_StartFadeOutTimer_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.Event_OnIsInCooldownChanged
	 */
	struct ULinearInventory_C_Event_OnIsInCooldownChanged_Params
	{
	public:
		class ARBActiveSkill*                                      ActiveSkill;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsInCooldown;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LinearInventory.LinearInventory_C.Event_Hide
	 */
	struct ULinearInventory_C_Event_Hide_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.Event_Show
	 */
	struct ULinearInventory_C_Event_Show_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.OnHide
	 */
	struct ULinearInventory_C_OnHide_Params
	{	};

	/**
	 * Function LinearInventory.LinearInventory_C.Event_OnHudModeChanged
	 */
	struct ULinearInventory_C_Event_OnHudModeChanged_Params
	{
	public:
		EHudMode                                                   newHudMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LinearInventory.LinearInventory_C.Event_RefreshASRestriction
	 */
	struct ULinearInventory_C_Event_RefreshASRestriction_Params
	{
	public:
		bool                                                       isRestricted;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LinearInventory.LinearInventory_C.ExecuteUbergraph_LinearInventory
	 */
	struct ULinearInventory_C_ExecuteUbergraph_LinearInventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4SN7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
