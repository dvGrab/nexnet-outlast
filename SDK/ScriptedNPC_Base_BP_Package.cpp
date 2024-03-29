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
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.PlayAnimOnSpecificMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequenceBase*                           Anim                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScriptedNPC_Base_BP_C::PlayAnimOnSpecificMesh(class UAnimSequenceBase* Anim, const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.PlayAnimOnSpecificMesh");
		
		AScriptedNPC_Base_BP_C_PlayAnimOnSpecificMesh_Params params {};
		params.Anim = Anim;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnExitingChanged
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::OnExitingChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnExitingChanged");
		
		AScriptedNPC_Base_BP_C_OnExitingChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.DisableDecalsOnSkelmeshes
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::DisableDecalsOnSkelmeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.DisableDecalsOnSkelmeshes");
		
		AScriptedNPC_Base_BP_C_DisableDecalsOnSkelmeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnRep_Exiting
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::OnRep_Exiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnRep_Exiting");
		
		AScriptedNPC_Base_BP_C_OnRep_Exiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnRep_IsInLoopB
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::OnRep_IsInLoopB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnRep_IsInLoopB");
		
		AScriptedNPC_Base_BP_C_OnRep_IsInLoopB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnRep_hasSentFinished
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::OnRep_hasSentFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnRep_hasSentFinished");
		
		AScriptedNPC_Base_BP_C_OnRep_hasSentFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.NotifyExitFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScriptedNPC_Base_BP_C::NotifyExitFinished(class USkeletalMeshComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.NotifyExitFinished");
		
		AScriptedNPC_Base_BP_C_NotifyExitFinished_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.UserConstructionScript");
		
		AScriptedNPC_Base_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.EnterLoopB
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::EnterLoopB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.EnterLoopB");
		
		AScriptedNPC_Base_BP_C_EnterLoopB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.StartExiting
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::StartExiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.StartExiting");
		
		AScriptedNPC_Base_BP_C_StartExiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.Event_StartedScriptedAnim
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::Event_StartedScriptedAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.Event_StartedScriptedAnim");
		
		AScriptedNPC_Base_BP_C_Event_StartedScriptedAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.Event_OnResetStage");
		
		AScriptedNPC_Base_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.DetachBot
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::DetachBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.DetachBot");
		
		AScriptedNPC_Base_BP_C_DetachBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.DelayedCheckVariables
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::DelayedCheckVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.DelayedCheckVariables");
		
		AScriptedNPC_Base_BP_C_DelayedCheckVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.ReceiveBeginPlay");
		
		AScriptedNPC_Base_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.DelayedStop
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::DelayedStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.DelayedStop");
		
		AScriptedNPC_Base_BP_C_DelayedStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.ExecuteUbergraph_ScriptedNPC_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScriptedNPC_Base_BP_C::ExecuteUbergraph_ScriptedNPC_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.ExecuteUbergraph_ScriptedNPC_Base_BP");
		
		AScriptedNPC_Base_BP_C_ExecuteUbergraph_ScriptedNPC_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AScriptedNPC_Base_BP_C::OnFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C.OnFinished__DelegateSignature");
		
		AScriptedNPC_Base_BP_C_OnFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScriptedNPC_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScriptedNPC_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C");
		return ptr;
	}

}


