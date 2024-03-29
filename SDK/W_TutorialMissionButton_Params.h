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
	 * Function W_TutorialMissionButton.W_TutorialMissionButton_C.Construct
	 */
	struct UW_TutorialMissionButton_C_Construct_Params
	{	};

	/**
	 * Function W_TutorialMissionButton.W_TutorialMissionButton_C.UpdateTutorialMissionData
	 */
	struct UW_TutorialMissionButton_C_UpdateTutorialMissionData_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_TutorialMissionButton.W_TutorialMissionButton_C.Destruct
	 */
	struct UW_TutorialMissionButton_C_Destruct_Params
	{	};

	/**
	 * Function W_TutorialMissionButton.W_TutorialMissionButton_C.ExecuteUbergraph_W_TutorialMissionButton
	 */
	struct UW_TutorialMissionButton_C_ExecuteUbergraph_W_TutorialMissionButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
