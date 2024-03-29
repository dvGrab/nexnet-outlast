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
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.GetIconImageFromClass
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_GetIconImageFromClass_Params
	{
	public:
		class UClass*                                              InItemClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Return_Value;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.GetIconImageFromCategory
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_GetIconImageFromCategory_Params
	{
	public:
		EItemCategory                                              InItemCategory;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C0A3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Return_Value;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.HasAnyItems
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_HasAnyItems_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FS2Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ShowKeybindText
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_ShowKeybindText_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.HideKeybindText
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_HideKeybindText_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.SetKeybindText
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_SetKeybindText_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ResetFadeOutAnimationState
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_ResetFadeOutAnimationState_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlayFadeOutAnim
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_PlayFadeOutAnim_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IFSD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ShowDivider
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_ShowDivider_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.HideDivider
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_HideDivider_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Set Icon Image
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_Set_Icon_Image_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlaySelectFailedAnim
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_PlaySelectFailedAnim_Params
	{
	public:
		bool                                                       bPlaySound;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.HideScrollHint
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_HideScrollHint_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ShowScrollHint
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_ShowScrollHint_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlayUnfocusAnim
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_PlayUnfocusAnim_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlayFocusAnim
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_PlayFocusAnim_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Initialize
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_Initialize_Params
	{
	public:
		struct FItemSelectionGroup                                 ItemGroupSetting;                                        // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bLastGroup;                                              // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.OnFocus
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_OnFocus_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.OnUnfocus
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_OnUnfocus_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Tick
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Construct
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_Construct_Params
	{	};

	/**
	 * Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ExecuteUbergraph_W_ItemSelection_ItemGroup_V2
	 */
	struct UW_ItemSelection_ItemGroup_V2_C_ExecuteUbergraph_W_ItemSelection_ItemGroup_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
