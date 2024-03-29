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
	 * 		Name   -> Function ReturningToSleepRoomPendingWidget.ReturningToSleepRoomPendingWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UReturningToSleepRoomPendingWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReturningToSleepRoomPendingWidget.ReturningToSleepRoomPendingWidget_C.Construct");
		
		UReturningToSleepRoomPendingWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReturningToSleepRoomPendingWidget.ReturningToSleepRoomPendingWidget_C.ExecuteUbergraph_ReturningToSleepRoomPendingWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UReturningToSleepRoomPendingWidget_C::ExecuteUbergraph_ReturningToSleepRoomPendingWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReturningToSleepRoomPendingWidget.ReturningToSleepRoomPendingWidget_C.ExecuteUbergraph_ReturningToSleepRoomPendingWidget");
		
		UReturningToSleepRoomPendingWidget_C_ExecuteUbergraph_ReturningToSleepRoomPendingWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReturningToSleepRoomPendingWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReturningToSleepRoomPendingWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReturningToSleepRoomPendingWidget.ReturningToSleepRoomPendingWidget_C");
		return ptr;
	}

}


