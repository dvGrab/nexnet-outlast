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
	 * Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.UpdateFloorInfo
	 */
	struct UW_PreMission_Tablet_Floors_C_UpdateFloorInfo_Params
	{
	public:
		struct FLevelFloorData                                     FloorData;                                               // 0x0000(0x0080)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    FloorLevel;                                              // 0x0080(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N3JI[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.Finished_0C5D35C04B4E8BC0D2A659AEE498EAEB
	 */
	struct UW_PreMission_Tablet_Floors_C_Finished_0C5D35C04B4E8BC0D2A659AEE498EAEB_Params
	{	};

	/**
	 * Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.Construct
	 */
	struct UW_PreMission_Tablet_Floors_C_Construct_Params
	{	};

	/**
	 * Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.ShowFloorInfo
	 */
	struct UW_PreMission_Tablet_Floors_C_ShowFloorInfo_Params
	{	};

	/**
	 * Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.HideFloorInfo
	 */
	struct UW_PreMission_Tablet_Floors_C_HideFloorInfo_Params
	{	};

	/**
	 * Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.BndEvt__W_PreMission_Tablet_Floors_btn_UpFloor_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_PreMission_Tablet_Floors_C_BndEvt__W_PreMission_Tablet_Floors_btn_UpFloor_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.BndEvt__W_PreMission_Tablet_Floors_btn_DnFloor_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UW_PreMission_Tablet_Floors_C_BndEvt__W_PreMission_Tablet_Floors_btn_DnFloor_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.ExecuteUbergraph_W_PreMission_Tablet_Floors
	 */
	struct UW_PreMission_Tablet_Floors_C_ExecuteUbergraph_W_PreMission_Tablet_Floors_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.OnFloorDown__DelegateSignature
	 */
	struct UW_PreMission_Tablet_Floors_C_OnFloorDown__DelegateSignature_Params
	{	};

	/**
	 * Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.OnFloorUp__DelegateSignature
	 */
	struct UW_PreMission_Tablet_Floors_C_OnFloorUp__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
