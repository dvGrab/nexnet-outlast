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
	 * Function MenuTutorials.MenuTutorials_C.UpdateMaterialParams
	 */
	struct UMenuTutorials_C_UpdateMaterialParams_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.MenuTutorials_AutoGenFunc
	 */
	struct UMenuTutorials_C_MenuTutorials_AutoGenFunc_Params
	{	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.isShowingTutorial
	 */
	struct UMenuTutorials_C_isShowingTutorial_Params
	{
	public:
		bool                                                       isShowingTutorial;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.Refresh
	 */
	struct UMenuTutorials_C_Refresh_Params
	{
	public:
		class FText                                                TutorialText;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWidget*                                             popUpAnchorInfo;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMenuPlacement                                             popupPlacement;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P83S[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             focusAnchorInfo;                                         // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       showBorder;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.SetAnchorInfo
	 */
	struct UMenuTutorials_C_SetAnchorInfo_Params
	{
	public:
		class UWidget*                                             anchorInfo;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCanvasPanelSlot*                                    Slot;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.OnGetUserMenuContent_1
	 */
	struct UMenuTutorials_C_OnGetUserMenuContent_1_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.Initialize
	 */
	struct UMenuTutorials_C_Initialize_Params
	{
	public:
		class FText                                                TutorialText;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWidget*                                             popUpAnchorInfo;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMenuPlacement                                             popupPlacement;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3WBS[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             focusAnchorInfo;                                         // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       showBorder;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.Finished_5E4AE732454933DB073342A872BDF217
	 */
	struct UMenuTutorials_C_Finished_5E4AE732454933DB073342A872BDF217_Params
	{	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.Finished_FAE44480483B6DD5E75A0BA71A890721
	 */
	struct UMenuTutorials_C_Finished_FAE44480483B6DD5E75A0BA71A890721_Params
	{	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.Construct
	 */
	struct UMenuTutorials_C_Construct_Params
	{	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.Event_OnPush
	 */
	struct UMenuTutorials_C_Event_OnPush_Params
	{	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.OnMenuOpenChanged_Event_1
	 */
	struct UMenuTutorials_C_OnMenuOpenChanged_Event_1_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.Tick
	 */
	struct UMenuTutorials_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.HideMenu
	 */
	struct UMenuTutorials_C_HideMenu_Params
	{	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.OnMenuConfirm
	 */
	struct UMenuTutorials_C_OnMenuConfirm_Params
	{	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.Destruct
	 */
	struct UMenuTutorials_C_Destruct_Params
	{	};

	/**
	 * Function MenuTutorials.MenuTutorials_C.ExecuteUbergraph_MenuTutorials
	 */
	struct UMenuTutorials_C_ExecuteUbergraph_MenuTutorials_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
