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
	 * Function W_RadialSelectionBase.W_RadialSelectionBase_C.UpdateIcon
	 */
	struct UW_RadialSelectionBase_C_UpdateIcon_Params
	{
	public:
		int32_t                                                    SelectionIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P7NH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         InBrush;                                                 // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_RadialSelectionBase.W_RadialSelectionBase_C.Select
	 */
	struct UW_RadialSelectionBase_C_Select_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_RadialSelectionBase.W_RadialSelectionBase_C.Previous
	 */
	struct UW_RadialSelectionBase_C_Previous_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_RadialSelectionBase.W_RadialSelectionBase_C.Next
	 */
	struct UW_RadialSelectionBase_C_Next_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_RadialSelectionBase.W_RadialSelectionBase_C.ExecuteRadial
	 */
	struct UW_RadialSelectionBase_C_ExecuteRadial_Params
	{	};

	/**
	 * Function W_RadialSelectionBase.W_RadialSelectionBase_C.OnDeselected
	 */
	struct UW_RadialSelectionBase_C_OnDeselected_Params
	{
	public:
		bool                                                       Play_Animation;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_RadialSelectionBase.W_RadialSelectionBase_C.OnSelected
	 */
	struct UW_RadialSelectionBase_C_OnSelected_Params
	{
	public:
		bool                                                       Play_Animation;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_RadialSelectionBase.W_RadialSelectionBase_C.PreConstruct
	 */
	struct UW_RadialSelectionBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_RadialSelectionBase.W_RadialSelectionBase_C.On Wheel Created
	 */
	struct UW_RadialSelectionBase_C_On_Wheel_Created_Params
	{	};

	/**
	 * Function W_RadialSelectionBase.W_RadialSelectionBase_C.ExecuteUbergraph_W_RadialSelectionBase
	 */
	struct UW_RadialSelectionBase_C_ExecuteUbergraph_W_RadialSelectionBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M25T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
