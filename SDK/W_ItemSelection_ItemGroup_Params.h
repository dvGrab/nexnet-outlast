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
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.SetKeybindText
	 */
	struct UW_ItemSelection_ItemGroup_C_SetKeybindText_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ResetFadeOutAnimationState
	 */
	struct UW_ItemSelection_ItemGroup_C_ResetFadeOutAnimationState_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlayFadeOutAnim
	 */
	struct UW_ItemSelection_ItemGroup_C_PlayFadeOutAnim_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FJR6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ShowDivider
	 */
	struct UW_ItemSelection_ItemGroup_C_ShowDivider_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.HideDivider
	 */
	struct UW_ItemSelection_ItemGroup_C_HideDivider_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.UpdateIconImage
	 */
	struct UW_ItemSelection_ItemGroup_C_UpdateIconImage_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlaySelectFailedAnim
	 */
	struct UW_ItemSelection_ItemGroup_C_PlaySelectFailedAnim_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.HasAnyItems
	 */
	struct UW_ItemSelection_ItemGroup_C_HasAnyItems_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.HideHint
	 */
	struct UW_ItemSelection_ItemGroup_C_HideHint_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ShowHint
	 */
	struct UW_ItemSelection_ItemGroup_C_ShowHint_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlayUnfocusAnim
	 */
	struct UW_ItemSelection_ItemGroup_C_PlayUnfocusAnim_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlayFocusAnim
	 */
	struct UW_ItemSelection_ItemGroup_C_PlayFocusAnim_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.EquipItem
	 */
	struct UW_ItemSelection_ItemGroup_C_EquipItem_Params
	{
	public:
		bool                                                       ItemEquipped;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.Initialize
	 */
	struct UW_ItemSelection_ItemGroup_C_Initialize_Params
	{
	public:
		class ABaseItem*                                           InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FItemSelectionGroup                                 ItemGroupSetting;                                        // 0x0008(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bLastGroup;                                              // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.Construct
	 */
	struct UW_ItemSelection_ItemGroup_C_Construct_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnFocus
	 */
	struct UW_ItemSelection_ItemGroup_C_OnFocus_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnUnfocus
	 */
	struct UW_ItemSelection_ItemGroup_C_OnUnfocus_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.Tick
	 */
	struct UW_ItemSelection_ItemGroup_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnInitialized
	 */
	struct UW_ItemSelection_ItemGroup_C_OnInitialized_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.CustomEvent_1
	 */
	struct UW_ItemSelection_ItemGroup_C_CustomEvent_1_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.CustomEvent_2
	 */
	struct UW_ItemSelection_ItemGroup_C_CustomEvent_2_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ExecuteUbergraph_W_ItemSelection_ItemGroup
	 */
	struct UW_ItemSelection_ItemGroup_C_ExecuteUbergraph_W_ItemSelection_ItemGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnFadeOutFinished__DelegateSignature
	 */
	struct UW_ItemSelection_ItemGroup_C_OnFadeOutFinished__DelegateSignature_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnFadeOutSelectedFinished__DelegateSignature
	 */
	struct UW_ItemSelection_ItemGroup_C_OnFadeOutSelectedFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
