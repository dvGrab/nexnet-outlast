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
	 * 		Name   -> Function W_MinimizedBriefing.W_MinimizedBriefing_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_MinimizedBriefing_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimizedBriefing.W_MinimizedBriefing_C.Construct");
		
		UW_MinimizedBriefing_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MinimizedBriefing.W_MinimizedBriefing_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMissionAudio                               MissionAudio                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<float, struct FTimelineEvent>                 EventEntries                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_MinimizedBriefing_C::Initialize(const struct FMissionAudio& MissionAudio, TMap<float, struct FTimelineEvent> EventEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimizedBriefing.W_MinimizedBriefing_C.Initialize");
		
		UW_MinimizedBriefing_C_Initialize_Params params {};
		params.MissionAudio = MissionAudio;
		params.EventEntries = EventEntries;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MinimizedBriefing.W_MinimizedBriefing_C.ExecuteUbergraph_W_MinimizedBriefing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MinimizedBriefing_C::ExecuteUbergraph_W_MinimizedBriefing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MinimizedBriefing.W_MinimizedBriefing_C.ExecuteUbergraph_W_MinimizedBriefing");
		
		UW_MinimizedBriefing_C_ExecuteUbergraph_W_MinimizedBriefing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_MinimizedBriefing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_MinimizedBriefing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MinimizedBriefing.W_MinimizedBriefing_C");
		return ptr;
	}

}


