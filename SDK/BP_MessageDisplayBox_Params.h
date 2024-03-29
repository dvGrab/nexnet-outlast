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
	 * Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Get_MessageTxt_Text_1
	 */
	struct UBP_MessageDisplayBox_C_Get_MessageTxt_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Construct
	 */
	struct UBP_MessageDisplayBox_C_Construct_Params
	{	};

	/**
	 * Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Tick
	 */
	struct UBP_MessageDisplayBox_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.OnClicked_Event_1
	 */
	struct UBP_MessageDisplayBox_C_OnClicked_Event_1_Params
	{	};

	/**
	 * Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Destruct
	 */
	struct UBP_MessageDisplayBox_C_Destruct_Params
	{	};

	/**
	 * Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.OnClicked_Event_2
	 */
	struct UBP_MessageDisplayBox_C_OnClicked_Event_2_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.ExecuteUbergraph_BP_MessageDisplayBox
	 */
	struct UBP_MessageDisplayBox_C_ExecuteUbergraph_BP_MessageDisplayBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
