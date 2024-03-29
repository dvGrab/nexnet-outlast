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
	 * 		Name   -> Function VoiceChatOverheadWidget.VoiceChatOverheadWidget_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UVoiceChatOverheadWidget_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VoiceChatOverheadWidget.VoiceChatOverheadWidget_C.Event_Refresh");
		
		UVoiceChatOverheadWidget_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VoiceChatOverheadWidget.VoiceChatOverheadWidget_C.ExecuteUbergraph_VoiceChatOverheadWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVoiceChatOverheadWidget_C::ExecuteUbergraph_VoiceChatOverheadWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VoiceChatOverheadWidget.VoiceChatOverheadWidget_C.ExecuteUbergraph_VoiceChatOverheadWidget");
		
		UVoiceChatOverheadWidget_C_ExecuteUbergraph_VoiceChatOverheadWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoiceChatOverheadWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoiceChatOverheadWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VoiceChatOverheadWidget.VoiceChatOverheadWidget_C");
		return ptr;
	}

}


