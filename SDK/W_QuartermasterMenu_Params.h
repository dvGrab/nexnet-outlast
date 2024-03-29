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
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAllCategories
	 */
	struct UW_QuartermasterMenu_C_UnhoverAllCategories_Params
	{	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAllCategoriesExcept
	 */
	struct UW_QuartermasterMenu_C_UnhoverAllCategoriesExcept_Params
	{
	public:
		class UW_AttachmentCategory_C*                             AttachmentCategoryWIdget;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_SkinCategory_C*                                   SkinCategoryWidget;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.CollapseAllCategories
	 */
	struct UW_QuartermasterMenu_C_CollapseAllCategories_Params
	{	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.CollapseAllCategoriesExcept
	 */
	struct UW_QuartermasterMenu_C_CollapseAllCategoriesExcept_Params
	{
	public:
		class UW_AttachmentCategory_C*                             AttachmentCategoryWIdget;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_SkinCategory_C*                                   SkinCategoryWidget;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnGunCleaned
	 */
	struct UW_QuartermasterMenu_C_OnGunCleaned_Params
	{	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.CanCleanGun
	 */
	struct UW_QuartermasterMenu_C_CanCleanGun_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.Get_CleanGun_Visibility
	 */
	struct UW_QuartermasterMenu_C_Get_CleanGun_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.AttemptCreateSkinCategory
	 */
	struct UW_QuartermasterMenu_C_AttemptCreateSkinCategory_Params
	{
	public:
		TArray<struct FWeaponData>                                 WeaponDataArray;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Return_Value;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0NJN[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.ScrollIntoView
	 */
	struct UW_QuartermasterMenu_C_ScrollIntoView_Params
	{
	public:
		class UWidget*                                             WidgetToFind;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnKeyUp
	 */
	struct UW_QuartermasterMenu_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.AnyAttachmentCategoryWidgetHovered
	 */
	struct UW_QuartermasterMenu_C_AnyAttachmentCategoryWidgetHovered_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.GetCurrentlyFocusedWidget
	 */
	struct UW_QuartermasterMenu_C_GetCurrentlyFocusedWidget_Params
	{
	public:
		class UWidget*                                             Return_Value;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.PopulateAttachmentCategory
	 */
	struct UW_QuartermasterMenu_C_PopulateAttachmentCategory_Params
	{
	public:
		bool                                                       bAllowAttachmentCategory;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UTJA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAttachmentCategory>                         AttachmentCategories;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FAttachmentCategory                                 AttachmentCategory;                                      // 0x0018(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAll
	 */
	struct UW_QuartermasterMenu_C_UnhoverAll_Params
	{	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.FocusOnWidget
	 */
	struct UW_QuartermasterMenu_C_FocusOnWidget_Params
	{
	public:
		class UWidget*                                             InWidgetToFocus;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.Escape
	 */
	struct UW_QuartermasterMenu_C_Escape_Params
	{	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnselectAttachmentCategory
	 */
	struct UW_QuartermasterMenu_C_UnselectAttachmentCategory_Params
	{	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.SelectAttachmentCategory
	 */
	struct UW_QuartermasterMenu_C_SelectAttachmentCategory_Params
	{	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAttachmentCategory
	 */
	struct UW_QuartermasterMenu_C_UnhoverAttachmentCategory_Params
	{	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.HoverAttachmentCategory
	 */
	struct UW_QuartermasterMenu_C_HoverAttachmentCategory_Params
	{	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.PreviousRow
	 */
	struct UW_QuartermasterMenu_C_PreviousRow_Params
	{	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.NextRow
	 */
	struct UW_QuartermasterMenu_C_NextRow_Params
	{	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnKeyDown
	 */
	struct UW_QuartermasterMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.Exit
	 */
	struct UW_QuartermasterMenu_C_Exit_Params
	{	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.Enter
	 */
	struct UW_QuartermasterMenu_C_Enter_Params
	{
	public:
		class UClass*                                              LoadoutItemClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonClicked
	 */
	struct UW_QuartermasterMenu_C_OnAttachmentCategoryButtonClicked_Params
	{
	public:
		class UW_AttachmentCategory_C*                             AttachmentCategory;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentItemButtonClicked
	 */
	struct UW_QuartermasterMenu_C_OnAttachmentItemButtonClicked_Params
	{
	public:
		class UClass*                                              AttachmentClass;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonHovered
	 */
	struct UW_QuartermasterMenu_C_OnAttachmentCategoryButtonHovered_Params
	{
	public:
		class UW_AttachmentCategory_C*                             AttachmentCategory;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonUnhovered
	 */
	struct UW_QuartermasterMenu_C_OnAttachmentCategoryButtonUnhovered_Params
	{
	public:
		class UW_AttachmentCategory_C*                             AttachmentCategory;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonClicked
	 */
	struct UW_QuartermasterMenu_C_OnSkinCategoryButtonClicked_Params
	{
	public:
		class UW_SkinCategory_C*                                   SkinCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonHovered
	 */
	struct UW_QuartermasterMenu_C_OnSkinCategoryButtonHovered_Params
	{
	public:
		class UW_SkinCategory_C*                                   SkinCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonUnhovered
	 */
	struct UW_QuartermasterMenu_C_OnSkinCategoryButtonUnhovered_Params
	{
	public:
		class UW_SkinCategory_C*                                   SkinCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinItemButtonClicked
	 */
	struct UW_QuartermasterMenu_C_OnSkinItemButtonClicked_Params
	{
	public:
		class UClass*                                              SkinClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UW_QuartermasterMenu_C_BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_AttachmentCategory_C*                             AttachmentCategory;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 */
	struct UW_QuartermasterMenu_C_BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_AttachmentCategory_C*                             AttachmentCategory;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
	 */
	struct UW_QuartermasterMenu_C_BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_AttachmentCategory_C*                             AttachmentCategory;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_QuartermasterMenu.W_QuartermasterMenu_C.ExecuteUbergraph_W_QuartermasterMenu
	 */
	struct UW_QuartermasterMenu_C_ExecuteUbergraph_W_QuartermasterMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MXD5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
