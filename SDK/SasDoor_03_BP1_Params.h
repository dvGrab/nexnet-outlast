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
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.HasPlayersInside
	 */
	struct ASasDoor__BP1_C_HasPlayersInside_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QL60[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnSASTubeDoorStateChanged
	 */
	struct ASasDoor__BP1_C_OnSASTubeDoorStateChanged_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.IsStageExit
	 */
	struct ASasDoor__BP1_C_IsStageExit_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.SetAutoCloseWhenPlayerInside
	 */
	struct ASasDoor__BP1_C_SetAutoCloseWhenPlayerInside_Params
	{
	public:
		bool                                                       AutoClose;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AH0K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.SetAutoOpenWhenPlayerInside
	 */
	struct ASasDoor__BP1_C_SetAutoOpenWhenPlayerInside_Params
	{
	public:
		bool                                                       AutoOpen;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YRQU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.ForceLightDisabled
	 */
	struct ASasDoor__BP1_C_ForceLightDisabled_Params
	{
	public:
		bool                                                       Disabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R614[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.HasOpenedTube
	 */
	struct ASasDoor__BP1_C_HasOpenedTube_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FXXE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.SpawnTubes
	 */
	struct ASasDoor__BP1_C_SpawnTubes_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.UpdateArmoredDoors
	 */
	struct ASasDoor__BP1_C_UpdateArmoredDoors_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.SetCurrentText
	 */
	struct ASasDoor__BP1_C_SetCurrentText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnRep_CurrentText
	 */
	struct ASasDoor__BP1_C_OnRep_CurrentText_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.GetCurrentStageText
	 */
	struct ASasDoor__BP1_C_GetCurrentStageText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnActivationChanged
	 */
	struct ASasDoor__BP1_C_OnActivationChanged_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.InitializeTubes
	 */
	struct ASasDoor__BP1_C_InitializeTubes_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.UserConstructionScript
	 */
	struct ASasDoor__BP1_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.Timeline_0__FinishedFunc
	 */
	struct ASasDoor__BP1_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.Timeline_0__UpdateFunc
	 */
	struct ASasDoor__BP1_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.Timeline_1__FinishedFunc
	 */
	struct ASasDoor__BP1_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.Timeline_1__UpdateFunc
	 */
	struct ASasDoor__BP1_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.BP_OnActivate
	 */
	struct ASasDoor__BP1_C_BP_OnActivate_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.BP_OnDeactivate
	 */
	struct ASasDoor__BP1_C_BP_OnDeactivate_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.OpenArmoredDoors
	 */
	struct ASasDoor__BP1_C_OpenArmoredDoors_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.CloseArmoredDoors
	 */
	struct ASasDoor__BP1_C_CloseArmoredDoors_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.ReceiveBeginPlay
	 */
	struct ASasDoor__BP1_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.CanvasRenderUpdate
	 */
	struct ASasDoor__BP1_C_CanvasRenderUpdate_Params
	{
	public:
		class UCanvas*                                             Canvas;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Height;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.UpdateTextCanvas
	 */
	struct ASasDoor__BP1_C_UpdateTextCanvas_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.Event_OnCurrentDirectionChanged
	 */
	struct ASasDoor__BP1_C_Event_OnCurrentDirectionChanged_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.BindEventsOnTube
	 */
	struct ASasDoor__BP1_C_BindEventsOnTube_Params
	{
	public:
		class ASASTube__BP_C*                                      tube;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnOpenedStageChanged
	 */
	struct ASasDoor__BP1_C_OnOpenedStageChanged_Params
	{
	public:
		class ASASTube__BP_C*                                      SASTube;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.Event_OnTubesChanged
	 */
	struct ASasDoor__BP1_C_Event_OnTubesChanged_Params
	{	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnPlayersInsideChanged
	 */
	struct ASasDoor__BP1_C_OnPlayersInsideChanged_Params
	{
	public:
		class ARBSASTube*                                          tube;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SasDoor-03_BP1.SasDoor-03_BP1_C.ExecuteUbergraph_SasDoor-03_BP1
	 */
	struct ASasDoor__BP1_C_ExecuteUbergraph_SasDoor__BP1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
