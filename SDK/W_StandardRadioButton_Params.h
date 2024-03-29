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
	 * Function W_StandardRadioButton.W_StandardRadioButton_C.Equals
	 */
	struct UW_StandardRadioButton_C_Equals_Params
	{
	public:
		unsigned char                                              UnknownData_8M5M[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2GBZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_StandardRadioButton.W_StandardRadioButton_C.GetTabControlIndex
	 */
	struct UW_StandardRadioButton_C_GetTabControlIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardRadioButton.W_StandardRadioButton_C.GetParentContainerSlow
	 */
	struct UW_StandardRadioButton_C_GetParentContainerSlow_Params
	{
	public:
		class UW_RadioContainer_C*                                 RadioContainer;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardRadioButton.W_StandardRadioButton_C.OnClicked_Derived
	 */
	struct UW_StandardRadioButton_C_OnClicked_Derived_Params
	{	};

	/**
	 * Function W_StandardRadioButton.W_StandardRadioButton_C.Construct
	 */
	struct UW_StandardRadioButton_C_Construct_Params
	{	};

	/**
	 * Function W_StandardRadioButton.W_StandardRadioButton_C.OnRadioSelected
	 */
	struct UW_StandardRadioButton_C_OnRadioSelected_Params
	{	};

	/**
	 * Function W_StandardRadioButton.W_StandardRadioButton_C.OnRadioDeselected
	 */
	struct UW_StandardRadioButton_C_OnRadioDeselected_Params
	{	};

	/**
	 * Function W_StandardRadioButton.W_StandardRadioButton_C.EventReconstruct
	 */
	struct UW_StandardRadioButton_C_EventReconstruct_Params
	{	};

	/**
	 * Function W_StandardRadioButton.W_StandardRadioButton_C.ExecuteUbergraph_W_StandardRadioButton
	 */
	struct UW_StandardRadioButton_C_ExecuteUbergraph_W_StandardRadioButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KI59[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
