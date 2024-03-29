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
	 * BlueprintGeneratedClass TestGateReleaseWagon.TestGateReleaseWagon_C
	 * Size -> 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
	 */
	class ATestGateReleaseWagon_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ASASWagon_NarrativeScreen_BP_C*                      SAS_NarrativeScreen__ExecuteUbergraph_TestGateReleaseWagon_RefProperty; // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void bpiBlurEntity();
		void CloseLight();
		void StopDrugSpray();
		void StartDrugSpray();
		void DrugStart();
		void ExecuteUbergraph_TestGateReleaseWagon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
