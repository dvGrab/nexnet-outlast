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
	 * 		Name   -> Function FXLibrary.FXLibrary_C.GetScapegoatLockedBulbData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FlashRatio                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                MeshMaterialData                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                LightColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Intensity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFXLibrary_C::GetScapegoatLockedBulbData(float FlashRatio, class UObject* __WorldContext, struct FLinearColor* MeshMaterialData, struct FLinearColor* LightColor, float* Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FXLibrary.FXLibrary_C.GetScapegoatLockedBulbData");
		
		UFXLibrary_C_GetScapegoatLockedBulbData_Params params {};
		params.FlashRatio = FlashRatio;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshMaterialData != nullptr)
			*MeshMaterialData = params.MeshMaterialData;
		if (LightColor != nullptr)
			*LightColor = params.LightColor;
		if (Intensity != nullptr)
			*Intensity = params.Intensity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FXLibrary.FXLibrary_C.GetScapegoatBulbData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FlashRatio                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                MeshMaterialColor                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                LightColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LightIntensity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFXLibrary_C::GetScapegoatBulbData(float FlashRatio, class UObject* __WorldContext, struct FLinearColor* MeshMaterialColor, struct FLinearColor* LightColor, float* LightIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FXLibrary.FXLibrary_C.GetScapegoatBulbData");
		
		UFXLibrary_C_GetScapegoatBulbData_Params params {};
		params.FlashRatio = FlashRatio;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshMaterialColor != nullptr)
			*MeshMaterialColor = params.MeshMaterialColor;
		if (LightColor != nullptr)
			*LightColor = params.LightColor;
		if (LightIntensity != nullptr)
			*LightIntensity = params.LightIntensity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FXLibrary.FXLibrary_C.TrySpawnBloodSplatterDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TraceForSurface                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OriginLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   Decal                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DecalSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RandomOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSpawned                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DecalLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     DecalNormal                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFXLibrary_C::TrySpawnBloodSplatterDecal(bool TraceForSurface, const struct FVector& OriginLocation, const struct FVector& Direction, class UMaterialInstanceConstant* Decal, float DecalSize, float RandomOffset, class UObject* __WorldContext, bool* bSpawned, struct FVector* DecalLocation, struct FVector* DecalNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FXLibrary.FXLibrary_C.TrySpawnBloodSplatterDecal");
		
		UFXLibrary_C_TrySpawnBloodSplatterDecal_Params params {};
		params.TraceForSurface = TraceForSurface;
		params.OriginLocation = OriginLocation;
		params.Direction = Direction;
		params.Decal = Decal;
		params.DecalSize = DecalSize;
		params.RandomOffset = RandomOffset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSpawned != nullptr)
			*bSpawned = params.bSpawned;
		if (DecalLocation != nullptr)
			*DecalLocation = params.DecalLocation;
		if (DecalNormal != nullptr)
			*DecalNormal = params.DecalNormal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FXLibrary.FXLibrary_C.Get Scapegoat Bulb Flash Ratio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ProgressLock                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutFlashRatio                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFXLibrary_C::Get_Scapegoat_Bulb_Flash_Ratio(float Value, bool ProgressLock, class UObject* __WorldContext, float* OutFlashRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FXLibrary.FXLibrary_C.Get Scapegoat Bulb Flash Ratio");
		
		UFXLibrary_C_Get_Scapegoat_Bulb_Flash_Ratio_Params params {};
		params.Value = Value;
		params.ProgressLock = ProgressLock;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFlashRatio != nullptr)
			*OutFlashRatio = params.OutFlashRatio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FXLibrary.FXLibrary_C.RefreshScapegoatLights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              progressRatio                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bProgressLocked                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UStaticMeshComponent*>                Meshes                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<class ULightComponent*>                     Lights                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFXLibrary_C::RefreshScapegoatLights(float progressRatio, int32_t CurrentLevel, bool bProgressLocked, TArray<class UStaticMeshComponent*>* Meshes, TArray<class ULightComponent*>* Lights, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FXLibrary.FXLibrary_C.RefreshScapegoatLights");
		
		UFXLibrary_C_RefreshScapegoatLights_Params params {};
		params.progressRatio = progressRatio;
		params.CurrentLevel = CurrentLevel;
		params.bProgressLocked = bProgressLocked;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Meshes != nullptr)
			*Meshes = params.Meshes;
		if (Lights != nullptr)
			*Lights = params.Lights;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FXLibrary.FXLibrary_C.GetPPFXManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APPManager_BP_C*                             Manager                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFXLibrary_C::GetPPFXManager(class UObject* __WorldContext, class APPManager_BP_C** Manager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FXLibrary.FXLibrary_C.GetPPFXManager");
		
		UFXLibrary_C_GetPPFXManager_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Manager != nullptr)
			*Manager = params.Manager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFXLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFXLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FXLibrary.FXLibrary_C");
		return ptr;
	}

}


