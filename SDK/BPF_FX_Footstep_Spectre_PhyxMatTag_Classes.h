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
	 * BlueprintGeneratedClass BPF_FX_Footstep_Spectre_PhyxMatTag.BPF_FX_Footstep_Spectre_PhyxMatTag_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_FX_Footstep_Spectre_PhyxMatTag_C : public UBlueprintFunctionLibrary
	{
	public:
		void Footstep_FX_Spectre(const struct FFootstepData& footstep_data, class ARBPawn* rb_pawn, const struct FVector& forwardVector, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
