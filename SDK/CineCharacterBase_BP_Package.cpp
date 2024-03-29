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
	 * 		Name   -> Function CineCharacterBase_BP.CineCharacterBase_BP_C.SetPreviewSequenceData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               Anim                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACineCharacterBase_BP_C::SetPreviewSequenceData(class UAnimSequence* Anim, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineCharacterBase_BP.CineCharacterBase_BP_C.SetPreviewSequenceData");
		
		ACineCharacterBase_BP_C_SetPreviewSequenceData_Params params {};
		params.Anim = Anim;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CineCharacterBase_BP.CineCharacterBase_BP_C.PreviewSequence
	 * 		Flags  -> ()
	 */
	void ACineCharacterBase_BP_C::PreviewSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineCharacterBase_BP.CineCharacterBase_BP_C.PreviewSequence");
		
		ACineCharacterBase_BP_C_PreviewSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CineCharacterBase_BP.CineCharacterBase_BP_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void ACineCharacterBase_BP_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineCharacterBase_BP.CineCharacterBase_BP_C.NewFunction_1");
		
		ACineCharacterBase_BP_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CineCharacterBase_BP.CineCharacterBase_BP_C.Play
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimationAsset*                             NewAnimToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACineCharacterBase_BP_C::Play(class UAnimationAsset* NewAnimToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineCharacterBase_BP.CineCharacterBase_BP_C.Play");
		
		ACineCharacterBase_BP_C_Play_Params params {};
		params.NewAnimToPlay = NewAnimToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CineCharacterBase_BP.CineCharacterBase_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACineCharacterBase_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineCharacterBase_BP.CineCharacterBase_BP_C.ReceiveBeginPlay");
		
		ACineCharacterBase_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CineCharacterBase_BP.CineCharacterBase_BP_C.OnAsyncDataLoaded_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBTrialAsyncData*                           asyncData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACineCharacterBase_BP_C::OnAsyncDataLoaded_Event_1(class URBTrialAsyncData* asyncData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineCharacterBase_BP.CineCharacterBase_BP_C.OnAsyncDataLoaded_Event_1");
		
		ACineCharacterBase_BP_C_OnAsyncDataLoaded_Event_1_Params params {};
		params.asyncData = asyncData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CineCharacterBase_BP.CineCharacterBase_BP_C.ExecuteUbergraph_CineCharacterBase_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACineCharacterBase_BP_C::ExecuteUbergraph_CineCharacterBase_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CineCharacterBase_BP.CineCharacterBase_BP_C.ExecuteUbergraph_CineCharacterBase_BP");
		
		ACineCharacterBase_BP_C_ExecuteUbergraph_CineCharacterBase_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACineCharacterBase_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACineCharacterBase_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CineCharacterBase_BP.CineCharacterBase_BP_C");
		return ptr;
	}

}


