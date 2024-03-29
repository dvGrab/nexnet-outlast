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
	 * 		Name   -> Function Text2LipSync.PhrasesList.LoadFromDataTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  DataTable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPhrasesList::LoadFromDataTable(class UDataTable* DataTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.PhrasesList.LoadFromDataTable");
		
		UPhrasesList_LoadFromDataTable_Params params {};
		params.DataTable = DataTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.PhrasesList.GetPhraseFromList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLipSync_Phrase                             ReturnValue                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UPhrasesList::GetPhraseFromList(const class FName& Key, struct FLipSync_Phrase* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.PhrasesList.GetPhraseFromList");
		
		UPhrasesList_GetPhraseFromList_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhrasesList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhrasesList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Text2LipSync.PhrasesList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.SaveToDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USubtitlesCache::SaveToDisk(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.SubtitlesCache.SaveToDisk");
		
		USubtitlesCache_SaveToDisk_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.SaveToBinaryFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FullFileName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USubtitlesCache::SaveToBinaryFile(const class FString& FullFileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.SubtitlesCache.SaveToBinaryFile");
		
		USubtitlesCache_SaveToBinaryFile_Params params {};
		params.FullFileName = FullFileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.RenameAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USubtitlesCache::RenameAsset(const class FString& CurrentName, const class FString& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.SubtitlesCache.RenameAsset");
		
		USubtitlesCache_RenameAsset_Params params {};
		params.CurrentName = CurrentName;
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.RemoveAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  SoundAsset                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USubtitlesCache::RemoveAsset(class USoundBase* SoundAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.SubtitlesCache.RemoveAsset");
		
		USubtitlesCache_RemoveAsset_Params params {};
		params.SoundAsset = SoundAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.LoadFromDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USubtitlesCache::LoadFromDisk(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.SubtitlesCache.LoadFromDisk");
		
		USubtitlesCache_LoadFromDisk_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.LoadFromBinaryFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FullFileName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USubtitlesCache::LoadFromBinaryFile(const class FString& FullFileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.SubtitlesCache.LoadFromBinaryFile");
		
		USubtitlesCache_LoadFromBinaryFile_Params params {};
		params.FullFileName = FullFileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.GetPausesForVoiceAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  SoundAsset                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLipSync_Interval>                   Pauses                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool USubtitlesCache::GetPausesForVoiceAsset(class USoundBase* SoundAsset, TArray<struct FLipSync_Interval>* Pauses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.SubtitlesCache.GetPausesForVoiceAsset");
		
		USubtitlesCache_GetPausesForVoiceAsset_Params params {};
		params.SoundAsset = SoundAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pauses != nullptr)
			*Pauses = params.Pauses;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.GetCachedKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              CachedKeys                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USubtitlesCache::GetCachedKeys(TArray<class FString>* CachedKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.SubtitlesCache.GetCachedKeys");
		
		USubtitlesCache_GetCachedKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CachedKeys != nullptr)
			*CachedKeys = params.CachedKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.AddAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  SoundAsset                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLipSync_TimedPhrase>                PhraseData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    PauseIndexes                                               (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              PhraseDuration                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USubtitlesCache::AddAsset(class USoundBase* SoundAsset, TArray<struct FLipSync_TimedPhrase> PhraseData, TArray<int32_t> PauseIndexes, float PhraseDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.SubtitlesCache.AddAsset");
		
		USubtitlesCache_AddAsset_Params params {};
		params.SoundAsset = SoundAsset;
		params.PhraseData = PhraseData;
		params.PauseIndexes = PauseIndexes;
		params.PhraseDuration = PhraseDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubtitlesCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubtitlesCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Text2LipSync.SubtitlesCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubtitlesFileSave.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubtitlesFileSave::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Text2LipSync.SubtitlesFileSave");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.TextToPhonemes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Line                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLipSync_PhonemeInPhrase>            OutputArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VowelsCount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PunctuationMarksCount                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextLipSync::TextToPhonemes(const class FText& Line, TArray<struct FLipSync_PhonemeInPhrase>* OutputArray, int32_t* VowelsCount, int32_t* PunctuationMarksCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.TextToPhonemes");
		
		UTextLipSync_TextToPhonemes_Params params {};
		params.Line = Line;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputArray != nullptr)
			*OutputArray = params.OutputArray;
		if (VowelsCount != nullptr)
			*VowelsCount = params.VowelsCount;
		if (PunctuationMarksCount != nullptr)
			*PunctuationMarksCount = params.PunctuationMarksCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.StretchPhraseData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ErrorForPunctuation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ErrorForWord                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextLipSync::StretchPhraseData(float ErrorForPunctuation, float ErrorForWord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.StretchPhraseData");
		
		UTextLipSync_StretchPhraseData_Params params {};
		params.ErrorForPunctuation = ErrorForPunctuation;
		params.ErrorForWord = ErrorForWord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.StretchDataInterval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewStartTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewEndTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextLipSync::StretchDataInterval(int32_t StartIndex, int32_t EndIndex, float NewStartTime, float NewEndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.StretchDataInterval");
		
		UTextLipSync_StretchDataInterval_Params params {};
		params.StartIndex = StartIndex;
		params.EndIndex = EndIndex;
		params.NewStartTime = NewStartTime;
		params.NewEndTime = NewEndTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.StopSpeaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStopPlayingSound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::StopSpeaking(bool bStopPlayingSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.StopSpeaking");
		
		UTextLipSync_StopSpeaking_Params params {};
		params.bStopPlayingSound = bStopPlayingSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.SpeakByKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PhraseKey                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStartPlayingSound                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::SpeakByKey(const class FName& PhraseKey, bool bStartPlayingSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.SpeakByKey");
		
		UTextLipSync_SpeakByKey_Params params {};
		params.PhraseKey = PhraseKey;
		params.bStartPlayingSound = bStartPlayingSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.SpeakAgain
	 * 		Flags  -> ()
	 */
	bool UTextLipSync::SpeakAgain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.SpeakAgain");
		
		UTextLipSync_SpeakAgain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.Speak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLipSync_Phrase                             Phrase                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bStartPlayingSound                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::Speak(const struct FLipSync_Phrase& Phrase, bool bStartPlayingSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.Speak");
		
		UTextLipSync_Speak_Params params {};
		params.Phrase = Phrase;
		params.bStartPlayingSound = bStartPlayingSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.SaveLastPhraseToCache
	 * 		Flags  -> ()
	 */
	bool UTextLipSync::SaveLastPhraseToCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.SaveLastPhraseToCache");
		
		UTextLipSync_SaveLastPhraseToCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.SaveCacheToDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseBinaryFormat                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTextLipSync::SaveCacheToDisk(const class FString& Filename, bool bUseBinaryFormat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.SaveCacheToDisk");
		
		UTextLipSync_SaveCacheToDisk_Params params {};
		params.Filename = Filename;
		params.bUseBinaryFormat = bUseBinaryFormat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.RestorePhraseDataFromPauses
	 * 		Flags  -> ()
	 */
	void UTextLipSync::RestorePhraseDataFromPauses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.RestorePhraseDataFromPauses");
		
		UTextLipSync_RestorePhraseDataFromPauses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.RemovePhraseFromCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  VoiceAsset                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::RemovePhraseFromCache(class USoundWave* VoiceAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.RemovePhraseFromCache");
		
		UTextLipSync_RemovePhraseFromCache_Params params {};
		params.VoiceAsset = VoiceAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.OnSpeaker_AudioSingleEnvelopeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EnvelopeValue                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextLipSync::OnSpeaker_AudioSingleEnvelopeValue(class USoundWave* PlayingSoundWave, float EnvelopeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.OnSpeaker_AudioSingleEnvelopeValue");
		
		UTextLipSync_OnSpeaker_AudioSingleEnvelopeValue_Params params {};
		params.PlayingSoundWave = PlayingSoundWave;
		params.EnvelopeValue = EnvelopeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.OnSpeaker_AudioPlaybackPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackPercent                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextLipSync::OnSpeaker_AudioPlaybackPercent(class USoundWave* PlayingSoundWave, float PlaybackPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.OnSpeaker_AudioPlaybackPercent");
		
		UTextLipSync_OnSpeaker_AudioPlaybackPercent_Params params {};
		params.PlayingSoundWave = PlayingSoundWave;
		params.PlaybackPercent = PlaybackPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.LoadPhrasesSetFromDataTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  Table                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::LoadPhrasesSetFromDataTable(class UDataTable* Table)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.LoadPhrasesSetFromDataTable");
		
		UTextLipSync_LoadPhrasesSetFromDataTable_Params params {};
		params.Table = Table;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.LoadCacheFromDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseBinaryFormat                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTextLipSync::LoadCacheFromDisk(const class FString& Filename, bool bUseBinaryFormat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.LoadCacheFromDisk");
		
		UTextLipSync_LoadCacheFromDisk_Params params {};
		params.Filename = Filename;
		params.bUseBinaryFormat = bUseBinaryFormat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.IsSpeaking
	 * 		Flags  -> ()
	 */
	bool UTextLipSync::IsSpeaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.IsSpeaking");
		
		UTextLipSync_IsSpeaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.IsInitialized
	 * 		Flags  -> ()
	 */
	bool UTextLipSync::IsInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.IsInitialized");
		
		UTextLipSync_IsInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.InitializePhonemesArray
	 * 		Flags  -> ()
	 */
	void UTextLipSync::InitializePhonemesArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.InitializePhonemesArray");
		
		UTextLipSync_InitializePhonemesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.InitializEPhonemeConvertRules
	 * 		Flags  -> ()
	 */
	void UTextLipSync::InitializEPhonemeConvertRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.InitializEPhonemeConvertRules");
		
		UTextLipSync_InitializEPhonemeConvertRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             SpeakingAudioComp                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::Initialize(class UAudioComponent* SpeakingAudioComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.Initialize");
		
		UTextLipSync_Initialize_Params params {};
		params.SpeakingAudioComp = SpeakingAudioComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetSpeakingTime
	 * 		Flags  -> ()
	 */
	float UTextLipSync::GetSpeakingTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.GetSpeakingTime");
		
		UTextLipSync_GetSpeakingTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetListOfCachedAssets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              VoiceAssetNames                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UTextLipSync::GetListOfCachedAssets(TArray<class FString>* VoiceAssetNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.GetListOfCachedAssets");
		
		UTextLipSync_GetListOfCachedAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VoiceAssetNames != nullptr)
			*VoiceAssetNames = params.VoiceAssetNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetLastPhraseDuration
	 * 		Flags  -> ()
	 */
	float UTextLipSync::GetLastPhraseDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.GetLastPhraseDuration");
		
		UTextLipSync_GetLastPhraseDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetCurveValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CurveName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTextLipSync::GetCurveValue(const class FName& CurveName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.GetCurveValue");
		
		UTextLipSync_GetCurveValue_Params params {};
		params.CurveName = CurveName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetCurrentPhrase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<float, EPhoneme>                              ReturnValue                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UTextLipSync::GetCurrentPhrase(TMap<float, EPhoneme>* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.GetCurrentPhrase");
		
		UTextLipSync_GetCurrentPhrase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetCurrentPhonemesLine
	 * 		Flags  -> ()
	 */
	class FString UTextLipSync::GetCurrentPhonemesLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.GetCurrentPhonemesLine");
		
		UTextLipSync_GetCurrentPhonemesLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetActiveMorphTargets
	 * 		Flags  -> ()
	 */
	class FString UTextLipSync::GetActiveMorphTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.GetActiveMorphTargets");
		
		UTextLipSync_GetActiveMorphTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.BuildPhraseData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLipSync_TimedData>                  Subtitles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTextLipSync::BuildPhraseData(TArray<struct FLipSync_TimedData> Subtitles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text2LipSync.TextLipSync.BuildPhraseData");
		
		UTextLipSync_BuildPhraseData_Params params {};
		params.Subtitles = Subtitles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextLipSync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextLipSync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Text2LipSync.TextLipSync");
		return ptr;
	}

}


