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
	 * 		Name   -> Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.HasPlayerInList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Exists                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_AG_AdminGameControls_C::HasPlayerInList(class APlayerState* PlayerState, bool* Exists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.HasPlayerInList");
		
		UW_AG_AdminGameControls_C_HasPlayerInList_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exists != nullptr)
			*Exists = params.Exists;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_AG_AdminGameControls_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.Construct");
		
		UW_AG_AdminGameControls_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.UpdatePlayerList
	 * 		Flags  -> ()
	 */
	void UW_AG_AdminGameControls_C::UpdatePlayerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.UpdatePlayerList");
		
		UW_AG_AdminGameControls_C_UpdatePlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.BndEvt__W_AG_AdminGameControls_W_Button_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AG_AdminGameControls_C::BndEvt__W_AG_AdminGameControls_W_Button_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.BndEvt__W_AG_AdminGameControls_W_Button_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature");
		
		UW_AG_AdminGameControls_C_BndEvt__W_AG_AdminGameControls_W_Button_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.ExecuteUbergraph_W_AG_AdminGameControls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AG_AdminGameControls_C::ExecuteUbergraph_W_AG_AdminGameControls(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AG_AdminGameControls.W_AG_AdminGameControls_C.ExecuteUbergraph_W_AG_AdminGameControls");
		
		UW_AG_AdminGameControls_C_ExecuteUbergraph_W_AG_AdminGameControls_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_AG_AdminGameControls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_AG_AdminGameControls_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_AG_AdminGameControls.W_AG_AdminGameControls_C");
		return ptr;
	}

}


