/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.Turn On
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              wave1Frenquency                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave1Amplitude                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave1Phase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave2Frenquency                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave2Amplitude                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave2Phase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wavesSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOscilloscopeScreen_BP_C::TurnOn(bool Off, float wave1Frenquency, float wave1Amplitude, float wave1Phase, float wave2Frenquency, float wave2Amplitude, float wave2Phase, float wavesSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.Turn On");
		
		AOscilloscopeScreen_BP_C_TurnOn_Params params {};
		params.Off = Off;
		params.wave1Frenquency = wave1Frenquency;
		params.wave1Amplitude = wave1Amplitude;
		params.wave1Phase = wave1Phase;
		params.wave2Frenquency = wave2Frenquency;
		params.wave2Amplitude = wave2Amplitude;
		params.wave2Phase = wave2Phase;
		params.wavesSpeed = wavesSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.Refresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              wave1Frenquency                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave1Amplitude                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave1Phase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave2Frenquency                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave2Amplitude                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave2Phase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wavesSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOscilloscopeScreen_BP_C::Refresh(float wave1Frenquency, float wave1Amplitude, float wave1Phase, float wave2Frenquency, float wave2Amplitude, float wave2Phase, float wavesSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.Refresh");
		
		AOscilloscopeScreen_BP_C_Refresh_Params params {};
		params.wave1Frenquency = wave1Frenquency;
		params.wave1Amplitude = wave1Amplitude;
		params.wave1Phase = wave1Phase;
		params.wave2Frenquency = wave2Frenquency;
		params.wave2Amplitude = wave2Amplitude;
		params.wave2Phase = wave2Phase;
		params.wavesSpeed = wavesSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.Turn__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AOscilloscopeScreen_BP_C::Turn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.Turn__FinishedFunc");
		
		AOscilloscopeScreen_BP_C_Turn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.Turn__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AOscilloscopeScreen_BP_C::Turn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.Turn__UpdateFunc");
		
		AOscilloscopeScreen_BP_C_Turn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.TurnOnAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              wave1Frenquency                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave1Amplitude                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave1Phase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave2Frenquency                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave2Amplitude                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wave2Phase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              wavesSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOscilloscopeScreen_BP_C::TurnOnAnim(bool TurnOn, float wave1Frenquency, float wave1Amplitude, float wave1Phase, float wave2Frenquency, float wave2Amplitude, float wave2Phase, float wavesSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.TurnOnAnim");
		
		AOscilloscopeScreen_BP_C_TurnOnAnim_Params params {};
		params.TurnOn = TurnOn;
		params.wave1Frenquency = wave1Frenquency;
		params.wave1Amplitude = wave1Amplitude;
		params.wave1Phase = wave1Phase;
		params.wave2Frenquency = wave2Frenquency;
		params.wave2Amplitude = wave2Amplitude;
		params.wave2Phase = wave2Phase;
		params.wavesSpeed = wavesSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AOscilloscopeScreen_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.ReceiveBeginPlay");
		
		AOscilloscopeScreen_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.ExecuteUbergraph_OscilloscopeScreen_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOscilloscopeScreen_BP_C::ExecuteUbergraph_OscilloscopeScreen_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OscilloscopeScreen_BP.OscilloscopeScreen_BP_C.ExecuteUbergraph_OscilloscopeScreen_BP");
		
		AOscilloscopeScreen_BP_C_ExecuteUbergraph_OscilloscopeScreen_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOscilloscopeScreen_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOscilloscopeScreen_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OscilloscopeScreen_BP.OscilloscopeScreen_BP_C");
		return ptr;
	}

}


