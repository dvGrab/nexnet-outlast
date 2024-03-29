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
	 * 		Name   -> Function W_SwatCommandMain.W_SwatCommandMain_C.Get_Back_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_SwatCommandMain_C::Get_Back_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SwatCommandMain.W_SwatCommandMain_C.Get_Back_Visibility_1");
		
		UW_SwatCommandMain_C_Get_Back_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandMain.W_SwatCommandMain_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SwatCommandMain_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SwatCommandMain.W_SwatCommandMain_C.Tick");
		
		UW_SwatCommandMain_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandMain.W_SwatCommandMain_C.OnPageViewUpdate
	 * 		Flags  -> ()
	 */
	void UW_SwatCommandMain_C::OnPageViewUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SwatCommandMain.W_SwatCommandMain_C.OnPageViewUpdate");
		
		UW_SwatCommandMain_C_OnPageViewUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandMain.W_SwatCommandMain_C.ExecuteUbergraph_W_SwatCommandMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SwatCommandMain_C::ExecuteUbergraph_W_SwatCommandMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SwatCommandMain.W_SwatCommandMain_C.ExecuteUbergraph_W_SwatCommandMain");
		
		UW_SwatCommandMain_C_ExecuteUbergraph_W_SwatCommandMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_SwatCommandMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_SwatCommandMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SwatCommandMain.W_SwatCommandMain_C");
		return ptr;
	}

}


