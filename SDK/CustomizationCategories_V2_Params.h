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
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.UpdateNewStatus
	 */
	struct UCustomizationCategories_V2_C_UpdateNewStatus_Params
	{
	public:
		ECustomizationMenuCategory                                 Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9RL7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.OnCategoryCycled
	 */
	struct UCustomizationCategories_V2_C_OnCategoryCycled_Params
	{
	public:
		class UCustomizationCategoryWidget_V2_C*                   CategoryButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.OnCategoryClicked
	 */
	struct UCustomizationCategories_V2_C_OnCategoryClicked_Params
	{
	public:
		class UCustomizationCategoryWidget_V2_C*                   buttonClicked;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.GetButtonFromCategory
	 */
	struct UCustomizationCategories_V2_C_GetButtonFromCategory_Params
	{
	public:
		ECustomizationMenuCategory                                 Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_55MB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomizationCategoryWidget_V2_C*                   Button;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.GetCurrentCategoryList
	 */
	struct UCustomizationCategories_V2_C_GetCurrentCategoryList_Params
	{
	public:
		TArray<ECustomizationMenuCategory>                         CategoryList;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.Init
	 */
	struct UCustomizationCategories_V2_C_Init_Params
	{
	public:
		bool                                                       isTutorial;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMetaNPCType                                               ShopType;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isCustomizingFemale;                                     // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.SelectCategory
	 */
	struct UCustomizationCategories_V2_C_SelectCategory_Params
	{
	public:
		class UCustomizationCategoryWidget_V2_C*                   buttonClicked;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.CreateCategoryButtons
	 */
	struct UCustomizationCategories_V2_C_CreateCategoryButtons_Params
	{
	public:
		bool                                                       isTutorial;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QPEF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.Construct
	 */
	struct UCustomizationCategories_V2_C_Construct_Params
	{	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.PreConstruct
	 */
	struct UCustomizationCategories_V2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.BndEvt__CustomizationCategories_V2_CycleLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCustomizationCategories_V2_C_BndEvt__CustomizationCategories_V2_CycleLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.BndEvt__CustomizationCategories_V2_CycleRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCustomizationCategories_V2_C_BndEvt__CustomizationCategories_V2_CycleRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.DisplayCategories
	 */
	struct UCustomizationCategories_V2_C_DisplayCategories_Params
	{	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.ExecuteUbergraph_CustomizationCategories_V2
	 */
	struct UCustomizationCategories_V2_C_ExecuteUbergraph_CustomizationCategories_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationCategories_V2.CustomizationCategories_V2_C.EventOnCategoryClicked__DelegateSignature
	 */
	struct UCustomizationCategories_V2_C_EventOnCategoryClicked__DelegateSignature_Params
	{
	public:
		ECustomizationMenuCategory                                 custoCategory;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
