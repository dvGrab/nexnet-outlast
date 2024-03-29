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
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.SetHasBarsInFront
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APushable_OnRail_Snitch_BP_C::SetHasBarsInFront(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.SetHasBarsInFront");
		
		APushable_OnRail_Snitch_BP_C_SetHasBarsInFront_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.OnRep_HasBarsInFront
	 * 		Flags  -> ()
	 */
	void APushable_OnRail_Snitch_BP_C::OnRep_HasBarsInFront()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.OnRep_HasBarsInFront");
		
		APushable_OnRail_Snitch_BP_C_OnRep_HasBarsInFront_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.GetHitDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ImpactDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBasicDirection                                    Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_Snitch_BP_C::GetHitDirection(const struct FVector& ImpactDirection, EBasicDirection* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.GetHitDirection");
		
		APushable_OnRail_Snitch_BP_C_GetHitDirection_Params params {};
		params.ImpactDirection = ImpactDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.ConstructWheelMeshesList
	 * 		Flags  -> ()
	 */
	void APushable_OnRail_Snitch_BP_C::ConstructWheelMeshesList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.ConstructWheelMeshesList");
		
		APushable_OnRail_Snitch_BP_C_ConstructWheelMeshesList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.OnRep_RTPC_Snitch_Breath_Intensity
	 * 		Flags  -> ()
	 */
	void APushable_OnRail_Snitch_BP_C::OnRep_RTPC_Snitch_Breath_Intensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.OnRep_RTPC_Snitch_Breath_Intensity");
		
		APushable_OnRail_Snitch_BP_C_OnRep_RTPC_Snitch_Breath_Intensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.Set Snitch Breath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BreathIntensity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_Snitch_BP_C::SetSnitchBreath(float BreathIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.Set Snitch Breath");
		
		APushable_OnRail_Snitch_BP_C_SetSnitchBreath_Params params {};
		params.BreathIntensity = BreathIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.SetAgitationLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESnitchAgitation                                   Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_Snitch_BP_C::SetAgitationLevel(ESnitchAgitation Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.SetAgitationLevel");
		
		APushable_OnRail_Snitch_BP_C_SetAgitationLevel_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.PlayAnimationOnSnitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_Snitch_BP_C::PlayAnimationOnSnitch(class UAnimSequence* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.PlayAnimationOnSnitch");
		
		APushable_OnRail_Snitch_BP_C_PlayAnimationOnSnitch_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.DetachFromScriptedEvent
	 * 		Flags  -> ()
	 */
	void APushable_OnRail_Snitch_BP_C::DetachFromScriptedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.DetachFromScriptedEvent");
		
		APushable_OnRail_Snitch_BP_C_DetachFromScriptedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.AttachToScriptedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASE_T02_Torturing_BP_C*                      ScriptedEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_Snitch_BP_C::AttachToScriptedEvent(class ASE_T02_Torturing_BP_C* ScriptedEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.AttachToScriptedEvent");
		
		APushable_OnRail_Snitch_BP_C_AttachToScriptedEvent_Params params {};
		params.ScriptedEvent = ScriptedEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APushable_OnRail_Snitch_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.UserConstructionScript");
		
		APushable_OnRail_Snitch_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.BndEvt__Pushable_OnRail_Snitch_BP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APushable_OnRail_Snitch_BP_C::BndEvt__Pushable_OnRail_Snitch_BP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.BndEvt__Pushable_OnRail_Snitch_BP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
		APushable_OnRail_Snitch_BP_C_BndEvt__Pushable_OnRail_Snitch_BP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.BndEvt__Pushable_OnRail_Snitch_BP_CoyleSensor_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_Snitch_BP_C::BndEvt__Pushable_OnRail_Snitch_BP_CoyleSensor_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.BndEvt__Pushable_OnRail_Snitch_BP_CoyleSensor_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");
		
		APushable_OnRail_Snitch_BP_C_BndEvt__Pushable_OnRail_Snitch_BP_CoyleSensor_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APushable_OnRail_Snitch_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.ReceiveBeginPlay");
		
		APushable_OnRail_Snitch_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.fryed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FryedLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_Snitch_BP_C::fryed(float FryedLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.fryed");
		
		APushable_OnRail_Snitch_BP_C_fryed_Params params {};
		params.FryedLevel = FryedLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.PlayNextVOBreaker
	 * 		Flags  -> ()
	 */
	void APushable_OnRail_Snitch_BP_C::PlayNextVOBreaker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.PlayNextVOBreaker");
		
		APushable_OnRail_Snitch_BP_C_PlayNextVOBreaker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.BndEvt__Pushable_OnRail_Snitch_BP_RBDamageable_K2Node_ComponentBoundEvent_1_OnDamageableReset__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBDamageableComponent*                      DamageableComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_Snitch_BP_C::BndEvt__Pushable_OnRail_Snitch_BP_RBDamageable_K2Node_ComponentBoundEvent_1_OnDamageableReset__DelegateSignature(class URBDamageableComponent* DamageableComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.BndEvt__Pushable_OnRail_Snitch_BP_RBDamageable_K2Node_ComponentBoundEvent_1_OnDamageableReset__DelegateSignature");
		
		APushable_OnRail_Snitch_BP_C_BndEvt__Pushable_OnRail_Snitch_BP_RBDamageable_K2Node_ComponentBoundEvent_1_OnDamageableReset__DelegateSignature_Params params {};
		params.DamageableComponent = DamageableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.Event_OnCanBePushedChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               canBePushed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APushable_OnRail_Snitch_BP_C::Event_OnCanBePushedChanged(bool canBePushed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.Event_OnCanBePushedChanged");
		
		APushable_OnRail_Snitch_BP_C_Event_OnCanBePushedChanged_Params params {};
		params.canBePushed = canBePushed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.Multicast_HitReaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBasicDirection                                    Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_Snitch_BP_C::Multicast_HitReaction(EBasicDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.Multicast_HitReaction");
		
		APushable_OnRail_Snitch_BP_C_Multicast_HitReaction_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.ExecuteUbergraph_Pushable_OnRail_Snitch_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_Snitch_BP_C::ExecuteUbergraph_Pushable_OnRail_Snitch_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.ExecuteUbergraph_Pushable_OnRail_Snitch_BP");
		
		APushable_OnRail_Snitch_BP_C_ExecuteUbergraph_Pushable_OnRail_Snitch_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.OnHitByProjectile__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBasicDirection                                    Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APushable_OnRail_Snitch_BP_C::OnHitByProjectile__DelegateSignature(EBasicDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C.OnHitByProjectile__DelegateSignature");
		
		APushable_OnRail_Snitch_BP_C_OnHitByProjectile__DelegateSignature_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APushable_OnRail_Snitch_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APushable_OnRail_Snitch_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Pushable_OnRail_Snitch_BP.Pushable_OnRail_Snitch_BP_C");
		return ptr;
	}

}


