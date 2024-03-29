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
	 * Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.UpdateMissionScore
	 */
	struct UW_WorldMap_MissionSelect_C_UpdateMissionScore_Params
	{	};

	/**
	 * Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.PreConstruct
	 */
	struct UW_WorldMap_MissionSelect_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.BndEvt__W_WorldMap_MissionSelect_btn_AcceptMission_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 */
	struct UW_WorldMap_MissionSelect_C_BndEvt__W_WorldMap_MissionSelect_btn_AcceptMission_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.Tick
	 */
	struct UW_WorldMap_MissionSelect_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.ExecuteUbergraph_W_WorldMap_MissionSelect
	 */
	struct UW_WorldMap_MissionSelect_C_ExecuteUbergraph_W_WorldMap_MissionSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.OnSetMissionButtonClicked__DelegateSignature
	 */
	struct UW_WorldMap_MissionSelect_C_OnSetMissionButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_WorldMap_MissionSelect_C*                         BtnClicked;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
