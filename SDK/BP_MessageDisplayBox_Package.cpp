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
	 * 		Name   -> Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Get_MessageTxt_Text_1
	 * 		Flags  -> ()
	 */
	class FText UBP_MessageDisplayBox_C::Get_MessageTxt_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Get_MessageTxt_Text_1");
		
		UBP_MessageDisplayBox_C_Get_MessageTxt_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UBP_MessageDisplayBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Construct");
		
		UBP_MessageDisplayBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MessageDisplayBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Tick");
		
		UBP_MessageDisplayBox_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.OnClicked_Event_1
	 * 		Flags  -> ()
	 */
	void UBP_MessageDisplayBox_C::OnClicked_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.OnClicked_Event_1");
		
		UBP_MessageDisplayBox_C_OnClicked_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBP_MessageDisplayBox_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Destruct");
		
		UBP_MessageDisplayBox_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.OnClicked_Event_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MessageDisplayBox_C::OnClicked_Event_2(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.OnClicked_Event_2");
		
		UBP_MessageDisplayBox_C_OnClicked_Event_2_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.ExecuteUbergraph_BP_MessageDisplayBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MessageDisplayBox_C::ExecuteUbergraph_BP_MessageDisplayBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.ExecuteUbergraph_BP_MessageDisplayBox");
		
		UBP_MessageDisplayBox_C_ExecuteUbergraph_BP_MessageDisplayBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MessageDisplayBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MessageDisplayBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MessageDisplayBox.BP_MessageDisplayBox_C");
		return ptr;
	}

}


