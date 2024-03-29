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
	 * 		Name   -> Function PaintBomb-01_BP.PaintBomb-01_BP_C.UpdateFog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Density                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APaintBomb__BP_C::UpdateFog(float Density, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaintBomb-01_BP.PaintBomb-01_BP_C.UpdateFog");
		
		APaintBomb__BP_C_UpdateFog_Params params {};
		params.Density = Density;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaintBomb-01_BP.PaintBomb-01_BP_C.AddDecals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APaintBomb__BP_C::AddDecals(const struct FVector& Location, const struct FVector& Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaintBomb-01_BP.PaintBomb-01_BP_C.AddDecals");
		
		APaintBomb__BP_C_AddDecals_Params params {};
		params.Location = Location;
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaintBomb-01_BP.PaintBomb-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APaintBomb__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaintBomb-01_BP.PaintBomb-01_BP_C.UserConstructionScript");
		
		APaintBomb__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaintBomb-01_BP.PaintBomb-01_BP_C.MistTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APaintBomb__BP_C::MistTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaintBomb-01_BP.PaintBomb-01_BP_C.MistTimeline__FinishedFunc");
		
		APaintBomb__BP_C_MistTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaintBomb-01_BP.PaintBomb-01_BP_C.MistTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APaintBomb__BP_C::MistTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaintBomb-01_BP.PaintBomb-01_BP_C.MistTimeline__UpdateFunc");
		
		APaintBomb__BP_C_MistTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaintBomb-01_BP.PaintBomb-01_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APaintBomb__BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaintBomb-01_BP.PaintBomb-01_BP_C.Timeline_0__FinishedFunc");
		
		APaintBomb__BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaintBomb-01_BP.PaintBomb-01_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APaintBomb__BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaintBomb-01_BP.PaintBomb-01_BP_C.Timeline_0__UpdateFunc");
		
		APaintBomb__BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaintBomb-01_BP.PaintBomb-01_BP_C.Boom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       TriggeringPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APaintBomb__BP_C::Boom(float duration, float Radius, const struct FLinearColor& Color, class APawn* TriggeringPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaintBomb-01_BP.PaintBomb-01_BP_C.Boom");
		
		APaintBomb__BP_C_Boom_Params params {};
		params.duration = duration;
		params.Radius = Radius;
		params.Color = Color;
		params.TriggeringPawn = TriggeringPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaintBomb-01_BP.PaintBomb-01_BP_C.SetDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APaintBomb__BP_C::SetDecal(float duration, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaintBomb-01_BP.PaintBomb-01_BP_C.SetDecal");
		
		APaintBomb__BP_C_SetDecal_Params params {};
		params.duration = duration;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaintBomb-01_BP.PaintBomb-01_BP_C.Mist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APaintBomb__BP_C::Mist(float Time, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaintBomb-01_BP.PaintBomb-01_BP_C.Mist");
		
		APaintBomb__BP_C_Mist_Params params {};
		params.Time = Time;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaintBomb-01_BP.PaintBomb-01_BP_C.ExecuteUbergraph_PaintBomb-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APaintBomb__BP_C::ExecuteUbergraph_PaintBomb__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaintBomb-01_BP.PaintBomb-01_BP_C.ExecuteUbergraph_PaintBomb-01_BP");
		
		APaintBomb__BP_C_ExecuteUbergraph_PaintBomb__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APaintBomb__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APaintBomb__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PaintBomb_01_BP.PaintBomb-01_BP_C");
		return ptr;
	}

}


