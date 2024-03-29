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
	 * 		Name   -> Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnChallengeInit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotGameState*                        gs                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_ArrestSomeone_C::OnChallengeInit(class AReadyOrNotGameState* gs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnChallengeInit");
		
		UChallenge_ArrestSomeone_C_OnChallengeInit_Params params {};
		params.gs = gs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnCharacterArrested
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        ArrestedCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AReadyOrNotCharacter*                        Arrester                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_ArrestSomeone_C::OnCharacterArrested(class AReadyOrNotCharacter* ArrestedCharacter, class AReadyOrNotCharacter* Arrester)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnCharacterArrested");
		
		UChallenge_ArrestSomeone_C_OnCharacterArrested_Params params {};
		params.ArrestedCharacter = ArrestedCharacter;
		params.Arrester = Arrester;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnChallengeAchieved
	 * 		Flags  -> ()
	 */
	void UChallenge_ArrestSomeone_C::OnChallengeAchieved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnChallengeAchieved");
		
		UChallenge_ArrestSomeone_C_OnChallengeAchieved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.ExecuteUbergraph_Challenge_ArrestSomeone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_ArrestSomeone_C::ExecuteUbergraph_Challenge_ArrestSomeone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.ExecuteUbergraph_Challenge_ArrestSomeone");
		
		UChallenge_ArrestSomeone_C_ExecuteUbergraph_Challenge_ArrestSomeone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallenge_ArrestSomeone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_ArrestSomeone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_ArrestSomeone.Challenge_ArrestSomeone_C");
		return ptr;
	}

}


