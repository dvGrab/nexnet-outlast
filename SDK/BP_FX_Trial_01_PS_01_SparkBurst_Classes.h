#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * BlueprintGeneratedClass BP_FX_Trial_01_PS_01_SparkBurst.BP_FX_Trial_01_PS_01_SparkBurst_C
	 * Size -> 0x0008 (FullSize[0x0458] - InheritedSize[0x0450])
	 */
	class ABP_FX_Trial_01_PS_01_SparkBurst_C : public ABP_FX_Parent_Triggerable_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0450(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void Event_OnTriggered();
		void ExecuteUbergraph_BP_FX_Trial_01_PS_01_SparkBurst(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
