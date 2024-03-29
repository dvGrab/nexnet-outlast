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
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.GetColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UFriendsList_Entry_C::GetColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList_Entry.FriendsList_Entry_C.GetColorAndOpacity_1");
		
		UFriendsList_Entry_C_GetColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.OnFailure_1CE6F80B4BD85FF7DCF8B89490FF4D7A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             SessionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFriendsList_Entry_C::OnFailure_1CE6F80B4BD85FF7DCF8B89490FF4D7A(TArray<struct FBlueprintSessionResult> SessionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList_Entry.FriendsList_Entry_C.OnFailure_1CE6F80B4BD85FF7DCF8B89490FF4D7A");
		
		UFriendsList_Entry_C_OnFailure_1CE6F80B4BD85FF7DCF8B89490FF4D7A_Params params {};
		params.SessionInfo = SessionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.OnSuccess_1CE6F80B4BD85FF7DCF8B89490FF4D7A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             SessionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFriendsList_Entry_C::OnSuccess_1CE6F80B4BD85FF7DCF8B89490FF4D7A(TArray<struct FBlueprintSessionResult> SessionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList_Entry.FriendsList_Entry_C.OnSuccess_1CE6F80B4BD85FF7DCF8B89490FF4D7A");
		
		UFriendsList_Entry_C_OnSuccess_1CE6F80B4BD85FF7DCF8B89490FF4D7A_Params params {};
		params.SessionInfo = SessionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.OnFailure_FCAA6E28485271A328483F824CE7E440
	 * 		Flags  -> ()
	 */
	void UFriendsList_Entry_C::OnFailure_FCAA6E28485271A328483F824CE7E440()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList_Entry.FriendsList_Entry_C.OnFailure_FCAA6E28485271A328483F824CE7E440");
		
		UFriendsList_Entry_C_OnFailure_FCAA6E28485271A328483F824CE7E440_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.OnSuccess_FCAA6E28485271A328483F824CE7E440
	 * 		Flags  -> ()
	 */
	void UFriendsList_Entry_C::OnSuccess_FCAA6E28485271A328483F824CE7E440()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList_Entry.FriendsList_Entry_C.OnSuccess_FCAA6E28485271A328483F824CE7E440");
		
		UFriendsList_Entry_C_OnSuccess_FCAA6E28485271A328483F824CE7E440_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UFriendsList_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList_Entry.FriendsList_Entry_C.Construct");
		
		UFriendsList_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFriendsList_Entry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList_Entry.FriendsList_Entry_C.Tick");
		
		UFriendsList_Entry_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.RefreshFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFriend                                     Friend                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFriendsList_Entry_C::RefreshFriend(const struct FFriend& Friend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList_Entry.FriendsList_Entry_C.RefreshFriend");
		
		UFriendsList_Entry_C_RefreshFriend_Params params {};
		params.Friend = Friend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFriendsList_Entry_C::BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList_Entry.FriendsList_Entry_C.BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");
		
		UFriendsList_Entry_C_BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.ExecuteUbergraph_FriendsList_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFriendsList_Entry_C::ExecuteUbergraph_FriendsList_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList_Entry.FriendsList_Entry_C.ExecuteUbergraph_FriendsList_Entry");
		
		UFriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFriendsList_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFriendsList_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendsList_Entry.FriendsList_Entry_C");
		return ptr;
	}

}


