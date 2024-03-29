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
	 * 		Name   -> Function GlobalFunctions.GlobalFunctions_C.GetRandomItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              ItemList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      newItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalFunctions_C::GetRandomItem(class AActor* Item, TArray<class AActor*>* ItemList, class UObject* __WorldContext, class AActor** newItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalFunctions.GlobalFunctions_C.GetRandomItem");
		
		UGlobalFunctions_C_GetRandomItem_Params params {};
		params.Item = Item;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemList != nullptr)
			*ItemList = params.ItemList;
		if (newItem != nullptr)
			*newItem = params.newItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalFunctions.GlobalFunctions_C.GetActorsDistance2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalFunctions_C::GetActorsDistance2D(class AActor* Actor1, class AActor* Actor2, class UObject* __WorldContext, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalFunctions.GlobalFunctions_C.GetActorsDistance2D");
		
		UGlobalFunctions_C_GetActorsDistance2D_Params params {};
		params.Actor1 = Actor1;
		params.Actor2 = Actor2;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalFunctions.GlobalFunctions_C.GetActorsWithinConeAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Targets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm)
	 */
	void UGlobalFunctions_C::GetActorsWithinConeAngle(TArray<class AActor*>* Targets, class AActor* Source, float Angle, class UObject* __WorldContext, TArray<class AActor*>* Actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalFunctions.GlobalFunctions_C.GetActorsWithinConeAngle");
		
		UGlobalFunctions_C_GetActorsWithinConeAngle_Params params {};
		params.Source = Source;
		params.Angle = Angle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Targets != nullptr)
			*Targets = params.Targets;
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalFunctions.GlobalFunctions_C.GetActorsWithinRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Targets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm)
	 */
	void UGlobalFunctions_C::GetActorsWithinRadius(TArray<class AActor*>* Targets, class AActor* Source, float Radius, class UObject* __WorldContext, TArray<class AActor*>* Actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalFunctions.GlobalFunctions_C.GetActorsWithinRadius");
		
		UGlobalFunctions_C_GetActorsWithinRadius_Params params {};
		params.Source = Source;
		params.Radius = Radius;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Targets != nullptr)
			*Targets = params.Targets;
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalFunctions.GlobalFunctions_C.GetClosestActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              TargetActors                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bFarthest                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ClosestActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalFunctions_C::GetClosestActor(class AActor* SourceActor, TArray<class AActor*>* TargetActors, bool bFarthest, class UObject* __WorldContext, class AActor** ClosestActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalFunctions.GlobalFunctions_C.GetClosestActor");
		
		UGlobalFunctions_C_GetClosestActor_Params params {};
		params.SourceActor = SourceActor;
		params.bFarthest = bFarthest;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetActors != nullptr)
			*TargetActors = params.TargetActors;
		if (ClosestActor != nullptr)
			*ClosestActor = params.ClosestActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalFunctions.GlobalFunctions_C.GetActorsDistance3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalFunctions_C::GetActorsDistance3D(class AActor* Actor1, class AActor* Actor2, class UObject* __WorldContext, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalFunctions.GlobalFunctions_C.GetActorsDistance3D");
		
		UGlobalFunctions_C_GetActorsDistance3D_Params params {};
		params.Actor1 = Actor1;
		params.Actor2 = Actor2;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalFunctions.GlobalFunctions_C.GiveSeparateIntFromTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Number1                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Number2                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Number3                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Number4                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalFunctions_C::GiveSeparateIntFromTime(int32_t Time, class UObject* __WorldContext, int32_t* Number1, int32_t* Number2, int32_t* Number3, int32_t* Number4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalFunctions.GlobalFunctions_C.GiveSeparateIntFromTime");
		
		UGlobalFunctions_C_GiveSeparateIntFromTime_Params params {};
		params.Time = Time;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Number1 != nullptr)
			*Number1 = params.Number1;
		if (Number2 != nullptr)
			*Number2 = params.Number2;
		if (Number3 != nullptr)
			*Number3 = params.Number3;
		if (Number4 != nullptr)
			*Number4 = params.Number4;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalFunctions.GlobalFunctions_C.SetInteractiveReferenceMeshMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        NewStaticmeshComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class UStaticMeshComponent*                        RefStaticMeshComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalFunctions_C::SetInteractiveReferenceMeshMaterials(class UStaticMeshComponent* NewStaticmeshComponent, const struct FTransform& Transform, class UStaticMeshComponent* RefStaticMeshComponent, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalFunctions.GlobalFunctions_C.SetInteractiveReferenceMeshMaterials");
		
		UGlobalFunctions_C_SetInteractiveReferenceMeshMaterials_Params params {};
		params.NewStaticmeshComponent = NewStaticmeshComponent;
		params.Transform = Transform;
		params.RefStaticMeshComponent = RefStaticMeshComponent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalFunctions.GlobalFunctions_C.CanWeaponApplyDamageType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDamageByFists                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDamageBySlash                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDamageByChop                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDamageByLightBlunt                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDamageByHeavyBlunt                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EWeaponType                                        weaponType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGlobalFunctions_C::CanWeaponApplyDamageType(bool bDamageByFists, bool bDamageBySlash, bool bDamageByChop, bool bDamageByLightBlunt, bool bDamageByHeavyBlunt, EWeaponType weaponType, class UObject* __WorldContext, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalFunctions.GlobalFunctions_C.CanWeaponApplyDamageType");
		
		UGlobalFunctions_C_CanWeaponApplyDamageType_Params params {};
		params.bDamageByFists = bDamageByFists;
		params.bDamageBySlash = bDamageBySlash;
		params.bDamageByChop = bDamageByChop;
		params.bDamageByLightBlunt = bDamageByLightBlunt;
		params.bDamageByHeavyBlunt = bDamageByHeavyBlunt;
		params.weaponType = weaponType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalFunctions.GlobalFunctions_C.GetRandomReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Reward                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalFunctions_C::GetRandomReward(class UObject* __WorldContext, unsigned char* Reward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalFunctions.GlobalFunctions_C.GetRandomReward");
		
		UGlobalFunctions_C_GetRandomReward_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reward != nullptr)
			*Reward = params.Reward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalFunctions.GlobalFunctions_C.ConvertIntToTimeFormat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Int                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UGlobalFunctions_C::ConvertIntToTimeFormat(int32_t Int, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalFunctions.GlobalFunctions_C.ConvertIntToTimeFormat");
		
		UGlobalFunctions_C_ConvertIntToTimeFormat_Params params {};
		params.Int = Int;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlobalFunctions.GlobalFunctions_C.CreateDynamicMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    IDs                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               SpecifyIDs                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UMaterialInstanceDynamic*>            DynamicMaterials                                           (Parm, OutParm)
	 */
	void UGlobalFunctions_C::CreateDynamicMaterials(class UPrimitiveComponent** PrimitiveComponent, TArray<int32_t>* IDs, bool SpecifyIDs, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* DynamicMaterials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalFunctions.GlobalFunctions_C.CreateDynamicMaterials");
		
		UGlobalFunctions_C_CreateDynamicMaterials_Params params {};
		params.SpecifyIDs = SpecifyIDs;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PrimitiveComponent != nullptr)
			*PrimitiveComponent = params.PrimitiveComponent;
		if (IDs != nullptr)
			*IDs = params.IDs;
		if (DynamicMaterials != nullptr)
			*DynamicMaterials = params.DynamicMaterials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GlobalFunctions.GlobalFunctions_C");
		return ptr;
	}

}


