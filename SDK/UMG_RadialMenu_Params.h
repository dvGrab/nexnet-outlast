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
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.SetCenterCoordinates
	 */
	struct UUMG_RadialMenu_C_SetCenterCoordinates_Params
	{
	public:
		struct FCoreUObject_FVector2D                              CenterCoordinates;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterialColors
	 */
	struct UUMG_RadialMenu_C_UpdateMaterialColors_Params
	{
	public:
		struct FLinearColor                                        CursorColor;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        HighlightColor;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        TintColor;                                               // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterialVisuals
	 */
	struct UUMG_RadialMenu_C_UpdateMaterialVisuals_Params
	{	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.GetCustomInput
	 */
	struct UUMG_RadialMenu_C_GetCustomInput_Params
	{
	public:
		struct FCoreUObject_FVector2D                              Input;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8495[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.SetCustomInput
	 */
	struct UUMG_RadialMenu_C_SetCustomInput_Params
	{
	public:
		struct FCoreUObject_FVector2D                              CustomInput;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithCustomInput
	 */
	struct UUMG_RadialMenu_C_UpdateDirectionWithCustomInput_Params
	{	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildIndexFromRadialMenu
	 */
	struct UUMG_RadialMenu_C_RemoveChildIndexFromRadialMenu_Params
	{
	public:
		int32_t                                                    IndexToRemove;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildWidgetFromRadialMenu
	 */
	struct UUMG_RadialMenu_C_RemoveChildWidgetFromRadialMenu_Params
	{
	public:
		class UUserWidget*                                         ItemToFind;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.DebugIndex
	 */
	struct UUMG_RadialMenu_C_DebugIndex_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.FixInputRotation
	 */
	struct UUMG_RadialMenu_C_FixInputRotation_Params
	{
	public:
		struct FCoreUObject_FVector2D                              Input;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCoreUObject_FVector2D                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.FixMainRotation
	 */
	struct UUMG_RadialMenu_C_FixMainRotation_Params
	{	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.AutoRegisterToInput
	 */
	struct UUMG_RadialMenu_C_AutoRegisterToInput_Params
	{	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateInput
	 */
	struct UUMG_RadialMenu_C_UpdateInput_Params
	{	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.RegisterPlayerInput
	 */
	struct UUMG_RadialMenu_C_RegisterPlayerInput_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KSGN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithJoystick
	 */
	struct UUMG_RadialMenu_C_UpdateDirectionWithJoystick_Params
	{	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.GetCurrentIndex
	 */
	struct UUMG_RadialMenu_C_GetCurrentIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.GetChild
	 */
	struct UUMG_RadialMenu_C_GetChild_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2BOY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         Output;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.GetRadialMaterial
	 */
	struct UUMG_RadialMenu_C_GetRadialMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            RadialMaterial;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.SetIndex
	 */
	struct UUMG_RadialMenu_C_SetIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UEL9[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateAllChildrenPositions
	 */
	struct UUMG_RadialMenu_C_UpdateAllChildrenPositions_Params
	{	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateChildPosition
	 */
	struct UUMG_RadialMenu_C_UpdateChildPosition_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.ClearChildren
	 */
	struct UUMG_RadialMenu_C_ClearChildren_Params
	{	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.GetSelectedWidget
	 */
	struct UUMG_RadialMenu_C_GetSelectedWidget_Params
	{
	public:
		class UUserWidget*                                         Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.AddChildToRadialMenu
	 */
	struct UUMG_RadialMenu_C_AddChildToRadialMenu_Params
	{
	public:
		class UUserWidget*                                         Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LBXP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithMouseCursor
	 */
	struct UUMG_RadialMenu_C_UpdateDirectionWithMouseCursor_Params
	{	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.GetSectionDegreeSize
	 */
	struct UUMG_RadialMenu_C_GetSectionDegreeSize_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.SetInputDirection
	 */
	struct UUMG_RadialMenu_C_SetInputDirection_Params
	{
	public:
		struct FCoreUObject_FVector2D                              Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.Construct
	 */
	struct UUMG_RadialMenu_C_Construct_Params
	{	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateSegments
	 */
	struct UUMG_RadialMenu_C_UpdateSegments_Params
	{
	public:
		int32_t                                                    Segments;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.InDeadZone
	 */
	struct UUMG_RadialMenu_C_InDeadZone_Params
	{
	public:
		bool                                                       InDeadZone;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterials
	 */
	struct UUMG_RadialMenu_C_UpdateMaterials_Params
	{	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.PreConstruct
	 */
	struct UUMG_RadialMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.ExecuteUbergraph_UMG_RadialMenu
	 */
	struct UUMG_RadialMenu_C_ExecuteUbergraph_UMG_RadialMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.SelectionSubmitted__DelegateSignature
	 */
	struct UUMG_RadialMenu_C_SelectionSubmitted__DelegateSignature_Params
	{
	public:
		int32_t                                                    SelectionIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.ExitedDeadzone__DelegateSignature
	 */
	struct UUMG_RadialMenu_C_ExitedDeadzone__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.EnteredDeadzone__DelegateSignature
	 */
	struct UUMG_RadialMenu_C_EnteredDeadzone__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_RadialMenu.UMG_RadialMenu_C.SelectionChanged__DelegateSignature
	 */
	struct UUMG_RadialMenu_C_SelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewSelection;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OldSelection;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
