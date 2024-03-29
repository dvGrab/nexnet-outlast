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
	 * Function FriendsList.FriendsList_C.RemoveNonExistentFriendWidgets
	 */
	struct UFriendsList_C_RemoveNonExistentFriendWidgets_Params
	{	};

	/**
	 * Function FriendsList.FriendsList_C.DoesFriendExistAlready
	 */
	struct UFriendsList_C_DoesFriendExistAlready_Params
	{
	public:
		struct FFriend                                             TestFriend;                                              // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Exists;                                                  // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AQTC[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Idx;                                                     // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FriendsList.FriendsList_C.GetNoFriendsPlayingText
	 */
	struct UFriendsList_C_GetNoFriendsPlayingText_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FriendsList.FriendsList_C.Construct
	 */
	struct UFriendsList_C_Construct_Params
	{	};

	/**
	 * Function FriendsList.FriendsList_C.OnSuccess_Event_1
	 */
	struct UFriendsList_C_OnSuccess_Event_1_Params
	{	};

	/**
	 * Function FriendsList.FriendsList_C.OnFailure_Event_1
	 */
	struct UFriendsList_C_OnFailure_Event_1_Params
	{	};

	/**
	 * Function FriendsList.FriendsList_C.CustomEvent_1
	 */
	struct UFriendsList_C_CustomEvent_1_Params
	{	};

	/**
	 * Function FriendsList.FriendsList_C.PreConstruct
	 */
	struct UFriendsList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FriendsList.FriendsList_C.ExecuteUbergraph_FriendsList
	 */
	struct UFriendsList_C_ExecuteUbergraph_FriendsList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XJIA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
