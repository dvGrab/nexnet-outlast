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
	 * 		Name   -> Function Library_UI_BriefingFunctions.Library_UI_BriefingFunctions_C.GetTimelineEventTestData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundWave*                                  Audio_Asset                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTimelineEvent>                      Events                                                     (Parm, OutParm)
	 * 		TMap<float, struct FTimelineEvent>                 EventEntries                                               (Parm, OutParm)
	 */
	void ULibrary_UI_BriefingFunctions_C::GetTimelineEventTestData(class UObject* __WorldContext, class USoundWave** Audio_Asset, TArray<struct FTimelineEvent>* Events, TMap<float, struct FTimelineEvent>* EventEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Library_UI_BriefingFunctions.Library_UI_BriefingFunctions_C.GetTimelineEventTestData");
		
		ULibrary_UI_BriefingFunctions_C_GetTimelineEventTestData_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Audio_Asset != nullptr)
			*Audio_Asset = params.Audio_Asset;
		if (Events != nullptr)
			*Events = params.Events;
		if (EventEntries != nullptr)
			*EventEntries = params.EventEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibrary_UI_BriefingFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibrary_UI_BriefingFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Library_UI_BriefingFunctions.Library_UI_BriefingFunctions_C");
		return ptr;
	}

}


