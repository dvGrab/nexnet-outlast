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
	 * Function W_PersonalizationCategory.W_PersonalizationCategory_C.Transform Into Custom Button
	 */
	struct UW_PersonalizationCategory_C_Transform_Into_Custom_Button_Params
	{	};

	/**
	 * Function W_PersonalizationCategory.W_PersonalizationCategory_C.PreConstruct
	 */
	struct UW_PersonalizationCategory_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PersonalizationCategory.W_PersonalizationCategory_C.BndEvt__W_PersonalizationCategory_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UW_PersonalizationCategory_C_BndEvt__W_PersonalizationCategory_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationCategory.W_PersonalizationCategory_C.ExecuteUbergraph_W_PersonalizationCategory
	 */
	struct UW_PersonalizationCategory_C_ExecuteUbergraph_W_PersonalizationCategory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationCategory.W_PersonalizationCategory_C.OnClicked__DelegateSignature
	 */
	struct UW_PersonalizationCategory_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_PersonalizationCategory_C*                        PersonalizationCategory;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
