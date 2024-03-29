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
	 * 		Name   -> Function PhotoFinishOverheadWidget.PhotoFinishOverheadWidget_C.SetName
	 * 		Flags  -> ()
	 */
	void UPhotoFinishOverheadWidget_C::SetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishOverheadWidget.PhotoFinishOverheadWidget_C.SetName");
		
		UPhotoFinishOverheadWidget_C_SetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishOverheadWidget.PhotoFinishOverheadWidget_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UPhotoFinishOverheadWidget_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishOverheadWidget.PhotoFinishOverheadWidget_C.Event_Refresh");
		
		UPhotoFinishOverheadWidget_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinishOverheadWidget.PhotoFinishOverheadWidget_C.ExecuteUbergraph_PhotoFinishOverheadWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoFinishOverheadWidget_C::ExecuteUbergraph_PhotoFinishOverheadWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinishOverheadWidget.PhotoFinishOverheadWidget_C.ExecuteUbergraph_PhotoFinishOverheadWidget");
		
		UPhotoFinishOverheadWidget_C_ExecuteUbergraph_PhotoFinishOverheadWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoFinishOverheadWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoFinishOverheadWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PhotoFinishOverheadWidget.PhotoFinishOverheadWidget_C");
		return ptr;
	}

}


