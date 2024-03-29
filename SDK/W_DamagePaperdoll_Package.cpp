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
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.ApplyDamageState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      InImage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDamagedLimb                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFlashingLimb                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              LimbHealth                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 */
	void UW_DamagePaperdoll_C::ApplyDamageState(class UImage* InImage, bool* bDamagedLimb, bool* bFlashingLimb, float LimbHealth, const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.ApplyDamageState");
		
		UW_DamagePaperdoll_C_ApplyDamageState_Params params {};
		params.InImage = InImage;
		params.LimbHealth = LimbHealth;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDamagedLimb != nullptr)
			*bDamagedLimb = params.bDamagedLimb;
		if (bFlashingLimb != nullptr)
			*bFlashingLimb = params.bFlashingLimb;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.SetLimbDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLimb                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bNewlyDamaged                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_DamagePaperdoll_C::SetLimbDamaged(bool* bLimb, bool* bNewlyDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.SetLimbDamaged");
		
		UW_DamagePaperdoll_C_SetLimbDamaged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLimb != nullptr)
			*bLimb = params.bLimb;
		if (bNewlyDamaged != nullptr)
			*bNewlyDamaged = params.bNewlyDamaged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.UpdatePaperdollPartToHealedColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bRightArm                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LeftArm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Torso                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Head                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Right_Leg                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Left_Leg                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_DamagePaperdoll_C::UpdatePaperdollPartToHealedColor(bool bRightArm, bool LeftArm, bool Torso, bool Head, bool Right_Leg, bool Left_Leg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.UpdatePaperdollPartToHealedColor");
		
		UW_DamagePaperdoll_C_UpdatePaperdollPartToHealedColor_Params params {};
		params.bRightArm = bRightArm;
		params.LeftArm = LeftArm;
		params.Torso = Torso;
		params.Head = Head;
		params.Right_Leg = Right_Leg;
		params.Left_Leg = Left_Leg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.SetDamageState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHeadHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBodyHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftArmHit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRightArmHit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftLegHit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRightLegHit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_DamagePaperdoll_C::SetDamageState(bool bHeadHit, bool bBodyHit, bool bLeftArmHit, bool bRightArmHit, bool bLeftLegHit, bool bRightLegHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.SetDamageState");
		
		UW_DamagePaperdoll_C_SetDamageState_Params params {};
		params.bHeadHit = bHeadHit;
		params.bBodyHit = bBodyHit;
		params.bLeftArmHit = bLeftArmHit;
		params.bRightArmHit = bRightArmHit;
		params.bLeftLegHit = bLeftLegHit;
		params.bRightLegHit = bRightLegHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetTorsoDmgVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_DamagePaperdoll_C::GetTorsoDmgVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetTorsoDmgVisibility");
		
		UW_DamagePaperdoll_C_GetTorsoDmgVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetLegDmgRightVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_DamagePaperdoll_C::GetLegDmgRightVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetLegDmgRightVisibility");
		
		UW_DamagePaperdoll_C_GetLegDmgRightVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetLegDmgLeftVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_DamagePaperdoll_C::GetLegDmgLeftVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetLegDmgLeftVisibility");
		
		UW_DamagePaperdoll_C_GetLegDmgLeftVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetHeadDmgVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_DamagePaperdoll_C::GetHeadDmgVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetHeadDmgVisibility");
		
		UW_DamagePaperdoll_C_GetHeadDmgVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetArmDmgRightVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_DamagePaperdoll_C::GetArmDmgRightVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetArmDmgRightVisibility");
		
		UW_DamagePaperdoll_C_GetArmDmgRightVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetArmDmgLeftVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_DamagePaperdoll_C::GetArmDmgLeftVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetArmDmgLeftVisibility");
		
		UW_DamagePaperdoll_C_GetArmDmgLeftVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Head
	 * 		Flags  -> ()
	 */
	void UW_DamagePaperdoll_C::Stop_Flashing_Head()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Head");
		
		UW_DamagePaperdoll_C_Stop_Flashing_Head_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Left Leg
	 * 		Flags  -> ()
	 */
	void UW_DamagePaperdoll_C::Stop_Flashing_Left_Leg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Left Leg");
		
		UW_DamagePaperdoll_C_Stop_Flashing_Left_Leg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Right Leg
	 * 		Flags  -> ()
	 */
	void UW_DamagePaperdoll_C::Stop_Flashing_Right_Leg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Right Leg");
		
		UW_DamagePaperdoll_C_Stop_Flashing_Right_Leg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Left Arm
	 * 		Flags  -> ()
	 */
	void UW_DamagePaperdoll_C::Stop_Flashing_Left_Arm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Left Arm");
		
		UW_DamagePaperdoll_C_Stop_Flashing_Left_Arm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Right Arm
	 * 		Flags  -> ()
	 */
	void UW_DamagePaperdoll_C::Stop_Flashing_Right_Arm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Right Arm");
		
		UW_DamagePaperdoll_C_Stop_Flashing_Right_Arm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Torso
	 * 		Flags  -> ()
	 */
	void UW_DamagePaperdoll_C::Stop_Flashing_Torso()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Torso");
		
		UW_DamagePaperdoll_C_Stop_Flashing_Torso_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_DamagePaperdoll_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.Tick");
		
		UW_DamagePaperdoll_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_DamagePaperdoll_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.Construct");
		
		UW_DamagePaperdoll_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.OnBodyPartHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Head                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBodyHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Left_Arm                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Right_Arm                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Left_Leg                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Right_Leg                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_DamagePaperdoll_C::OnBodyPartHit(bool Head, bool bBodyHit, bool Left_Arm, bool Right_Arm, bool Left_Leg, bool Right_Leg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.OnBodyPartHit");
		
		UW_DamagePaperdoll_C_OnBodyPartHit_Params params {};
		params.Head = Head;
		params.bBodyHit = bBodyHit;
		params.Left_Arm = Left_Arm;
		params.Right_Arm = Right_Arm;
		params.Left_Leg = Left_Leg;
		params.Right_Leg = Right_Leg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.UpdateHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_DamagePaperdoll_C::UpdateHealth(float Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.UpdateHealth");
		
		UW_DamagePaperdoll_C_UpdateHealth_Params params {};
		params.Health = Health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UW_DamagePaperdoll_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.OnInitialized");
		
		UW_DamagePaperdoll_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.ExecuteUbergraph_W_DamagePaperdoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_DamagePaperdoll_C::ExecuteUbergraph_W_DamagePaperdoll(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DamagePaperdoll.W_DamagePaperdoll_C.ExecuteUbergraph_W_DamagePaperdoll");
		
		UW_DamagePaperdoll_C_ExecuteUbergraph_W_DamagePaperdoll_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_DamagePaperdoll_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_DamagePaperdoll_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_DamagePaperdoll.W_DamagePaperdoll_C");
		return ptr;
	}

}


