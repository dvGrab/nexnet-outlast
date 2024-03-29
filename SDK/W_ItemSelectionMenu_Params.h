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
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ResetAnimationFadeOutState
	 */
	struct UW_ItemSelectionMenu_C_ResetAnimationFadeOutState_Params
	{	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FindItemFromColumnIndex
	 */
	struct UW_ItemSelectionMenu_C_FindItemFromColumnIndex_Params
	{
	public:
		class UW_ItemSelection_ItemList_C*                         Return_Value;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FadeOutSelectedColumn
	 */
	struct UW_ItemSelectionMenu_C_FadeOutSelectedColumn_Params
	{	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CanQueueSelection
	 */
	struct UW_ItemSelectionMenu_C_CanQueueSelection_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2QX0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.QueuedExecuteSelection
	 */
	struct UW_ItemSelectionMenu_C_QueuedExecuteSelection_Params
	{	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FindColumnIndexFromItem
	 */
	struct UW_ItemSelectionMenu_C_FindColumnIndexFromItem_Params
	{
	public:
		class ABaseItem*                                           InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Return_Value;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.IsOpen
	 */
	struct UW_ItemSelectionMenu_C_IsOpen_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.HideMenu
	 */
	struct UW_ItemSelectionMenu_C_HideMenu_Params
	{	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.RemoveItemFromMenu
	 */
	struct UW_ItemSelectionMenu_C_RemoveItemFromMenu_Params
	{
	public:
		class ABaseItem*                                           ItemToRemove;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    List_Index;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FYQT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.UpdateDebugInfo
	 */
	struct UW_ItemSelectionMenu_C_UpdateDebugInfo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2D83[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CanNavigate
	 */
	struct UW_ItemSelectionMenu_C_CanNavigate_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENS8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.SetMouseWheelDelta
	 */
	struct UW_ItemSelectionMenu_C_SetMouseWheelDelta_Params
	{
	public:
		float                                                      NewMouseWheelDelta;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ExecuteSelection
	 */
	struct UW_ItemSelectionMenu_C_ExecuteSelection_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CloseMenu
	 */
	struct UW_ItemSelectionMenu_C_CloseMenu_Params
	{	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OpenMenu
	 */
	struct UW_ItemSelectionMenu_C_OpenMenu_Params
	{
	public:
		struct FKey                                                TriggerKey;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnWeaponMagCheck_Event_1
	 */
	struct UW_ItemSelectionMenu_C_OnWeaponMagCheck_Event_1_Params
	{
	public:
		class ABaseMagazineWeapon*                                 MagazineWeapon;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnInitialized
	 */
	struct UW_ItemSelectionMenu_C_OnInitialized_Params
	{	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnFadeOutFinished
	 */
	struct UW_ItemSelectionMenu_C_OnFadeOutFinished_Params
	{	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.Tick
	 */
	struct UW_ItemSelectionMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.PreConstruct
	 */
	struct UW_ItemSelectionMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.Initialize
	 */
	struct UW_ItemSelectionMenu_C_Initialize_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G5MD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FItemSelectionGroup>                         InItemSelectionGroups;                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CustomEvent_1
	 */
	struct UW_ItemSelectionMenu_C_CustomEvent_1_Params
	{	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ExecuteUbergraph_W_ItemSelectionMenu
	 */
	struct UW_ItemSelectionMenu_C_ExecuteUbergraph_W_ItemSelectionMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnMenuOpened__DelegateSignature
	 */
	struct UW_ItemSelectionMenu_C_OnMenuOpened__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
