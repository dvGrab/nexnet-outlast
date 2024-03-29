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
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.GetVoteNo_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_VotePopUp_C::GetVoteNo_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.GetVoteNo_Visibility");
		
		UW_VotePopUp_C_GetVoteNo_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.CanVoteNo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_VotePopUp_C::CanVoteNo(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.CanVoteNo");
		
		UW_VotePopUp_C_CanVoteNo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.GetVoteNoKeyBinding
	 * 		Flags  -> ()
	 */
	class FText UW_VotePopUp_C::GetVoteNoKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.GetVoteNoKeyBinding");
		
		UW_VotePopUp_C_GetVoteNoKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.GetVoteYesKeyBinding
	 * 		Flags  -> ()
	 */
	class FText UW_VotePopUp_C::GetVoteYesKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.GetVoteYesKeyBinding");
		
		UW_VotePopUp_C_GetVoteYesKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.GetVoteQuestion
	 * 		Flags  -> ()
	 */
	class FText UW_VotePopUp_C::GetVoteQuestion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.GetVoteQuestion");
		
		UW_VotePopUp_C_GetVoteQuestion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.GetText_5
	 * 		Flags  -> ()
	 */
	class FText UW_VotePopUp_C::GetText_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.GetText_5");
		
		UW_VotePopUp_C_GetText_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.GetNoVotes
	 * 		Flags  -> ()
	 */
	class FText UW_VotePopUp_C::GetNoVotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.GetNoVotes");
		
		UW_VotePopUp_C_GetNoVotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.GetYesVotes
	 * 		Flags  -> ()
	 */
	class FText UW_VotePopUp_C::GetYesVotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.GetYesVotes");
		
		UW_VotePopUp_C_GetYesVotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.GetVoteVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_VotePopUp_C::GetVoteVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.GetVoteVisibility");
		
		UW_VotePopUp_C_GetVoteVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.GetbIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UW_VotePopUp_C::GetbIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.GetbIsEnabled_1");
		
		UW_VotePopUp_C_GetbIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.GetText_2
	 * 		Flags  -> ()
	 */
	class FText UW_VotePopUp_C::GetText_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.GetText_2");
		
		UW_VotePopUp_C_GetText_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.VoteNo_Visibility_3
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_VotePopUp_C::VoteNo_Visibility_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.VoteNo_Visibility_3");
		
		UW_VotePopUp_C_VoteNo_Visibility_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.VoteNo_Visibility_2
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_VotePopUp_C::VoteNo_Visibility_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.VoteNo_Visibility_2");
		
		UW_VotePopUp_C_VoteNo_Visibility_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.VoteReason
	 * 		Flags  -> ()
	 */
	class FText UW_VotePopUp_C::VoteReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.VoteReason");
		
		UW_VotePopUp_C_VoteReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_VotePopUp_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.Construct");
		
		UW_VotePopUp_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.StartVote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        VoteReason                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        VoteQuestion                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_VotePopUp_C::StartVote(const class FText& VoteReason, const class FText& VoteQuestion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.StartVote");
		
		UW_VotePopUp_C_StartVote_Params params {};
		params.VoteReason = VoteReason;
		params.VoteQuestion = VoteQuestion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.VoteEnd
	 * 		Flags  -> ()
	 */
	void UW_VotePopUp_C::VoteEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.VoteEnd");
		
		UW_VotePopUp_C_VoteEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_VotePopUp.W_VotePopUp_C.ExecuteUbergraph_W_VotePopUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_VotePopUp_C::ExecuteUbergraph_W_VotePopUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_VotePopUp.W_VotePopUp_C.ExecuteUbergraph_W_VotePopUp");
		
		UW_VotePopUp_C_ExecuteUbergraph_W_VotePopUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_VotePopUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_VotePopUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_VotePopUp.W_VotePopUp_C");
		return ptr;
	}

}


