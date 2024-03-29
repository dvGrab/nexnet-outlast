#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_FX_Footstep_PhyxMatTag_C : public UBlueprintFunctionLibrary
	{
	public:
		void tmpPlayLandingFX(class UObject* __WorldContext);
		void tmpPlayFootstepFX(bool* IsLeftFoot, class UObject* __WorldContext);
		void tmpPlayVFX(struct FVector* TestPosition, TMap<class UPhysicalMaterial*, class UNiagaraSystem*>* PhysicsMaterialsToSystems, class UNiagaraSystem* DefaultSystem, class UObject* __WorldContext);
		void Footstep_FX_Landing(class ARBPawn* Pawn, class UObject* __WorldContext, int32_t* Index);
		void Footstep_FX_Run(class ARBPawn* Pawn, const struct FFootstepData& FootstepData, class UObject* __WorldContext, int32_t* Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
