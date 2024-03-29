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
	 * Function RBMenuButton.RBMenuButton_C.SetButtonIconDetails
	 */
	struct URBMenuButton_C_SetButtonIconDetails_Params
	{
	public:
		class UTexture2D*                                          ButtonIconTexture;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ButtonIconSize;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMargin                                             ButtonIconPadding;                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.UpdateButtonTextIcon
	 */
	struct URBMenuButton_C_UpdateButtonTextIcon_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.SetActionName
	 */
	struct URBMenuButton_C_SetActionName_Params
	{
	public:
		class FString                                              ActionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.UpdateButtonText
	 */
	struct URBMenuButton_C_UpdateButtonText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.UpdateInputImage
	 */
	struct URBMenuButton_C_UpdateInputImage_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.Construct
	 */
	struct URBMenuButton_C_Construct_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct URBMenuButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.Destruct
	 */
	struct URBMenuButton_C_Destruct_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.OninputChanged
	 */
	struct URBMenuButton_C_OninputChanged_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.PreConstruct
	 */
	struct URBMenuButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct URBMenuButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct URBMenuButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct URBMenuButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 */
	struct URBMenuButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.ExecuteUbergraph_RBMenuButton
	 */
	struct URBMenuButton_C_ExecuteUbergraph_RBMenuButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.OnHovered__DelegateSignature
	 */
	struct URBMenuButton_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.OnUnhovered__DelegateSignature
	 */
	struct URBMenuButton_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.OnReleased__DelegateSignature
	 */
	struct URBMenuButton_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.OnPressed__DelegateSignature
	 */
	struct URBMenuButton_C_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function RBMenuButton.RBMenuButton_C.OnClicked__DelegateSignature
	 */
	struct URBMenuButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
