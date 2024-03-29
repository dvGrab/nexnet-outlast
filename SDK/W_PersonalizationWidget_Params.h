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
	 * Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAndDisableAllIncompatibleHeads
	 */
	struct UW_PersonalizationWidget_C_DeselectAndDisableAllIncompatibleHeads_Params
	{	};

	/**
	 * Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAndDisableAllIncompatibleBodies
	 */
	struct UW_PersonalizationWidget_C_DeselectAndDisableAllIncompatibleBodies_Params
	{	};

	/**
	 * Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAllHeads
	 */
	struct UW_PersonalizationWidget_C_DeselectAllHeads_Params
	{
	public:
		class UW_PersonalizationItem_C*                            Except;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAllBodys
	 */
	struct UW_PersonalizationWidget_C_DeselectAllBodys_Params
	{
	public:
		class UW_PersonalizationItem_C*                            Except;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationWidget.W_PersonalizationWidget_C.PreConstruct
	 */
	struct UW_PersonalizationWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PersonalizationWidget.W_PersonalizationWidget_C.HeadEventClicked
	 */
	struct UW_PersonalizationWidget_C_HeadEventClicked_Params
	{
	public:
		class UW_PersonalizationItem_C*                            PersonalizationItem;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationWidget.W_PersonalizationWidget_C.BodyEventClicked
	 */
	struct UW_PersonalizationWidget_C_BodyEventClicked_Params
	{
	public:
		class UW_PersonalizationItem_C*                            PersonalizationItem;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationWidget.W_PersonalizationWidget_C.Apply Personalization
	 */
	struct UW_PersonalizationWidget_C_Apply_Personalization_Params
	{
	public:
		class UW_PersonalizationCategory_C*                        PersonalizationCategory;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationWidget.W_PersonalizationWidget_C.Cancel Personalization
	 */
	struct UW_PersonalizationWidget_C_Cancel_Personalization_Params
	{
	public:
		class UW_PersonalizationCategory_C*                        PersonalizationCategory;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationWidget.W_PersonalizationWidget_C.HeadCategoryClicked
	 */
	struct UW_PersonalizationWidget_C_HeadCategoryClicked_Params
	{
	public:
		class UW_PersonalizationCategory_C*                        PersonalizationCategory;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationWidget.W_PersonalizationWidget_C.BodyCategoryClicked
	 */
	struct UW_PersonalizationWidget_C_BodyCategoryClicked_Params
	{
	public:
		class UW_PersonalizationCategory_C*                        PersonalizationCategory;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationWidget.W_PersonalizationWidget_C.Tick
	 */
	struct UW_PersonalizationWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationWidget.W_PersonalizationWidget_C.ExecuteUbergraph_W_PersonalizationWidget
	 */
	struct UW_PersonalizationWidget_C_ExecuteUbergraph_W_PersonalizationWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4U4V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
