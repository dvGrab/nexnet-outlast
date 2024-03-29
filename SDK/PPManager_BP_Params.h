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
	 * Function PPManager_BP.PPManager_BP_C.debug
	 */
	struct APPManager_BP_C_debug_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.Remove PP Override
	 */
	struct APPManager_BP_C_Remove_PP_Override_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.OverridePP
	 */
	struct APPManager_BP_C_OverridePP_Params
	{
	public:
		struct FPostProcessSettings                                PP;                                                      // 0x0000(0x05C0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeIn__FinishedFunc
	 */
	struct APPManager_BP_C_TL_WhiteFadeIn__FinishedFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeIn__UpdateFunc
	 */
	struct APPManager_BP_C_TL_WhiteFadeIn__UpdateFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeOut__FinishedFunc
	 */
	struct APPManager_BP_C_TL_WhiteFadeOut__FinishedFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeOut__UpdateFunc
	 */
	struct APPManager_BP_C_TL_WhiteFadeOut__UpdateFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.TL_Spook01__FinishedFunc
	 */
	struct APPManager_BP_C_TL_Spook01__FinishedFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.TL_Spook01__UpdateFunc
	 */
	struct APPManager_BP_C_TL_Spook01__UpdateFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.Timeline_0__FinishedFunc
	 */
	struct APPManager_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.Timeline_0__UpdateFunc
	 */
	struct APPManager_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.nvEnter_TL__FinishedFunc
	 */
	struct APPManager_BP_C_nvEnter_TL__FinishedFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.nvEnter_TL__UpdateFunc
	 */
	struct APPManager_BP_C_nvEnter_TL__UpdateFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.nvExit_TL__FinishedFunc
	 */
	struct APPManager_BP_C_nvExit_TL__FinishedFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.nvExit_TL__UpdateFunc
	 */
	struct APPManager_BP_C_nvExit_TL__UpdateFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.TL_inFocus__FinishedFunc
	 */
	struct APPManager_BP_C_TL_inFocus__FinishedFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.TL_inFocus__UpdateFunc
	 */
	struct APPManager_BP_C_TL_inFocus__UpdateFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.FX_WakeUp_TL__FinishedFunc
	 */
	struct APPManager_BP_C_FX_WakeUp_TL__FinishedFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.FX_WakeUp_TL__UpdateFunc
	 */
	struct APPManager_BP_C_FX_WakeUp_TL__UpdateFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.FX_Hit_TL__FinishedFunc
	 */
	struct APPManager_BP_C_FX_Hit_TL__FinishedFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.FX_Hit_TL__UpdateFunc
	 */
	struct APPManager_BP_C_FX_Hit_TL__UpdateFunc_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.FX_FadeWhiteOut
	 */
	struct APPManager_BP_C_FX_FadeWhiteOut_Params
	{
	public:
		float                                                      MinExp;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxExp;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TimeFadeOut;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.FX_FadeWhiteIn
	 */
	struct APPManager_BP_C_FX_FadeWhiteIn_Params
	{
	public:
		float                                                      MinExp;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxExp;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TimeFadeIn;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.FX_PsySpook
	 */
	struct APPManager_BP_C_FX_PsySpook_Params
	{
	public:
		float                                                      SpookTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M1TT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             PP_Material;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.FX_GetGas
	 */
	struct APPManager_BP_C_FX_GetGas_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.ReceiveTick
	 */
	struct APPManager_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.FX_WhiteFlash
	 */
	struct APPManager_BP_C_FX_WhiteFlash_Params
	{
	public:
		float                                                      MaxExp;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TimeFadeIn;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TimeFadeOut;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DelayTimeOut;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.OnExitNightVision
	 */
	struct APPManager_BP_C_OnExitNightVision_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.OnEnterNightVision
	 */
	struct APPManager_BP_C_OnEnterNightVision_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.FX_InFocus
	 */
	struct APPManager_BP_C_FX_InFocus_Params
	{
	public:
		float                                                      delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      blendTime;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinFocalDistance;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxFocalDistance;                                        // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinFOVScale;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxFOVScale;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NearBlurSize;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FarBlurSize;                                             // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinFocalRegion;                                          // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxFocalRegion;                                          // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.FX_SetMansionDOFEnabled
	 */
	struct APPManager_BP_C_FX_SetMansionDOFEnabled_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.FX_PlayMansionDOFEaseOut
	 */
	struct APPManager_BP_C_FX_PlayMansionDOFEaseOut_Params
	{	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.FX_Hit
	 */
	struct APPManager_BP_C_FX_Hit_Params
	{
	public:
		float                                                      MaxExp;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PPManager_BP.PPManager_BP_C.ExecuteUbergraph_PPManager_BP
	 */
	struct APPManager_BP_C_ExecuteUbergraph_PPManager_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
