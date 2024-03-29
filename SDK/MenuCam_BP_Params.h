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
	 * Function MenuCam_BP.MenuCam_BP_C.InitPageMaterial
	 */
	struct AMenuCam_BP_C_InitPageMaterial_Params
	{
	public:
		int32_t                                                    PageIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X2HT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.StopCycleSound
	 */
	struct AMenuCam_BP_C_StopCycleSound_Params
	{	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.PlayCycleSound
	 */
	struct AMenuCam_BP_C_PlayCycleSound_Params
	{	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.SetTickEnabled
	 */
	struct AMenuCam_BP_C_SetTickEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.Clean
	 */
	struct AMenuCam_BP_C_Clean_Params
	{	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.UpdateMaterialWithRenderTarget
	 */
	struct AMenuCam_BP_C_UpdateMaterialWithRenderTarget_Params
	{
	public:
		int32_t                                                    PageId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.UpdateScene
	 */
	struct AMenuCam_BP_C_UpdateScene_Params
	{
	public:
		float                                                      FovTarget;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FovAnimè;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FovAdd;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            InRot;                                                   // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Base2;                                                   // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InVec;                                                   // 0x0024(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.CyclePage
	 */
	struct AMenuCam_BP_C_CyclePage_Params
	{
	public:
		bool                                                       CycleRight;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.Init
	 */
	struct AMenuCam_BP_C_Init_Params
	{	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.ApplyMaterialToUsedPages
	 */
	struct AMenuCam_BP_C_ApplyMaterialToUsedPages_Params
	{
	public:
		int32_t                                                    PagesUsed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.UserConstructionScript
	 */
	struct AMenuCam_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.BlendCameraTimeline__FinishedFunc
	 */
	struct AMenuCam_BP_C_BlendCameraTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.BlendCameraTimeline__UpdateFunc
	 */
	struct AMenuCam_BP_C_BlendCameraTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.Timeline_0__FinishedFunc
	 */
	struct AMenuCam_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.Timeline_0__UpdateFunc
	 */
	struct AMenuCam_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.BlendCameraPosition
	 */
	struct AMenuCam_BP_C_BlendCameraPosition_Params
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TargetFOV;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.SelectMenu
	 */
	struct AMenuCam_BP_C_SelectMenu_Params
	{
	public:
		int32_t                                                    MenuID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.ReceiveTick
	 */
	struct AMenuCam_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.ReceiveBeginPlay
	 */
	struct AMenuCam_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MenuCam_BP.MenuCam_BP_C.ExecuteUbergraph_MenuCam_BP
	 */
	struct AMenuCam_BP_C_ExecuteUbergraph_MenuCam_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
