/**
 * Name: TRIALS
 * Version: FINAL
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.debug
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::debug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.debug");
		
		APPManager_BP_C_debug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.Remove PP Override
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::Remove_PP_Override()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.Remove PP Override");
		
		APPManager_BP_C_Remove_PP_Override_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.OverridePP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPostProcessSettings                        PP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void APPManager_BP_C::OverridePP(struct FPostProcessSettings* PP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.OverridePP");
		
		APPManager_BP_C_OverridePP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PP != nullptr)
			*PP = params.PP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeIn__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::TL_WhiteFadeIn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeIn__FinishedFunc");
		
		APPManager_BP_C_TL_WhiteFadeIn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeIn__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::TL_WhiteFadeIn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeIn__UpdateFunc");
		
		APPManager_BP_C_TL_WhiteFadeIn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeOut__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::TL_WhiteFadeOut__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeOut__FinishedFunc");
		
		APPManager_BP_C_TL_WhiteFadeOut__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeOut__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::TL_WhiteFadeOut__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeOut__UpdateFunc");
		
		APPManager_BP_C_TL_WhiteFadeOut__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.TL_Spook01__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::TL_Spook01__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.TL_Spook01__FinishedFunc");
		
		APPManager_BP_C_TL_Spook01__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.TL_Spook01__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::TL_Spook01__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.TL_Spook01__UpdateFunc");
		
		APPManager_BP_C_TL_Spook01__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.Timeline_0__FinishedFunc");
		
		APPManager_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.Timeline_0__UpdateFunc");
		
		APPManager_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.nvEnter_TL__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::nvEnter_TL__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.nvEnter_TL__FinishedFunc");
		
		APPManager_BP_C_nvEnter_TL__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.nvEnter_TL__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::nvEnter_TL__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.nvEnter_TL__UpdateFunc");
		
		APPManager_BP_C_nvEnter_TL__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.nvExit_TL__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::nvExit_TL__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.nvExit_TL__FinishedFunc");
		
		APPManager_BP_C_nvExit_TL__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.nvExit_TL__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::nvExit_TL__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.nvExit_TL__UpdateFunc");
		
		APPManager_BP_C_nvExit_TL__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.TL_inFocus__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::TL_inFocus__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.TL_inFocus__FinishedFunc");
		
		APPManager_BP_C_TL_inFocus__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.TL_inFocus__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::TL_inFocus__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.TL_inFocus__UpdateFunc");
		
		APPManager_BP_C_TL_inFocus__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.FX_WakeUp_TL__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::FX_WakeUp_TL__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.FX_WakeUp_TL__FinishedFunc");
		
		APPManager_BP_C_FX_WakeUp_TL__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.FX_WakeUp_TL__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::FX_WakeUp_TL__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.FX_WakeUp_TL__UpdateFunc");
		
		APPManager_BP_C_FX_WakeUp_TL__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.FX_Hit_TL__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::FX_Hit_TL__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.FX_Hit_TL__FinishedFunc");
		
		APPManager_BP_C_FX_Hit_TL__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.FX_Hit_TL__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::FX_Hit_TL__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.FX_Hit_TL__UpdateFunc");
		
		APPManager_BP_C_FX_Hit_TL__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.FX_FadeWhiteOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinExp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxExp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimeFadeOut                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APPManager_BP_C::FX_FadeWhiteOut(float MinExp, float MaxExp, float TimeFadeOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.FX_FadeWhiteOut");
		
		APPManager_BP_C_FX_FadeWhiteOut_Params params {};
		params.MinExp = MinExp;
		params.MaxExp = MaxExp;
		params.TimeFadeOut = TimeFadeOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.FX_FadeWhiteIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinExp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxExp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimeFadeIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APPManager_BP_C::FX_FadeWhiteIn(float MinExp, float MaxExp, float TimeFadeIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.FX_FadeWhiteIn");
		
		APPManager_BP_C_FX_FadeWhiteIn_Params params {};
		params.MinExp = MinExp;
		params.MaxExp = MaxExp;
		params.TimeFadeIn = TimeFadeIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.FX_PsySpook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SpookTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     PP_Material                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APPManager_BP_C::FX_PsySpook(float SpookTime, class UObject* PP_Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.FX_PsySpook");
		
		APPManager_BP_C_FX_PsySpook_Params params {};
		params.SpookTime = SpookTime;
		params.PP_Material = PP_Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.FX_GetGas
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::FX_GetGas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.FX_GetGas");
		
		APPManager_BP_C_FX_GetGas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APPManager_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.ReceiveTick");
		
		APPManager_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.FX_WhiteFlash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MaxExp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimeFadeIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimeFadeOut                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DelayTimeOut                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APPManager_BP_C::FX_WhiteFlash(float MaxExp, float TimeFadeIn, float TimeFadeOut, float DelayTimeOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.FX_WhiteFlash");
		
		APPManager_BP_C_FX_WhiteFlash_Params params {};
		params.MaxExp = MaxExp;
		params.TimeFadeIn = TimeFadeIn;
		params.TimeFadeOut = TimeFadeOut;
		params.DelayTimeOut = DelayTimeOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.OnExitNightVision
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::OnExitNightVision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.OnExitNightVision");
		
		APPManager_BP_C_OnExitNightVision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.OnEnterNightVision
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::OnEnterNightVision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.OnEnterNightVision");
		
		APPManager_BP_C_OnEnterNightVision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.FX_InFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              blendTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinFocalDistance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxFocalDistance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinFOVScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxFOVScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NearBlurSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FarBlurSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinFocalRegion                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxFocalRegion                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APPManager_BP_C::FX_InFocus(float delay, float blendTime, float MinFocalDistance, float MaxFocalDistance, float MinFOVScale, float MaxFOVScale, float NearBlurSize, float FarBlurSize, float MinFocalRegion, float MaxFocalRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.FX_InFocus");
		
		APPManager_BP_C_FX_InFocus_Params params {};
		params.delay = delay;
		params.blendTime = blendTime;
		params.MinFocalDistance = MinFocalDistance;
		params.MaxFocalDistance = MaxFocalDistance;
		params.MinFOVScale = MinFOVScale;
		params.MaxFOVScale = MaxFOVScale;
		params.NearBlurSize = NearBlurSize;
		params.FarBlurSize = FarBlurSize;
		params.MinFocalRegion = MinFocalRegion;
		params.MaxFocalRegion = MaxFocalRegion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.FX_SetMansionDOFEnabled
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::FX_SetMansionDOFEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.FX_SetMansionDOFEnabled");
		
		APPManager_BP_C_FX_SetMansionDOFEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.FX_PlayMansionDOFEaseOut
	 * 		Flags  -> ()
	 */
	void APPManager_BP_C::FX_PlayMansionDOFEaseOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.FX_PlayMansionDOFEaseOut");
		
		APPManager_BP_C_FX_PlayMansionDOFEaseOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.FX_Hit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MaxExp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APPManager_BP_C::FX_Hit(float MaxExp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.FX_Hit");
		
		APPManager_BP_C_FX_Hit_Params params {};
		params.MaxExp = MaxExp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PPManager_BP.PPManager_BP_C.ExecuteUbergraph_PPManager_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APPManager_BP_C::ExecuteUbergraph_PPManager_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PPManager_BP.PPManager_BP_C.ExecuteUbergraph_PPManager_BP");
		
		APPManager_BP_C_ExecuteUbergraph_PPManager_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APPManager_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APPManager_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PPManager_BP.PPManager_BP_C");
		return ptr;
	}

}


