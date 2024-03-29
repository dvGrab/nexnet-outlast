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
	 * Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.ConfirmSelection
	 */
	struct UW_ItemSelectionMenu_V2_C_ConfirmSelection_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G2P1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.SelectCategory
	 */
	struct UW_ItemSelectionMenu_V2_C_SelectCategory_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.Update Menu
	 */
	struct UW_ItemSelectionMenu_V2_C_Update_Menu_Params
	{
	public:
		TArray<struct FItemSelectionGroup>                         InItemGroups;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.CloseMenu
	 */
	struct UW_ItemSelectionMenu_V2_C_CloseMenu_Params
	{	};

	/**
	 * Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.OpenMenu
	 */
	struct UW_ItemSelectionMenu_V2_C_OpenMenu_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.Initialize
	 */
	struct UW_ItemSelectionMenu_V2_C_Initialize_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I7I9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FItemSelectionGroup>                         InItemSelectionGroups;                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.ExecuteUbergraph_W_ItemSelectionMenu_V2
	 */
	struct UW_ItemSelectionMenu_V2_C_ExecuteUbergraph_W_ItemSelectionMenu_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.OnMenuOpened__DelegateSignature
	 */
	struct UW_ItemSelectionMenu_V2_C_OnMenuOpened__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
