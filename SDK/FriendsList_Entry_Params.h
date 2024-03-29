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
	 * Function FriendsList_Entry.FriendsList_Entry_C.GetColorAndOpacity_1
	 */
	struct UFriendsList_Entry_C_GetColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function FriendsList_Entry.FriendsList_Entry_C.OnFailure_1CE6F80B4BD85FF7DCF8B89490FF4D7A
	 */
	struct UFriendsList_Entry_C_OnFailure_1CE6F80B4BD85FF7DCF8B89490FF4D7A_Params
	{
	public:
		TArray<struct FBlueprintSessionResult>                     SessionInfo;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function FriendsList_Entry.FriendsList_Entry_C.OnSuccess_1CE6F80B4BD85FF7DCF8B89490FF4D7A
	 */
	struct UFriendsList_Entry_C_OnSuccess_1CE6F80B4BD85FF7DCF8B89490FF4D7A_Params
	{
	public:
		TArray<struct FBlueprintSessionResult>                     SessionInfo;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function FriendsList_Entry.FriendsList_Entry_C.OnFailure_FCAA6E28485271A328483F824CE7E440
	 */
	struct UFriendsList_Entry_C_OnFailure_FCAA6E28485271A328483F824CE7E440_Params
	{	};

	/**
	 * Function FriendsList_Entry.FriendsList_Entry_C.OnSuccess_FCAA6E28485271A328483F824CE7E440
	 */
	struct UFriendsList_Entry_C_OnSuccess_FCAA6E28485271A328483F824CE7E440_Params
	{	};

	/**
	 * Function FriendsList_Entry.FriendsList_Entry_C.Construct
	 */
	struct UFriendsList_Entry_C_Construct_Params
	{	};

	/**
	 * Function FriendsList_Entry.FriendsList_Entry_C.Tick
	 */
	struct UFriendsList_Entry_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FriendsList_Entry.FriendsList_Entry_C.RefreshFriend
	 */
	struct UFriendsList_Entry_C_RefreshFriend_Params
	{
	public:
		struct FFriend                                             Friend;                                                  // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function FriendsList_Entry.FriendsList_Entry_C.BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 */
	struct UFriendsList_Entry_C_BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FriendsList_Entry.FriendsList_Entry_C.ExecuteUbergraph_FriendsList_Entry
	 */
	struct UFriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
