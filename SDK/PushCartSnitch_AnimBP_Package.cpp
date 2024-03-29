/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UPushCartSnitch_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.AnimGraph");
		
		UPushCartSnitch_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.PlayReaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPushCartSnitch_AnimBP_C::PlayReaction(class UAnimSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.PlayReaction");
		
		UPushCartSnitch_AnimBP_C_PlayReaction_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPushCartSnitch_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.BlueprintUpdateAnimation");
		
		UPushCartSnitch_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.Pawn Pushing Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBBasePushable*                             pushable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBPushableComponent*                        pushableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPushCartSnitch_AnimBP_C::PawnPushingChanged(class ARBBasePushable* pushable, class URBPushableComponent* pushableComponent, class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.Pawn Pushing Changed");
		
		UPushCartSnitch_AnimBP_C_PawnPushingChanged_Params params {};
		params.pushable = pushable;
		params.pushableComponent = pushableComponent;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PushCartSnitch_AnimBP_AnimGraphNode_CopyPoseFromMesh_A4D0B84A40E13C402B1EBDAA2AEDD348
	 * 		Flags  -> ()
	 */
	void UPushCartSnitch_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PushCartSnitch_AnimBP_AnimGraphNode_CopyPoseFromMesh_A4D0B84A40E13C402B1EBDAA2AEDD348()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PushCartSnitch_AnimBP_AnimGraphNode_CopyPoseFromMesh_A4D0B84A40E13C402B1EBDAA2AEDD348");
		
		UPushCartSnitch_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PushCartSnitch_AnimBP_AnimGraphNode_CopyPoseFromMesh_A4D0B84A40E13C402B1EBDAA2AEDD348_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.GetZapped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Intensity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ThisKillsTheMan                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPushCartSnitch_AnimBP_C::GetZapped(float Intensity, bool ThisKillsTheMan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.GetZapped");
		
		UPushCartSnitch_AnimBP_C_GetZapped_Params params {};
		params.Intensity = Intensity;
		params.ThisKillsTheMan = ThisKillsTheMan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.PlayBreaker
	 * 		Flags  -> ()
	 */
	void UPushCartSnitch_AnimBP_C::PlayBreaker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.PlayBreaker");
		
		UPushCartSnitch_AnimBP_C_PlayBreaker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PushCartSnitch_AnimBP_AnimGraphNode_TransitionResult_D4B95FA64DF8947CA137ABB3DC1A0938
	 * 		Flags  -> ()
	 */
	void UPushCartSnitch_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PushCartSnitch_AnimBP_AnimGraphNode_TransitionResult_D4B95FA64DF8947CA137ABB3DC1A0938()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PushCartSnitch_AnimBP_AnimGraphNode_TransitionResult_D4B95FA64DF8947CA137ABB3DC1A0938");
		
		UPushCartSnitch_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PushCartSnitch_AnimBP_AnimGraphNode_TransitionResult_D4B95FA64DF8947CA137ABB3DC1A0938_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UPushCartSnitch_AnimBP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.BlueprintBeginPlay");
		
		UPushCartSnitch_AnimBP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.GetHitByProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBasicDirection                                    Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPushCartSnitch_AnimBP_C::GetHitByProjectile(EBasicDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.GetHitByProjectile");
		
		UPushCartSnitch_AnimBP_C_GetHitByProjectile_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.OnStartOrStopMoving_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMoving                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPushCartSnitch_AnimBP_C::OnStartOrStopMoving_Event_1(bool IsMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.OnStartOrStopMoving_Event_1");
		
		UPushCartSnitch_AnimBP_C_OnStartOrStopMoving_Event_1_Params params {};
		params.IsMoving = IsMoving;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.ExecuteUbergraph_PushCartSnitch_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPushCartSnitch_AnimBP_C::ExecuteUbergraph_PushCartSnitch_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.ExecuteUbergraph_PushCartSnitch_AnimBP");
		
		UPushCartSnitch_AnimBP_C_ExecuteUbergraph_PushCartSnitch_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPushCartSnitch_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPushCartSnitch_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C");
		return ptr;
	}

}


