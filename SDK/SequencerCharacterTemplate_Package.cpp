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
	 * 		Name   -> Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.EquipLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               SavedLoadout                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AReadyOrNotPlayerState*                      PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASequencerCharacterTemplate_C::EquipLoadout(const struct FSavedLoadout& SavedLoadout, class AReadyOrNotPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.EquipLoadout");
		
		ASequencerCharacterTemplate_C_EquipLoadout_Params params {};
		params.SavedLoadout = SavedLoadout;
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASequencerCharacterTemplate_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.UserConstructionScript");
		
		ASequencerCharacterTemplate_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASequencerCharacterTemplate_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.ReceiveBeginPlay");
		
		ASequencerCharacterTemplate_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASequencerCharacterTemplate_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.ReceiveTick");
		
		ASequencerCharacterTemplate_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.OnSequenceStarted_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequence*                              LevelSequence                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASequencerCharacterTemplate_C::OnSequenceStarted_Event_1(class ULevelSequence* LevelSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.OnSequenceStarted_Event_1");
		
		ASequencerCharacterTemplate_C_OnSequenceStarted_Event_1_Params params {};
		params.LevelSequence = LevelSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.ExecuteUbergraph_SequencerCharacterTemplate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASequencerCharacterTemplate_C::ExecuteUbergraph_SequencerCharacterTemplate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.ExecuteUbergraph_SequencerCharacterTemplate");
		
		ASequencerCharacterTemplate_C_ExecuteUbergraph_SequencerCharacterTemplate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASequencerCharacterTemplate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASequencerCharacterTemplate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SequencerCharacterTemplate.SequencerCharacterTemplate_C");
		return ptr;
	}

}


