/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> Function SoundVisualizations.SoundVisualizationStatics.GetAmplitude
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  SoundWave                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AmplitudeBuckets                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutAmplitudes                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USoundVisualizationStatics::GetAmplitude(class USoundWave* SoundWave, int32_t Channel, float StartTime, float TimeLength, int32_t AmplitudeBuckets, TArray<float>* OutAmplitudes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundVisualizations.SoundVisualizationStatics.GetAmplitude");
		
		USoundVisualizationStatics_GetAmplitude_Params params {};
		params.SoundWave = SoundWave;
		params.Channel = Channel;
		params.StartTime = StartTime;
		params.TimeLength = TimeLength;
		params.AmplitudeBuckets = AmplitudeBuckets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAmplitudes != nullptr)
			*OutAmplitudes = params.OutAmplitudes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundVisualizations.SoundVisualizationStatics.CalculateFrequencySpectrum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  SoundWave                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SpectrumWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutSpectrum                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USoundVisualizationStatics::CalculateFrequencySpectrum(class USoundWave* SoundWave, int32_t Channel, float StartTime, float TimeLength, int32_t SpectrumWidth, TArray<float>* OutSpectrum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundVisualizations.SoundVisualizationStatics.CalculateFrequencySpectrum");
		
		USoundVisualizationStatics_CalculateFrequencySpectrum_Params params {};
		params.SoundWave = SoundWave;
		params.Channel = Channel;
		params.StartTime = StartTime;
		params.TimeLength = TimeLength;
		params.SpectrumWidth = SpectrumWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSpectrum != nullptr)
			*OutSpectrum = params.OutSpectrum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundVisualizationStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundVisualizationStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoundVisualizations.SoundVisualizationStatics");
		return ptr;
	}

}


