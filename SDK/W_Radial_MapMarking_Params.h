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
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.Update Position
	 */
	struct UW_Radial_MapMarking_C_Update_Position_Params
	{
	public:
		struct FCoreUObject_FVector2D                              Coordinates;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnMouseButtonUp
	 */
	struct UW_Radial_MapMarking_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnKeyDown
	 */
	struct UW_Radial_MapMarking_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnMouseButtonDown
	 */
	struct UW_Radial_MapMarking_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.Finished_344D667B4B5F9FD05121C694FD14ED92
	 */
	struct UW_Radial_MapMarking_C_Finished_344D667B4B5F9FD05121C694FD14ED92_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.PreConstruct
	 */
	struct UW_Radial_MapMarking_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.Tick
	 */
	struct UW_Radial_MapMarking_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.AddCategory
	 */
	struct UW_Radial_MapMarking_C_AddCategory_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                DisplayName;                                             // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          IconImage;                                               // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasSubCommands;                                          // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.PopulateSubmenu
	 */
	struct UW_Radial_MapMarking_C_PopulateSubmenu_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.Populate
	 */
	struct UW_Radial_MapMarking_C_Populate_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.Construct
	 */
	struct UW_Radial_MapMarking_C_Construct_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.GoBack
	 */
	struct UW_Radial_MapMarking_C_GoBack_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.Submit
	 */
	struct UW_Radial_MapMarking_C_Submit_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.SelectionMade
	 */
	struct UW_Radial_MapMarking_C_SelectionMade_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.CollapseRadial
	 */
	struct UW_Radial_MapMarking_C_CollapseRadial_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.CollapseSubMenu
	 */
	struct UW_Radial_MapMarking_C_CollapseSubMenu_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnPageViewUpdate_2
	 */
	struct UW_Radial_MapMarking_C_OnPageViewUpdate_2_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.OpenSubmenu
	 */
	struct UW_Radial_MapMarking_C_OpenSubmenu_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature
	 */
	struct UW_Radial_MapMarking_C_BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewSelection;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OldSelection;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature
	 */
	struct UW_Radial_MapMarking_C_BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewSelection;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OldSelection;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.ExecuteUbergraph_W_Radial_MapMarking
	 */
	struct UW_Radial_MapMarking_C_ExecuteUbergraph_W_Radial_MapMarking_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_44HM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnSubmenuCollapse__DelegateSignature
	 */
	struct UW_Radial_MapMarking_C_OnSubmenuCollapse__DelegateSignature_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnCollapsed__DelegateSignature
	 */
	struct UW_Radial_MapMarking_C_OnCollapsed__DelegateSignature_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.Cancel__DelegateSignature
	 */
	struct UW_Radial_MapMarking_C_Cancel__DelegateSignature_Params
	{	};

	/**
	 * Function W_Radial_MapMarking.W_Radial_MapMarking_C.SubmenuCommit__DelegateSignature
	 */
	struct UW_Radial_MapMarking_C_SubmenuCommit__DelegateSignature_Params
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                MarkerName;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
