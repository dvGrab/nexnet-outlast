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
	 * Function W_VotePopUp.W_VotePopUp_C.GetVoteNo_Visibility
	 */
	struct UW_VotePopUp_C_GetVoteNo_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.CanVoteNo
	 */
	struct UW_VotePopUp_C_CanVoteNo_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E58R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.GetVoteNoKeyBinding
	 */
	struct UW_VotePopUp_C_GetVoteNoKeyBinding_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.GetVoteYesKeyBinding
	 */
	struct UW_VotePopUp_C_GetVoteYesKeyBinding_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.GetVoteQuestion
	 */
	struct UW_VotePopUp_C_GetVoteQuestion_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.GetText_5
	 */
	struct UW_VotePopUp_C_GetText_5_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.GetNoVotes
	 */
	struct UW_VotePopUp_C_GetNoVotes_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.GetYesVotes
	 */
	struct UW_VotePopUp_C_GetYesVotes_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.GetVoteVisibility
	 */
	struct UW_VotePopUp_C_GetVoteVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.GetbIsEnabled_1
	 */
	struct UW_VotePopUp_C_GetbIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.GetText_2
	 */
	struct UW_VotePopUp_C_GetText_2_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.VoteNo_Visibility_3
	 */
	struct UW_VotePopUp_C_VoteNo_Visibility_3_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.VoteNo_Visibility_2
	 */
	struct UW_VotePopUp_C_VoteNo_Visibility_2_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.VoteReason
	 */
	struct UW_VotePopUp_C_VoteReason_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.Construct
	 */
	struct UW_VotePopUp_C_Construct_Params
	{	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.StartVote
	 */
	struct UW_VotePopUp_C_StartVote_Params
	{
	public:
		class FText                                                VoteReason;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                VoteQuestion;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.VoteEnd
	 */
	struct UW_VotePopUp_C_VoteEnd_Params
	{	};

	/**
	 * Function W_VotePopUp.W_VotePopUp_C.ExecuteUbergraph_W_VotePopUp
	 */
	struct UW_VotePopUp_C_ExecuteUbergraph_W_VotePopUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QHQA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
