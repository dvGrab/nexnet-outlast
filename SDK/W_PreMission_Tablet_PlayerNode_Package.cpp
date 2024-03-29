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
	 * 		Name   -> Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PreMission_Tablet_PlayerNode_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.PreConstruct");
		
		UW_PreMission_Tablet_PlayerNode_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.SetupWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_Tablet_PlayerNode_C::SetupWidget(int32_t NewParam, const struct FLinearColor& NewParam2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.SetupWidget");
		
		UW_PreMission_Tablet_PlayerNode_C_SetupWidget_Params params {};
		params.NewParam = NewParam;
		params.NewParam2 = NewParam2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.ExecuteUbergraph_W_PreMission_Tablet_PlayerNode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PreMission_Tablet_PlayerNode_C::ExecuteUbergraph_W_PreMission_Tablet_PlayerNode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.ExecuteUbergraph_W_PreMission_Tablet_PlayerNode");
		
		UW_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PreMission_Tablet_PlayerNode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PreMission_Tablet_PlayerNode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C");
		return ptr;
	}

}


