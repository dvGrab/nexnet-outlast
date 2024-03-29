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
	 * 		Name   -> Function FriendsList.FriendsList_C.RemoveNonExistentFriendWidgets
	 * 		Flags  -> ()
	 */
	void UFriendsList_C::RemoveNonExistentFriendWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList.FriendsList_C.RemoveNonExistentFriendWidgets");
		
		UFriendsList_C_RemoveNonExistentFriendWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList.FriendsList_C.DoesFriendExistAlready
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFriend                                     TestFriend                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Exists                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Idx                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFriendsList_C::DoesFriendExistAlready(const struct FFriend& TestFriend, bool* Exists, int32_t* Idx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList.FriendsList_C.DoesFriendExistAlready");
		
		UFriendsList_C_DoesFriendExistAlready_Params params {};
		params.TestFriend = TestFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exists != nullptr)
			*Exists = params.Exists;
		if (Idx != nullptr)
			*Idx = params.Idx;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList.FriendsList_C.GetNoFriendsPlayingText
	 * 		Flags  -> ()
	 */
	ESlateVisibility UFriendsList_C::GetNoFriendsPlayingText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList.FriendsList_C.GetNoFriendsPlayingText");
		
		UFriendsList_C_GetNoFriendsPlayingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList.FriendsList_C.Construct
	 * 		Flags  -> ()
	 */
	void UFriendsList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList.FriendsList_C.Construct");
		
		UFriendsList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList.FriendsList_C.OnSuccess_Event_1
	 * 		Flags  -> ()
	 */
	void UFriendsList_C::OnSuccess_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList.FriendsList_C.OnSuccess_Event_1");
		
		UFriendsList_C_OnSuccess_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList.FriendsList_C.OnFailure_Event_1
	 * 		Flags  -> ()
	 */
	void UFriendsList_C::OnFailure_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList.FriendsList_C.OnFailure_Event_1");
		
		UFriendsList_C_OnFailure_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList.FriendsList_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UFriendsList_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList.FriendsList_C.CustomEvent_1");
		
		UFriendsList_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList.FriendsList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFriendsList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList.FriendsList_C.PreConstruct");
		
		UFriendsList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList.FriendsList_C.ExecuteUbergraph_FriendsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFriendsList_C::ExecuteUbergraph_FriendsList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendsList.FriendsList_C.ExecuteUbergraph_FriendsList");
		
		UFriendsList_C_ExecuteUbergraph_FriendsList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFriendsList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFriendsList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendsList.FriendsList_C");
		return ptr;
	}

}


