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
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.HasPlayersInside
	 */
	struct ASasDoor_Solo__BP_C_HasPlayersInside_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3Y6K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnSASTubeDoorStateChanged
	 */
	struct ASasDoor_Solo__BP_C_OnSASTubeDoorStateChanged_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.IsStageExit
	 */
	struct ASasDoor_Solo__BP_C_IsStageExit_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.SetAutoCloseWhenPlayerInside
	 */
	struct ASasDoor_Solo__BP_C_SetAutoCloseWhenPlayerInside_Params
	{
	public:
		bool                                                       AutoClose;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_49KW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.SetAutoOpenWhenPlayerInside
	 */
	struct ASasDoor_Solo__BP_C_SetAutoOpenWhenPlayerInside_Params
	{
	public:
		bool                                                       AutoOpen;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1YKM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.ForceLightDisabled
	 */
	struct ASasDoor_Solo__BP_C_ForceLightDisabled_Params
	{
	public:
		bool                                                       Disabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2K5J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.HasOpenedTube
	 */
	struct ASasDoor_Solo__BP_C_HasOpenedTube_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KOTE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.SpawnTubes
	 */
	struct ASasDoor_Solo__BP_C_SpawnTubes_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.UpdateArmoredDoors
	 */
	struct ASasDoor_Solo__BP_C_UpdateArmoredDoors_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.SetCurrentText
	 */
	struct ASasDoor_Solo__BP_C_SetCurrentText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnRep_CurrentText
	 */
	struct ASasDoor_Solo__BP_C_OnRep_CurrentText_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.GetCurrentStageText
	 */
	struct ASasDoor_Solo__BP_C_GetCurrentStageText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnActivationChanged
	 */
	struct ASasDoor_Solo__BP_C_OnActivationChanged_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.InitializeTubes
	 */
	struct ASasDoor_Solo__BP_C_InitializeTubes_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.UserConstructionScript
	 */
	struct ASasDoor_Solo__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Timeline_0__FinishedFunc
	 */
	struct ASasDoor_Solo__BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Timeline_0__UpdateFunc
	 */
	struct ASasDoor_Solo__BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Timeline_1__FinishedFunc
	 */
	struct ASasDoor_Solo__BP_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Timeline_1__UpdateFunc
	 */
	struct ASasDoor_Solo__BP_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.BP_OnActivate
	 */
	struct ASasDoor_Solo__BP_C_BP_OnActivate_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.BP_OnDeactivate
	 */
	struct ASasDoor_Solo__BP_C_BP_OnDeactivate_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OpenArmoredDoors
	 */
	struct ASasDoor_Solo__BP_C_OpenArmoredDoors_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.CloseArmoredDoors
	 */
	struct ASasDoor_Solo__BP_C_CloseArmoredDoors_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.ReceiveBeginPlay
	 */
	struct ASasDoor_Solo__BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.CanvasRenderUpdate
	 */
	struct ASasDoor_Solo__BP_C_CanvasRenderUpdate_Params
	{
	public:
		class UCanvas*                                             Canvas;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Height;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.UpdateTextCanvas
	 */
	struct ASasDoor_Solo__BP_C_UpdateTextCanvas_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Event_OnCurrentDirectionChanged
	 */
	struct ASasDoor_Solo__BP_C_Event_OnCurrentDirectionChanged_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.BindEventsOnTube
	 */
	struct ASasDoor_Solo__BP_C_BindEventsOnTube_Params
	{
	public:
		class ASASTube__BP_C*                                      tube;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnOpenedStageChanged
	 */
	struct ASasDoor_Solo__BP_C_OnOpenedStageChanged_Params
	{
	public:
		class ASASTube__BP_C*                                      SASTube;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Event_OnTubesChanged
	 */
	struct ASasDoor_Solo__BP_C_Event_OnTubesChanged_Params
	{	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnPlayersInsideChanged
	 */
	struct ASasDoor_Solo__BP_C_OnPlayersInsideChanged_Params
	{
	public:
		class ARBSASTube*                                          tube;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.ExecuteUbergraph_SasDoor_Solo-01_BP
	 */
	struct ASasDoor_Solo__BP_C_ExecuteUbergraph_SasDoor_Solo__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
