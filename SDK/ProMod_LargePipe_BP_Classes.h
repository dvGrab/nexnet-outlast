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
	 * BlueprintGeneratedClass ProMod_LargePipe_BP.ProMod_LargePipe_BP_C
	 * Size -> 0x000C (FullSize[0x04D0] - InheritedSize[0x04C4])
	 */
	class AProMod_LargePipe_BP_C : public AProMod_Parent_C
	{
	public:
		unsigned char                                              UnknownData_LYAG[0x4];                                   // 0x04C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Colorize();
		void Connector();
		void Valve();
		void ApplyMaterial(class UMaterialInterface* Material);
		void ExecuteUbergraph_ProMod_LargePipe_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
