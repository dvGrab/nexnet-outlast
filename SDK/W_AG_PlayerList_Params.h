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
	 * Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Name_Text_1
	 */
	struct UW_AG_PlayerList_C_Get_Name_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_AG_PlayerList.W_AG_PlayerList_C.Get_TextBlock_0_Text_1
	 */
	struct UW_AG_PlayerList_C_Get_TextBlock_0_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Score_Text_1
	 */
	struct UW_AG_PlayerList_C_Get_Score_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Damage_Text_1
	 */
	struct UW_AG_PlayerList_C_Get_Damage_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_AG_PlayerList.W_AG_PlayerList_C.GetDeathsText
	 */
	struct UW_AG_PlayerList_C_GetDeathsText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Arrests_Text_1
	 */
	struct UW_AG_PlayerList_C_Get_Arrests_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Kills_Text_1
	 */
	struct UW_AG_PlayerList_C_Get_Kills_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_AG_PlayerList.W_AG_PlayerList_C.GetBrush_1
	 */
	struct UW_AG_PlayerList_C_GetBrush_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_AG_PlayerList.W_AG_PlayerList_C.Tick
	 */
	struct UW_AG_PlayerList_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AG_PlayerList.W_AG_PlayerList_C.BndEvt__W_AG_PlayerList_Btn_Ban_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_AG_PlayerList_C_BndEvt__W_AG_PlayerList_Btn_Ban_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AG_PlayerList.W_AG_PlayerList_C.BndEvt__W_AG_PlayerList_Btn_Kick_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UW_AG_PlayerList_C_BndEvt__W_AG_PlayerList_Btn_Kick_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AG_PlayerList.W_AG_PlayerList_C.ExecuteUbergraph_W_AG_PlayerList
	 */
	struct UW_AG_PlayerList_C_ExecuteUbergraph_W_AG_PlayerList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P0KJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
